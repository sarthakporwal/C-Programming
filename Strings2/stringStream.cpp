#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string str = "sarthak is a mnnit student";
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }
    return 0;
}