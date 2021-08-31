#include <bits/stdc++.h>

using namespace std;

int Count(int *a, int n){
    a[0] = 1;
    for(int i=1; i<=n; i++)
        a[i] = 0;
    for(int i=1; i<=n; i++)
        for(int j=i; j<=n; j++)
            a[j] = a[j] + a[j-i];
    return a[n];
}
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    cout << "So cach phan tich: "<<Count(a,n)<< endl;
    return 0;
}
