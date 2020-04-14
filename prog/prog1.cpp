#include <iostream>
#include <unistd.h>

using namespace std;
int main()
{
    int mas1[3]= {1,2,3};
    int mas2[3]= {2,1,-2};
    int rez[3];
    int i=0, j=0, k=0;
    i = mas1[1] * mas2[2] - mas1[2] * mas2[1];
    j = mas1[2] * mas2[0] - mas1[0] * mas2[2];
    k = mas1[0] * mas2[1] - mas1[1] * mas2[0];
    cout <<"przv={";
    cout <<i;
    cout <<";";
    cout <<j;
    cout <<";";
    cout <<k;
    cout <<"}" << endl;
    execl("prog2", NULL);
}
