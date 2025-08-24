#include <iostream>
#include <queue>

using namespace std;

int main() {
    cout << "=== QUEUE EXAMPLES ===" << endl;
    
    // Queue initialization
    queue<int> q;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // push() - add element to back
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "After push(10, 20, 30):" << endl;
    
    // size() - get number of elements
    cout << "Size: " << q.size() << endl;
    
    // front() - access front element
    cout << "Front element: " << q.front() << endl;
    
    // back() - access back element
    cout << "Back element: " << q.back() << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (q.empty() ? "Yes" : "No") << endl;
    
    // pop() - remove front element
    cout << "\nPopping elements:" << endl;
    while(!q.empty()) {
        cout << "Front: " << q.front() << endl;
        q.pop();
    }
    
    cout << "Queue is now empty: " << (q.empty() ? "Yes" : "No") << endl;
    
    return 0;
}

/* 
Queue Functions:
- push(val): Add element to back - O(1)
- pop(): Remove front element - O(1)
- front(): Access front element - O(1)
- back(): Access back element - O(1)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)

Properties: FIFO (First In, First Out)
*/