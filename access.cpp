#include<iostream>
using namespace std;

class test {
    int roll;
    float per;
    public:
    void getdata(int, float);
    void display(void){
        cout<<"roll = "<<roll<<endl;
        cout<<"percentage = "<<per;
    }
};

void test:: getdata(int x,float y) {
   roll = x;
   per = y;
}

int main(){
    test t;
    t.getdata(20,45);
    t.display();
}