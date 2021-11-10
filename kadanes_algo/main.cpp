#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    int cs = 0;
    int ms = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + (cs) > 0)
        {
            cs += arr[i];
        }
        else
        {
            cs = 0;
        }
        ms = max(cs, ms);
        cout << ms << "," << cs << endl;
    }
    cout << "--------" << endl;
    cout << ms << endl;
    return 0;
}