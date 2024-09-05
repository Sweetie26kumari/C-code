#include<iostream>
using namespace std;

class emp{
   public:
   emp(){
    cout<<"default argument is invoked"<<endl;
   }
};

int main(){
    emp e1;
    emp e2;
    return 0;
}