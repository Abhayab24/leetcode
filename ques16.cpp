#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int closest = nums[0] + nums[1] + nums[2];
    
    for (int i = 0; i < nums.size() ; i++) {
        int left = i + 1, right = nums.size() - 1;
        while (left < right) {
            int currSum = nums[i] + nums[left] + nums[right];
            if (abs(currSum - target) < abs(closest - target)) {
                closest = currSum;
            }

            if (currSum < target)
                left++;
            else
                right--;
        }
    }

    return closest;
}

int main() {
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    int result = threeSumClosest(nums, target);
    cout << "Closest sum to " << target << " is " << result << endl;

    return 0;
}//getting a comment
