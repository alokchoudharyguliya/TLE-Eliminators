// Memoization map to store longest sequence length for (i, last_value_index)
unordered_map<int, unordered_map<int, int>> memo;

// Recursive function with memoization to calculate the longest investment sequence ending at day `i`
int max_invest_length(int i, int last_value_index, const vector<int>& A, int N, int D) {
    // If we are at the last day, check if we can include it
    if (i == N - 1) {
        if (last_value_index == -1 || A[i] > A[last_value_index]) {
            return 1; // Last day included in sequence
        } else {
            return 0; // Last day cannot be included
        }
    }

    // If the result is already computed for (i, last_value_index), return it
    if (memo[i].count(last_value_index)) {
        return memo[i][last_value_index];
    }

    // Option 1: Exclude day `i`
    int exclude = max_invest_length(i + 1, last_value_index, A, N, D);

    // Option 2: Include day `i` if it meets the conditions
    int include = 0;
    if (last_value_index == -1 || (A[i] > A[last_value_index] && (i - last_value_index) <= D)) {
        include = 1 + max_invest_length(i + 1, i, A, N, D);
    }

    // Store the result in memo and return the maximum of include and exclude
    memo[i][last_value_index] = max(include, exclude);
    return memo[i][last_value_index];
}

int invest(int N, int D, const vector<int>& A) {
    // Start from day 0 with an invalid last_value_index of -1 (indicating no prior investment)
    return max_invest_length(0, -1, A, N, D);
}







#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

// Memoization map to store longest sequence length for (i, last_value_index)
unordered_map<int, unordered_map<int, int>> memo;

// Recursive function with memoization to calculate the longest investment sequence ending at day `i`
int max_invest_length(int i, int last_value_index, const vector<int>& A, int N, int D) {
    // If we are at the last day, check if we can include it
    if (i == N - 1) {
        if (last_value_index == -1 || A[i] > A[last_value_index]) {
            return 1; // Last day included in sequence
        } else {
            return 0; // Last day cannot be included
        }
    }

    // If the result is already computed for (i, last_value_index), return it
    if (memo[i].count(last_value_index)) {
        return memo[i][last_value_index];
    }

    // Option 1: Exclude day `i`
    int exclude = max_invest_length(i + 1, last_value_index, A, N, D);

    // Option 2: Include day `i` if it meets the conditions
    int include = 0;
    if (last_value_index == -1 || (A[i] > A[last_value_index] && (i - last_value_index) <= D)) {
        include = 1 + max_invest_length(i + 1, i, A, N, D);
    }

    // Store the result in memo and return the maximum of include and exclude
    memo[i][last_value_index] = max(include, exclude);
    return memo[i][last_value_index];
}

int invest(int N, int D, const vector<int>& A) {
    // Handle the empty array case
    if (N == 0) {
        return 0;
    }

    // Clear the memoization map to avoid any residual data from previous calls
    memo.clear();

    // Start from day 0 with an invalid last_value_index of -1 (indicating no prior investment)
    return max_invest_length(0, -1, A, N, D);
}

int main() {
    // Example inputs as provided in the images
    vector<int> A1 = {1, 30, 40, 20};
    cout << "Output for Test Case 1: " << invest(5, 2, A1) << endl;

    vector<int> A2 = {100, 200, 100, 100, 300};
    cout << "Output for Test Case 2: " << invest(5, 2, A2) << endl;

    vector<int> A3 = {200, 300, 500, 500, 600, 300, 500};
    cout << "Output for Test Case 3: " << invest(7, 3, A3) << endl;

    // Test case with an empty array
    vector<int> A4 = {};
    cout << "Output for Empty Array Test Case: " << invest(0, 2, A4) << endl;

    return 0;
}
