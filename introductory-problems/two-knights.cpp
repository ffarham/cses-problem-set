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

    lli prev = 0;
    for (int k = 1; k <= n; k++){
        if (k == 1){
            cout << prev << '\n';
            continue;
        }
        const lli max_space = (k * k) - 1;
        const int max_len = k + k - 1;
        lli curr = (max_len * max_space) - ((max_len * (max_len-1))/2);
        if (k == 3){
            curr -= max_len * 2;
            curr += 2;  // add duplicates
        } else if (k == 4){
            curr -= 2 * 3; // corners
            curr -= 3 * 4; // next to corners
            curr += 2; // discount duplicates
        } else {
            curr -= 2 * 3; // corners
            curr -= 3 * 4; // next to corners
            curr -= (k-4) * 2 * 4; // flats
            curr += 2; // discount duplicates
        }

        prev += curr;
        cout << prev << '\n';
        
    }

    return 0;
}