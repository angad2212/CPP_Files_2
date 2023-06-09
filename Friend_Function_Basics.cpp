//example 1

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }
    friend complex sumComplex(complex o1, complex o2); //friend function
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex sumComplex(complex o1, complex o2){ //complex is the return type of sumComplex
    complex o3;
    o3.setNumber((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
//above case will throw error as sumComplex is trying to access private member functions of the class complex.
//but if we call the function as a friend, there will not be any error, like the way it is done in line 10.
int main(){
    complex c1;
    complex c2;
    complex sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c2.setNumber(5,8);
    c2.printNumber();

    sumComplex(c1,c2);
    sum.printNumber();
    return 0;
}

//example 2

#include <iostream>
using namespace std;
class myclass{
     int a, b;
public:
 friend int sum(myclass x);
 void set_ab(int i, int j);
};
void myclass::set_ab(int i, int j){ 
     a = i; 
     b = j;
}
int sum(myclass x){ 
     return x.a + x.b; //here, the object 'x' can access 'a' and 'b' as it has been declared a friend
}
int main(){ 
myclass n;
 n.set_ab(3, 4);
 cout << sum(n);
 return 0;
}


// Friend Function:
//not in the scope of class
//since it isnt in the scope, it cannot be called from the object of that class. (c1.sumComplex = error)
//contains the objects as arguments 
//it cannot access the members directy by their names and need object_name.member_name to access any member

//in friend class:
//the class that is being called a friend must be declared before and only and its function should only have arguments 
//in it until the class is declared