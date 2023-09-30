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
#define ulli uint64_t
#define pb push_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        ulli x, y;
        cin >> x >> y;

        ulli p;
        if (x >= y){
            if (x % 2 == 0){
                p = x * x;
                p -= y - 1;
            } else {
                p = (x-1) * (x-1);
                p += y;
            }
            cout << p << '\n';
        } else {
            if (y % 2 != 0){
                p = y * y;
                p -= x - 1;
            } else {
                p = (y-1) * (y-1);
                p += x;
            }
            cout << p << '\n';
        }
    }

    return 0;
}