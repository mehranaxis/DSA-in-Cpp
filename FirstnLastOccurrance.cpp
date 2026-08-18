#include <iostream>
using namespace std;

int FirstOcc(int arr[], int key, int n) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int LastOcc(int arr[], int key, int n) {
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1;

    while (start <= end) {
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }

    return ans;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = 7;
    int key = 2;

    int first = FirstOcc(arr, key, n);
    int last = LastOcc(arr, key, n);

    cout << "First occurrence of " << key << " is at index: " << first << endl;
    cout << "Last occurrence of " << key << " is at index: " << last << endl;

    return 0;
}