#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Sarthak Porwal is at Home";
    // cout<<str.length();  // 0 to str.length()-1
    // int len = str.length();

    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // str.push_back('f');
    // str.push_back('g');
    // cout<<str<<endl;

    // string s = "sarthak";
    // cout<<s<<endl;
    // s.pop_back();
    // s.pop_back();
    // cout<<s<<endl;

    // string s = "abc";
    // cout<<s<<endl;
    // s = "xyz" + s; // Add
    // cout<<s<<endl;

    string s = "abcdef"; // 0 1 2 3 4 5
    cout<<s<<endl;
    // reverse(s.begin(),s.end());
    reverse(s.begin()+2,s.begin()+5);
    cout<<s<<endl;
    return 0;
}