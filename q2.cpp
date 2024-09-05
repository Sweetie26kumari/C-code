#include<iostream>
using namespace std;

class test{
public:
   int x;
   mutable int y;

   test(){
    x=4;
    y=8;
   }

};

int main(){
    test t1;
    t1.y=20;  // mutable member can be modified in a const object
    cout<<t1.y;
    return 0;
}