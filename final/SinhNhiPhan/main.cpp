#include <bits/stdc++.h>

using namespace std;
void output(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void Try(int *a, int n){
    ++a[n-1];
    for(int i=n-1; i>0; i--){
        if(a[i] > 1){
            a[i] = 0;
            a[i-1]++;
        }
    }
}
int main()
{
    int n;
    cout<<"Nhap n: "; cin>>n;
    int a[n] = {0};
    for(int i=0; i<pow(2,n); i++){
        output(a,n);
        Try(a,n);
    }
    return 0;
}
