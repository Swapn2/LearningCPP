#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 3;
    int *b = &a;

    cout << "address of a is : "<< &a <<endl;
    cout << "address of a is : " << b <<endl;
    cout << "value at adddress b is : " << *b << endl; 

//  pointer to pointer 

    int **c = &b;
    cout << "address of b is : " << &b << endl;
    cout << "address of b is : " << c << endl;
    cout << "value at address c is : " << *c << endl;
    cout << "value at address of address contain by c is : " << **c << endl;

    // pointer airthmetic
    int arr[5] = {2,4,6,8,10};
    int *p = arr;
    cout << "value at arr[0] : " << *p << endl;
    cout << "value at arr[1] : " << *(p+1) << endl;
    cout << "value at arr[2] : " << *(p+2) << endl;
    // cout << "value at arr[3] : " << *(p+3) << endl;

    return 0;
}