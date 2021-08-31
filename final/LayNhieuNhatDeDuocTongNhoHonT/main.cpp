#include <bits/stdc++.h>

using namespace std;
void Sort(float *a, int n){
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}
int Count(float * x, float y, int n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(y >= x[i]){
            y -= x[i];
            dem++;
        }else{
            return dem;
        }
    }
}
int main()
{
    int n=6;
    float x[6] = {6.5, 4.3, 8.2, 3.1, 12.6, 1.2};
    float y = 14.3;
    Sort(x,n);
    for(int i=0; i<n; i++)
        cout<<x[i]<<" ";
    cout<<endl;
    int dem = Count(x,y,n);
    if(dem==0){
        cout<<"Cac so trong day deu lon hon "<<y<<endl;
    }else{
        cout<<"Can lay nhieu nhat: "<<dem<<endl;
    }

    return 0;
}
