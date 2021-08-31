#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
int L[100];
int b[100];

int main()
{
    cout << "Nhap n: ";
    cin>>n;
    //Khởi tạo mảng a ngẫu nhiên gồm n phần tử
    for(int i=0;i<n;i++)
        a[i]= rand()%15 +1;

    //bước cơ sở quy hoach động
    L[0] = 1;
    int Lmax;//Lưu giá trị mã từ đầu đến phần tử thứ i
    //Quy hoạch động

    for(int i=1;i<n;i++){
        Lmax =0;
        int jmax = 0;
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                if(L[j]>Lmax){
                    Lmax = L[j];
                    jmax = j;
                }
            }
        }
        L[i] = Lmax +1;
        b[i] = jmax;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<L[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<"\t";
    }
    cout<<endl;
    int lengMax = 0;
    for(int i=0;i<n;i++){
        if(L[i]>lengMax)
            lengMax = L[i];
    }
    int MAX = 0;
    for(int i=0;i<n;i++){
        if(L[i]>L[MAX])
            MAX = i;
    }
    cout<<"do dai day con max la: "<<lengMax;
    return 0;
}
