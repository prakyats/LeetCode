class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        string ans = "";
        vector<pair<char, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });
        for (auto it : v) {
            while (it.second--) {
                ans += it.first;
            }
        }
        return ans;
    }
};