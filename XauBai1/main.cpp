#include <bits/stdc++.h>

using namespace std;

bool checkStrongPassword(std::string password){
    if(password.length()<6)
        return false;
    string p = "!@#$%^&*()-+";
    string s = password;
    bool ktr1 = false;
    bool ktr2 = false;
    bool ktr3 = false;
    bool ktr4 = false;
    for(int i=0;i<password.length();i++){
        if(s[i]>=65 && s[i]<=90)
            ktr1 = true;
        if(s[i]>=97 && s[i]<=122)
            ktr2 = true;
        if(s[i]>=48 && s[i]<=57)
            ktr4 = true;
        if(p.find(s[i]!= -1))
            ktr3 = true;
    }
    return ktr1 && ktr2 && ktr3 && ktr4;
}

int main()
{
    string password = "abc1Abbbb!1";
    cout<<checkStrongPassword(password);
    return 0;
}

