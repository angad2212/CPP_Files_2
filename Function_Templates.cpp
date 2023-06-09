#include<iostream>
using namespace std;

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
int main(){
    float a;
    a=funcAverage(5.9,2.6);
    cout<<"average value is "<<a<<endl;
    return 0;
}

//overloading of function templates:
//whenever there is an exact match, then that function is called, example:
// two functions : func(int a), func(T a)
//now if func(4) is mentioned, the first function is called because its an exact match