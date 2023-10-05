/**
 * Farham Ahmad
 * References: https://en.wikipedia.org/wiki/Gray_code
 * 
 * Gray code is useful because physical switches don't always synchronously switch states. Thus a binary code
 * can be in various false states in transition to the new state. For example, 011 -> 001 -> 101 -> 100. The 
 * false state can be stored in the sequential system via combinatorial logic.
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

    vector<string> output;
    output.push_back("0");
    output.push_back("1");

    for (int i = 1; i < n; i++){
        // reflect
        for (int j = output.size()-1; j>=0; j--) output.push_back(output[j]);

        // add prefix
        const int mid = output.size()/2;
        for (int j = 0; j < mid; j++) output[j] = "0" + output[j];
        for (int j = mid; j < output.size(); j++) output[j] = "1" + output[j];
    }

    for (auto& str : output){
        cout << str << '\n';
    }

    return 0;
}