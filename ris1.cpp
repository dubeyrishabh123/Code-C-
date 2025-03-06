#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n) {
    stack<int> s;

    for (int i = 0; i < n; i++) {
        // Push the first element into the stack
        if (s.empty()) {
            s.push(arr[i]);
            cout << s.top() << " ";  // Print while pushing
        }
        // If the current element is not equal to the top of the stack, push it
        else if (s.top() != arr[i]) {
            s.push(arr[i]);
            cout << s.top() << " ";  // Print while pushing
        }
    }

    vector<int> v;
    while (!s.empty()) {
        int p = s.top();
        v.push_back(p);
        s.pop();
    }

    reverse(v.begin(), v.end());  // Reverse the vector to maintain order
    return v.size();  // Return the number of unique elements
}

int main() {
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 4, 4, 4, 5};  // Example input
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << endl << "Size of unique elements: " << removeDuplicates(arr, n) << endl;
    return 0;
}
   