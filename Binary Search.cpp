#include <iostream>
using namespace std;
int binarySearch(int a[], int x, int low, int high)
{
    if (low > high)
        return -1;
    else
    {
        int mid = (low + high) / 2;
        if (x == a[mid])
            return mid;
        else if (x > a[mid])
            return binarySearch(a, x, mid + 1, high);
        else
            return binarySearch(a, x, low, mid - 1);
    }
}
int main()
{
    int n, x;
    cout<<"Enter n value:";
    cin >> n;
    int a[n];
    cout<<"Enter values";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout<<"Enter num to be search";
    cin >> x;
    int pos = binarySearch(a, x, 0, n - 1);
    if (pos == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << pos;
    return 0;
}
