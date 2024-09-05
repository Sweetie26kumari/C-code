#include<iostream>
using namespace std;

class abc{
  int roll;
  int marks;
  public:

  void getdata(int x,int y);
  void putdata(void){
    cout<<" roll :"<<roll<<endl;
    cout<<"marks :"<<marks;
  }
};

void abc::getdata(int x,int y){
    roll = x;
    marks=y;
}

int main(){
    abc obj;
    obj.getdata(23,4);
    obj.putdata();

}