#include<iostream>
#include<vector>
using namespace std;
vector<int>par;
vector<int>con;
string s;
void get_num(int index)
{
    int tmp=0,mul=1;
    if(s[index]>='a'&&s[index]<='z')//δ֪����ϵ��Ϊ1�����
    {
        tmp=1;
        par.push_back(tmp);
        return;
    }
    for(int i=index+1;;i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]=='+'||s[i]=='-'||s[i]=='=')//˵��ϵ���Ѿ���ȡ���
        {
            par.push_back(tmp);
            return;
        }
        else if(s[i]>=0&&s[i]<=9)
        {
            tmp=s[i]+tmp*mul;
            tmp*=10;
        }
    }
}
int main()
{
    getline(cin,s);
    int tmp=0,mul=10;
    for(int i=0;i<s.size();i++)
    {
        if(i==0)//��һ�������Ǹ��������
        {
            if(s[i]=='-')
            {
                tmp=tmp*mul+(s[i]-'0');
            }
        }
        else
    }
}
