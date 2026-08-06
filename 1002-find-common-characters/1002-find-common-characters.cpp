class Solution {
public:
    vector<string> commonChars(vector<string>& words) {

        vector<int> gfreq(26, INT_MAX);

        for (string word : words) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                gfreq[i] = min(gfreq[i], freq[i]);
            }
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++) {
            while (gfreq[i]--) {
                ans.push_back(string(1, i + 'a'));
            }
        }

        return ans;
    }
};