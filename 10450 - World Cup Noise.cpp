#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    cin.tie(0), cout.tie(0), ios::sync_with_stdio(false);

    long long fibonacci[51] = {1, 2, 3};
    for (int i = 3; i <= 50; i++)
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

    int cases, n;
    cin >> cases;
    for (int c = 1; c <= cases; c++)
    {
        cin >> n;
        cout << "Scenario #" << c << ":\n";
        cout << fibonacci[n] << '\n';
        cout << '\n';
    }

    return 0;
}
