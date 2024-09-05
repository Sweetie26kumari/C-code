#include<iostream>
using namespace std;

int main(){
    int n=5,fact = 1;
    cout<<"Find the factorial :"<<endl;
    //cin>>n;
    
    for(int i=1;i<=n;i++){
        fact = fact*i;
        cout<<"The factorial "<<i<<" is :"<<fact<<endl;
    }
}