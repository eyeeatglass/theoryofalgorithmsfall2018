#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {

int e, f, c;


cout << "enter e f c, in that exact syntax: ";
cin >> e >> f >> c;
int total = -999;
int empty = e+f;
cout << "e = " << e << endl << "f = " << f << endl << "c = " << c << endl;
if(e >= 1000 || f >= 1000 || c <2 || c >= 2000 || e<0 || f<0){
    cout << "parameters out of bounds! " << endl;
}
else{
//logic here
total = 0;
while(empty>=c){
    empty = empty - c;
    total = total+1;
    empty = empty+1;

    }




cout << total << endl;


    //----------
    }

    return 0;
}


