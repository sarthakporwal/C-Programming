#include<iostream>
// BUBBLE SORT IS A STABLE SORTING ALGORITHM
#include<vector>
using namespace std;
int main(){
    int arr[] = {5,-4,0,-80,3,26,1,99};
    int n = 8;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    // //bubbleSort
    // for(int i=0;i<n-1;i++){ // n-1 passes
    //     //Traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]); // Swap
    //     }
    // } 

    // bubble sort optimized
    for(int i=0;i<n-1;i++){ // n-1 passes
        //Traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){ // Swap
                swap(arr[j],arr[j+1]);
                flag = false;
            }  
        }
        if(flag==true){ // swap didn't happen
            break;
        }
    }
    // time commented
    cout << endl;
    for(int i = 0;i < n;i++){
        cout << arr[i] << " ";
    } 
    return 0;
}