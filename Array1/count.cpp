#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter Size Of Array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++) cin>>arr[i];
    int count = 0;
    cout<<"Enter the number to which the elements should greater than of: ";
    cin>>x;
    for(int i=0;i<=(n-1);i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
    return 0;
}