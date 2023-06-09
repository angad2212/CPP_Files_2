#include<iostream>
#include<fstream> //for files
/*
The useful classes for working in fils in C++ are:
1. fstreambase
2. ifstream : derived grom fstreambase
3. ofstream : derived grom fstreambase
*/

/*
In order to work with files in C++, you will have to open a file. Primarily there are two ways of opening a file:
1. using a constructor
2. using a member function open() of the class
*/

using namespace std;

int main(){
    string st = "demn sir";

    //opening files using constructor and writing it
    ofstream hout("empty.cpp"); //write operation
    hout<<st;
    hout.close();

    string st2;

    //opening files using constructor and reading from it
    ifstream hin("empty.cpp"); //constructor method
    //hin>>st2; //only prints the first word
    getline(hin, st2); //prints the whole line
    cout<<st2;
    
    return 0;
}