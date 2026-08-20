#include <iostream>
using namespace std;
void MaxMin(int a[], int i, int j, int &max, int &min)
{
    int mid, max1, min1;
    if (i == j)
    {
        max = min = a[i];
    }
    else if (i == j - 1)
    {
        if (a[i] < a[j])
        {
            max = a[j];
            min = a[i];
        }
        else
        {
            max = a[i];
            min = a[j];
        }
    }
    else
    {
        mid = (i + j) / 2;
        MaxMin(a, i, mid, max, min);
        MaxMin(a, mid + 1, j, max1, min1);
        if (max < max1)
            max = max1;
        if (min > min1)
            min = min1;
    }
}
int main()
{
    int n;
    cout<<"Enter n value:";
    cin >> n;
    int a[n];
    cout<<"Enter values:";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int max, min;
    MaxMin(a, 0, n - 1, max, min);
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min;
    return 0;
}
