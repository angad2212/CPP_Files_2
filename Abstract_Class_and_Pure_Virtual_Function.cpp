#include<iostream>
#include<cstring>
using namespace std;

//abstract base class
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH(string s, float r){
        title= s;
        rating =r;
    }
    virtual void display()=0; //pure virtual function
    //void display(){cout<<"no"<<endl;}
};
class CWHvideo: public CWH{
    int videolength;
    public:
    CWHvideo(string s, float r, int vl):CWH(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"this video has rating "<<rating<<endl;
        cout<<"length of the video is "<<videolength<<endl;
    }
};
class CWHtext: public CWH{
    int words;
    public:
    CWHtext(string s, float r, int wc):CWH(s,r){
        words = wc;
    }
    void display(){ //defining this function was necessary, otherwise it wouldve turned into an abstract class too,
        cout<<"this is an amazing text with title "<<title<<endl;
        cout<<"this text has rating "<<rating<<endl;
        cout<<"words of the text is "<<words<<endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    title = "Django tut";
    vlen=4.67;
    rating=5;
    CWHvideo djvideo(title, rating, vlen);
    //djvideo.display();
    title = "Django tut";
    words=4.67;
    rating=5;
    CWHvideo djtext(title, rating, words);

    CWH *tuts[2];
    tuts[0]=&djvideo;
    tuts[1]=&djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}