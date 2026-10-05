#include <iostream>
#include <cmath>


int main() {

	{//#1
		std::cout << "#1\n";


		const int size = 10;
		int arr[size]{};
		for (int i = 0; i < size; ++i) {
			arr[i] = rand() % 100;
		}
		std::cout << "Array: ";
		for (int i = 0; i < size - 1; ++i) {
			std::cout << arr[i] << ", ";
		}
		std::cout << arr[size - 1] << std::endl;
	}


	std::cout << "\n\n";

	{//#2
		std::cout << "#2\n";

		const int size = 10;
		int arr[10]{};
		for (int i = 0; i < size; ++i) {
			arr[i] = rand() % 100;
		}
		std::cout << "Array: ";
		for (int i = 0; i < size - 1; ++i) {
			std::cout << arr[i] << ", ";
		}
		std::cout << arr[size - 1] << std::endl;

		int min{arr[0]}, max{arr[0]};
		for (int i = 1; i < size; ++i) {
			if (arr[i] < min) {
				min = arr[i];
			}
			else if (arr[i] > max) {
				max = arr[i];
			}
		}

		std::cout << "Minimum element: " << min << std::endl;
		std::cout << "Maximum element: " << max << std::endl;



	}

	std::cout << "\n\n";

	{//#3
		std::cout << "#3\n";

		const int size_0 = 3, size_1 = 6;
		int arr[size_0][size_1]{};
		for (int i = 0; i < size_0; ++i) {
			for (int j = 0; j < size_1; ++j) {
				arr[i][j] = rand() % 100;
			}
		}
		std::cout << "Array: \n";
		for (int i = 0; i < size_0; ++i) {
			for (int j = 0; j < size_1; ++j) {
				std::cout << arr[i][j] << "\t";
			}
			std::cout << std::endl;
		}
		
		int min[]{ 0, 0 }, max[]{ 0, 0 };
		for (int i = 0; i < size_0; ++i) {
			for (int j = 1; j < size_1; ++j) {
				if (arr[i][j] < arr[min[0]][min[1]]) {
					min[0] = i;
					min[1] = j;
				}
				else if (arr[i][j] > arr[max[0]][max[1]]) {
					max[0] = i;
					max[1] = j;
				}
			}
		}

		std::cout << "Index of the minimum element: " << min[0] << " " << min[1] << std::endl;
		std::cout << "Index of the maximum element: " << max[0] << " " << max[1] << std::endl;


	}

	std::cout << "\n\n";

	{//#4
		std::cout << "#4\n";


		const int size = 10;
		int arr[size]{};
		for (int i = 0; i < size; ++i) {
			arr[i] = rand() % 100;
		}
		std::cout << "Array:\n";
		for (int i = 0; i < size - 1; ++i) {
			std::cout << arr[i] << ", ";
		}
		std::cout << arr[size - 1] << std::endl;

		for (int i = size - 1; i > 0; --i) {
			for (int j = size - 1; j > 0; --j)
			{
				if (arr[j] < arr[j - 1]) {
					int a = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = a;
				}
			}
		}

		std::cout << "Array after sorting:\n";
		for (int i = 0; i < size - 1; ++i) {
			std::cout << arr[i] << ", ";
		}
		std::cout << arr[size - 1] << std::endl;

	}





	std::cout << "\n\n\n\n";
	return 0;
}


