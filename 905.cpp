#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int j = 0;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 == 0) {
                swap(A[i], A[j]);
                j++;
            }
        }
        return A;
    }
};

int main() {
    Solution s;
    vector<int> A = {3, 1, 2, 4};

    vector<int> result = s.sortArrayByParity(A);

    cout << "Array after sorting by parity: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
