#include <iostream>

using namespace std;

int timkiem(int *arr, int size, int ct) {
    int *left = arr;
    int *right = arr + size - 1;
    
    while (left <= right) {
        int *mid = left + (right - left) / 2;
        if (*mid == ct){
            return mid - arr; }
        else if (*mid < ct)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; 
}

int main() {
	const int size=10;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13, 15,37,40};
    
    int gtct;//gia tri can tim trong mang
    cin>>gtct;
    
    int result = timkiem(arr, size, gtct);
    if (result != -1)
        cout << "Phan tu " << gtct << " duoc tim thay tai chi so " << result << endl;
    else
        cout << "Phan tu " << gtct << " khong ton tai trong mang" << endl;
    
    return 0;
}

