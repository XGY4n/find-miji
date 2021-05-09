#include<bits/stdc++.h>
using namespace std;
void paixu(int k,int JH[])//集合排列组合输出
{
/*[]为所求集合，k为元素的个数*/
    unsigned int code = 0;
    int i;
    for(code=0;code<(1<<k);code++)
    {
        cout<<"{";
        for(i=0;i<(1<<k);i++)
        {
            if(code&(1<<i))/*输出code第i位为1的对应元素a[i]*/
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
    int jh[11451],JH[11451],mark[11451]={0};//标记数组
    cout<<"集合名字"<<endl;
    cin>>s;
    cout<<"输入除了集合长度"<<endl;
    cin>>a;
    cout<<"输入集合的元素"<<endl;
    for(int i=0;i<a;i++)
    {
        cin>>jh[i];
    }  
    for(int i=0;i<a;i++)
    {
        f=jh[i];
        for(int j=i+1;j<a;j++)//通过标记数组将重复的数去除
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
            JH[k]=jh[i];//通过标记数组将数组处理
            k++;
        }
    }
    cout<<"P("<<s<<")={空,";
    paixu(k,JH);//处理好的数组传进模块函数
    cout<<"}"<<endl;
    return 0;
}
