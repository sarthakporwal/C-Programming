#include<iostream>
using namespace std;
int main(){
    // int x = 7;
    // int* ptr = &x;
    // cout<<ptr<<endl; // 0x16bad30c8
    // ptr = ptr + 1;
    // cout<<ptr<<endl; // 0x16bad30cc

    // bool flag = true;
    // bool* ptr = &flag;
    // cout<<ptr<<endl; // 0x16f90b0cb
    // ptr++;
    // cout<<ptr<<endl; // 0x16f90b0cc

    // int x = 4;
    // int* ptr = &x;
    // cout<<*ptr<<endl; // 4
    // ptr = ptr + 1;
    // cout<<*ptr<<endl; // 0

    int x = 4;
    int* ptr = &x;
    cout<<*ptr<<endl; // 4
    (*ptr)++; // x = x + 1
    cout<<*ptr<<endl; // 5
    return 0;
}