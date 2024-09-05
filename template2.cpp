#include<iostream>
using namespace std;

template <typename t1, typename t2>

t1 add(t1 a, t2 b){
    return a+b;
}

int main(){
  cout<< " The sum is :"<<add(34,23.45)<<endl;
  cout<<" the sum is float :" <<add(223.34f,12);
  return 0;
}