#include<iostream>
using namespace std;

int main(){
    int no[5];
    int i, sum=0;
    cout<<"Enter five element :";
    for(i=0;i<5;i++){
       cin>>no[i];
       
    }
    for(i=0;i<5;i++){
        //cout<<no[i]<<endl;
        sum=sum+no[i];
    }
    cout<<"total :"<<sum;
    return 0;
}