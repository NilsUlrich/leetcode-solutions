#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (map.find(complement) != map.end())
            {
                return vector<int>{map[complement], i};
            }
            map[nums[i]] = i;
        }
        throw invalid_argument("No two sum solution");
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {2, 7, 11, 15};
    int target1 = 9;
    vector<int> result1 = solution.twoSum(nums1, target1);
    cout << "Output: [" << result1[0] << "," << result1[1] << "]" << endl;

    return 0;
}