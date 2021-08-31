#include <iostream>

using namespace std;
// Hàm in cấu hình
/*void Print(int *A, int N) {
    for(int i = 1; i <= N; ++i) cout << A[i] << " ";
    cout << endl;
}
// Giải thuật BackTracking
void Try(int *A, int i, int N, int K) {
    for(int j = A[i - 1] +1; j <= N - K + i; ++j) {
        A[i] = j;
        if(i == K) Print(A, K);
        else Try(A, i + 1, N, K);
    }
}

main()
{
    int N, K; cin >> N >> K;
    int A[N + 1] = {0};
    for(int i = K; i <= N; ++i) Try(A, 1, N, i);
    return 0;
}
*/
int n,k,*a;
void xuat()
{
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void Try(int i,int *a,int n,int k)
{
        for(int j=a[i-1]+1;i<=n-k+i;j++){
            a[i]=j;
            if(i==k)
                xuat();
            else{
                Try(i+1,a,n,k);
        }

    }

}
int main()
{
    int i;
    cout<<"Nhap n,k: ";
    cin>>n>>k;
    a = new int[n+1];
    Try(i+1,a,n,k);

    return 0;
}
