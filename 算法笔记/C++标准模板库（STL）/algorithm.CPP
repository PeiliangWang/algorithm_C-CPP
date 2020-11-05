#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}
int main(){
    int x =  1, y = 2;
    //max() min()
    printf("%d %d\n", max(x, y), min(x, y));
    //swap()
    swap(x,y);
    printf("x=%d y=%d\n", x, y);
    int a[10]={10, 12, 13, 14, 15};
    string str = "abcdefghijk";
    //reverse()
    reverse(a,a+3);
    reverse(str.begin()+2, str.begin()+6);
    for(int i=0;i<5;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i=0;i<str.length();i++){
        printf("%c",str[i]);
    }
    //next_permutation()
    printf("\n");
    int b[10]={1, 2, 3};
    do{
        printf("%d%d%d\n", b[0], b[1], b[2]);
    }while(next_permutation(b, b+3));
    //fill()
    fill(b,b+3, 6);
    for(int i=0;i<3;i++){
        printf("%d", b[i]);
    }
    printf("\n");
    //sort()
    int c[10]={5,3,6,7,2};
    sort(c, c+5, cmp);
    for(int i=0;i<5;i++){
        printf("%d ", c[i]);
    }
    printf("\n");
    //lower_bound() upper_bound()
    int d[10]={1, 2, 2, 3, 3, 3, 5, 5, 5, 5};
    int X = 2;
    printf("%d, %d", lower_bound(d, d + 10, X) - d, upper_bound(d, d + 10, X) - d);



    return 0;
}
