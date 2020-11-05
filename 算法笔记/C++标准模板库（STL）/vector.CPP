#include<cstdio>
#include<vector>
using namespace std;
int main(){
    vector<int> vi;
    for(int i=1;i<=5;i++){
        vi.push_back(i);
    }
    vector<int>::iterator it=vi.begin();
    for(int i=0;i<5;i++){
        printf("%d",*(it+i));
    }
    printf("\n");
    for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
        printf("%d",*it);
    }
    return 0;

 }
 /*
访问方式：
下标；
迭代器。

vector常用函数：
vi.push_back()
vi.pop_back()
vi.size()
vi.clear()【时间复杂度O(N)】
vi.insert(it, x)【it为任一迭代器，时间复杂度为O(N)】
vi.erase(first,last)【删除[first,last)中元素,时间复杂度为O(N)】

vector常见用途：
1.存储数据
数组，变长数组；
输出数据个数不定的数据；
2.用邻接表存储图

 */

