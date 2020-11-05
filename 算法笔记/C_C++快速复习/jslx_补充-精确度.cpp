#include<cstdio>
#include<math.h>
const double eps=1e-8;
const double Pi=acos(-1);

#define Equ(a,b) ((fabs((a)-(b))) < (eps))
#define More(a,b) (((a)-(b)) > (eps))
#define Less(a,b) (((a)-(b)) < (-eps))
#define MoreEqu(a,b) (((a)-(b)) > (-eps))
#define LessEqu(a,b) (((a)-(b)) < (eps))
int main(){
    double db1=4*asin(sqrt(2.0)/2);
    double db2=3*asin(sqrt(3.0)/2);
    if(db1==db2){
        printf("true");
    }
    else{
         printf("false");
    }
    printf("\n");
    if(Equ(db1,db2)){
        printf("true");
    }
    else{
         printf("false");
    }

    return 0;
}
