#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int tg=a;
    a=b;
    b=tg;
}
void viewCongif(int x[],int n)
{
    for(int i=1;i<=n;i++){
        cout<<x[i];
    }
    cout<<endl;
}

void nextConfig(int x[],int n,int i)
{
    int k=n;
    while(x[k]<x[i]){
        k--;
    }
    swap(x[k],x[i]);
    int j=n;i++;
    while(i<j){
        swap(x[i],x[j]);i++;j--;
    }
}
void listingConfig(int n){
    int i,x[n+1];
    for(int i=1;i<=n;i++){
        x[i]=i;
    }
    do{
        viewCongif(x,n);
        i=n-1;
        while(i>0&&x[i]>x[i+1]) i--;
        if(i>0){
            nextConfig(x,n,i);
        }
    }while(i>0);
}

int main()
{
    int x[6] = {4,6,2,3};
    int n;
    cin>>n;
    listingConfig(n);
    return 0;
}
