#include<bits/stdc++.h>
using namespace std;

class emp{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter the id :";
        cin>>id;
        count++;
    }
    void getdata(void){
        cout<<"The id os this employee "<<id<<" and emp no. "<<count<<endl;
    }
};

int emp::count;

int main(){
    emp obj;
    obj.setdata();
    obj.getdata();
    return 0;

}