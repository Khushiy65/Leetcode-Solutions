class Solution {
public:
    int factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorial(n - 1);
    }

    bool isDigitorialPermutation(int n) {
        int original = n;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += factorial(digit);
            n /= 10;
        }

        vector<int> a, b;

        while (original > 0) {
            a.push_back(original % 10);
            original /= 10;
        }

        while (sum > 0) {
            b.push_back(sum % 10);
            sum /= 10;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        return a == b;
    }
};