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

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    ll prev;
    cin >> prev;

    ll output = 0;

    for (int i = 0; i < n-1; i++){
        ll curr;
        cin >> curr;

        if (curr < prev) {
            output += (prev-curr);
        } else {
            prev = curr;
        }

    }

    cout << output << '\n';

    return 0;
}