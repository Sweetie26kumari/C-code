//                      struct 


#include<iostream>
using namespace std;

struct rect{
   int width, height;
};

int main(){
    struct rect r;
    r.width = 8;
    r.height = 10;
    cout<<"The area of rectangle is :"<<(r.width*r.height)<<endl;
    return 0;
}