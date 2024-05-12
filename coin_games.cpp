// Problem link: https://codeforces.com/problemset/problem/1972/B

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, ups = 0;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            char ch;

            cin >> ch;
            if (ch == 'U')
                ups += 1;
        }
        if (ups % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}