#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=(n-1);i++) cin>>arr[i];
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=(n-1);i++){
        if(max<arr[i]) max = arr[i];
    }
    for(int j=0;j<=(n-1);j++){
        if(smax<arr[j] && arr[j]!=max) smax = arr[j];
    }
    cout<<max<<endl<<smax;
    return 0;
}