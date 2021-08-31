#include <iostream>

using namespace std;

int searchMax(int *x, int left,int right)
{
    if(left==right) return x[left];
    else if(left==right-1){
        if(x[left]>x[right]) return x[left];
        else return x[right];
    }
    else{
        int mid = (left+right)/2;
        int maxL = searchMax(x,left,mid);
        int maxR = searchMax(x,mid+1,right);
        if(maxL>maxR) return maxL;
        else return maxR;
    }
}

int main()
{
    int n,a[100];
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    int l=0,r=n-1;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]= ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Max cua mang la: ";
    cout<<searchMax(a,l,r);

    return 0;
}
