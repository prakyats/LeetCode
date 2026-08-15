class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1)
            return 1;
        int read = 0, write = 0;
        while (read < chars.size()) {
            char currentChar = chars[read];
            int count = 0;

            while (read < chars.size() && chars[read] == currentChar) {
                read++;
                count++;
            }

            chars[write++] = currentChar;

            if (count > 1) {
                string c = to_string(count);
                for (char it : c) {
                    chars[write++] = it;
                }
            }
        }
        return write;
    }
};