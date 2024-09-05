#include<iostream>
using namespace std;
class bcd;
class abc{
   int a = 10;
   int b = 20;
   public:
   void show(){
    cout<<a<<endl<<b<<endl;
   }
   friend class bcd;
};

class bcd{
    public:
      void add(abc a1){
        int add = a1.a+a1.b;
        cout<<" The sum of A and B is :"<<add<<endl;
      }
};

int main(){
    abc obj;
    bcd obj1;
    obj.show();
    obj1.add(obj);
    return 0;
}
