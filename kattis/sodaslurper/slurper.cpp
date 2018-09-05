#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {

int e, f, c = 0;
int list[3];

if(argc!=4){
    cout << "Not correct amount of inputs given" << endl;
}
else{

    for(int i = 0; i<=2; i++){
    
        list[i] = int(*argv[i+1]-48);
    }
    //# of soda bottles in tim's possesion
    int e = list[0];
    //# of bottles found
    int f = list[1];
    //number of bottles required to buy a new soda
    int c = list[2];
    int total = 0;
    int empty = e+f;
    if(e >= 1000 || f >= 1000 || c <2 || c >= 2000 || e <0 || f <0){
        cout << "parameters out of bounds! " << endl;
    }
    else{
    //logic here
    
    while(empty>=c){
        empty -= c;
        ++total;
        ++empty;


        }
    }

    cout << total << endl;


    //----------
    }
    return 0;
}


