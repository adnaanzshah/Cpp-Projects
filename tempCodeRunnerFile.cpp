#include <iostream>
using namespace std;

class Solution {
public:
    int my_sqrt(int x) {
        if (x < 0) {
            return -1; // Return -1 for negative input
        }
        if (x == 0 || x == 1) {
            return x; // Return x for 0 or 1
        }

        int start = 1, end = x, ans = 0;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (mid * mid == x) {
                return mid; // Exact square root found
            }
            if (mid * mid < x) {
                start = mid + 1;
                ans = mid; // Update answer when mid*mid < x
            } else {
                end = mid - 1;
            }
        }
        return ans; // Return the floor of the square root
    }
};

int main() {
    Solution s;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = s.my_sqrt(num);
    cout << "Square root: " << result << endl;
    return 0;
}