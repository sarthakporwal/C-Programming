#include<iostream>
using namespace std;
int main(){
    float x;
    cin>>x; //-1.3
    int y = (int)x; // y = -1
    if(y<0) y--; 
    float z = (float)y; // z = -2.000
    x -= z;
    cout<<x;
    return 0;
}