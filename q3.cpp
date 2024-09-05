#include<iostream>
using namespace std;

// void printArray(int arr[5]){
//     cout<<"Printing array elements :"<<endl;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main(){
//     int arr1[5] = {234,23,12,12,44};
//     int arr2[5]  = {1,2,3,4,5};
//     printArray(arr1); // Passing array to funtion
//     printArray(arr2);
// }




//                  min value


void printMin(int arr[5]){
    int min = arr[0];
    for(int i= 0;i>5;i++){
        if(min<arr[i]){
            min= arr[i];
        }
    }
    cout<<"Minimum element is: "<<min<<endl;
}