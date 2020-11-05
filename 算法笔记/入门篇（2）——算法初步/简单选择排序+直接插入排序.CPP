#include<cstdio>
#include<algorithm>
using namespace std;

const int n=10, maxn=110;

void selectSort(){
    int A[maxn] = {0, 2, 5, 8, 1, 4, 6, 3, 6, 7, 9};
    for(int i = 1; i <= n; i++){//Ô­ÎÄÊÇ[1, n]
        int k = i;
        for(int j = i; j <= n; j++){
            if(A[j] < A[k]){
                k=j;
            }
        }
        int temp = A[i];
        A[i] = A[k];
        A[k] = temp;
    }
    for(int i = 1; i <= n; i++){
        printf("%d ",A[i]);
    }
}

void insertSort(){
    int A[maxn] = {0, 2, 5, 8, 1, 4, 6, 3, 6, 7, 9};
    for(int i=2; i<=n; i++){
        int temp = A[i], j=i;
        while(j>1 && temp<A[j-1]){
            A[j]=A[j-1];
            j--;
        }
        A[j]=temp;
    }
    for(int i = 1; i <= n; i++){
    printf("%d ",A[i]);
    }
}

int main(){
    int A[maxn] = {0, 2, 5, 8, 1, 4, 6, 3, 6, 7, 9};

    selectSort();
    printf("\n");
    insertSort();

    sort(A+1, A+11);
    printf("\n");
    for(int i = 1; i <= n; i++){
    printf("%d ",A[i]);
    }

    return 0;
}
