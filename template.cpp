#include<iostream>
using namespace std;

template<typename t>

t add(t a,t b){
    return (a+b);
}

int main(){
    cout<<" the sum of a and b is :"<<add(3,5)<<endl;
    cout<<"the sum of a and b is :"<<add(23.23,33.232);
}