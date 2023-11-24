
#include "libraries.h"
#include "rectangle.h"

int
main() {
	std::ofstream os{ "pic.svg" };

	if (os.is_open()) {
	}

	os.close();
	return 0;
}