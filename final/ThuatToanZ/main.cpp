#include <bits/stdc++.h>

using namespace std;


void z_algo(const char *s,int *z){
    int n=strlen(s),l=0,r=0;
    for(int i=1;i<n;i++){
        if(i>r){
            l=r=i;
            while(r<n && s[r-l]==s[r])
                r++;
            z[i]=r-l;
            r--;
        }
        else if(z[i-l]<r-i+1){
            z[i]=z[i-l];
        }
        else{
            l=i;
            while(r<n && s[r-l]==s[r])
                r++;
            z[i]=r-l;
            r--;
        }
    }
}
int main()
{
    char *s="viet$viet nam o viet nam chu khong phải viet nam thi o mo";
    int n=strlen(s);
    int z[n];
    z_algo(s,z);
    int dem=0;
    for(int i=0;i<n;++i){
        if(z[i]==4)
        {
             dem++;
        }
    }
    cout<<dem;
    return 0;
}
