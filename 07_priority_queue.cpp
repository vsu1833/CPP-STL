#include <iostream>
#include <queue>

using namespace std;

int main() {
    cout << "=== PRIORITY QUEUE EXAMPLES ===" << endl;
    
    // Priority queue initialization (max heap by default)
    priority_queue<int> pq;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    
    // push() - add element
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);
    cout << "After push(30, 10, 50, 20):" << endl;
    
    // size() - get number of elements
    cout << "Size: " << pq.size() << endl;
    
    // top() - access highest priority element
    cout << "Top element: " << pq.top() << endl;
    
    // empty() - check if empty
    cout << "Empty: " << (pq.empty() ? "Yes" : "No") << endl;
    
    // pop() - remove highest priority element
    cout << "\nPopping elements (highest priority first):" << endl;
    while(!pq.empty()) {
        cout << "Top: " << pq.top() << endl;
        pq.pop();
    }
    
    cout << "Priority queue is now empty: " << (pq.empty() ? "Yes" : "No") << endl;
    
    // Min heap example
    cout << "\n=== MIN HEAP EXAMPLE ===" << endl;
    priority_queue<int, vector<int>, greater<int>> min_pq;
    
    min_pq.push(30);
    min_pq.push(10);
    min_pq.push(50);
    min_pq.push(20);
    
    cout << "Min heap - popping elements (lowest first):" << endl;
    while(!min_pq.empty()) {
        cout << "Top: " << min_pq.top() << endl;
        min_pq.pop();
    }
    
    return 0;
}

/* 
Priority Queue Functions:
- push(val): Add element - O(log n)
- pop(): Remove top element - O(log n)
- top(): Access top element - O(1)
- size(): Get size - O(1)
- empty(): Check if empty - O(1)

Properties: Heap (default max heap)
*/