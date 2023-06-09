#include <iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"sup?"<<endl;
    }
};
class derived : public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();
    }
};
int main(){
    base1 base1obj;
    base2 base2obj;
    base1obj.greet(); //prints how are you
    base2obj.greet(); // prints sup
    derived derivedobj;
    derivedobj.greet(); //throws error
    //but if the greet of base1 is defined inside it, it doesnt show any error : in line 19
    return 0;
}

//if base2 class didnt exist and derived class was inherirted by base1, greet() will show "how are you?" message only 
//unless there is another greet() function defined in derived class with seperate message 