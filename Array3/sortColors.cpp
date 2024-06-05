#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
        // Two pass solution
        int n = nums.size();
        int noz = 0;
        int noo = 0;
        int notwo = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==0) noz++;
            else if(nums[i]==1) noo++;
            else notwo++;
        }
        // Filling
        for(int i=0;i<n;i++){
            if(i<noz) nums[i] = 0;
            else if(i<(noz + noo)) nums[i] = 1;
            else nums[i] = 2;
        }
        return;
    }

    void display(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        return;
    }

    void sortColorsm2(vector<int>& nums){
        // Dutch Flag Method 
        int lo = 0;
        int mid = 0;
        int hi = nums.size() - 1;
        // 1) Mid ke baare me socho
        // 2) 0 to lo-1 -> 0, high+1 to end -> 2
        // 3) lo to mid-1 -> 1
        while(mid<=hi){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            }
            else if(nums[mid]==0){
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
            else mid++;
        }
        return;
    }

int main(){
    vector<int> nums;
    int n;
    cout<<"Enter vector size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    // sortColors(nums);
    display(nums);
    sortColorsm2(nums);
    return 0;
}