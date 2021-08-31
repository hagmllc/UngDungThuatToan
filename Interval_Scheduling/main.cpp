#include <iostream>

using namespace std;

void Interval_Scheduling(int n,float *s,float *f,float *schedule)
{
    float last_finish = 0;
    for(int i=0;i<n;i++){schedule[i]=0;}
    for(int i=0;i<n;i++){
        if(s[i]>=last_finish){
            schedule[i]=1;
            last_finish = f[i];
        }
    }
}

int main()
{
    float s[5] = {8,9,10,11,12};
    float f[5] = {8.5,11,11.5,12.5,13};
    float schedule[5];
    int n=5;
    Interval_Scheduling(n,s,f,schedule);
    for(int i=0;i<n;i++){
        if(schedule[i]==1){
            cout<<i+1<<" ";
        }
    }
    return 0;
}
