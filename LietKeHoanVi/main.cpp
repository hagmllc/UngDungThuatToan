#include <iostream>

using namespace std;
int n,*x,*dd;
void xuat()
{
    for(int i=1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void Try(int k)
{
    for(int i=1;i<=n;i++){
        if(dd[i]==0){
            x[k]=i;
            if(k==n) xuat();
            else {
                dd[i]=1;
                Try(k+1);
                dd[i]=0;
            }
        }
    }
}
int main()
{
    cout<<"Nhap n: ";
    cin>>n;
    dd=new int[n+1];
    x=new int[n+1];
    for(int i=1;i<=n;i++)
    {
        dd[i]=0;
    }
    Try(1);
    return 0;
}
