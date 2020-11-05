#include<cstring>
#include<cstdio>

int main(){
    char str[10];
    gets(str);
    int len = strlen(str);
    printf("%d",len);
    //strcmp(字符数组1，字字符数组2)
    //strcpy(字符数组1，字字符数组2)，2复制给1
    //strcat(字符数组1，字字符数组2),2拼接到1后面
    return 0;
}
