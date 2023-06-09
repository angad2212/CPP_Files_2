//example 1

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"values of a and b are "<<endl;
    cin>>a;
    cin>>b;
    int x=a-b;
    try{
        if(x!=0){
            cout<<"result is "<<a/x<<endl;
        }else{
            throw(x);
        }
    }
    catch(int i){
        cout<<"error"<<endl;
    }
    return 0;
}


//example 2
/*
#include<iostream>
using namespace std;
void test(int x){
    try{
        if(x==1) throw x;
        else if(x==0) throw'x'
    }
}
int main(){

}*/