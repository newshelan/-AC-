#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    float b=0;
   if(a<=150){//�ж�С�ڵ���150
        b = a*0.4463;
    }else if(a>=151&&a<=400){//����150С�ڵ���400
        b += 150*0.4463;
        b += (a-150)*0.4663;
    }else{//����ǰ����һ�����Ǵ���400
        b += 150*0.4463;
        b += (400-150)*0.4663;
        b += (a-400)*0.5663;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<b;
}
