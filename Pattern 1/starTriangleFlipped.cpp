#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++) cout<<"  "; // Spaces ke liye 
        for(int k=1;k<=i;k++) cout<<"* "; // Stars ke liye
        cout<<endl;
    }
    return 0;
}