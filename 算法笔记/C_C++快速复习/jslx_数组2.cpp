#include<cstdio>

int bigarr[1000000];
int main(){
    //�������ݣ���Ҫ�м����temp
    int a = 1,b=2;
    int temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d\n",a,b);
    /////һά����/////
    //ð������
    //int arr[10]={2,4,1,6,5};
    int arr[10]={6,5,4,2,3,1};
    for(int i=1;i<=5;i++){//�������鳤��Ϊn�������n-1�ɱȽϣ�ÿ��ֻ��0������n-i-1,��˴�1��ʼ��ֻ�Ǽ������ܵ�4 ��
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
    ////��ά����//////
    /*�������� ���顾��һά��С�����ڶ�ά��С��}*/
    for(int i=0;i<1000000;i++){
        bigarr[i] = i;
    };
    printf("%d\n",bigarr[1234]);


    return 0;
}
