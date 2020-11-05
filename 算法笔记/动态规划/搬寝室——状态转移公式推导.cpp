#include<cstdio>
#include<algorithm>
using namespace std;

#define INF 0x7fffffff;
int weight_list[2001];
int dp[1001][2001];
int main(){
    int n, k;
    while(scanf("%d %d", &n, &k) != EOF){
        for(int i=1;i<=n;i++){
            scanf("%d",&weight_list[i]);
        }
        sort(weight_list+1, weight_list+1+n);
        for(int i=1;i<=n;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=k;i++){
            for(int j=2*i;j<=n;j++){
                if(j>2*i){
                    dp[i][j]=dp[i][j-1];
                }
                else{
                    dp[i][j]=INF;
                }
                if(dp[i][j]>dp[i-1][j-2]+(weight_list[j]-weight_list[j-1])*(weight_list[j]-weight_list[j-1])){
                    dp[i][j] = dp[i-1][j-2]+(weight_list[j]-weight_list[j-1])*(weight_list[j]-weight_list[j-1]);
                   }
            }
        }
        printf("%d", dp[k][n]);
    }
    return 0;
}
