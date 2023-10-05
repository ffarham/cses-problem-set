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

    string str;
    getline(cin, str);

    const int n = str.size();
    const bool is_odd = (n%2 == 0);

    unordered_map<char, int> hashmap;
    for (char& c : str){
        if (hashmap.find(c) == hashmap.end()) hashmap[c] = 0;
        hashmap[c] += 1;
    }

    string output;
    bool found_odd = false;
    char odd_char;
    for (auto& item : hashmap){
        if (item.second % 2 == 0){
            for (int i = 0; i < item.second/2; i++){
                output += item.first;
            }
        } else {
            if (found_odd){
                cout << "NO SOLUTION";
                return 0;
            } else {
                found_odd = true;
                odd_char = item.first;
                if (item.second > 1){
                    for (int i=0; i< (item.second-1)/2; i++){
                        output += item.first;
                    }
                }
            }
        }
    }
    if (found_odd) output += odd_char;

    for (int i = output.size()- (found_odd ? 2 : 1); i >= 0; i--){
        output += output[i];
    }

    cout << output << '\n';

    return 0;
}