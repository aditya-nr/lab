#include<iostream>
using namespace std;
#include<vector>
int removeDuplicates(vector<int>& nums) {
    int i=0,j=0;
    while(j++<nums.size()-1){
        if(nums[i]!=nums[j]){
            // nums.erase(nums.begin()+i);
            nums[i]=nums[j];
            i++;
        }
    }
    return i;
}

int main(int argc, char const *argv[])
{
    vector<int> arr{1,1,1,2,2,2,2,3,3,3,3,3,4,5,6};
    cout<<removeDuplicates(arr)<<endl;
    return 0;
}

