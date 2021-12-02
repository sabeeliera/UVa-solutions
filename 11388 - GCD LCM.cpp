#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[])
{
    cin.tie(0); cout.tie(0); ios::sync_with_stdio(false);  
    
    int T, G, L;
    
    cin >> T;
    for (int c = 1; c <= T; c++)
    {
        cin >> G >> L;
        if (L % G == 0) cout << G << ' ' << L << '\n';
        else cout << "-1\n";
    }
    
    return 0;
}
