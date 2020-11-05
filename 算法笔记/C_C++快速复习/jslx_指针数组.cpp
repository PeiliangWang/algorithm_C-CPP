#include<cstdio>

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d", a+i);//a+i等效&a[i]
    }
    for(int i=0;i<5;i++){
        printf("%d", *(a+i));//a+i等效&a[i]
    }
    printf("\n");
    for(int* p=a;p<a+5;p++){
        printf("%d",*p);
    }
    return 0;
}
