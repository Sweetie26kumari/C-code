#include<iostream>
using namespace std;

int main(){
    int i,n;
    cin>>n;
    int sum = 0;

    for(i=1;i<=n;i++){
        if(n%i==0){
            sum = sum + 1;
        }
    }
    if(sum==2){
        cout<<"it's a prime number";
    }
    else{
        cout<<"not a prime number";
    }
}