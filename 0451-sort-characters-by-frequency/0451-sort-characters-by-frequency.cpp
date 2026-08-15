class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (auto it : s)
            mp[it]++;
        string ans = "";
        vector<pair<char, int>> mp1(mp.begin(), mp.end());
        sort(mp1.begin(), mp1.end(),
             [](const auto& a, const auto& b) { return a.second > b.second; });

        for (auto it : mp1) {
            while (it.second--) {
                ans += it.first;
            }
        }
        return ans;
    }
};