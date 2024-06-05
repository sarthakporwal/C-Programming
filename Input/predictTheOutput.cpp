#include<iostream>
using namespace std;
int main(){
    bool p = false;
    bool q = false;
    bool r = true;
    cout<<(p==q==r); // (p==q)==(r) -> (0)==2 -> 0
    // (p)==(q==r) -> (1)==(2==2) -> (1)==(1) -> 1
    return 0;
}
