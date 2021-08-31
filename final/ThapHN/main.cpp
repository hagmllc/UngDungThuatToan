#include <bits/stdc++.h>

using namespace std;
void chuyen(int n, char a, char b){
    cout<<"Chuyen dia thu "<<n<<" tu dia "<<a<<" sang dia "<<b<<endl;
}

void ThapHN(int n, char a, char b, char c){
    if(n==1){
        chuyen(n,a,c);
    }else{
        ThapHN(n-1, a,c,b);
        chuyen(n, a,c);
        ThapHN(n-1, b, a,c);
    }
}
int main()
{
    int n;
    cout<<"Nhap n:"; cin>>n;
    ThapHN(n,'A', 'B', 'C');
    return 0;
}
