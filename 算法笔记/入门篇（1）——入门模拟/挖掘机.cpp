#include<cstdio>
const int maxn=100010;
int main(){
    int school[maxn]={0};
    int N,schID,score;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d%d",&schID,&score);
        school[schID]+=score;
    }
    int k=1,MAX=-1;
    for(int i=1;i<N+1;i++){
        if(school[i]>MAX)N{
            k=i;
            MAX=school[i];
        }
    }
    printf("%d %d\n",k,MAX);
    return 0;
}

