// Problem link: https://codeforces.com/problemset/problem/1972/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int tc, n;

    cin >> tc;

    for (int i = 0; i < tc; i++){
        vector<int> a, b;
        int n, num, out = -1;

        cin >> n;

        for (int j = 0; j < n; j++){
            cin >> num;
            a.push_back(num);
        }

        for (int j = 0; j < n; j++){
            cin >> num;
            b.push_back(num);
        }

        for (int i = 0; i < n; i++){
            int shift = (lower_bound(b.begin(), b.end(), a[i]) - b.begin());
            shift = shift - i;
            out = max(shift, out);
        }
        cout << out << endl;
    }

    return 0;
}