#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    // if(n%5==0 || n%3==0){
    //     cout<<"The number is divisible by 5 or 3";
    // }
    // else{
    //     cout<<"The number is not divisible by 5 and it is not divisible by 3";
    // }
    if(n%5==0 || n%3==0){
        if(n%15!=0){
            cout<<"The number is divisible by 5 or 3";
        }
        else{
            cout<<"Not Matching Condition";
        }
    }
    else{
        cout<<"Not Matching Condition";
    }
    return 0;
}