#include<iostream>
using namespace std;

int main(){
    cout<<"Find the perfect number between 1 and 500 :";
    int i = 1, u = 1, sum = 0;

    cout<<"the perfect number between 1 and 500 are: "<<endl;
    while(i <= 500){
      while(u <= 500){
        if(u < i){
          if(i % u == 0)
           sum = sum + u;
        }
        u++;
      }
      if(sum == i){
        cout<< i <<" "<<endl;
      }
      i++;
      u = 1;
      sum = 0;
    }

}