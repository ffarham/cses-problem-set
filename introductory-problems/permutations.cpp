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

    if (n == 1){
        cout << 1 << '\n';
        return 0;
    } 
    if (n < 4){
        cout << "NO SOLUTION\n";
        return 0;
    }
    for (int i = 2; i <= n; i+=2){
        cout << i << ' ';
    }

    for (int i = 1; i <= n; i+=2){
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}