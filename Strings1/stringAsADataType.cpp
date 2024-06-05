#include<iostream>
using namespace std;
int main(){
    // string str = "Sarthak Porwal is at Hostel";
    // cout<<str;
    string name;
    // cin>>name; // Only if the given string has no spaces
    getline(cin,name); // VVIMP
    cout<<name;
    return 0;
}