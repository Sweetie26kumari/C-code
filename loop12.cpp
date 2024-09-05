#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int sum = 0;
    int a ,n, i;
    cout<<"(1*1)+(2*2)+(3*3)+........+(n*n)"<<endl;
    cout<<"......................"<<endl;
    cout<<"Enter the value :";
    cin>>n;
    for(int i= 1;i<=5;i++){
        a = (i*i);
        cout<<i<<"*"<<i<<" = "<<a<<endl;
        sum = sum + a;
    }
    cout<<"sum is :"<<sum<<endl;
    return 0;
}