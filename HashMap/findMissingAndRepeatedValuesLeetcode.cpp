class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int missing = 0, repeated = 0;
        int start = 1;
        int size = grid.size() * grid[0].size();

        unordered_map<int, int> seen;

        // Traverse the grid and record occurrences
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                seen[grid[i][j]]++; // Count occurrences of each number
            }
        }

        // Identify missing and repeated values
        while (start <= size) {
            if (seen.find(start) == seen.end()) {
                missing = start; // If the number isn't found in the map, it's missing
            } else if (seen[start] > 1) {
                repeated = start; // If the number appears more than once, it's repeated
            }
            start++;
        }

        // Return the result as a vector
        return {repeated, missing};
    }
};
