class Solution {
public:
    string addBinary(string a, string b) {

        int n = a.size();
        int m = b.size();
        int carry = 0;
        string ans;

        while (m > 0 && n > 0) {

            int sum = (a[n-1] - '0') + (b[m-1] - '0') + carry;

            ans.push_back((sum % 2) + '0');
            carry = sum / 2;

            m--;
            n--;
        }

        while (m > 0) {

            int sum = (b[m-1] - '0') + carry;

            ans.push_back((sum % 2) + '0');
            carry = sum / 2;

            m--;
        }

        while (n > 0) {

            int sum = (a[n-1] - '0') + carry;

            ans.push_back((sum % 2) + '0');
            carry = sum / 2;

            n--;
        }

        if (carry) {
            ans.push_back('1');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};