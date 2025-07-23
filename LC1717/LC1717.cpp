class Solution {
    int modify(string pattern, string &s, const int &points) {
        int n = s.size();
        if (n < 2) return 0;

        string new_s;
        int total = 0;

        for (char ch : s) {
            if (!new_s.empty() && new_s.back() == pattern[0] && ch == pattern[1]) {
                new_s.pop_back();
                total += points;
            } else {
                new_s.push_back(ch);
            }
        }

        s = new_s;
        return total;
    }

public:
    int maximumGain(string s, int x, int y) {
        int points = 0;
        string copy_s = s;

        if (x > y) {
            points += modify("ab", copy_s, x);
            points += modify("ba", copy_s, y);
        } else {
            points += modify("ba", copy_s, y);
            points += modify("ab", copy_s, x);
        }

        return points;
    }
};
