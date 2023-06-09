#include<iostream>
using namespace std;
class X{
    public:
    char a[20];
    X(){
        cout<<"enter the first name "<<endl;
        cin>>a;
    }
    int lengtha(){
        int counta =0;
        int i=0;
        while(a[i]=='\0'){
            counta ++;
        }
        return counta;
    }
    ~X(){
        cout<<"i am destructor"<<endl;
    }

};
class Y{
    public:
    char b[20];
    Y(){
        cout<<"enter the last name "<<endl;
        cin>>b;
    }
    int lengthb(){
        int countb =0;
        int i=0;
        while(b[i]=='\0'){
            countb ++;
        }
        return countb;
    }
    ~Y(){
        cout<<"i am destructor"<<endl;
    }
};
class Z: public X, public Y{
    public:
    char c[40];
    int counta=lengtha();
    int countb=lengthb();
    void concatenate(){
    
        for(int i=0;i<counta;i++){
            c[i]=a[i];
        }
        for(int i=counta;i<countb;i++){
            c[i]=b[i];
        }


        }
        void display(){
            for(int i=0;i<counta+countb;i++){
            cout<<c[i];
        }
        }

    
    };
    

int main(){
    Z a1;
    a1.concatenate();
    a1.display();

    return 0;
}