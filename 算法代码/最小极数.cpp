#include<iostream>
using namespace std;
struct light
{
    double leftlen;
    double rightlen;
    double coord;
};
int main()
{
    int n=0;//�Ƶ�����
    cin>>n;
    double interval;//��֮��ľ���
    cin>>interval;
    double coverlen[n];//ÿ�ŵ��ݸ��ǵ��ܳ���
    light l[n];
    int ans[n];
    for(int i=0;i<n;i++)
        cin>>coverlen[i];
    for(int i=0;i<n;i++)
    {
        ans[i]=0;//��ʼ��
        if(i==0)//��һ�ŵ���
        {
            l[i].leftlen=0;
            l[i].rightlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }
        else if(i==n-1)//���һ�ŵ���
        {
            l[i].rightlen=0;
            l[i].leftlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }
        else
        {
            l[i].leftlen=l[i].rightlen=coverlen[i]/2;
            l[i].coord=i*interval;
        }

    }
    ans[0]=1;//Ĭ�ϵ�һ�ŵ��ݴ�,�򿪸�ֵ1,�رո�ֵ-1
    for(int i=0;i<n;i++)//�ӵڶ��ŵ��ݿ�ʼ
    {
        //�������ǰ���ݵ���������ʼλ�úͽ���λ��
        double s=l[i].coord-l[i].leftlen;//��ʼλ��
        double en=l[i].coord+l[i].rightlen;//����λ��
        double co=l[i].coord;//��������
        //ͳ���ڵ�ǰ���ݵ��������Ƿ�Χ��û�е��ݣ��е��ݵĻ��͹ر������ڵĵ���
        for(int j=0;j<n;j++)
        {
            if(l[j].coord>s&&l[j].coord<co)//�õ�������������,�رոõ���
            {
                ans[j]=-1;
            }
            else if(l[j].coord>co&&l[j].coord<en)//�õ������������ڣ��رոõ���
            {
                ans[j]=-1;
            }
        }
        //cout<<l[i].leftlen<<","<<l[i].coord<<","<<l[i].rightlen<<endl;
    }

}
