#include <iostream>
#include <vector>
using namespace std;

void heapifyDown(vector<int> &heap, int index) {
    int n = heap.size();
    int largest = index;

    while (true) {
        int left = 2 * index + 1;
        int right = 2 * index + 2;

        if (left < n && heap[left] > heap[largest])
            largest = left;

        if (right < n && heap[right] > heap[largest])
            largest = right;

        if (largest != index) {
            swap(heap[index], heap[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

void deleteRoot(vector<int> &heap) {
    if (heap.empty()) {
        cout << "Heap is empty!" << endl;
        return;
    }

    heap[0] = heap.back(); 
    heap.pop_back();        
    heapifyDown(heap, 0);   
}

int main() {
    vector<int> heap = {40, 30, 15, 10, 20};

    cout << "Before deletion: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    deleteRoot(heap);

    cout << "After deletion of root: ";
    for (int val : heap)
        cout << val << " ";
    cout << endl;

    return 0;
}
