#include <bits/stdc++.h>

using namespace std;

int Count(const char *s, char ch, int l, int r){
    int mid = (l+r)/2;
    if(l==r){
        if(s[l] == ch)
            return 1;
        return 0;
    }else{
        return Count(s,ch,l,mid) + Count(s,ch,mid+1, r);
    }
}

int main()
{
    char * s = "badbadbglb";
    char ch = 'a';
    int l=0, r = strlen(s)-1;
    int sum = Count(s,ch,l,r);
    if(sum==0){
        cout<<"Khong tim thay"<<endl;
    }else{
        cout<<sum<<endl;
    }
    return 0;
}
