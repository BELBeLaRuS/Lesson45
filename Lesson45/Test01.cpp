#include <iostream>
using namespace std;

int main() {
	double vec[] = { 3.5, 1.2, 4.8, -2.3, -4.6, 2.7 };
	int size = sizeof(vec) / sizeof(vec[0]);


	double sum_negative = 0;
	double product_between = 1;
	double min_element = vec[0];
	double max_element = vec[0];
	int min_idx = 0, max_idx = 0;
	
	for (int i = 0; i < size; i++) {
		if (vec[i] < 0) {
			sum_negative += vec[i];
		}
		if (vec[i] < min_element) {
			min_element = vec[i];
			min_idx = i;
		}
		if (vec[i] > max_element) {
			max_element = vec[i];
			max_idx = i;
		}
	}

	if (min_idx < max_idx) {
		for (int i = min_idx + 1; i < max_idx; i++) {
			product_between *= vec[i];
		}
	} else {
		for (int i = max_idx + 1; i < min_idx; i++) {
			product_between *= vec[i];
		}
	}

	cout << "Sum of negative elements: " << sum_negative << endl;
	cout << "Product of elements between min and max: " << product_between << endl;

	return 0;
}