/**
 * Farham Ahmad
*/

#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <cmath>
#include <stdint.h>

using namespace std;

#define lli long long int
#define pb push_back
#define mp make_pair

const int q = 8;

bool collision(int x, int y, vector<pair<int,int>>& placements){

    for (auto& plac : placements){

        // if collision on vertical straight
        if (y == plac.second) return true;

        // if collision on diagonal
        if (abs(y - plac.second) == abs(x - plac.first)) return true;
    }

    return false;

}

bool is_free(set<pair<int,int>>& reserved, int x, int y){
    auto value = reserved.find({x,y});
    return value == reserved.end();
}

int backtrack(set<pair<int,int>>& reserved, int row, vector<pair<int,int>> placements){
    if (row == q) return 1;

    int output = 0;

    for (int col = 0; col < q; col++){

        if (!is_free(reserved, row, col) || collision(row, col, placements)) continue;

        placements.pb({row,col});
        output += backtrack(reserved, row+1, placements);
        placements.pop_back();
    }

    return output;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<pair<int,int>> store;
    for (int i = 0; i < q; i++){
        for (int j = 0; j < q; j++){

            char c;
            cin >> c;

            if (c == '*') store.insert({i,j});
        }
    }

    int value = backtrack(store, 0, {});

    cout << value << '\n';

    return 0;
}