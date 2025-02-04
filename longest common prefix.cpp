#include <iostream>
#include <vector>
#include <algorithm>  // For sorting

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";  // Edge case: empty list

    // Step 2: Sort the array
    sort(strs.begin(), strs.end());

    // Step 3: Compare the first and last string
    string first = strs[0], last = strs[strs.size() - 1];
    int i = 0;

    while (i < first.size() && i < last.size() && first[i] == last[i]) {
        i++;
    }

    // Step 4: Return the prefix substring
    return first.substr(0, i);
}

int main() {
    vector<string> words = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(words) << endl;
    return 0;
}

/*Dry Run (Example Execution)
Input:
vector<string> words = {"flower", "flow", "flight"};
Step 1: Sorting
Before Sorting: ["flower", "flow", "flight"]
After Sorting:  ["flight", "flow", "flower"]
The first string: "flight"
The last string: "flower"
Step 2: Finding Common Prefix
Compare "flight" and "flower" character by character:
'f' == 'f' ?
'l' == 'l' ?
'i' != 'o' ? (Mismatch)
Common prefix = "fl"
Output:
Longest Common Prefix: fl
Time and Space Complexity Analysis
Operation	Complexity
Sorting the array	O(N log N)
Finding common prefix	O(M)
Overall Complexity	O(N log N + M)
N
N = Number of strings in the list.
M
M = Length of the shortest string in the list.
Space Complexity:
O(1) (only a few extra variables, no extra data structures used)
Edge Cases Considered
Test Case	Output	Explanation
["flower", "flow", "flight"]	"fl"	"fl" is common in all
["dog", "racecar", "car"]	""	No common prefix
["apple", "apricot", "ap"]	"ap"	"ap" is common
["same", "same", "same"]	"same"	All are identical
[""]	""	Empty string case
[]	""	Empty list case
Why Does Sorting Help?
Sorting ensures that similar prefixes are adjacent, reducing unnecessary comparisons. Instead of checking all strings, we only compare the first and last strings.

Alternative Approaches
Vertical Scanning (Character-by-Character Check)
Compare each character column-wise across all strings.
Time Complexity: O(N * M) (better for small inputs).
Using a Trie (Prefix Tree)
Insert all words into a Trie and traverse until a mismatch.
Time Complexity: O(N * M) (efficient for large datasets).
Would you like me to implement one of these approaches? ??*/
