#include<iostream>
using namespace std;

class abc{
    public:
    void add(int a1,int b1){
        cout<<a1+b1<<endl;
        return;
    }
    void sub(int a1,int b1){
        cout<<a1-b1<<endl;
    }
};

int main(){
    abc a;
    a.sub(23,12);
    a.add(23,12);
    return 0;

}