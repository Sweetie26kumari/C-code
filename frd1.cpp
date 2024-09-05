#include<iostream>
using namespace std;

class ac;
class abc{
    int b;
    public:
    void getval(int x){
        b=x;
    }
    void putval(void){
        cout<<"Value of b :"<<b<<endl;
    }
    friend void add(ac,abc);
};

class ac{
   int a;
   public:

   void getval(int x){
    a=x;
   }
   void putval(void){
    cout<<"value of a :"<<a<<endl;
   }
   friend void add(ac,abc);
};

void add(ac obj1,abc obj2){
    cout<<"Addition of a & b :"<<obj1.a + obj2.b<<endl;
}

int main(){
    ac a;
    abc b;
    a.getval(100);
    b.getval(23);
    a.putval();
    b.putval();
    add(a,b);
    return 0;
}


