#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    cout << "=== UNORDERED SET EXAMPLES ===" << endl;
    
    // Unordered set initialization
    unordered_set<int> us;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() - add element
    us.insert(30);
    us.insert(10);
    us.insert(50);
    us.insert(20);
    us.insert(10); // Duplicate - won't be added
    cout << "After insert(30, 10, 50, 20, 10):" << endl;
    
    // Print elements (no particular order)
    cout << "Elements: ";
    for(int x : us) cout << x << " ";
    cout << endl;
    
    // size() - get number of elements
    cout << "Size: " << us.size() << endl;
    
    // find() - search for element
    auto it = us.find(20);
    if(it != us.end()) {
        cout << "Found: " << *it << endl;
    }
    
    // count() - check if element exists (0 or 1)
    cout << "Count of 20: " << us.count(20) << endl;
    cout << "Count of 100: " << us.count(100) << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (us.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove element
    us.erase(10);
    cout << "After erase(10): ";
    for(int x : us) cout << x << " ";
    cout << endl;
    
    // clear() - remove all elements
    us.clear();
    cout << "After clear(), size: " << us.size() << endl;
    
    return 0;
}

/* 
Unordered Set Functions:
- insert(val): Add element - O(1) average
- erase(val): Remove element - O(1) average
- find(val): Search element - O(1) average
- count(val): Check if exists - O(1) average
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Unique elements, hash-based, no ordering
*/