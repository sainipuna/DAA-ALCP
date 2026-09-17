#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    string words[100];
    cout << "Enter " << n << " words: ";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    unordered_map<string, int> mp;
    string groups[100][100];
    int groupCount = 0;
    int groupSize[100] = {0};
    for (int i = 0; i < n; i++) {
        string key = words[i];
        sort(key.begin(), key.end());
        if (mp.find(key) == mp.end()) {
            mp[key] = groupCount;
            groups[groupCount][0] = words[i];
            groupSize[groupCount]++;

            groupCount++;
        }
        else {
            int index = mp[key];
            groups[index][groupSize[index]] = words[i];
            groupSize[index]++;
        }
    }
    cout << "\nAnagram groups:\n";
    for (int i = 0; i < groupCount; i++) {
        cout << "[ ";
        for (int j = 0; j < groupSize[i]; j++) {
            cout << groups[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}
