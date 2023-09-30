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

    string seq;
    getline(cin, seq);
    

    char prev = seq[0];
    int cc = 1;
    int mc = cc;

    for (int i = 1; i < seq.size(); i++ ){
        if (seq[i] == prev) ++cc;
        else 
        {
            prev = seq[i];
            mc = max(mc, cc);
            cc = 1;
        }
    }

    cout << max(mc, cc) << '\n';

    return 0;

}