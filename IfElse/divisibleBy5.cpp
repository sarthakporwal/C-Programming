#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"Divisible by 5";
    }
    else{
        cout<<"Not divisible by 5";
    }
    return 0;
}