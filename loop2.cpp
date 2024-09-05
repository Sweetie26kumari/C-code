#include<iostream>
using namespace std;

int main(){
    int sum=0;
    cout<<"The first 10 natural numbers: "<<endl;
    for(int i=0;i<=10;i++){
        cout<<i<<" "<<endl;
        sum = sum + i;
       
    }
    cout<<"the sum of natural  umber is :"<<sum<<endl;
    return 0;
}

