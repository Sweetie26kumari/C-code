#include<iostream>
using namespace std;

int calc(int x){
    return x*x;
}

int calc(int x, int y){
    return (x+y);
}

int main(){
    cout<<"The value of x*x is :"<<calc(5)<<endl;
    cout<<"The value of x + y is :"<<calc(4,8);

}