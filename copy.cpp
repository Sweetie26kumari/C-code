#include<iostream>
using namespace std;

class test{
    int code;
    float price;
    public:
     test(int c,float p);
     test(const test &t);
     void display();
};

test :: test(int c,float p){
    code = c;
    price = p;

}
test :: test(const test &t){
    code = t.code;
    price = t.price;
}

void test :: display(){
    cout<<"code :"<<code<<endl;
    cout<<"price :"<<price<<endl;
}

int main(){
    test t1(2,45);
    test t2(t1);
    test t3=t2;
    cout<<"t1 object"<<endl;
    t1.display();
    cout<<"t2 object"<<endl;
    t2.display();
    cout<<"t3 object"<<endl;
    t3.display();

}