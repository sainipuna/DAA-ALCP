#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter number of activities: ";
    cin >> n;

    int start[100], finish[100];

    cout << "Enter start and finish time of each activity:\n";

    for (int i = 0; i < n; i++) {
        cin >> start[i] >> finish[i];
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                
                int temp = finish[i];
                finish[i] = finish[j];
                finish[j] = temp;

              
                temp = start[i];
                start[i] = start[j];
                start[j] = temp;
            }
        }
    }

    
    int selectedStart[100], selectedFinish[100];
    int count = 0;

    selectedStart[count] = start[0];
    selectedFinish[count] = finish[0];
    count++;

    int lastFinish = finish[0];

   
    for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            selectedStart[count] = start[i];
            selectedFinish[count] = finish[i];

            count++;
            lastFinish = finish[i];
        }
    }

    cout << "\nMaximum number of activities that can be performed: "
         << count << "\n";

    cout << "Selected Activities (start, finish):\n";

    for (int i = 0; i < count; i++) {
        cout << "(" << selectedStart[i]
             << ", " << selectedFinish[i] << ")\n";
    }

    return 0;
}

