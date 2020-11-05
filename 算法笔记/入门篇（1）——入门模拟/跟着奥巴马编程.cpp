#include<cstdio>

int main(){
    int row,col;//行列
    char c;//字符
    scanf("%d %c",&col,&c);
    if(col%2==0)row=col/2;
    else row=col/2+1;
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    for(int i=2;i<row;i++){
        printf("%c",c);//每行的第一个空格
        for(int j=0;j<col-2;j++){
            printf(" ");//打印col-2个空格
        }
        printf("%c\n",c);//每行的最后一个空格
    }
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
