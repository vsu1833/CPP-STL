#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    cout << "=== MAP EXAMPLES ===" << endl;
    
    // Map initialization
    map<string, int> m;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // insert() and operator[] - add key-value pairs
    m["apple"] = 5;
    m["banana"] = 3;
    m["orange"] = 8;
    m.insert({"grape", 12});
    cout << "After adding fruits:" << endl;
    
    // Print elements (automatically sorted by key)
    for(const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // size() - get number of elements
    cout << "Size: " << m.size() << endl;
    
    // Access elements
    cout << "Apples: " << m["apple"] << endl;
    cout << "Mangos: " << m["mango"] << endl; // Creates new entry with value 0
    
    // find() - search for key
    auto it = m.find("banana");
    if(it != m.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl;
    }
    
    // count() - check if key exists (0 or 1)
    cout << "Count of 'orange': " << m.count("orange") << endl;
    cout << "Count of 'kiwi': " << m.count("kiwi") << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (m.empty() ? "Yes" : "No") << endl;
    
    // erase() - remove key-value pair
    m.erase("mango");
    cout << "After erase('mango'):" << endl;
    for(const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // clear() - remove all elements
    m.clear();
    cout << "After clear(), size: " << m.size() << endl;
    
    return 0;
}

/* 
Map Functions:
- insert(pair): Add key-value pair - O(log n)
- operator[]: Access/create element - O(log n)
- erase(key): Remove pair - O(log n)
- find(key): Search key - O(log n)
- count(key): Check if exists - O(log n)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)
- clear(): Remove all - O(n)

Properties: Key-value pairs, unique keys, sorted by key
*/