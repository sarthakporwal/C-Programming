#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // for(int i=1;i<(2*n-1);i+=2){
    //     cout<<i<<endl;
    // }
    // seperate variable
    // 1 3 5 7 9 .....
    // 4 7 10 13 17 ...
    int a = 4;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a = a + 3;
    }
    return 0;
}