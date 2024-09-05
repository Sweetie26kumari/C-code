#include<iostream>
using namespace std;

int main(){
 int n , sum = 0;
 cout<<"display n term:\n";
 cout<<"input a number of terms:";
 cin>>n;

 for(int i=1; i<=n;i++){
    cout<<i<<" "<<endl;
    sum = sum+i;
 }
 cout<<"the sum is :"<<sum;
}