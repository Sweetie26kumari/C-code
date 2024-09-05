      // Recursion 

#include<iostream>
using namespace std;

int staticfun(){
      cout<<"static variables:";
      static int count = 0;
      count ++;
      return count;
}

int nonstaticfun(){
      cout<<"non static variables:";
      int count = 0;
      count ++;
      return count;
}

int main(){
   cout<<staticfun()<<endl;
   cout<<staticfun()<<endl;
   cout<<staticfun()<<endl;
   cout<<nonstaticfun()<<endl;  
   cout<<nonstaticfun()<<endl; 
   return 0;

}