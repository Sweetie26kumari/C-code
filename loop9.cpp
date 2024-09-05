#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=50;i++){
        if(25%i==0 && 15%i==0 && i!=1){
            cout<<"Greater common divisiable :"<<i<<endl;
            int gcd = i;
        }

    }
    return 0;
}