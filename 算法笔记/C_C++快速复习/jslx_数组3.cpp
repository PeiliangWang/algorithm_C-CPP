#include<cstdio>
#include<cstring>

int main(){
    int a[5]={1,2,3,4,5};
    //�������� memset����������ֵ��sizeof������������
    //����ֻʹ��menset����ֵ0��-1,ʹ����Ҫͷ�ļ�string.h
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

    ///�ַ�����--�������/////
    ////����::scanf getchar gets
    ////���::printf putchar puts

    printf("\n//�ַ�����--�������///\n");
    //ONE
    printf("\none\n");
    char strio[10];
    scanf("%s",strio);//���롰TAT TAT TAT��  �����TAT��
    printf("%s",strio);//ע��%s,��������ǵ�ַ
    printf("\ntwo\n");

    return 0;
}
