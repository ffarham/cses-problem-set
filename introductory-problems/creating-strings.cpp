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
#include <set>
#include <stack>
#include <cmath>
#include <stdint.h>

using namespace std;

#define lli long long int
#define pb push_back
#define mp make_pair

set<string> store;

void permute(string prefix, string suffix){
    if (suffix == ""){
        store.insert(prefix);
    } else {
        for(int i = 0; i < suffix.size(); i++){
            permute(prefix + suffix[i], suffix.substr(0,i) + suffix.substr(i+1,suffix.size()));
        }

    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    permute("", s);

    cout << store.size() << '\n';
    for (auto& item : store){
        cout << item << '\n';
    }

    return 0;
}