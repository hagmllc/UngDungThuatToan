#include <bits/stdc++.h>

using namespace std;

void output(int *a, int k){
    for(int i=0; i<k; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void Try(int *a, int n, int k){
    for(int i=n-1; i>=0; i--){
        if(a[i] < n-k+i+1){
            ++a[i];
            for(int j=i+1; j<k; j++){
                a[j] = a[j-1] + 1;
            }
            output(a,k);
            i=k;
        }
    }
}
int main()
{
    int n = 6, k = 4;
    int a[k];
    for(int i=0; i<k; i++){
        a[i] = i+1;
    }
    Try(a,n,k);
    return 0;
}
