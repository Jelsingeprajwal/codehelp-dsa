class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        vector<int> ans;
        unordered_map<int, int> map;

        for (int i = 0; i < a.size(); i++) {
            if (map.find(a[i]) == map.end()) {
                ans.push_back(a[i]);
                map.insert({a[i], 1});
            }
        }

        for (int i = 0; i < b.size(); i++) {
            if (map.find(b[i]) == map.end()) {
                ans.push_back(b[i]);
                map.insert({b[i], 1});
            }
        }

        return ans;
    }
};
