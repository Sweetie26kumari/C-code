#include<iostream>
using namespace std;

class sum{
   int a,b,t;
   public:

   void getdata(void);
   void displaydata(void);
};

void sum::getdata(){
    cout<<" Enter the value of a & b :";
    cin>>a>>b;
}

void sum:: displaydata(){
    t = a+b;
    cout<<" The sum of "<<a<<" & "<<b<< " is :"<<t;
}

int main(){
    sum obj;
    obj.getdata();
    obj.displaydata();

}