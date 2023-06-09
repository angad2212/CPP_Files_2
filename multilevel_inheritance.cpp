#include<iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void setrollno(int sr){
        rollno = sr;
    }
    void getrollno(void){
        cout<<"your roll number is "<<rollno<<endl;
    }
};
class exam: public student{
    protected:
    int maths;
    int physics;
    public:
    void setmarks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void getmarks(){
        cout<<"your marks for maths are "<<maths<<endl;
        cout<<"your marks for physiscs are "<<physics<<endl;
    }
};
class result : public exam{
    protected:
    float percentage;
    public:
    void display(){
        getrollno();
        getmarks();
        percentage = (maths+physics)/2;
        cout<<"your percentage is "<<percentage<<endl;
    }
};
int main(){
    result angad;
    angad.setrollno(102206025);
    angad.setmarks(99,91);
    angad.display();
    return 0;
}