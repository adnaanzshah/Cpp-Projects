#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int> &nums,int target){
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
int main(){

    cout << endl;
    Solution s;
    // vector<int> a={2,4,5,6};
    // int t=6;
    vector<int> v=s.twoSum(a,t);
    for (int i : v) {
        cout << i << " ";
    }
    return 0;
}