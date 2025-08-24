#include <iostream>
#include <utility> // for std::pair
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Pair demonstration
    cout << "=== PAIR EXAMPLES ===" << endl;
    
    // Creating pairs
    pair<int, string> student1(1, "Alice");
    pair<int, string> student2 = make_pair(2, "Bob");
    auto student3 = make_pair(3, "Charlie");
    
    cout << "Student 1: ID=" << student1.first << ", Name=" << student1.second << endl;
    cout << "Student 2: ID=" << student2.first << ", Name=" << student2.second << endl;
    cout << "Student 3: ID=" << student3.first << ", Name=" << student3.second << endl;
    
    // Pair operations
    pair<int, int> point1(3, 4);
    pair<int, int> point2(1, 2);
    
    cout << "\nPair comparisons:" << endl;
    cout << "Point1 " << (point1 > point2 ? ">" : "<=") << " Point2" << endl;
    
    // Swap pairs
    cout << "Before swap: Point1(" << point1.first << "," << point1.second << "), Point2(" << point2.first << "," << point2.second << ")" << endl;
    swap(point1, point2);
    cout << "After swap: Point1(" << point1.first << "," << point1.second << "), Point2(" << point2.first << "," << point2.second << ")" << endl;
    
    // Vector of pairs
    cout << "\n=== VECTOR OF PAIRS ===" << endl;
    vector<pair<int, string>> students = {
        {101, "John"},
        {102, "Jane"},
        {103, "Mike"}
    };
    
    cout << "Students list:" << endl;
    for(const auto& student : students) {
        cout << "ID: " << student.first << ", Name: " << student.second << endl;
    }
    
    // Sorting pairs
    vector<pair<int, string>> scores = {
        {85, "Math"},
        {92, "Science"},
        {78, "English"},
        {95, "History"}
    };
    
    cout << "\nBefore sorting by score:" << endl;
    for(const auto& score : scores) {
        cout << score.second << ": " << score.first << endl;
    }
    
    sort(scores.begin(), scores.end());
    cout << "\nAfter sorting by score:" << endl;
    for(const auto& score : scores) {
        cout << score.second << ": " << score.first << endl;
    }
    
    // Custom sorting
    sort(scores.begin(), scores.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.second < b.second; // Sort by subject name
    });
    
    cout << "\nAfter sorting by subject name:" << endl;
    for(const auto& score : scores) {
        cout << score.second << ": " << score.first << endl;
    }
    
    return 0;
}

/* 
Time Complexity Notes:
- Pair creation: O(1)
- Pair comparison: O(1)
- Vector of pairs operations: O(n) for traversal
- Sorting pairs: O(n log n)

Use cases:
- Coordinate points (x, y)
- Key-value associations
- Function return multiple values
- Storing related data together
*/