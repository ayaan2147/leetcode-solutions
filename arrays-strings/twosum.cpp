#include<iostream>
#include<vector>
using namespace std;

vector <int> twoSum(vector<int>& nums,int target){
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int> nums;
    int n,target;
    cout<<"enter the size of the array:";
    cin>>n;
    cout<<"enter the elements of the array:";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    cout<<"enter the target value:";
    cin>>target;
    vector<int> result = twoSum(nums, target);
    if(result.empty()){
        cout<<"no such pair found";
    }
    else{
        cout<<"the indices of the two numbers are:"<<result[0]<<" and "<<result[1];
    }
}