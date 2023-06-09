#include <iostream>
using namespace std;
class student{
    protected:
    int rollno;
    public:
    void set_rollno(int r){
        rollno = r;
    }
    void print_rollno(){
        cout<<"your roll number is "<<rollno<<endl;
    }
};
class test: virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"your result is here:"<<endl<<"maths : "<<maths<<endl<<"physics : "<<physics<<endl;
    }
};
class sports:virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(){
        cout<<"your score is: "<<score<<endl;
    }
};
class result:public test, public sports{
    private:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        print_rollno();
        print_marks();
        print_score();
        cout<<"your total score is: "<<total<<endl;
    }
};
int main(){
    result angad;
    angad.set_marks(94.5, 97.5);
    angad.set_rollno(102206025);
    angad.set_score(98);
    angad.display();
    return 0;
}

// virtual base class avoids the variable that existed in class 'student' (roll number) to reach the class 'result' twice,
// which is derived from 2 derived classes of the class 'student' 