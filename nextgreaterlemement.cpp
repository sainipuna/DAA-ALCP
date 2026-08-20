#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    int result[100];
    int stack[100];
    int top = -1;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        result[i] = -1;
    }

    for (int i = n - 1; i >= 0; i--) {

      
        while (top != -1 && arr[stack[top]] <= arr[i]) {
            top--;
        }

        if (top != -1) {
            result[i] = arr[stack[top]];
        }
        top++;
        stack[top] = i;
    }

    cout << "Next Greater Elements: ";

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}

