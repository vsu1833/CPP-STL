#include <iostream>
#include <set>

using namespace std;

int main() {
    cout << "=== SET EXAMPLES ===" << endl;
    
    // Set initialization
    set<int> s;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() - add element
    s.insert(30);
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(10); // Duplicate - won't be added
    cout << "After insert(30, 10, 50, 20, 10):" << endl;
    
    // Print elements (automatically sorted)
    cout << "Elements: ";
    for(int x : s) cout << x << " ";
    cout << endl;
    
    // size() - get number of elements
    cout << "Size: " << s.size() << endl;
    
    // find() - search for element
    auto it = s.find(20);
    if(it != s.end()) {
        cout << "Found: " << *it << endl;
    }
    
    // count() - check if element exists (0 or 1)
    cout << "Count of 20: " << s.count(20) << endl;
    cout << "Count of 100: " << s.count(100) << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (s.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove element
    s.erase(10);
    cout << "After erase(10): ";
    for(int x : s) cout << x << " ";
    cout << endl;
    
    // clear() - remove all elements
    s.clear();
    cout << "After clear(), size: " << s.size() << endl;
    
    return 0;
}

/* 
Set Functions:
- insert(val): Add element - O(log n)
- erase(val): Remove element - O(log n)
- find(val): Search element - O(log n)
- count(val): Check if exists - O(log n)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Unique elements, automatically sorted
*/