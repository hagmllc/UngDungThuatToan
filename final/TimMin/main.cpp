#include <bits/stdc++.h>

using namespace std;

int timMin(int *a,int l, int r){
    int _min = 0;
    if(l==r){
        _min = a[l];
    }else{
        int mid = (l+r)/2;
        int t1 = timMin(a,l, mid);
        int t2 = timMin(a, mid+1, r);
        _min = t1>t2?t2:t1;
    }
    return _min;
}
int main()
{
    int n = 5;
    int a[5] = {7,2,4,8,5};
    int l = 0, r = n-1;

    cout << "Min: "<<timMin(a,l,r)<< endl;
    return 0;
}
