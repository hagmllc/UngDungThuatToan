#include <iostream>

using namespace std;
int n,*x;
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
    for(int i=0;i<=1;i++){
        x[k]=i;
        if(k==n)
            xuat();
        else{
            Try(k+1);
        }
    }
}
int main()
{
    cout<<"Nhap n: ";
    cin>>n;
    x = new int[n+1];
    Try(0);
    return 0;
}
