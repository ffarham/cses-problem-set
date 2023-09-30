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

    ll sum = 0;
    int num;
    for (int i = 0; i < n-1; i++){
        cin >> num;
        sum += num;
    }
    ll expected_sum = ((ll) n * ((ll) n+1))/2;

    cout << expected_sum - sum << '\n';
}