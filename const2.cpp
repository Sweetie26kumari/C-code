#include<iostream>
using namespace std;

class abc{
    int a,b;
    public:
    abc(int x, int y){
        a=x;
        b=y;
    }
    void disp(void){
        cout<<" The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b;
    }
};

int main(){
    abc obj(22,11);
    obj.disp();
}