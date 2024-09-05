#include<iostream>
using namespace std;

int main(){
    int num, ctr=0;
    cin>>num;
    for(int i=num-1;i>=1;i--){
        for(int m=2;m<i;m++){
            if(i%m==0){
                ctr = ctr+1;

            }
        }
    if(ctr==0){
        cout<<"n is a prime number:";
        if(i==1){
            cout<<"no prime number is less than 1"<<endl;
            break;
        }
        cout<<i<<"last prime number before "<< num <<endl;
        break;
    }
    ctr = 0;
    }
    return 0;
}
