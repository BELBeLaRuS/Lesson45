//#include <iostream>
//using namespace std;
//
//int main() {
//	int n; 
//	cout << "Enter the size of vector: ";
//	cin >> n;
//
//	double* arr = new double[n];
//	cout << "Enter the elements of vector: ";
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	double maxElement = arr[0];
//	double sumBeforeLastPositive = 0;
//	bool foundPositive = false;
//
//	for (int i = 0; i < n; i++) {
//		if (arr[i] > maxElement) {
//			maxElement = arr[i];
//		}
//		if (arr[i] > 0) {
//			foundPositive = true;
//		}
//		if (!foundPositive) {
//			sumBeforeLastPositive += arr[i];
//		}
//	}
//
//	cout << "Max element of vector: " << maxElement << endl;
//	cout << "Sum of elements before last positive element: " << sumBeforeLastPositive << endl;
//
//	return 0;
//}