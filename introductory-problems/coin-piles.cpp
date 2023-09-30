/**
 * Farham Ahmad
*/

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <cmath>
#include <stdint.h>

using namespace std;

#define lli long long int
#define pb push_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        lli a, b;
        cin >> a >> b;

        if (a == b){
            if (a%3 == 0) cout << "YES\n";
            else cout <<"NO\n";
        } else {
            const lli maxV = max(a,b);
            const lli minV = min(a,b);

            if ( maxV > 2 * minV ) {
                cout << "NO\n";
            } else if (maxV == 2 * minV) {
                cout << "YES\n";
            } else {
                const lli sumV = a + b;
                if (sumV%3 == 0) cout << "YES\n";
                else cout << "NO\n";
            }
        }
    }

    return 0;
}