#include<iostream>
using namespace std;

int main(){
    double numbers[] = {23,4,2,45,55};
    double sum = 0;
    double count = 0;
    double average;

    cout<<"the number are:";

    for(const double&n:numbers){
        cout<<n<<" ";
        sum += n;
        ++count; 
    }
    cout<<" The sum :"<<sum<<endl;
    average = sum/count;
    cout<<"the average :"<<average<<endl;
    return 0;
}