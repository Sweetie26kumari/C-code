#include<iostream>
#include<math.h>

using namespace std;

int maina(){
  int n,i, sum;
  float x, y,j,m;
  y=2;
  cout << "\n\n Find the sum of the series 1 - X^2/2! + X^4/4!-....:\n";

  cout << " Input the value of X: ";
  cin>>x;

  cout << " Input the value for nth term: ";
  cin>>n;

  sum = 1;
 int term = 1;
 cout<<"term 1 value is : "<<term<<endl;
  for(i=1;i<n;i++){
    int fact = 1;
    for(j=1;j<=y;j++){
       fact = fact * j;
    }
    term = term * (-1);
    m = pow(x,y) / fact;
    m = m * term;
    cout<<"term"<<i + 1<<"value is :"<<m<<endl;
    sum = sum + m;
    y = y+2;
  }
  cout<<"the sum is :"<<sum<<endl;
  return 0;
}  