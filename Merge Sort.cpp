#include <iostream>
using namespace std;
void Merge(int a[],int low, int mid, int high,int &count)
{
    int i = low;
	int j=mid+1;
	int k=low;
	int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            count=count+(mid-i+1);
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        for (int x = j; x <= high; x++)
        {
            b[k] = a[x];
            k++;
        }
    }
    else
    {
        for (int x = i; x <= mid; x++)
        {
            b[k] = a[x];
            k++;
        }
    }
    for (int x = low; x <= high; x++)
        a[x] = b[x];
}
void MergeSort(int a[],int low, int high,int &count)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        MergeSort(a,low, mid,count);
        MergeSort(a,mid + 1, high,count);
        Merge(a,low, mid, high,count);
    }
}
int main()
{
    int n,count=0;
    int a[100];
    cout<<"Enter n value";
    cin >> n;
	cout<<"Enter values";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    MergeSort(a,0, n - 1,count);
    cout<<"Sorted Array:"<<endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout<<endl<<"No of inversions:"<<count;
    return 0;
}
