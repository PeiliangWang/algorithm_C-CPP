//nԪ��ټ�������Ϊ5��3��1/3.
#include<cstdio>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        //�����ռ䣺100*100
        for(int x = 0;x <= 100 ;x++){
            for(int y = 0;y <= 100-x;y++){//������ʽ��0~100*0~100
                int z = 100 - x - y;
                if(x * 5 * 3 + y * 3 * 3 + z <= n * 3){//����Ŀ�꣺��������Ǯ��n
                    printf("x=%d,y=%d,z=%d\n", x, y, z);
                }
            }
        }
    }
    return 0;
}
