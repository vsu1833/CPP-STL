#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    cout << "=== MULTIMAP EXAMPLES ===" << endl;
    
    // Multimap initialization
    multimap<string, int> mm;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() - add key-value pairs (allows duplicate keys)
    mm.insert({"fruit", 5});
    mm.insert({"fruit", 8});
    mm.insert({"vegetable", 3});
    mm.insert({"fruit", 12});
    mm.insert({"vegetable", 7});
    cout << "After adding items:" << endl;
    
    // Print elements (sorted by key, duplicates allowed)
    for(const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // size() - get number of elements
    cout << "Size: " << mm.size() << endl;
    
    // find() - search for key (returns iterator to first occurrence)
    auto it = mm.find("fruit");
    if(it != mm.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }
    
    // count() - count occurrences of key
    cout << "Count of 'fruit': " << mm.count("fruit") << endl;
    cout << "Count of 'vegetable': " << mm.count("vegetable") << endl;
    cout << "Count of 'meat': " << mm.count("meat") << endl;
    
    // equal_range() - get all elements with same key
    cout << "All 'fruit' entries:" << endl;
    auto range = mm.equal_range("fruit");
    for(auto i = range.first; i != range.second; ++i) {
        cout << i->first << ": " << i->second << endl;
    }
    
    // empty() - check if empty
    cout << "Empty: " << (mm.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove one occurrence
    mm.erase(mm.find("fruit")); // Remove one occurrence of "fruit"
    cout << "After erase(one 'fruit'):" << endl;
    for(const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // erase() - remove all occurrences
    mm.erase("vegetable"); // Remove all occurrences of "vegetable"
    cout << "After erase(all 'vegetable'):" << endl;
    for(const auto& pair : mm) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // clear() - remove all elements
    mm.clear();
    cout << "After clear(), size: " << mm.size() << endl;
    
    return 0;
}

/* 
Multimap Functions:
- insert(pair): Add key-value pair - O(log n)
- erase(iterator): Remove one pair - O(log n)
- erase(key): Remove all pairs with key - O(log n + count)
- find(key): Search key - O(log n)
- count(key): Count occurrences - O(log n + count)
- equal_range(key): Get range of same keys - O(log n)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Key-value pairs, allows duplicate keys, sorted by key
*/