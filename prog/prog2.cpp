#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
using namespace std;
int main()
{
    int new_prcs;
    int mtr[3][3] =
    {
        {2,4,0},
        {-2,1,3},
        {-1,0,1}
    };
    int vkt[3] = {1,2,-1};
    int c=0, sum=0;
    cout<<"vkt_stlb="<<endl;
    for (int i=0; i<3; i++)
    {
        new_prcs = fork();
        if (new_prcs>0)
        {
            int st;
            waitpid (new_prcs, &st, 0);
        }
        else
        {
            for (int j=0; j<3; j++)
            {
                c = mtr[i][j] * vkt[j];
                sum = sum+c;
            }
            cout<<sum<<endl;
            sum=0;
            exit(0);
        }
    }
}
