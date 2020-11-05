#include<cstdio>

void change(int a[], int b[][5]){
    a[0]=2;
    a[1]=1;
    a[2]=3;
    b[0][0]=5;
}
int main(){
    int a[3]={0};
    int b[5][5]={0};
    change(a,b);
    for(int i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
    return 0;

}
//º¯ÊıÇ¶Ì×µ÷ÓÃ

