#include<cstdio>

int main(){
    int a=1;
    printf("%d %d\n",&a,a);

    int b=2;
    int *p=&b;
    *p=3;
    printf("%d %d\n",*p,b);
    return 0;

}
