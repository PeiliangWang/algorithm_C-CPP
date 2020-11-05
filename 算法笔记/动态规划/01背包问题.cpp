#include<cstdio>
#include<algorithm>
using namespace std;
const int maxV=1010;
const int maxM=110;
int v[maxM], c[maxM],dp[maxV];

int main(){
	int V, M;
	scanf("%d%d", &V, &M);
	for(int i=0;i<M;i++){
		scanf("%d%d", &v[i], &c[i]);

	}
	for(int i=0;i<V;i++){
		dp[i]=0;
	}
	for(int i=0;i<M;i++){
		for(int j=V;j>=v[i];j--){
			//×´Ì¬×ªÒÆ·½³Ì
			dp[j]=max(dp[j], dp[j-v[i]]+c[i]);
		}
	}
	int maxC=0;
	for(int i=0;i<=V;i++){
		if(dp[i]>maxC){
			maxC=dp[i];
		}
	}
	printf("%d\n",maxC);
	return 0;
}
