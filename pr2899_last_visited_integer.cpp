#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        //array to store the numbers encountered while traversing
        vector<int>numbers;
        //An iterator for accessing the prev number
        int i=-1 ;
        vector<int>ans;
        for(auto it: words){
            string curr = it ; 
            if(curr=="prev"){
                if(i==-1){
                    // if no number comes before this prev store -1 
                    ans.push_back(-1);
                }
                else{
                    //adding the prev number to ans then decrementing i
                    ans.push_back(numbers[i]);
                    i--;
                }
            }
            else{
                // converting string to number and pushing it into numbers array 
                int num = stoi(curr);
                numbers.push_back(num);
                //updating i 
                i=numbers.size()-1;
            }
        }
        return ans ;
    }
};