#include<iostream>
using namespace std;
int gcd(int x, int y){
    int hcf = 1;
    for(int i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){ // i is a common factor
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    int b;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}