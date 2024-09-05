#include<iostream>
using namespace std;

int main(){
    int n , ctr=0;
    cout<<"check whether the number is prime or not:"<<endl;
    cin>>n;
    for(int i = 1;i<=n ; i++){
        if(n%i==0){
            ctr = ctr + 1;
        }
    }
    if(ctr==2){
        cout<<"the number is prime number:"<<endl;
    }
    else{
        cout<<"The number is not a prime number:"<<endl;
    }
}