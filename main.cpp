#include <iostream>

int main(int argc, char** argv) {
	for (size_t i = 0; i < argc; ++i) {
		std::cout << argv[i] << " ";
	} 
	std::cout << std::endl;
	return 0;
}
