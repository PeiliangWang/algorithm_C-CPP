#include<cstdio>
#include<cstring>

void type_scanf(){
        int num=0;
    char ans[90][90];
    while(scanf("%s",ans[num])!=EOF){
        num++;
    }
    for(int i=num-1;i>=0;i--){
        printf("%s",ans[i]);
        if(i>0)printf(" ");
    }
}

void type_gets(){
    char str[90];
    gets(str);
    int len =strlen(str), r=0, h=0;
    char ans[90][90];
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            ans[r][h++]=str[i];
        }
        else{
            ans[r][h]='\0';
            r++;
            h=0;
        }
    }
    for(int i=r;i>=0;i--){//等于单词个数-1
        printf("%s",ans[i]);
        if(i>0) printf(" ");
    }

}
int main(){
    //type_scanf();
    type_gets();
    return 0;
}
