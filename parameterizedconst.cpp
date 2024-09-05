#include<iostream>
using namespace std;

class emp{
   public:
    int id;
    string name;
    float marks;

    emp(int i,string n,float m){
        id = i;
        name = n;
        marks = m;
    }

    void display(){
        cout<<id<<"  "<<name<<"  "<<marks<<endl;
    }

    ~emp(){
        cout<<"destructor called for :"<<name<<endl; ///   Destroctor
    }
};

int main(){
    emp e1(1,"sweety",89.5);
    e1.display();

    emp e2 = e1;   // copy constructor
    e2.display();

    emp e3(2,"khushi",78.98);
    e3.display();
}