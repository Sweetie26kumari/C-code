#include<iostream>
using namespace std;

class abc{
    public:
     int id;
     string name;
     float marks;

     abc(int id,string name,float marks){
         this->id = id;
         this->name = name;
         this->marks = marks;
     }

     void display(){
        cout<<id<<" "<<name<<" "<<marks<<endl;
     }
};

int main(){
  abc a(1,"sweety",80.5);
  a.display();
}