#include <iostream>

using namespace std;

void Swap(int &x,int &y)
{
    int tg;
    tg=x;
    x=y;
    y=tg;
}
void khoitao(int a[],int n){
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
}
void incauhinh(int a[],int n){
    for(int i=1;i<=n;i++)
        cout<<a[i];
        cout<<endl;
}
void saptang(int a[],int n,int k)
{
    for(int i=k;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            Swap(a[i],a[j]);
        }
    }
}
int main()
{
    int a[100];
    int n;
    cout<<"Nhap n: "<<endl;
    cin>>n;
    khoitao(a,n);
    incauhinh(a,n);

    while(true)
    {
        int i;
        for(i=n;i>0;i--)
        {
            if(i==1)
                return 0;
            if(a[i-1]<a[i])
                break;
        }
        for(int j = n;j>i;j--)
        {
            if(a[j]>a[i-1])
            {
                Swap(a[j],a[i-1]);
                saptang(a,n,i);
                incauhinh(a,n);
                break;
            }
        }
    }
    return 0;
}
