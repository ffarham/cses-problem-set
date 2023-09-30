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
 * 2's are abundant, so just need to count the 5's.
*/

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    lli n;
    cin >> n;

    lli count = 0;

    // iterating through each power incrementaly allows us to count all 5's across all powers
    for (int i = 5; n/i >= 1; i *= 5){
        count += n/i;
    }

    cout << count  << '\n';

    return 0;
}