#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(int arr[], int n) {
   unordered_set<int> numSet; 
    for (int i = 0; i < n; i++) {
        numSet.insert(arr[i]);
    }
    int longest = 0;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
                if (numSet.find(x - 1) == numSet.end()) {
            int length = 1;
            while (numSet.find(x + length) != numSet.end()) {
                length++;
            }
            longest = max(longest, length);
        }
    }
    return longest;
}
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Longest consecutive sequence length: "
         << longestConsecutive(arr, n) << endl;

    return 0;
}
