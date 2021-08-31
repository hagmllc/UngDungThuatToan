#include <iostream>

using namespace std;

bool flag[5][6];
int a[5][6] = {
    {1,1,0,0,0,1},
    {1,0,0,0,0,0},
    {1,0,0,1,1,0},
    {0,1,1,0,0,1},
    {0,0,1,0,1,1}
};
int so_mien=0;
void loang(int i, int j)
{
    flag[i][j]=true;
    if (i>0 && (a[i-1][j]==a[i][j]) && (! flag[i-1][j]))
    loang(i-1, j); //Loang tiếp
    if (i<4 && (a[i+1][j]==a[i][j]) && (! flag[i+1][j]))
    loang(i+1, j);
    if (j>0 && (a[i][j-1]==a[i][j]) && (! flag[i][j-1]))
    loang(i, j-1);
    if (j<5 && (a[i][j+1]==a[i][j]) && (! flag[i][j+1]))
    loang(i, j+1);
}
void dem_so_mien_lien_thong(){
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(!flag[i][j]){
                so_mien++;
                loang(i,j);
            }
        }
    }
}
int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            flag[i][j] = false;
        }
        cout<<endl;
    }
    cout<<"-------------------------------------------"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    dem_so_mien_lien_thong();
    cout<<"So mien: "<<so_mien;
}
