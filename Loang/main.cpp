#include <iostream>

using namespace std;

int **a,**flag;

void loang(int i, int j) {
    flag[i][j] = true; //Loang tới Ô(i, j)
    if ((a[i-1][j]==a[i][j]) && (! flag[i-1][j]))
    loang(i-1, j); //Loang tiếp
    if ((a[i+1][j]==a[i][j]) && (! flag[i+1][j]))
    loang(i+1, j);
    if ((a[i][j-1]==a[i][j]) && (! flag[i][j-1]))
    loang(i, j-1);
    if ((a[i][j+1]==a[i][j]) && (! flag[i][j+1]))
    loang(i, j+1);
}

int main()
{

    return 0;
}
