#include<cstdio>
#include<cstring>
const int maxn = 256;
//判断字符串是否为“回文串”
bool judge(char str[]){
    int len=strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
        return false;
        }

    }
    return true;
}
int main(){
    char str[maxn];
    while(gets(str)){
        bool flag = judge(str);
        if(flag){
            printf("YES");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}
