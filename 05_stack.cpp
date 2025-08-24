#include <iostream>
#include <stack>

using namespace std;

int main() {
    cout << "=== STACK EXAMPLES ===" << endl;
    
    // Stack initialization
    stack<int> s;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // push() - add element to top
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "After push(10, 20, 30):" << endl;
    
    // size() - get number of elements
    cout << "Size: " << s.size() << endl;
    
    // top() - access top element
    cout << "Top element: " << s.top() << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (s.empty() ? "Yes" : "No") << endl;
    
    // pop() - remove top element
    cout << "\nPopping elements:" << endl;
    while(!s.empty()) {
        cout << "Top: " << s.top() << endl;
        s.pop();
    }
    
    cout << "Stack is now empty: " << (s.empty() ? "Yes" : "No") << endl;
    
    return 0;
}

/* 
Stack Functions:
- push(val): Add element to top - O(1)
- pop(): Remove top element - O(1)
- top(): Access top element - O(1)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)

Properties: LIFO (Last In, First Out)
*/