#include<cstdio>

int bigarr[1000000];
int main(){
    //交换数据，需要中间变量temp
    int a = 1,b=2;
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
    /////一维数组/////
    //冒泡排序
    //int arr[10]={2,4,1,6,5};
    int arr[10]={6,5,4,2,3,1};
    for(int i=1;i<=5;i++){//假设数组长度为n，则进行n-1躺比较，每次只从0遍历到n-i-1,因此从1开始，只是计数功能到4 。
        for(int j=0;j<6-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        for(int i=0;i<6;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    ////二维数组//////
    /*数据类型 数组【第一维大小】【第二维大小】}*/
    for(int i=0;i<1000000;i++){
        bigarr[i] = i;
    };
    printf("%d\n",bigarr[1234]);


    return 0;
}
