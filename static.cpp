          // static
#include<iostream>
using namespace std;

class emp{
    public:
       int id;
       string name;
       static float rateOfInterest;
     emp(int i,string n){
        id = i;
        name  = n;
     }  

     void display(){
        cout<<id<<" "<<name<<" "<<rateOfInterest<<endl;
     }
};

float emp::rateOfInterest = 9.4;

int main(){
    emp e(1,"sweety");
    e.display();

    emp e1(2,"khushi");
    e1.display();
}