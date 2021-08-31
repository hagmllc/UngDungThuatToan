#include <bits/stdc++.h>

using namespace std;

void output(int *a, int n){
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}

void Try(int *a, int n){
    for(int i=n-1; i>0; i--){
        if(a[i] > a[i-1]){
            for(int j=n-1; j>=i; j--){
                if(a[j] > a[i-1]){
                    swap(a[j], a[i-1]);
                    break;
                }
            }
            for(int j=n-1; j>=i; j--){
                if(a[i] > a[j])
                    swap(a[i], a[j]);
            }
            output(a,n);
            i=n;
        }
    }
}
int main()
{
    int n=6;
    int a[n];
    for(int i=0; i<n; i++){
        a[i] = i+1;
    }
    Try(a,n);
    return 0;
}
