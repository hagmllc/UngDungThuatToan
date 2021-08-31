#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cout<<"Nhap so hang: ";
    cin>>n;
    cout<<"Nhap so cot: ";
    cin>>m;
    cout<<"Nhap mang: "<<endl;
    int ma_tran[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Nhap a["<<i<<"]["<<j<<"]= ";
            cin>>ma_tran[i][j];
        }
        cout<<"\n";
    }
    cout<<"Ket qua: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<ma_tran[i][j]<<" ";
        }
        cout<<"\n";

    }


    return 0;
}
