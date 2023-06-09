#include<iostream>
using namespace std;
//base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id = inpId;
        salary = 34;
    }
    employee(){} // default constructor of the employee class
};

//derived class syntax
/*
class {derived class} : {visibility mode} {base class}{
    class members/methods etc...
}

note:
1.defualt visibility mode is private
2.in private : public members of the base class become private members of the derived class
3.in public : public members of the base class become public members of the derived class
4.private members of the base class are not inherited
*/

//derived class
class programmer : public employee{
    public:
    programmer(int inpId){
        id=inpId;
    }
    int languageCode=9; //it goes to the default contructor of base class
};

int main(){
    employee angad(1);
    cout<<angad.salary<<endl;
    programmer skillf(1);
    cout<<skillf.languageCode<<endl;

    


    return 0;
}