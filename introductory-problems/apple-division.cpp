/**
 * Farham Ahmad
 * 
 * Notes: It is an NP-hard problem that has a (1-1/e)-approximation via a greedy solution.
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
#include <climits>

using namespace std;

#define lli long long int
#define pb push_back
#define mp make_pair

lli output = LONG_MAX;

lli sum(vector<int> arr){
    lli output = 0;
    for(int& n : arr) output += n;
    return output;
}

void subset(vector<int> curr, vector<int> a, vector<int> b){
    if (curr.size() == 0) {
        output = min(output, abs(sum(a) - sum(b)));
        return;
    }

    int value = curr.back();
    curr.pop_back();

    a.pb(value);
    subset(curr, a, b);

    a.pop_back();
    b.pb(value);
    subset(curr, a, b);

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> weights;
    for (int i =0 ; i< n; i++){
        int w;
        cin >> w;
        weights.pb(w);
    }

    subset(weights, {}, {});

    cout << output << '\n';

    return 0;
}