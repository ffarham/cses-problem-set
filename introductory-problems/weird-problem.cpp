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

void solve(ll n){
    if (n == 1){
        cout << n << '\n';
        return;
    }

    cout << n << ' ';
    if (n%2 == 0){
        n /= 2;
    } else {
        n = (n*3) + 1;
    }
    return solve(n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    solve(n);
}