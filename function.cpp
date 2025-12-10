#include <bits/stdc++.h>
using namespace std;

//  function protoype ( it tell the complier about the function that will be used later)
// type function-name (argument)
int sum(int a , int b);   // -- Acceptable way of function prototype
// int sum(int , int);     // -- also acceptable way of function prototype
// int sum();              // -- also acceptable way of function prototype
// void greet();          // -- also acceptable way of function prototype


int main(){
    int num1 ,num2;
    cin >> num1 >> num2;
    // num1 and num2 are actual parameters
    cout << "the sum is : " << sum(num1 , num2);
    return 0;
}


int sum(int a , int b){
    return a+b;
}

void greet(){
    cout << "hello Kaju" <<endl;
    cout << "hello Sappu" <<endl;
}