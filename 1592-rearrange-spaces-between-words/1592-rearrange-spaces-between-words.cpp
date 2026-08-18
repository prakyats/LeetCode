class Solution {
public:
    string reorderSpaces(string text) {
        int spaceC = 0;
        vector<string> words;

        for(int i = 0; i < text.size(); i++) {
            if(text[i] == ' ')
                spaceC++;
        }

        string word;

        for(char c : text) {
            if(c != ' ') {
                word += c;
            }
            else if(!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }

        if(!word.empty())
            words.push_back(word);

        int gap = 0, extra = spaceC;

        if(words.size() > 1) {
            gap = spaceC / (words.size() - 1);
            extra = spaceC % (words.size() - 1);
        }

        string ans;

        for(int i = 0; i < words.size(); i++) {
            ans += words[i];

            if(i != words.size() - 1) {
                ans += string(gap, ' ');
            }
        }

        ans += string(extra, ' ');

        return ans;
    }
};