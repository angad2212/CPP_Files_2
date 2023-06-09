
#include<iostream>
using namespace std;
class complex{
	float real, img;
	public:
		complex(float r, float m){
			real=r;
			img=m;
		}
		void display(){
			cout<<real<<" + i"<<img<<endl;
		}
		complex operator+(complex obj){
			real=real+obj.real;
			img=img+obj.img;
			
		}
		
		
		
};

int main(){
	complex c1(2,3);
	complex c2(5,6);
	c1.display();
	c2.display();
	//c1+c2;
	c1.operator+(c2);
	c1.display();
}


/*
#include<iostream>
using namespace std;
class test{
	int a;
	public:
		void getValue(int x){
			a=x;
		}
		void display(){
			cout<<a<<endl;
		}
		void operator++(){
			++a;
		}
		void operator++(int){ //definition changed
			a++;
		}
};
int main(){
	test t;
	t.getValue(5);
	t.display();
	t++;
	//t.operator++();
	t.display();
}
*/