#include <bits/stdc++.h>

using namespace std;

void Sort(int *a, int n){
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i] < a[j])
                swap(a[i], a[j]);
}
int Count(int *a, int n, int t){
    int dem=1;
    for(int i=0; i<n; i++){
        if(t >= a[i]){
            t -= a[i];
            dem++;
        }else{
            return dem;
        }
    }
    if(t>0){
        return -1;
    }

}

int main()
{
    int n = 5;
    int a[5] = {6,8,5,2,4};
    int t = 16;
    Sort(a,n);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    int tong = Count(a,n,t);
    if(tong==-1){
        cout<<"Tong cac phan tu khong du lon hon "<<t<<endl;
    }else{
        cout<<"Can lay it nhat "<<tong<<endl;
    }
    return 0;
}
