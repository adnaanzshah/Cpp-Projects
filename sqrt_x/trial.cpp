#include <iostream>
#include <iomanip> // For setting precision
using namespace std;

class Solution {
public:
    double my_sqrt(int x) {
        if (x < 0) {
            return -1; // Return -1 for negative input
        }
        if (x == 0 || x == 1) {
            return x; // Return x for 0 or 1
        }

        double start = 0, end = x, ans = 0;
        double precision = 0.00001; // Define the precision level

        while ((end - start) > precision) {
            double mid = start + (end - start) / 2;
            if (mid * mid == x) {
                return mid; // Exact square root found
            }
            if (mid * mid < x) {
                start = mid;
                ans = mid; // Update answer when mid*mid < x
            } else {
                end = mid;
            }
        }
        return ans; // Return the approximate square root
    }
};

int main() {
    Solution s;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    double result = s.my_sqrt(num);
    cout << fixed << setprecision(5); // Set precision for output
    cout << "Square root: " << result << endl;
    return 0;
}