#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;// Size Capacity
    v.push_back(6);// 1 1
    v.push_back(1);// 2 2
    v.push_back(9);// 3 4
    v.push_back(10);// 4 4
    v.push_back(9);// 5 8
    v.push_back(10);// 6 8
    v.push_back(1);// 7 8
    v.push_back(9);// 8 8
    v.push_back(10);// 9 16
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    v.push_back(1);
    v.push_back(9);
    v.push_back(10);
    v.push_back(9);
    v.push_back(10);
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Size is: "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"Size is: "<<v.size()<<endl;
    cout<<"Size is: "<<v.capacity()<<endl;
    return 0;
}