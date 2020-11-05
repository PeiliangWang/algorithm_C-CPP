#include<cstdio>
#define OFFSET 2000//偏差
int dp[101][4010];//保存状态
int ganju_list[101];//保存柑橘重量
#define INF 0x7fffffff//无穷
int main(){
    int T;
    int cas = 0;
    scanf("%d", &T);
    while(T-- != 0){
        int n;
        scanf("%d", &n);
        bool HAVEZero = false;
        int cnt = 0;//计数器，记录多少个重量非零的柑橘
        for(int i = 1;i <= n;i++){
            scanf("%d", &ganju_list[++cnt]);//重量为零的柑橘被覆盖
            if(ganju_list[cnt] == 0){
                cnt--;
                HAVEZero = true;
            }
        }
        n = cnt;//除去重量为零的柑橘后，数量
        for(int i = -2000;i <= 2000;i++){
            dp[0][i+OFFSET] = -INF;
        }
        dp[0][0+OFFSET] = 0;
        for(int i = 1;i <= n;i++){
            for(int j = -2000;j <= 2000;j++){
                int tmp1 = -INF,tmp2 = -INF;
                if(j + ganju_list[i] <= 2000 && dp[i - 1][j + ganju_list[i] + OFFSET] != -INF){
                    tmp1 = dp[i-1][j + ganju_list[i] + OFFSET] + ganju_list[i];
                }
                if(j - ganju_list[i] >= -2000 && dp[i - 1][j - ganju_list[i] + OFFSET] != -INF){
                    tmp2 = dp[i - 1][j - ganju_list[i] + OFFSET] + ganju_list[i];
                }
                if(tmp1 < tmp2){
                    tmp1 = tmp2;
                }
                if(tmp1 < dp[i - 1][j + OFFSET]){
                    tmp1 = dp[i - 1][j + OFFSET];
                }
                dp[i][j + OFFSET] = tmp1;
            }
        }
        printf("Case %d:", ++cas);
        if(dp[n][0+OFFSET] == 0){
            puts( HAVEZero == true ? "0" : "-1");
        }
        else{
            printf("%d\n", dp[n][0+OFFSET] / 2);
        }
    }
    return 0;
}
