#include<bits/stdc++.h>
using namespace std;
int coinChange(int coins[], int n, int amount) {
    int dp[1000];
    for (int i = 0; i <= amount; i++) {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            int c = coins[j];
            if (c <= i && dp[i - c] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    if (dp[amount] == INT_MAX)
        return -1;
    return dp[amount];
}
int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    int coins[100];
    cout << "Enter coins: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter target amount: ";
    cin >> amount;
    int result = coinChange(coins, n, amount);
    if (result == -1)
        cout << "It is not possible." << endl;
    else
        cout << "Minimum coins needed: " << result << endl;
    return 0;
}
