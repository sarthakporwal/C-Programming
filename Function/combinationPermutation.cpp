#include<iostream>
using namespace std;
int fact(int x){
    int t = 1;
    for(int i=2;i<=x;i++){
        t*=i;
    }
    return t;
}
int nCr(int n, int r){
    int a;
    a = fact(n)/(fact(r)*fact(n-r));
    return a;
}
int nPr(int n, int r){
    int b;
    b = fact(n)/fact(n-r);
    return b;
}
int main(){
    int n,r;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;
    cout<<nCr(n,r)<<endl;
    cout<<nPr(n,r);
    return 0;
}