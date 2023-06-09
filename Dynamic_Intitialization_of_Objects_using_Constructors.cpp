#include<iostream>
using namespace std;
class bankDeposit{
    int amount;
    int years;
    int interest;
    int finalValue;
    public:
    //bankDeposit(){}
    bankDeposit(int p, int y, int r){
        cout<<"yeh wala hai paaji"<<endl;
        amount =p;
        years=y;
        interest = float(r)/100;
        finalValue=0;
        for(int i=0;i<y;i++){
            finalValue=amount*(1+r);
        }
    }
    bankDeposit(int p, int y, float r){
        amount =p;
        years=y;
        interest =r;
        finalValue=amount;
        for(int i=0;i<y;i++){
            finalValue=finalValue*(1+r);
        }
    }
    void show(){
        cout<<endl<<"principal amount was "<<amount<<endl<<"final value is "<<finalValue<<endl;
    }
};
int main(){
    int p, y;
    float r;
    int R;
    cout<<"enter the value of p"<<endl;
    cin>>p;
    cout<<"enter the value of y"<<endl;
    cin>>y;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    bankDeposit bd1(p,y,r);
    bd1.show();

}