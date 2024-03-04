//#include <iostream>
//using namespace std;
//
//int main() {
//	int arr[] = { 5, 7, 3, 2, 4, 9, 1, 0, 6, 8, 0, 10 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//
//	int product = 1;
//	for (int i = 0; i < size; i += 2) {
//		product *= arr[i];
//	}
//
//
//	int sum = 0;
//	bool between_zeros = false;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] == 0 && !between_zeros) {
//			between_zeros = true;
//		}
//		else if (arr[i] == 0 && between_zeros) {
//			break;
//		}
//		else if (between_zeros) {
//			sum += arr[i];
//		}
//	}
//
//	cout << "Product of vector elements with even numbers: " << product << endl;
//	cout << "Sum of vector elements located between the first and last zero elements: " << sum << endl;
//
//	return 0;
//}