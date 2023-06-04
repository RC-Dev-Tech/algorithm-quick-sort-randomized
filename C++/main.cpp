#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// 隨機選擇基準點.
int choosePivot(int arr[], int low, int high) {
    srand(time(nullptr));
    int randomIndex = low + rand() % (high - low + 1);
    return arr[randomIndex];
}

// 快速排序.
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 選擇基準點.
        int pivot = choosePivot(arr, low, high);

        // 分區.
        int i = low, j = high;
        while (i <= j) {
            while (arr[i] < pivot)
                i++;
            while (arr[j] > pivot)
                j--;
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        // 遞迴應用.
        quickSort(arr, low, j);
        quickSort(arr, i, high);
    }
}

int main() {
    int arr[] = {50, 90, 70, 20, 10, 30, 40, 60, 80};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 原始數列.
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 隨機化快速排序.
    quickSort(arr, 0, n - 1);

    // 排序後數列.
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
