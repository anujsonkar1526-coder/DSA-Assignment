#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int n;
    if (!(cin >> n)) return 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (n == 1) {
        cout << 0 << "\n";
        return 0;
    }

    vector<int> dp(n);
    dp[0] = 0;
    dp[1] = abs(v[1] - v[0]);

    for (int i = 2; i < n; i++) {
        int one = dp[i - 1] + abs(v[i] - v[i - 1]);
        int two = dp[i - 2] + abs(v[i] - v[i - 2]);
        
        dp[i] = min(one, two);
    }

    cout << dp[n - 1] << "\n";
    return 0;
}


#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> dp(n); 
    dp[0] = 0; 

    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                int cost = dp[i - j] + abs(v[i] - v[i - j]);
                dp[i] = min(dp[i], cost);
            } else {
                break; 
            }
        }
    }

    cout << dp[n - 1] << "\n";
    return 0;
}