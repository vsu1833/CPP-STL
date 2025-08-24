#include <iostream>
#include <set>

using namespace std;

int main() {
    cout << "=== MULTISET EXAMPLES ===" << endl;
    
    // Multiset initialization
    multiset<int> ms;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() - add element (allows duplicates)
    ms.insert(30);
    ms.insert(10);
    ms.insert(50);
    ms.insert(20);
    ms.insert(10); // Duplicate - will be added
    ms.insert(20); // Another duplicate
    cout << "After insert(30, 10, 50, 20, 10, 20):" << endl;
    
    // Print elements (automatically sorted, duplicates allowed)
    cout << "Elements: ";
    for(int x : ms) cout << x << " ";
    cout << endl;
    
    // size() - get number of elements
    cout << "Size: " << ms.size() << endl;
    
    // find() - search for element
    auto it = ms.find(20);
    if(it != ms.end()) {
        cout << "Found: " << *it << endl;
    }
    
    // count() - count occurrences of element
    cout << "Count of 10: " << ms.count(10) << endl;
    cout << "Count of 20: " << ms.count(20) << endl;
    cout << "Count of 100: " << ms.count(100) << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (ms.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove one occurrence
    ms.erase(ms.find(10)); // Remove one occurrence of 10
    cout << "After erase(one occurrence of 10): ";
    for(int x : ms) cout << x << " ";
    cout << endl;
    
    // erase() - remove all occurrences
    ms.erase(20); // Remove all occurrences of 20
    cout << "After erase(all occurrences of 20): ";
    for(int x : ms) cout << x << " ";
    cout << endl;
    
    // clear() - remove all elements
    ms.clear();
    cout << "After clear(), size: " << ms.size() << endl;
    
    return 0;
}

/* 
Multiset Functions:
- insert(val): Add element - O(log n)
- erase(iterator): Remove one element - O(log n)
- erase(val): Remove all occurrences - O(log n + count)
- find(val): Search element - O(log n)
- count(val): Count occurrences - O(log n + count)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Allows duplicates, automatically sorted
*/