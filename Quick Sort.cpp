#include <iostream>
using namespace std;
void interchange(int a[],int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int Partition(int a[],int l, int h)
{
    int pivot = a[l];
    int i = l;
    int j = h + 1;
    while (i < j)
    {
        do
        {
            i++;
        } while (i <= h && a[i] < pivot);
        do
        {
            j--;
        } while (a[j] > pivot);
        if (i < j)
            interchange(a,i, j);
    }
    interchange(a,l, j);
    return j;
}
void QuickSort(int a[],int low, int high)
{
    if (low < high)
    {
        int j = Partition(a,low, high);
        QuickSort(a,low, j - 1);
        QuickSort(a,j + 1, high);
    }
}

int main()
{
    int n;
    int a[100];
    cout<<"Enter n value";
    cin >> n;
	cout<<"Enter values:";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    QuickSort(a,0, n - 1);
    cout<<"Sorted Array:";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
