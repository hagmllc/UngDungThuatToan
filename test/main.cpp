#include <iostream>

using namespace std;

int main()
{
    int matrix[8][8] = {{9, 9, 9, 9, 9, 8, 8, 8},
                        (9, 9, 8, 8, 8, 8, 8, 1),
                        (9, 9, 9, 8, 8, 8, 1, 1),
                        (7, 7, 8, 8, 8, 2, 1, 1),
                        (7, 7, 8, 8, 2, 1, 1, 1),
                        (7, 7, 2, 2, 2, 1, 1, 1),
                        (7, 2, 2, 1, 1, 1, 1, 1),
                        (7, 1, 1, 1, 1, 1, 1, 1)
                        };
    int temp1[8][8];
    int temp2[8][8];
    int Hx = {(-1, 0, 1),
              (-1, 0, 1),
              (-1, 0, 1)};
    int Hy = {(-1, -1, -1),
              (0, 0, 0),
              (1, 1, 1)};
       int tong = 0;
    for(int i=0; i < 8; i++){
        for(int j=0; j < 8; j++){
            for(int q=0; q < 2; q++)
                for(int p = 0; p < 2; p++ ){
                tong+=matrix[q+i][p+j]*Hx[q][p];
            }
            temp1[i][j] = tong;
            tong = 0;
        }
    }
    for(int i=0; i < 8; i++){
        for(int j=0; j < 8; j++){
            for(int q=0; q < 2; q++)
                for(int p = 0; p < 2; p++ ){
                tong+=matrix[q+i][p+j]*Hy[q][p];
            }
            temp2[i][j] = tong;
            tong = 0;
        }
    }
    for(int i=0 ; i < 8;i++)
    for(int j=0; j < 8; j++){

    }
    return 0;
}
