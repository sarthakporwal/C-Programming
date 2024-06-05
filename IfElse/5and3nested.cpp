#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;
    if(n%5==0){
        if(n%3==0){
            cout<<"Number is divisible by 5 and 3 both";
        }
        else{ // n%5==0 but n%3!=0
            cout<<"Number is divisible by 5 but not 3";
        }
    }
    else{
        cout<<"Not Matching Condition";
    }
    return 0;
}