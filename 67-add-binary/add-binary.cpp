class Solution {
public:
    string addBinary(string a, string b) {

        int i = a.size()-1, j = b.size()-1, carry = 0;

        string ans;

        while(carry || i >= 0 || j >= 0) {

            int sum = 0;

            if(i >= 0) sum += (a[i]-'0');
            if(j >= 0) sum += (b[j]-'0');

            --i;
            --j;

            sum += carry;

            if(sum > 1) carry = 1;
            else carry = 0;

            ans.push_back(sum & 1 ? '1' : '0');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};