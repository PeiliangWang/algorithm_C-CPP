#include<cstdio>

int main(){
    int row,col;//����
    char c;//�ַ�
    scanf("%d %c",&col,&c);
    if(col%2==0)row=col/2;
    else row=col/2+1;
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    for(int i=2;i<row;i++){
        printf("%c",c);//ÿ�еĵ�һ���ո�
        for(int j=0;j<col-2;j++){
            printf(" ");//��ӡcol-2���ո�
        }
        printf("%c\n",c);//ÿ�е����һ���ո�
    }
    for(int i=0;i<col;i++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
