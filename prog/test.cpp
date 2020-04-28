#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <fstream>
using namespace std;
ofstream out;
int main() {
    int new_prcs;
    int st, pid;
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
		waitpid(new_prcs, &st, 0);
        }
        else
        {
	    out.open("buff");
            for (int j=0; j<3; j++)
            {
                out << vkt[j] <<  endl;
            }
	    for (int j=0; j<3; j++)
	    {
		out << mtr[i][j] << endl;
	    }
	    out.close();
            execl("vek","buff",NULL);
            exit(0);
        }
    }
    sleep(1);
}

