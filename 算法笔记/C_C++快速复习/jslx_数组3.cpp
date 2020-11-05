#include<cstdio>
#include<cstring>

int main(){
    int a[5]={1,2,3,4,5};
    //函数：： memset（数组名，值，sizeof（数组名））
    //建议只使用menset赋初值0或-1,使用需要头文件string.h
    //0
    memset(a,0,sizeof(a));
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");
    memset(a,-1,sizeof(a));
    for(int i=0;i<5;i++){
        printf("%d",a[i]);
    }
    printf("\n");


    char str[15]={'G','o','o','d',' ','j','o','b','!'};
    char str_[15]="Good job!";
    for(int i=0;i<9;i++){
        printf("%c",str[i]);
    }
    printf("\n");
        for(int i=0;i<9;i++){
        printf("%c",str_[i]);
    }

    ///字符数组--输入输出/////
    ////输入::scanf getchar gets
    ////输出::printf putchar puts

    printf("\n//字符数组--输入输出///\n");
    //ONE
    printf("\none\n");
    char strio[10];
    scanf("%s",strio);//输入“TAT TAT TAT”  输出“TAT”
    printf("%s",strio);//注意%s,输出后面是地址
    printf("\ntwo\n");

    return 0;
}
