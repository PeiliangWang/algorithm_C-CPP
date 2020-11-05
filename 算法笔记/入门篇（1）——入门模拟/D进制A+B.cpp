#include<cstdio>
int main(){
    int A,B,D;
    scanf("%d %d %d",&A,&B,&D);
    int y=A+B;
    int z[40],num=0;
    do{
        z[num++]=y%D;
        y/=D;
    }while(y!=0);
    for(int i=0;i<num;i++){
        printf("%d",z[num-i-1]);
    }
    return 0;
}
