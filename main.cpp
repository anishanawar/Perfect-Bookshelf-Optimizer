#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Check if books can fit in k levels with given max width
bool canFitInShelves(const vector<int>& books, int k, long long maxWidth) {
    int levelsNeeded = 1;
    long long currentWidth = 0;
    
    for (int thickness : books) {
        if (currentWidth + thickness <= maxWidth) {
            currentWidth += thickness;
        } else {
            levelsNeeded++;
            currentWidth = thickness;
            
            if (levelsNeeded > k) {
                return false;
            }
        }
    }
    
    return true;
}

// Find minimum width using binary search
long long findMinWidth(const vector<int>& books, int k) {
    // Binary search boundaries
    long long left = *max_element(books.begin(), books.end()); // Minimum width must be at least the thickest book
    long long right = 0; // Maximum width is sum of all books
    
    for (int thickness : books) {
        right += thickness;
    }
    
    while (left < right) {
        long long mid = left + (right - left) / 2;
        
        if (canFitInShelves(books, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> books(n);
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }
    
    long long result = findMinWidth(books, k);
    cout << result << endl;
    
    return 0;
}