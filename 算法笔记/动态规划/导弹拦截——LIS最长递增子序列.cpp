0#include<cstdio>

int max(int a, int b){
    return a>b ? a : b;
}

int daodan_list[26];
int dp[26];
int n;
int main(){
    while(scanf("%d", &n) !=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d", &daodan_list[i]);
        }
        for(int i=1;i<=n;i++){
            int tmax=1;
            for(int j=1;j<i;j++){
                if(daodan_list[j]>=daodan_list[i]){
                    tmax=max(tmax,dp[j]+1);
                }
            }
            dp[i]=tmax;
        }
        int ans=1;
        for(int i=1;i<=n;i++){
            ans=max(ans, dp[i]);
        }
        printf("%d", ans);
    }
    return 0;;
}


