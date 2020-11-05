#include<cstdio>
#include<map>
using namespace std;

int main(){
    map<char, int>mp;
    //通过下标访问
    mp['c']=20;
    mp['c']=30;//20被覆盖
    printf("%d", mp['c']);//输出30
    //通过迭代器访问
    printf("\n");
    mp['w']=2;
    mp['p']=1;
    mp['l']=3;
    for(map<char, int>::iterator it = mp.begin(); it!=mp.end();it++){
        printf("%c %d\n",it -> first,it -> second);
        }
    //常用函数
    //mp.find()
    map<char, int>::iterator it_find=mp.find('l');
    printf("%c %d\n",it_find -> first, it_find -> second);
    //mp.erase(it)
    //1
    mp.erase(it_find);
    mp.erase('c');
    for(map<char, int>::iterator it = mp.begin(); it!=mp.end();it++){
    printf("%c %d\n",it -> first,it -> second);
    }
    //2
    map<char, int>::iterator it_find2=mp.find('w');
    mp.erase(it_find2, mp.end());
        for(map<char, int>::iterator it = mp.begin(); it!=mp.end();it++){
    printf("%c %d\n",it -> first,it -> second);
    }
    mp.clear();
    printf("%d", mp.size());
    return 0;
}
