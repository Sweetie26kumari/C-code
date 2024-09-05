#include<iostream>
using namespace std;

class sweety;
class khushi{
  int money = 1000;

  public:
  void getdata(int x){
     money = x;
  }

  void putdata(void){
    cout<<"money is :"<<money<<endl;
  }
  friend int sum(sweety,khushi);
};

class sweety{
    int money1 = 2000;

    public:
    void getdata(int x){
         money1 = x;

    }
    void putdata(void){
        cout<<"money1 is :"<<money1<<endl;
    }
   friend int sum(sweety,khushi);
};

int sum(sweety obj2, khushi obj1){
  cout<<" sum :"<<obj1.money + obj2.money1<<endl;
}

int main(){
    sweety obj2;
    khushi obj1;
    obj1.getdata(1000);
    obj2.getdata(2000);
    obj1.putdata();
    obj2.putdata();

    cout<<" sum of money :"<<sum(obj2,obj1)<<endl;
    return 0;
}