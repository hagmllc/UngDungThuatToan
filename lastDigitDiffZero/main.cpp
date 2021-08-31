#include <iostream>

using namespace std;
int NumOf0s(int X) {
    int num2 = 0, num5 = 0;
    // tinh bac luy thua cua 2
    while (X % 2 == 0) {
        num2++;
        X /= 2;
    }
    // tinh bac luy thua cua 5
    while (X % 5 == 0) {
        num5++;
        X /= 5;
    }
    return min(num2, num5);
}
int main()
{
    int X;
    cin>>X;
    cout<<NumOf0s(X);
    return 0;
}
