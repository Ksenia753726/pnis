#include "Header.h"

void Input_Size(int32_t& size) {
	std::cout << "¬ведите размер массива >> ";
	std::cin >> size;
	Check_Size(size);
}

void Check_Size(int32_t size) {
	while (!Check_Nat(size)) {
		if (!Check_Nat(size)) {
			std::cout << "Size is not natural(((\n" << "Enter new nat size >> ";
			std::cin.clear();
			std::cin.ignore(10, '\n');
			std::cin >> size;
		}
	}
}
//template <class T>
//void Input_Array(T* arr, int32_t& size) {
//	std::cout << "¬ведите все элементы массива >> ";
//	for (size_t number{ 0 }; number < size; ++number) {
//		std::cin >> arr[number];
//		Check_Nat(arr[number]);
//	}
//}

bool Check_Nat(int64_t num) {
	return num > 0;
}

void Input_your_choise(char& choise) {
	std::cout << "Input your choise >> ";
	std::cin >> choise;
}