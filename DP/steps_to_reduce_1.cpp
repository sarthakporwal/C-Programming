#include<iostream>
#include<vector>
#define inf INT_MAX
using namespace std;
int f(int n){
    if(n == 1) return 0;
    if(n == 2 or n==3) return 1;

    return 1 + min(f(n-1), min((n%2==0) ? f(n/2) : inf, (n%3==0) ? f(n/3) : inf));
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}