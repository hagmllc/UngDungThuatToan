#include <iostream>
#include <math.h>
using namespace std;

bool a[10000001];
void snt(int n){
    for (int i = 2; i <= n; i++)
        a[i]=1;
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(n); i++)
    if (a[i])
        for (int j = 2 * i; j <= n; j += i)
            a[j] = 0;
}
int primeSum(int n)
{
    int mod = 22082018;
    snt(n);
    int d = 0;
    for (int i = 2; i <= n; i++)
        if (a[i]) d = (d + i % mod) % mod;
    return d;
}
int main()
{
    int n;
    cin>>n;
    cout<<primeSum(n);
    return 0;
}
