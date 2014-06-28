// Given a non-negative number represented as an array of digits, plus one to the number.

// The digits are stored such that the most significant digit is at the head of the list.

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        vector<int> res(digits.rbegin(), digits.rend());
        int carry = 1;
        for(int i = 0; i < res.size(); ++i) {
            int sum = res[i]+carry;
            res[i] = sum%10;
            carry = sum/10;
            if(carry == 0) break;
        }
        if(carry) res.push_back(1);
        reverse(res.begin(), res.end());
        return res;
    }
};
