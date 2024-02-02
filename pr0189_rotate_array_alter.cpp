#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int t = nums.size();
    k= k%t;
        while(k>=0){
            int temp = nums[0];
            nums.erase(nums.begin()+0);
            nums.push_back(temp);
            k--;
       }  
}

int main() {
    vector<int> nums1 = {1, 2, 3, 4, 5, 6, 7};
    int k1 = 3;
    rotate(nums1, k1);
    for (int num : nums1) {
        cout << num << " ";
    }
    // Output: 5 6 7 1 2 3 4
    cout<<endl;
    vector<int> nums2 = {-1, -100, 3, 99};
    int k2 = 2;
    rotate(nums2, k2);
    for (int num : nums2) {
        cout << num << " ";
    }
    // Output: 3 99 -1 -100

    return 0;
}
