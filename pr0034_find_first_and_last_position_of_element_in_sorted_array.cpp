class Solution {
public:
    int first(vector<int>&nums,int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int result = -1;
        while(s<=e){
            if(nums[mid]==target){
               result = mid;
               e = mid-1;
            }else if(nums[mid]>target){
                e = mid -1;
            }else{
                s=mid+1;
            }

            mid = s+(e-s)/2;
        }
        return result;
    }
    int second(vector<int>&nums,int target){
        int s = 0;
        int e = nums.size()-1;
        int mid = s + (e-s)/2;
        int result = -1;
        while(s<=e){
            if(nums[mid]==target){
               result = mid;
               s = mid+1;
            }else if(nums[mid]>target){
                e = mid -1;
            }else{
                s= mid+1;
            }

            mid = s+(e-s)/2;
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        if(nums.size()==0){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        int k = first(nums,target);
        int l = second(nums,target);
        v.push_back(k);
        v.push_back(l);
        return v;
    }
};










/*
vector<int> ans(2,-1);
    if(nums.size()==0)return ans;
    int t1=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    int t2=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    if(t1==t2)return ans;
    cout<<t1<<t2;
    ans[0]=t1;
    ans[1]=t2-1;
    return ans;
*/
