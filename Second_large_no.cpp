#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getSecondLargest(vector<int> &arr) {
        int n = arr.size();
        if (n < 2) return -1;

        int large = -1;
        int second_large = -1;

        for (int i = 0; i < n; i++) {
            if (arr[i] > large) {
                second_large = large;
                large = arr[i];
            }
            else if (arr[i] < large && arr[i] > second_large) {
                second_large = arr[i];
            }
        }

        return second_large;
    }
};

int main() {
    vector<int> arr = {1, 5, 7, 3, 9};
    Solution obj;
    cout << obj.getSecondLargest(arr);
    return 0;
}
