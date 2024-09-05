#include<iostream>

using namespace std;

int main(){
    int sum = 0,tsum;
    int i, a, n, j;
    cout<<"(1)+(1+2)+(1+2+3)+(1+2+3+4)+.....+(1+2+3+4+..+n)"<<endl;
    cout<<"................................................"<<endl;
    cout<<"Enter the  value for nth term :";
    cin>>n;
        for(i=1;i<=n;i++){
          tsum = 0;
          for(j=1;j<=i;j++){
            sum = sum + j;
            tsum = tsum + j;
            cout<<j;
            if(j<i){
                cout<<"+";
            }
          }
          cout<<" = "<<tsum<<endl;
        }
        cout<<"the sum is :"<<sum;
        return 0;
    }