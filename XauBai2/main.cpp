#include <iostream>

using namespace std;

string amendTheSentence(string s)
{
    string result;
    if (s[0] >= 'A' && s[0] <= 'Z')
        s[0] += 32;
    for (int i = 0; i <s.length(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            result = result + " " + char(s[i] + 32);
        else
            result = result + s[i];
    return result;
}

int main()
{
    string s = "helloWord";
    cout<<amendTheSentence(s);
    return 0;
}
