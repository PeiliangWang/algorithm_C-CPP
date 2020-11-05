#include<cstdio>
#include<algorithm>
using namespace std;

int cost[101];//ÿ��ҩʱ�仨�ѣ���Ӧ���������v�����
int value[101];//ÿ��ҩ�ļ�ֵ����Ӧ���������c��ֵ��
int dp[101][1010];

int main(){
    int T, M;
    while(scanf("%d %d", &T, &M) != EOF){
        for(int i = 1;i <= M;i++){
            scanf("%d %d", &cost[i], &value[i]);
        }
        for(int i = 1;i < T;i++){
            dp[0][i] = 0;
        }
        for(int i = 1;i <= M;i++){
            for(int j = cost[i]; j <= T;j++){
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j -cost[i]] + value[i]);
            }
        }
        printf("%d\n", dp[M][T]);
    }
    return 0;
}
//ä�򣬱���ͨ����
// 2020/0830/11:11
