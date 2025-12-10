#include<bits/stdc++.h>
using namespace std;

// void swap(int a, int b){ // this is call by value
//     int temp =a;
//     a =b;
//     b = temp;
// }

// call by reference using pointer
// void swap(int *a , int*b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

//  call by reference using reference variable
void swap(int &x , int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 5 ,b= 4;
    //  this will not work as we are passing the value not the reference

    // cout<<"value of a is : "<< a<<" and b is : "<< b<<endl;
    // swap(a,b);
    // cout<<"value of a is : "<< a<<" and b is : "<< b<<endl;

    // // this will work as we are passing the reference
    // cout<<"value of a is : "<< a<<" and b is : "<< b<<endl;
    // swap(&a, &b);
    // cout << "value of a is : " << a << " and b is : " << b<< endl;

    // this will also work as we are passing the reference variable
    cout<<"value of a is : "<< a<<" and b is : "<< b<<endl;
    swap(a,b);
    cout<<"value of a is : "<< a<<" and b is : "<< b<<endl;
    

    return 0;

}