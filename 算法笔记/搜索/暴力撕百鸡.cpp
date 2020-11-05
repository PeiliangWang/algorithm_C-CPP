//n元买百鸡，单价为5、3、1/3.
#include<cstdio>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        //搜索空间：100*100
        for(int x = 0;x <= 100 ;x++){
            for(int y = 0;y <= 100-x;y++){//搜索方式：0~100*0~100
                int z = 100 - x - y;
                if(x * 5 * 3 + y * 3 * 3 + z <= n * 3){//查找目标：不超过总钱数n
                    printf("x=%d,y=%d,z=%d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}
