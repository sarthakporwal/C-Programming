#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=(2*n-1);i++) cout<<"* ";
    cout<<endl;
    int a = (n-1);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=(a-i+1);j++) cout<<"* ";
        for(int k=1;k<=(2*i-1);k++) cout<<"  ";
        for(int l=1;l<=(a-i+1);l++) cout<<"* ";
        cout<<endl;
    }
    return 0;
}