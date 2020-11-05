#include<iostream>
using namespace std;
const int maxn = 100;

//函数声明
void swap (int &, int &);
void selectSort(int* , int );

//主函数
int main()
{
	int arr[maxn] = {0},N;
	cout<<"input tne size of arr(n<=100),and then input the element of arr one by one..."<<endl;
	cin>>N;
	for(int i = 0;i < N;i++)
    {
        cin>>arr[i];
    }
    int arr_copy[maxn];
    copy(begin(arr),end(arr),begin(arr_copy));
    selectSort(arr_copy, N);
    cout<<"element of arr:"<<endl;
    for(int i = 0;i < N;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"selectSort："<<endl;
        for(int i = 0;i < N;i++)
    {
        cout<<arr_copy[i]<<" ";
    }
	return 0;
}

/*----------------------------------------------------------
思路：
输入:          arr[maxn], n
输出：         sorted_arr，注意原数组是否保留，copy。

编写函数selectSort(int*p, int n)
{
#定义中间变量temp，
#开始遍历数组，找到最大的数存入temp
#放到合适位置
1@开辟一个新数组new_p,每找到一个存入new_p中，缺点，不清楚怎么return回去
2@在传入数组上操作，将temp(max)放到数组头部，同时删除原数据！！！，还得保证头部数据不被覆盖，因此产生算法swap。
2.1 编写函数void swap (int &l, int &r)，利用引用。特值判断:l=r => return ;然后三角形交换。
2.2 如何判断是否进行swap ：即当前目标值是否位于当前头部（每次遍历范围在缩减），小tip：只要将index_r初始化为index_l即可。
}
------------------------------------------------------------*/
void selectSort(int* p, int n)
{
	int temp, index_l, index_r;
	for (int i = 0; i < n; i++)
	{
		temp = p[i];
		index_l = i;
		index_r = index_l;//初始化为左指针，如果目标值在头部，则不会发生交换
		for (int j = i + 1; j < n; j++)
		{
			if (temp < p[j])
			{
				temp = p[j];
				index_r = j;
			}
		}
       swap(p[index_l], p[index_r]);
	}
}

//引用，swap
void swap (int &l, int &r)
{
    if(l == r)return;
    int temp;
    temp = l;
    l = r;
    r = temp;
}


