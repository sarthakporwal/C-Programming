#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n = s.length();
    reverse(s.begin()+1,s.begin()+5);
    cout<<s;
    return 0;
}