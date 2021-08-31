#include <iostream>
#include <math.h>

using namespace std;
bool arr[1000001];
void snt(int n){
    for (int i = 2; i <= n; i++)
        arr[i] = 1;
    arr[0] = arr[1] = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (arr[i])
        for (int j = 2 * i; j <= n; j += i)
            arr[j] = 0;
    }

}
int greatestCommonPrimeDivisor(int a, int b)
{
    snt(min(a, b));
    int d = 0;
    for (int i = min(a, b); i >= 2; i--)
        if (arr[i] && a % i == 0 && b % i == 0)
            return i;
    return -1;
}
int main()
{
    int n,a,b;
    cout<<"Nhap n: ";
    cin>>n;
    cout<<"Nhap a: ";
    cin>>a;
    cout<<"Nhap b: ";
    cin>>b;
    snt(n);
    cout<<greatestCommonPrimeDivisor(a,b);
    return 0;
}
