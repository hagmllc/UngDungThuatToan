#include <iostream>

using namespace std;

bool Ktr(int *C,int m,int n,int *S)
{
    for(int i=0;i<m;i++)
    {
        S[i] = 0;
    }
    int i=0;
    while(n>0 && i>=0){
        while(n-C[i]>=0){
            S[i]++;
            n= n -C[i];
        }
        i++;
    }
    if(n>0) return false;
    else return true;
}
int main()
{
    int C[5]= {100,25,10,5,1},m=5,n=40,mina=0,S[5];
    if(Ktr(C,m,n,S)==true){
        cout<<"Result: "<<endl;
        for(int i=0;i<m;i++){
            cout<<"\tDong "<<C[i]<<" : "<<S[i]<<" dong"<<endl;
            mina+=S[i];
        }
        cout<<"So to it nhat: "<<mina<<endl;
    }
    else{
        cout<<"Khong tim thay phuong an nao";
    }
    return 0;
}
