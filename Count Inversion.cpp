#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout<<"Enter n value:";
    cin >> n;
    int a[n];
    cout<<"Enter values:";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
                count++;
        }
    }
    cout << "Number of Inversions = " << count;
    return 0;
}
