#include <iostream>

using namespace std;

bool strcmp(char* s1, char* s2) {
	int i = 0;
	for (; s1[i] != '\0', s2[i] != '\0' ; i++) {
		if (s1[i] != s2[i]) {
			return false;
		}
	}

	if (s1[i] == '\0' && s2[i] == '\0') {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	char s1[100];
	char s2[100];
	cin.getline(s1, 100);
	cin.getline(s2, 100);	
	cout << strcmp(s1, s2) << endl;

	return 0;
}