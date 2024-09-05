#include <iostream>  
using namespace std;  
void func(int &);  
int main()  
{  
   int a=10;  
   std::cout <<"Value of 'a' is :" <<a<< std::endl;  
  func(a);   
  std::cout << "Now value of 'a' is :" <<a<< std::endl;  
  return 0;  
}  
void func(int &m)  
{  
   m=8+m;  
}  