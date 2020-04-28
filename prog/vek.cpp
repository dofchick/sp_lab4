#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]){
    string s;
    int a[6], i = 0;
    int sum, c;
    ifstream file(argv[0]);
    while(getline(file, s)){
        a[i] = atoi(s.c_str());
	i++;
    }
    file.close();
    for (i=0;i<3;i++){
	c = a[i] * a[i+3];
	sum = sum + c;
    }
    cout << sum << endl;
    exit(0);
}
