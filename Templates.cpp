#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T*arr;
    int size;
    
    vector(int m){
        size = m; 
        arr=new T[size];
    }
    T dotProduct(vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+= this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main(){
    //int values
    /*
    vector v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 3;
    v1.arr[2] = 1;

    vector v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 8;
    v2.arr[2] = 9;

    int a= v1.dotProduct(v2);
    cout<<a<<endl;
    return 0;
    */

    //float values
    vector <float>v1(3); //vector v1(3);
    v1.arr[0] = 4.1;
    v1.arr[1] = 3.3;
    v1.arr[2] = 1.2;

    vector <float>v2(3);
    v2.arr[0] = 2.1;
    v2.arr[1] = 8.2;
    v2.arr[2] = 9.8;

    float a= v1.dotProduct(v2); //values showcased are wrong since the code saves the value in 'int', unless a template
    //is used to make the values into float
    cout<<a<<endl;
    return 0;
}


//example 2
#include<iostream>
using namespace std;
template<class T1, class T2>
class show{
    public:
    T1 a;
    T2 b;
    show(T1 x, T2 y){
        a=x;
        b=y;
    }
    void display(){
        //cout<<"my name is "<<b<<" and my CGPA is "<<a<<endl;
        cout<<this->a<<endl<<this->b;
    }
};
int main(){
    show<float,char> angad(8.6,'a');
    angad.display();
}