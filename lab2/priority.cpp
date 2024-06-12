#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(30);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(1);

    cout << "Элементы в порядке приоритетов (максимальная куча): ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop(); 
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    minHeap.push(5);
    minHeap.push(1);

    cout << "Элементы в порядке приоритетов (минимальная куча): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; 
        minHeap.pop(); 
    }
    cout << endl;

    return 0;
}
