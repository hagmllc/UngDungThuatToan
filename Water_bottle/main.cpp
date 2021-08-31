#include <iostream>

using namespace std;

int water_bottle(int *C,int m,int n,int *S)
{
    for(int i=0;i<m;i++)
        S[i]=0;
    int i  = m-1;
    int dem = 0;
    while(n>0 && i>=0){
        if(n-C[i]>=0){
            S[i]++;
            dem++;
            n = n-C[i];
            i--;
        }
        else break;
    }
    return dem;
}
int main()
{
    int C[5]  =  {100,25,10,5,1}, m=5,n=15,S[5];
    int dem = water_bottle(C,m,n,S);
    cout<<"dem: "<<dem;
    for(int i=0; i < m; i++)
        cout << "\t" << C[i] << ":" << S[i] << endl;
    return 0;
}
