#icnlude "version.h"
#include <iostream>

int main()
{
	using std::cout; using std::endl;
	cout << "build " << PROJECT_VERSION_PATCH << endl;
	cout << "Hello, world!" << endl;
}
