#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char p=0;//�ŷ���
    int cnt=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9') cnt++;//��¼��һ��������
        else    //�������ţ���¼������
        {
            p=s[i];
            break;
        }
    }
    int x=cnt;//���µ�һ����ĩ��һ����λ�ã�Ҳ���Ƿ��ŵ�λ�ã�����Ƿ�����С����Ҫ��
    cnt--;
    while(s[cnt]=='0'&&cnt>0) cnt--;//ȥ������ǰ��0��
    for(int i=cnt;i>=0;i--)//�����һ����
       cout<<s[i];
    if(p==0) return 0;//�޷���return 0
    else
      if(p=='%') {cout<<p;return 0;}
      else cout<<p;//��������
    int m=s.size()-1;
    while(s[x+1]=='0'&&x<m-1) x++;//ȥ��ĩβ0
    while(s[m]=='0'&&m>x+1) m--; //ȥ������ǰ��0
    for(int i=m;i>x;i--)//����ڶ�����
        cout<<s[i];
    return 0;
}
