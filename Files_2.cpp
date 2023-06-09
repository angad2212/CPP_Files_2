#include<iostream>
#include<fstream> 
#include<string>
using namespace std;

int main(){
    ofstream pout;
    pout.open("empty.cpp"); //default mode: out.open("filename","filemode"), filemode = 'ios::in'/'ios::out'
    pout<<"this is me, and yes i am an mma fighter";
    pout.close();

    ifstream pin;
    string st;
    pin.open("empty.cpp");
    //in>>st;
    //cout<<st;
    while(pin.eof()==0){ //end of function
        getline(pin,st);
        cout<<st<<endl;
    }
    pin.close();
    return 0;
}