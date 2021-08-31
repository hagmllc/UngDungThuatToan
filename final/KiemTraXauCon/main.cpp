#include <bits/stdc++.h>

using namespace std;

int indexOf(const char * t, const char *p){
    int n = strlen(t);
    int m = strlen(p);
    for(int i=0; i<n; i++){
        int j=0;
        while(j<m && t[j+i] == p[j]){
            j++;
        }
        if(j==m){
            return i;
        }
    }
    return -1;
}

int main()
{
    char * t = "cong hoa xa hoi chu nghia viet nam";
    char * p = "hog";
    int index = indexOf(t,p);
    if(index == -1){
        cout<<"Khong tim thay"<<endl;
    }else{
        cout<<"Tim thay o vi tri "<<index<<endl;
    }
    return 0;
}
