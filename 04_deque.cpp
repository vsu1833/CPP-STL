#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    cout << "=== DEQUE EXAMPLES ===" << endl;
    
    // Deque initialization
    deque<int> d1;                          // Empty deque
    deque<int> d2(5, 10);                   // 5 elements, all 10
    deque<int> d3 = {1, 2, 3, 4, 5};       // Initializer list
    deque<int> d4(d3);                      // Copy constructor
    
    cout << "d2 (5 elements of 10): ";
    for(int x : d2) cout << x << " ";
    cout << "\nd3 (initializer list): ";
    for(int x : d3) cout << x << " ";
    cout << endl;
    
    // Basic operations
    cout << "\n=== BASIC OPERATIONS ===" << endl;
    deque<int> dq = {10, 20, 30};
    
    cout << "Initial deque: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Adding elements
    dq.push_back(40);       // Add to end
    dq.push_front(5);       // Add to beginning
    cout << "After push_back(40) and push_front(5): ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Insert at position
    auto it = dq.begin() + 2;
    dq.insert(it, 15);
    cout << "After insert(15 at position 2): ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Remove elements
    dq.pop_back();          // Remove last
    dq.pop_front();         // Remove first
    cout << "After pop_back() and pop_front(): ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Erase specific position
    it = dq.begin() + 1;
    dq.erase(it);
    cout << "After erase(position 1): ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    
    // Access methods
    cout << "\n=== ACCESS METHODS ===" << endl;
    deque<int> data = {100, 200, 300, 400, 500};
    
    cout << "First element (front()): " << data.front() << endl;
    cout << "Last element (back()): " << data.back() << endl;
    cout << "Element at index 2 (at(2)): " << data.at(2) << endl;
    cout << "Element at index 2 (data[2]): " << data[2] << endl;
    
    // Size information
    cout << "Size: " << data.size() << endl;
    cout << "Empty: " << (data.empty() ? "Yes" : "No") << endl;
    
    // Iterators
    cout << "\n=== ITERATORS ===" << endl;
    deque<int> iter_demo = {1, 2, 3, 4, 5};
    
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
    
    cout << "Random access (it + 2): " << *(iter_demo.begin() + 2) << endl;
    
    // Algorithms with deque
    cout << "\n=== ALGORITHMS ===" << endl;
    deque<int> algo_demo = {5, 2, 8, 1, 9, 3};
    
    cout << "Original: ";
    for(int x : algo_demo) cout << x << " ";
    cout << endl;
    
    // Sort
    sort(algo_demo.begin(), algo_demo.end());
    cout << "After sort: ";
    for(int x : algo_demo) cout << x << " ";
    cout << endl;
    
    // Binary search (works because sorted)
    bool found = binary_search(algo_demo.begin(), algo_demo.end(), 5);
    cout << "Binary search for 5: " << (found ? "Found" : "Not found") << endl;
    
    // Lower and upper bound
    auto lower = lower_bound(algo_demo.begin(), algo_demo.end(), 5);
    auto upper = upper_bound(algo_demo.begin(), algo_demo.end(), 5);
    cout << "Lower bound for 5 at index: " << distance(algo_demo.begin(), lower) << endl;
    cout << "Upper bound for 5 at index: " << distance(algo_demo.begin(), upper) << endl;
    
    // Resize operations
    cout << "\n=== RESIZE OPERATIONS ===" << endl;
    deque<int> resize_demo = {1, 2, 3};
    
    cout << "Original size: " << resize_demo.size() << ", elements: ";
    for(int x : resize_demo) cout << x << " ";
    cout << endl;
    
    resize_demo.resize(6, 99);
    cout << "After resize(6, 99): ";
    for(int x : resize_demo) cout << x << " ";
    cout << endl;
    
    resize_demo.resize(4);
    cout << "After resize(4): ";
    for(int x : resize_demo) cout << x << " ";
    cout << endl;
    
    // Assign operations
    cout << "\n=== ASSIGN OPERATIONS ===" << endl;
    deque<int> assign_demo;
    
    assign_demo.assign(5, 42);
    cout << "After assign(5, 42): ";
    for(int x : assign_demo) cout << x << " ";
    cout << endl;
    
    deque<int> source = {10, 20, 30};
    assign_demo.assign(source.begin(), source.end());
    cout << "After assign(from iterator): ";
    for(int x : assign_demo) cout << x << " ";
    cout << endl;
    
    // Comparison with vector and list
    cout << "\n=== DEQUE vs VECTOR vs LIST ===" << endl;
    cout << "Deque advantages:" << endl;
    cout << "- Efficient insertion/deletion at both ends (O(1))" << endl;
    cout << "- Random access like vector (O(1))" << endl;
    cout << "- No reallocation of existing elements" << endl;
    cout << "- Better memory usage for large containers" << endl;
    
    // Use case example: Sliding window
    cout << "\n=== USE CASE: SLIDING WINDOW ===" << endl;
    deque<int> window;
    vector<int> stream = {1, 3, -1, -3, 5, 3, 6, 7};
    int window_size = 3;
    
    cout << "Data stream: ";
    for(int x : stream) cout << x << " ";
    cout << endl;
    
    cout << "Sliding window of size " << window_size << ":" << endl;
    
    for(int i = 0; i < stream.size(); i++) {
        // Add current element
        window.push_back(stream[i]);
        
        // Remove elements outside window
        if(window.size() > window_size) {
            window.pop_front();
        }
        
        // Show current window
        if(window.size() == window_size) {
            cout << "Window [" << (i - window_size + 1) << "-" << i << "]: ";
            for(int x : window) cout << x << " ";
            cout << "-> Max: " << *max_element(window.begin(), window.end()) << endl;
        }
    }
    
    return 0;
}

/* 
Time Complexity:
- push_front(), push_back(): O(1)
- pop_front(), pop_back(): O(1)
- insert() at ends: O(1), middle: O(n)
- erase() at ends: O(1), middle: O(n)
- random access ([], at): O(1)
- size(), empty(): O(1)

Space Complexity: O(n)

Memory Layout:
- Deque uses chunks of memory (blocks)
- No single contiguous memory like vector
- Allows efficient growth at both ends

Use Cases:
- Double-ended queue operations
- Sliding window algorithms
- Undo/redo operations
- Browser history (back/forward)
- Job scheduling with priorities at both ends
- Buffer for streaming data
*/