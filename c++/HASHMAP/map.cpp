#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter" << n << " digits";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    int q = 5;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }

    return 0;
}