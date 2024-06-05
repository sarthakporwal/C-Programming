#include<iostream>
using namespace std;
int main(){
    // int n,nsp,nst;
    // cout<<"Enter a number: ";
    // cin>>n;
    // nsp = (n-1);
    // nst = 1;
    // for(int i=1;i<=n;i++){
    // for(int j=1;j<=nsp;j++) cout<<"  ";
    // nsp--;
    // int a = 1;
    // for(int k=1;k<=nst;k++){
    //     if(k<(nst/2)+1){
    //         cout<<a<<" ";
    //         a++;
    //     }
    //     else{
    //         cout<<a<<" ";
    //         a--;
    //     }
    // }
    // nst+=2;
    // cout<<endl;
    // }

    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++) cout<<"  ";
        for(int k=1;k<=i;k++) cout<<k<<" ";
        for(int l=(i-1);l>=1;l--) cout<<l<<" ";
        cout<<endl;
    }
    return 0;
}