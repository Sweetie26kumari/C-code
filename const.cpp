#include<iostream>
using namespace std;

class test{
    int a,b;
    public:
     test(){
        a=0;
        b=0;
     }
     void disp(void){
        cout<<" The value of A is :"<<a<<endl;
        cout<<" The value of B is :"<<b;
     }
};

int main(){
    test t;
    t.disp();
    
}