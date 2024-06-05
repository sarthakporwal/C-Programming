#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    // Reverse First Half
    int n = s.length();
    reverse(s.begin(),s.begin()+4);
    cout<<s;
    return 0;
}