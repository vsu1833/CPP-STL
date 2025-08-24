#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cout << "=== VECTOR EXAMPLES ===" << endl;
    
    // Vector initialization
    vector<int> v1;                         // Empty vector
    vector<int> v2 = {1, 2, 3, 4, 5};     // Initializer list
    
    cout << "v2: ";
    for(int x : v2) cout << x << " ";
    cout << endl;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // push_back() - add element to end
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    cout << "After push_back(10, 20, 30): ";
    for(int x : v1) cout << x << " ";
    cout << endl;
    
    // size() - get number of elements
    cout << "Size: " << v1.size() << endl;
    
    // Access elements
    cout << "First element (front()): " << v1.front() << endl;
    cout << "Last element (back()): " << v1.back() << endl;
    cout << "Element at index 1 (at(1)): " << v1.at(1) << endl;
    cout << "Element at index 1 (v1[1]): " << v1[1] << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (v1.empty() ? "Yes" : "No") << endl;
    
    // insert() - insert at position
    v1.insert(v1.begin() + 1, 15);
    cout << "After insert(15 at position 1): ";
    for(int x : v1) cout << x << " ";
    cout << endl;
    
    // pop_back() - remove last element
    v1.pop_back();
    cout << "After pop_back(): ";
    for(int x : v1) cout << x << " ";
    cout << endl;
    
    // erase() - remove element at position
    v1.erase(v1.begin() + 1);
    cout << "After erase(position 1): ";
    for(int x : v1) cout << x << " ";
    cout << endl;
    
    // clear() - remove all elements
    v1.clear();
    cout << "After clear(), size: " << v1.size() << endl;
    
    // Algorithms with vector
    cout << "\n=== ALGORITHMS ===" << endl;
    vector<int> nums = {5, 2, 8, 1, 9, 3};
    
    cout << "Original: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    sort(nums.begin(), nums.end());
    cout << "After sort: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    reverse(nums.begin(), nums.end());
    cout << "After reverse: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    return 0;
}

/* 
Vector Functions:
- push_back(val): Add to end - O(1) amortized
- pop_back(): Remove from end - O(1)
- insert(pos, val): Insert at position - O(n)
- erase(pos): Remove at position - O(n)
- front(): Access first - O(1)
- back(): Access last - O(1)
- at(i)/[i]: Access at index - O(1)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Dynamic array, random access
*/