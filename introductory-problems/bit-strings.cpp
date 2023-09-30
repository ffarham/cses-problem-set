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

/**
 * Using the fact that (x*y) mod z = ((x mod z) * (y mod z)) mod z
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    const lli den = 1e9 + 7;

    int output = 2;
    for(int i = 1; i < n; i++){
        output = (2*output) % den;
    }

    cout << output % den << '\n';

    return 0;
}