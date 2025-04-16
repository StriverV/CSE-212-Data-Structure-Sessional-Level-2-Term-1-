 /*#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arraySize;
    cin >> arraySize;

    int arr[arraySize];
    for (int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    cout << "Enter item to search: ";
    int target;
    cin >> target;

    int left = 0, right = arraySize - 1;
    int lastOccurrence = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            lastOccurrence = mid;
            left = mid + 1; // Searching for a better occurrence
        }
        else if (target < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (lastOccurrence != -1)
        cout << "Item found at index: " << lastOccurrence << " (Successful)" << endl;
    else
        cout << "Item not found (Unsuccessful)" << endl;

    return 0;
}
*/



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Enter item : ";
    int x;
    cin >> x;

    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            // ans paisi
            ans = mid;
            l = mid + 1; // better ans khoja
        }
        else if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (ans != -1)
        cout << ans << "Successful" << endl;
    else
        cout << "Unsuccessful" << endl;
    return 0;
}
