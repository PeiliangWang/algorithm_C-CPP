#include<cstdio>
const int P=8;
const int Q=2;

int main(){
    int y=0,product=1;//product会在循环中不断乘以P，得到1，P，P^2,P^3……
    int x;//输入数据
    scanf("%d",&x);
    while(x!=0){
        y=y+(x%10)*product;
        x=x/10;
        product = product*P;
    }
    printf("%d\n",y);
    int z[40],num=0;
    do{
        z[num++]=y%Q;
        y=y/Q;
    }while(y!=0);
    for(int i=0;i<num;i++){
        printf("%d",z[num-i-1]);
    }
    return 0;
}
