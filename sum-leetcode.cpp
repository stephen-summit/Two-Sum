#include<bits/stdc++.h>
using namespace std;


    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {-1};
    }


int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements of vector: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cout<<"Enter the value of target: ";
    cin>>target;
    vector<int>res=twoSum(v,target);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}
