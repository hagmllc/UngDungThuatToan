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
        if(n>=C[i]){
            S[i]++;
        }
        n= n -C[i];
        i++;
    }
    if(n>0) return false;
    else return true;
}
int main()
{
    int C[5]= {2,3,4,5,6},m=5,n=10,mina=0,S[5];
    if(Ktr(C,m,n,S)==true){
        cout<<"Result: "<<endl;
        for(int i=0;i<m;i++){
            cout<<"\tChai "<<C[i]<<" Chua: "<<S[i]<<" chai"<<endl;
            mina+=S[i];
        }
        cout<<"So chai da chua: "<<mina<<endl;
    }
    else{
        cout<<"Khoong tim thay phuong an nao";
    }
    return 0;
}
