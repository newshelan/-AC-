#include<bits/stdc++.h>�ۺ�ͷ�ļ�
using namespace std;
int main(){
    double v=7,s,x,l=0;//v�ٶȣ�s,x������
    cin>>s>>x;
    while(l<s-x){//�ν�̽����
        l+=v;//·���ۼ�
        v*=0.98;//�ٶȼ���
    }
    if(v*0.98<=s+x-l)cout<<'y';
    else cout<<'n';
}
