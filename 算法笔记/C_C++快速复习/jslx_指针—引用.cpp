#include<cstdio>

void change(int&x){
    x=1;
}
void swap1(int* &p1,int* &p2){
    int *temp =p1;
    p1=p2;
    p2=temp;
}
int main(){
    int a = 10;
    change(a);
    printf("%d\n",a);
    int c1=2,c2=3;
    int *p1=&c1,*p2=&c2;

    swap1(p1,p2);
    printf("c1=%d,c2=%d",*p1,*p2);

    return 0;
}
