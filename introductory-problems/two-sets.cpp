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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int lptr = 1;
    int rptr = n;

    const int temp = n / 2;
    if (n % 2 == 0){
        if (temp % 2 == 0) {
            cout << "YES\n";

            int len = n / 2;
            cout << len << '\n';
            for(int i = 0; i < len; i+=2){
                cout << lptr++ << ' ' << rptr-- << ' ';
            }
            cout << '\n' << len << '\n';
            for(int i = 0; i < len; i+=2){
                cout << lptr++ << ' ' << rptr-- << ' ';
            }
            cout << '\n';
        }
        else cout << "NO\n";
    } else {
        const int temp = (n-1) / 2;
        if (temp % 2 == 1) {
            cout << "YES\n";

            const int len = (n-1)/2;
            cout << len << '\n';
            cout << n << ' ';
            int lptr = 1;
            int rptr = n-1;
            for (int i = 0; i < len-1; i+=2){
                cout << lptr++ << ' ' << rptr-- << ' ';
            }
            cout << '\n' << len+1 << '\n';
            for (int i = 0; i < len; i+=2){
                cout << lptr++ << ' ' << rptr-- << ' ';
            }
            cout << '\n';
        }
        else cout << "NO\n";
    }

    return 0;
}