#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++) cin>>arr[i];
    int x;
    cout<<"Enter the element you want to search: ";
    cin>>x;
    // Search
    // Check Mark
    bool flag = false; // False -> not present
    for(int j=0;j<=(n-1);j++){
        if(arr[j]==x) flag = true;
    }
    if(flag==true) cout<<"Element Found";
    else cout<<"404 Element Not Found";
    return 0;
}