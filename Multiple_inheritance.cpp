#include<iostream>
using namespace std;
class base1{
    protected:
    int base1Int;
    public:
    void set_base1Int(int a){
        base1Int=a;
    }
};
class base2{
    protected:
    int base2Int;
    public:
    void set_base2Int(int b){
        base2Int=b;
    }
};

class derived: public base1, public base2{
    public:
    void show(){
        cout<<"the value of base 1 is "<<base1Int<<endl;
        cout<<"the value of base 2 is "<<base2Int<<endl;
        cout<<"the sum of these two is "<<base1Int + base2Int<<endl;
    }
};
int main(){
    derived w;
    w.set_base1Int(20);
    w.set_base2Int(30);
    w.show();
    return 0;
}