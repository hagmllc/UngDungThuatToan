#include <iostream>

using namespace std;

void quickSort(int x[],int left,int right)
{
    if(left<right){
        int k=(left+right)/2,t=x[k];
        int i=left,j=right;
        do{
            while(x[i]<t){
                i++;
            }
            while(x[j]>t){
                j--;
            }
            if(i<=j){
                swap(x[i],x[j]);
                i++;j--;
            }
        }while(i<=j);
        quickSort(x,left,j);
        quickSort(x,i,right);
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
    quickSort(a,l,r);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
