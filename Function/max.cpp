#include<iostream>
using namespace std;
int maxthree(int a, int b, int c){
    int max;
    if(a>b && a>c){
        return a;
    }
    else if(b>c && b>a){
        return b;
    }
    else return c;
}
int main(){
    int a = 2, b = 9, c = 7; 
    cout<<maxthree(a,b,c);
    return 0;
}