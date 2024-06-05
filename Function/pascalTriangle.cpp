#include<iostream>
using namespace std;
int fact(int x){
    int t = 1;
    for(int i=1;i<=x;i++){
        t*=i;
    }
    return t;
}
int nCr(int n, int r){
    int a = fact(n)/(fact(r)*fact(n-r));
    return a;
}
void pascal(int y){
    for(int i=0;i<=y;i++){
        for(int j=0;j<=(y-i);j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<nCr(i,j)<<"   ";;
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    pascal(n);
    return 0;
}