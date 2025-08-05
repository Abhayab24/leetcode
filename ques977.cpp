//this is STL method

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// vector<int> sortedsquares(vector<int>& nums)
// {
//     vector<int> store;
//     for (int i = 0; i < (int)nums.size(); i++) {
//         store.push_back(nums[i] * nums[i]);
//     }
//     sort(store.begin(), store.end()); // fixed .end()
//     return store;
// }

// int main()
// {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     vector<int> nums(n);
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> nums[i];
//     }

//     vector<int> result = sortedsquares(nums);

//     cout << "Sorted squares: ";
//     for (int x : result) {
//         cout << x << " ";
//     }
//     cout << endl;

//     return 0;
// }




//Two pointer Approach
#include <iostream>
#include <vector>
#include <cmath> // for abs
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> store(n); 
    int left = 0, right = n - 1;
    int pos = n - 1;

    while (left <= right) {
     

        if (abs(nums[left]) > abs(nums[right])) {
            store[pos] = nums[left] * nums[left];
          
            left++;
        } else {
            store[pos] = nums[right] * nums[right];

            right--;
        }
        pos--;

       
    }
    return store;
}

int main() {
    int n;

    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> result = sortedSquares(nums);

    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
