#include<cstdio>

int main(){
    //����::sscanf   sprintf
    int n;
    char str1[100] = "123";//"123asdsd"��Ч��"123"
    sscanf(str1,"%d",&n);
    printf("n=%d\n",n);

    int m=234;
    char str2[100];
    sprintf(str2,"%d",m);
    printf("str2=%s\n",str2);
    return 0;
}
