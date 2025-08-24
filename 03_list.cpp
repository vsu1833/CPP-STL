#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    cout << "=== LIST EXAMPLES ===" << endl;
    
    // List initialization
    list<int> l1;                           // Empty list
    list<int> l2(5, 10);                   // 5 elements, all 10
    list<int> l3 = {1, 2, 3, 4, 5};       // Initializer list
    list<int> l4(l3);                      // Copy constructor
    
    cout << "l2 (5 elements of 10): ";
    for(int x : l2) cout << x << " ";
    cout << "\nl3 (initializer list): ";
    for(int x : l3) cout << x << " ";
    cout << endl;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    list<int> nums = {10, 20, 30};
    
    cout << "Initial list: ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Adding elements
    nums.push_back(40);      // Add to end
    nums.push_front(5);      // Add to beginning
    cout << "After push_back(40) and push_front(5): ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Insert at position
    auto it = nums.begin();
    advance(it, 2);
    nums.insert(it, 15);
    cout << "After insert(15 at position 2): ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Remove elements
    nums.pop_back();        // Remove last
    nums.pop_front();       // Remove first
    cout << "After pop_back() and pop_front(): ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Erase specific element
    it = nums.begin();
    advance(it, 1);
    nums.erase(it);
    cout << "After erase(position 1): ";
    for(int x : nums) cout << x << " ";
    cout << endl;
    
    // Access methods
    cout << "\n=== ACCESS METHODS ===" << endl;
    list<int> data = {100, 200, 300, 400};
    
    cout << "First element (front()): " << data.front() << endl;
    cout << "Last element (back()): " << data.back() << endl;
    
    // Size information
    cout << "Size: " << data.size() << endl;
    cout << "Empty: " << (data.empty() ? "Yes" : "No") << endl;
    
    // Iterators
    cout << "\n=== ITERATORS ===" << endl;
    list<int> iter_demo = {1, 2, 3, 4, 5};
    
    cout << "Forward iteration: ";
    for(auto it = iter_demo.begin(); it != iter_demo.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "Reverse iteration: ";
    for(auto it = iter_demo.rbegin(); it != iter_demo.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // List-specific operations
    cout << "\n=== LIST SPECIFIC OPERATIONS ===" << endl;
    
    // Sort
    list<int> sort_demo = {5, 2, 8, 1, 9, 3};
    cout << "Before sort: ";
    for(int x : sort_demo) cout << x << " ";
    cout << endl;
    
    sort_demo.sort();
    cout << "After sort: ";
    for(int x : sort_demo) cout << x << " ";
    cout << endl;
    
    // Reverse
    sort_demo.reverse();
    cout << "After reverse: ";
    for(int x : sort_demo) cout << x << " ";
    cout << endl;
    
    // Remove specific value
    list<int> remove_demo = {1, 2, 3, 2, 4, 2, 5};
    cout << "Before remove(2): ";
    for(int x : remove_demo) cout << x << " ";
    cout << endl;
    
    remove_demo.remove(2);
    cout << "After remove(2): ";
    for(int x : remove_demo) cout << x << " ";
    cout << endl;
    
    // Remove if (conditional removal)
    list<int> remove_if_demo = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Before remove_if (even numbers): ";
    for(int x : remove_if_demo) cout << x << " ";
    cout << endl;
    
    remove_if_demo.remove_if([](int x) { return x % 2 == 0; });
    cout << "After remove_if (even numbers): ";
    for(int x : remove_if_demo) cout << x << " ";
    cout << endl;
    
    // Unique - remove consecutive duplicates
    list<int> unique_demo = {1, 1, 2, 2, 2, 3, 1, 1};
    cout << "Before unique: ";
    for(int x : unique_demo) cout << x << " ";
    cout << endl;
    
    unique_demo.unique();
    cout << "After unique: ";
    for(int x : unique_demo) cout << x << " ";
    cout << endl;
    
    // Merge two sorted lists
    cout << "\n=== MERGE OPERATION ===" << endl;
    list<int> list1 = {1, 3, 5, 7};
    list<int> list2 = {2, 4, 6, 8};
    
    cout << "List1: ";
    for(int x : list1) cout << x << " ";
    cout << "\nList2: ";
    for(int x : list2) cout << x << " ";
    cout << endl;
    
    list1.merge(list2);
    cout << "After merge (list1): ";
    for(int x : list1) cout << x << " ";
    cout << "\nList2 after merge (should be empty): ";
    for(int x : list2) cout << x << " ";
    cout << endl;
    
    // Splice - move elements from one list to another
    cout << "\n=== SPLICE OPERATION ===" << endl;
    list<int> source = {10, 20, 30, 40, 50};
    list<int> dest = {1, 2, 3};
    
    cout << "Source before splice: ";
    for(int x : source) cout << x << " ";
    cout << "\nDest before splice: ";
    for(int x : dest) cout << x << " ";
    cout << endl;
    
    auto splice_it = dest.begin();
    advance(splice_it, 1);
    dest.splice(splice_it, source);
    
    cout << "Dest after splice: ";
    for(int x : dest) cout << x << " ";
    cout << "\nSource after splice (should be empty): ";
    for(int x : source) cout << x << " ";
    cout << endl;
    
    return 0;
}

/* 
Time Complexity:
- push_front(), push_back(): O(1)
- pop_front(), pop_back(): O(1)
- insert(): O(1) if iterator position is given
- erase(): O(1) if iterator position is given
- remove(): O(n)
- sort(): O(n log n)
- merge(): O(n + m)
- splice(): O(1) for single element, O(n) for range

Space Complexity: O(n)

Advantages over Vector:
- Constant time insertion/deletion at any position
- No memory reallocation
- Efficient merge and splice operations

Use Cases:
- Frequent insertion/deletion in middle
- Implementation of other data structures (stacks, queues)
- When you need stable iterators
- Merge operations on sorted sequences
*/