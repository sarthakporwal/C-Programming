#include<iostream>
using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    p += q -= p; // This type of relation (Assigning) is solve from Right -> Left
    cout<<p<<" "<<q<<endl;
    return 0;
}