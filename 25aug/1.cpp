#include<iostream>
using namespace std;
#include<vector>
bool check2(vector<int> &nums){
    int n=nums.size()-1;
    int l=2;
    int pivot=0;
    for(int i=0;i<n && l!=0;i++){
        if(nums[i]>nums[(i+1)%n]){  // it also compares num[n] > num[0]
            pivot=i;
            l--;
        }
    }

    if(n!=0){
        cout<<"Pivot : "<<pivot<<endl;
        return true;
    }
    return false;
}
bool check(vector<int> &nums){
    int n=nums.size();
    int l=2;
    int pivot=0;
    for(int i=0;i<n-1 && l!=0;i++){
        if(nums[i]>nums[i+1]){
            pivot=i;
            l--;
        }
    }
    if((l==1 && nums[0]>=nums[n-1]) || l==2){
        cout<<"Pivot : "<<pivot<<endl;
        return true;
    }
    return false;
}
int main(){
    vector<int> arr{6,7,8,1,2,3,4,5};
    if(check(arr)){
        cout<<"sorted "<<endl;
    }
    return 0;
}