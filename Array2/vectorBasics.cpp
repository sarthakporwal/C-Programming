#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // You need not mention the size
    // inserting / Input Do not use []
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    //v[1] = 1;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;

    // if you want to update / access
    // cout<<v[0]<<" ";
    // cout<<v[1]<<" ";
    // cout<<v[2]<<" ";
    // cout<<v[3]<<" ";
    return 0;
}