#include<iostream>
using namespace std;

class abc{
    public:
     int id = 2;
     string name = "sweety";
     float salary = 12233.98;

     void put(int i,string n, float s){
        id = i;
        name = n;
        salary = s;   
        
    }

    void display(){
        cout<<id<<"  "<<name<<"  "<<salary<<endl;
    }

};

int main(){
    abc obj;
    obj.put(1,"sweety",85000);
    obj.display();
}