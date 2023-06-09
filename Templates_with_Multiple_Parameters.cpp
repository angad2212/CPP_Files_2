#include<iostream>
using namespace std;
//Class Templates with Multiple Parameters
/*
template<class T1, class T2> //it can also be given values here, <class T1=int, class T2=float>
class name_of_class{
    //body
};
*/
template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a, T2 b){
        data1=a;
        data2=b;
    }
    //void display(int a, char b){
        //data1=a;
        //data2=b;
        //cout<<a<<endl<<b<<endl;
    //}
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
    myclass<int , float> angad(1,5.3);
    angad.display();
    return 0;
}