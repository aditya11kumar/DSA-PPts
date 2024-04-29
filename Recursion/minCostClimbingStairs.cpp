#include <bits/stdc++.h>
using namespace std;

int solve(int n, vector<int>& cost) {
    if (n == 0) return cost[0];
    if (n == 1) return cost[1];
    
    return min(solve(n - 1, cost), solve(n - 2, cost)) + cost[n];
}

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    
    return min(solve(n - 1, cost), solve(n - 2, cost));
}

int main() {
    int n;
    cout << "Enter the number of steps: ";
    cin >> n;

    vector<int> cost(n);
    cout << "Enter the cost for each step: ";
    for(int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    int ans = minCostClimbingStairs(cost);
    cout << "Minimum cost of climbing stairs: " << ans << endl;

    return 0;
}
