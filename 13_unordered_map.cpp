#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    cout << "=== UNORDERED MAP EXAMPLES ===" << endl;
    
    // Unordered map initialization
    unordered_map<string, int> um;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() and operator[] - add key-value pairs
    um["apple"] = 5;
    um["banana"] = 3;
    um["orange"] = 8;
    um.insert({"grape", 12});
    cout << "After adding fruits:" << endl;
    
    // Print elements (no particular order - hash-based)
    for(const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // size() - get number of elements
    cout << "Size: " << um.size() << endl;
    
    // Access elements
    cout << "Apples: " << um["apple"] << endl;
    cout << "Mangos: " << um["mango"] << endl; // Creates new entry with value 0
    
    // find() - search for key
    auto it = um.find("banana");
    if(it != um.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }
    
    // count() - check if key exists (0 or 1)
    cout << "Count of 'orange': " << um.count("orange") << endl;
    cout << "Count of 'kiwi': " << um.count("kiwi") << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (um.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove key-value pair
    um.erase("mango");
    cout << "After erase('mango'):" << endl;
    for(const auto& pair : um) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // clear() - remove all elements
    um.clear();
    cout << "After clear(), size: " << um.size() << endl;
    
    return 0;
}

/* 
Unordered Map Functions:
- insert(pair): Add key-value pair - O(1) average
- operator[]: Access/create element - O(1) average
- erase(key): Remove pair - O(1) average
- find(key): Search key - O(1) average
- count(key): Check if exists - O(1) average
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Key-value pairs, unique keys, hash-based, no ordering
*/