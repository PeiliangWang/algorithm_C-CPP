#include<cstdio>
#include<set>
using namespace std;

int main(){
    set<int>st;
    st.insert(3);
    st.insert(5);
    st.insert(1);
    st.insert(0);
    st.insert();
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf(" %d",*it);
    }
    return 0;
}

/*
set常用函数：
st.insert(x)    【时间复杂度O(log(N))】
st.find(value)   【时间复杂度O(log(N))】
st.erase(it)/st.erase(first.last)  【迭代器】O(1)
st.erase(value) 【时间复杂度O(log(N))】
st.size()       O(1)
st.clear()      O(N)

set用途：
自动去重并排序；


*/
