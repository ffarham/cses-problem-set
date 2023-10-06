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

vector<string> get_gray_codes(int n){
    n--;
    vector<string> output = {"0", "1"};
    while(n > 0){

        for (int i = output.size()-1; i >= 0; i--){
            output.push_back(output[i]);
        }

        const int mid = output.size()/2;
        for (int i = 0; i < mid; i++){
            output[i] = "0" + output[i];
        }
        for (int i = mid; i < output.size(); i++){
            output[i] = "1" + output[i];
        }
        n--;
    }
    return output;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    const bool is_odd = (n%2 != 0);
    const vector<string> gray_codes = get_gray_codes(n);

    cout << gray_codes.size()-1 << '\n';

    unordered_map<int,int> hashmap;
    for (int i = 1; i <= n; i++){
        hashmap[i] = 0;
    }

    string curr = gray_codes[0];
    int disk;
    for (int i = 1; i < gray_codes.size(); i++){
        for (int j = 0; j < curr.size(); j++){
            if (curr[j] != gray_codes[i][j]){
                disk = n-j;
                break;
            }
        }
        if (disk == 1){
            if (is_odd) {
                cout << hashmap[1]+1 << " ";
                hashmap[1] = (hashmap[1]+2) % 3; // 2 comes from number of towers - 1; allows us to reverse using modulo
                cout << hashmap[1]+1 << '\n';
            } else {
                cout << hashmap[1]+1 << " ";
                hashmap[1] = (hashmap[1] + 1) % 3;
                cout << hashmap[1]+1 << '\n';
            }
        } else{
            int move_to = 6;
            move_to -= (hashmap[1]+1); // it wont move to where the smallest disk is
            move_to -= (hashmap[disk]+1); // it wont move to its current location
            cout << hashmap[disk]+1 << " " << move_to << '\n';
            hashmap[disk] = move_to-1;
        }
        curr = gray_codes[i];
    }

    return 0;
}