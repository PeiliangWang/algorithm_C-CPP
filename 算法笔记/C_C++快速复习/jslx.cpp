#include<cstdio>
#include<cmath>
#define pi 3.14
const double pi_=3.1415;
const double PI=acos(-1.0);
int main(){
    /*/*
    int num1=1,num2=2;

    //ת���ַ�
    printf("%d\n\n%d",num1, num2);
    printf("%c\n",7);
    //���ų���
    double r=3;
    printf("%f\n",pi*r*r);
    printf("%f\n",pi_*r*r);//���Ƽ�
    //���������������ذ����
    //�������
    /*
    int hh,mm,ss;
    scanf("%d:%d:%d",&hh,&mm,&ss);
    printf("ʱ�� %02d:%02d:%02d\n",hh,mm,ss);
    */
    /*
    //����math����
    double db=-12.56;
    double db1=-2.1,db2=2.1;
    double db3=pow(2.0,3.0);
    double db4=sqrt(4.0);
    double db5=log(3);//loga(b)=log(b)/log(a)
    printf("%.2f\n",fabs(db));
    printf("%.0f %.0f\n",floor(db1), ceil(db1));
    printf("%.0f %.0f\n",floor(db2), ceil(db2));
    printf("%f\n",db3);
    printf("%f\n%f\n",db4,db5);

    printf("pi/3:%f\n",PI*60/180);
    double db6=round(3.55);
    printf("%f�������룺%d\n",3.55,(int)db6);
    */
    ////����/////
    //�������� �����������ִ�С��
    //int a[10] = {};//ȫ����ֵ
    //int a[10] = {0};//ȫ����ֵ
    //����
    int a[10];
    scanf("%d",&a[0]);
    for(int i=1;i<10;i++){
        a[i]=a[i-1]*2;
    }
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }

    return 0;

}

