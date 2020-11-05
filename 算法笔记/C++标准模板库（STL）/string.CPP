#include<cstdio>
#include<string>//注意不是strin.h
#include<iostream>
using namespace std;

int main(){
    string str="abcd";
    for(int i=0;i<str.length();i++){
        printf(" %c",str[i]);
    }
    printf("\n");
    printf("%s",str.c_str());
    printf("\n");
    for(string::iterator it=str.begin();it!=str.end();it++){
        printf("%c",*it);
    }
    string str1;
    cin>>str1;
    cout<<str1;

    return 0;
}
/*
string常用函数：
operator+=  【字符串直接加，拼接】
compare operator    【== != < <= > >=】
str.length()/str.size()
str.insert(pos.string)/str.insert(it,str2.begin(),str2.end())
str.erase(it)/str.erase(first,last)
str.clear()
str.substr(pos,len)
string::npos    【-1/4294967295】
str.find(str2,pos)
str.replace(pos,str2)
*/

