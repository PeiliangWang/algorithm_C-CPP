#include<cstdio>

int main(){
    //TWO
    char str10[5][5];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            str10[i][j]=getchar();
        }
        getchar();//ÎüÊÕ»»ÐÐ·û
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            putchar(str10[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

