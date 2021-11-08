#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-1, 4, -1, 5, 7, -3, -2};
    int max_sum = INT_MIN;
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 1; j < n; j++)
        {
            if (i + j <= n)
            {
                sum += arr[i + j - 1];
            }
            max_sum = max(sum, max_sum);
        }
    }
    cout << max_sum << endl;
}
