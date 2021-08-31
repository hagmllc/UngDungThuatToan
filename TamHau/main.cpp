#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int a[20];
bool safety(int x,int y)
{
    for(int i=0;i<x;i++){
        if(a[i]== y || abs(i-x) == abs(a[i]-y)){
            return false;
        }
    }
    return true;
}
void ViewConfig(int n){
    //in ra 1 cau hinh -  1 phuong an dat hau
    for(int i=1;i<=n;i++)
    {
        cout<<" Hau "<<i<<" Cot "<<a[i];
    }
    cout<<endl;
}
void Try(int i,int n)
{
    for(int j=1;j<=n;j++)
    {
       if(safety(i,j)){
                a[i]=j;
            if(i==n) ViewConfig(n);
            Try(i+1,n);
        }
    }
}
int main()
{
    int n=8;
    Try(1,n);
    return 0;
}
