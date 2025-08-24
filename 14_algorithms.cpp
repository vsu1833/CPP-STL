#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    cout << "=== STL ALGORITHMS EXAMPLES ===" << endl;
    
    vector<int> nums = {5, 2, 8, 1, 9, 3};
    
    cout << "Original vector: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Sorting algorithms
    cout << "\n=== SORTING ===" << endl;
    
    // sort() - sort in ascending order
    vector<int> sorted_nums = nums;
    sort(sorted_nums.begin(), sorted_nums.end());
    cout << "After sort(): ";
    for(int x : sorted_nums) cout << x << " ";
    cout << endl;
    
    // sort() with custom comparator - descending
    sort(sorted_nums.begin(), sorted_nums.end(), greater<int>());
    cout << "After sort(descending): ";
    for(int x : sorted_nums) cout << x << " ";
    cout << endl;
    
    // reverse() - reverse elements
    vector<int> reversed_nums = nums;
    reverse(reversed_nums.begin(), reversed_nums.end());
    cout << "After reverse(): ";
    for(int x : reversed_nums) cout << x << " ";
    cout << endl;
    
    // Searching algorithms
    cout << "\n=== SEARCHING ===" << endl;
    
    // find() - find element
    auto it = find(nums.begin(), nums.end(), 8);
    if(it != nums.end()) {
        cout << "Found 8 at position: " << distance(nums.begin(), it) << endl;
    }
    
    // count() - count occurrences
    cout << "Count of 2: " << count(nums.begin(), nums.end(), 2) << endl;
    
    // binary_search() - search in sorted array
    sort(nums.begin(), nums.end());
    cout << "Is 5 present (binary search): " << (binary_search(nums.begin(), nums.end(), 5) ? "Yes" : "No") << endl;
    
    // Modifying algorithms
    cout << "\n=== MODIFYING ===" << endl;
    
    vector<int> modify_nums = {1, 2, 3, 4, 5};
    
    // fill() - fill with value
    fill(modify_nums.begin(), modify_nums.end(), 0);
    cout << "After fill(0): ";
    for(int x : modify_nums) cout << x << " ";
    cout << endl;
    
    // replace() - replace values
    vector<int> replace_nums = {1, 2, 2, 3, 2, 4};
    replace(replace_nums.begin(), replace_nums.end(), 2, 9);
    cout << "After replace(2 with 9): ";
    for(int x : replace_nums) cout << x << " ";
    cout << endl;
    
    // Numeric algorithms
    cout << "\n=== NUMERIC ===" << endl;
    
    vector<int> calc_nums = {1, 2, 3, 4, 5};
    
    // accumulate() - sum of elements
    int sum = accumulate(calc_nums.begin(), calc_nums.end(), 0);
    cout << "Sum: " << sum << endl;
    
    // Min/Max algorithms
    cout << "\n=== MIN/MAX ===" << endl;
    
    vector<int> minmax_nums = {5, 2, 8, 1, 9, 3};
    
    // min_element() - find minimum
    auto min_it = min_element(minmax_nums.begin(), minmax_nums.end());
    cout << "Minimum element: " << *min_it << endl;
    
    // max_element() - find maximum
    auto max_it = max_element(minmax_nums.begin(), minmax_nums.end());
    cout << "Maximum element: " << *max_it << endl;
    
    return 0;
}

/* 
Common STL Algorithms:

Sorting:
- sort(): Sort elements - O(n log n)
- reverse(): Reverse order - O(n)

Searching:
- find(): Linear search - O(n)
- binary_search(): Binary search - O(log n)
- count(): Count occurrences - O(n)

Modifying:
- fill(): Fill with value - O(n)
- replace(): Replace values - O(n)

Numeric:
- accumulate(): Sum/reduce - O(n)

Min/Max:
- min_element(): Find minimum - O(n)
- max_element(): Find maximum - O(n)
*/