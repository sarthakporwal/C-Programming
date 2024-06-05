#include<iostream>
using namespace std;

int firstoccurence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;

}

int main(){
    int arr[]={1,2,3,3,5};

    cout<<"First occurence of 3 is: "<<endl;
    cout<<firstoccurence(arr,5,3);

    return 0;
}