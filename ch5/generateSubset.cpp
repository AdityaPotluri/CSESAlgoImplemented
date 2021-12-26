#include<bits/stdc++.h>

using namespace std;

void generateSubset(int R, int N, vector<int> subset) {
    if(R == N) {
        for(int i : subset) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        generateSubset(R + 1, N, subset);
        subset.push_back(R);
        generateSubset(R + 1, N , subset);
        subset.pop_back();
    }
}

int main() {
    generateSubset(0, 3, {});
}