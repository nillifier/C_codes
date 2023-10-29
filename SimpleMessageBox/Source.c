#include <Windows.h>

int main(void) {
	int msgBox = MessageBox(
		NULL,
		L"Hello,World!",
		L"Inbox",
		MB_OK
	);

	return EXIT_SUCCESS;
}
