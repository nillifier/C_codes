#include <Windows.h>
#include <stdio.h>

int main(void) {

	if (IsDebuggerPresent()) {
		puts("[!] Being Debugged! Exiting...");
		return EXIT_FAILURE;
	}
	else {
		MessageBoxW(
			NULL,
			L"Cool Message Box",
			L"Do you want to continue ?",
			MB_OK
		);
	}
	

	return EXIT_SUCCESS;
}
