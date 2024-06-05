#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "mnnitallahabad";
    string t = "allahabadmnnit";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<s<<endl<<t<<endl;
    if(s==t) cout<<true;
    else cout<<false;
    return 0;
}