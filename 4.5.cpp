#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");

	//// Первая часть
	//int input_number = 0;
	//int sum = 0;
	//std::cout << "Введите целое число ";
	//std::cin >> input_number;
	//for (int i = 1; i < input_number; i++) {
	//	std::cout << i;
	//	std::cout << " ";
	//	sum += i;
	//};
	//std::cout << "\nСумма ";
	//std::cout << sum;

	// Улучшенная часть
	int start_number = 0;
	int finish_number = 0;
	int sum = 0;
	std::cout << "Введите начало диапозона ";
	std::cin >> start_number;
	std::cout << "Введите конец диапозона ";
	std::cin >> finish_number;

	if (start_number > finish_number) {
		for (int i = start_number; i >= finish_number; i--) {
			std::cout << i;
			std::cout << " ";
			sum += i;
		};
	}
	else {
		for (int i = start_number; i <= finish_number; i++) {
			std::cout << i;
			std::cout << " ";
			sum += i;
		};
	}
	std::cout << "\nСумма ";
	std::cout << sum;
}