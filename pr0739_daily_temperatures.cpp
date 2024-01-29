class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int, int> > st;
        st.push({temp[temp.size()-1], temp.size()-1});
        vector<int> res(temp.size(),0);
        for(int i=temp.size()-2; i>=0; i--){
                while(!st.empty() && st.top().first <= temp[i])
                    st.pop();
                if(st.empty())
                    res[i] = 0;
                else
                    res[i] = (st.top().second - i);
            st.push({temp[i], i});
        }
        return res;
    }
};

