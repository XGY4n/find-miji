#include<bits/stdc++.h>
using namespace std;
void paixu(int k,int JH[])//��������������
{
/*[]Ϊ���󼯺ϣ�kΪԪ�صĸ���*/
    unsigned int code = 0;
    int i;
    for(code=0;code<(1<<k);code++)
    {
        cout<<"{";
        for(i=0;i<(1<<k);i++)
        {
            if(code&(1<<i))/*���code��iλΪ1�Ķ�ӦԪ��a[i]*/
            {
                cout<<JH[i]<<' ';
            }
        }
            cout<<"}";
        }
}

int main()
{
    int a,f,k=0;
    char s;
    int jh[11451],JH[11451],mark[11451]={0};//�������
    cout<<"��������"<<endl;
    cin>>s;
    cout<<"������˼��ϳ���"<<endl;
    cin>>a;
    cout<<"���뼯�ϵ�Ԫ��"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>jh[i];
    }  
    for(int i=0;i<a;i++)
    {
        f=jh[i];
        for(int j=i+1;j<a;j++)//ͨ��������齫�ظ�����ȥ��
        {
            
            if(f==jh[j])
            {
                mark[j]=1;
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        if(mark[i]==0)
        {
            JH[k]=jh[i];//ͨ��������齫���鴦��
            k++;
        }
    }
    cout<<"P("<<s<<")={��,";
    paixu(k,JH);//����õ����鴫��ģ�麯��
    cout<<"}"<<endl;
    return 0;
}
