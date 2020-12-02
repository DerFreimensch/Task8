#include <iostream>
#include <string>

using namespace std;
int main(void) {
	char expression[50];
	char* ptr;
	int a = 0, numberOfOp1 = 0, numberOfFig1 = 0, numberOfOp2 = 0, numberOfFig2 = 0, m = 0;
	ptr = &expression[0];
	cin >> expression;
	for (int i = 0; i < strlen(expression); i++) {
		if (i == strlen(expression)) {
			if (*(ptr + i) == '(') {
				cout << "Wrong! E";
				a = 1;
				break;
			}
			else if (*(ptr + i) == ')') {
				numberOfOp2++;
			}
			if (*(ptr + i) == '{') {
				cout << "Wrong! E";
				a = 1;
				break;
				}else if (*(ptr + i) == '}') {
				numberOfFig2++;
			}
		}
		else if (i == 0) {
			if (*(ptr + i) == ')') {
				cout << "Wrong! 0";
				a = 1;
				break;
				}else if (*(ptr + i) == '(') {
				numberOfOp1++;
			}
			if (*(ptr + i) == '}') {
				cout << "Wrong! 0";
				a = 1;
				break;
				}else if(*(ptr + i) == '{'){
				numberOfFig1++;
			}
		}
		else {
			if (*(ptr + i) == '(') {
				if (*(ptr + i + 1) == '+' || *(ptr + i + 1) == '-' || *(ptr + i + 1) == '*' || *(ptr + i + 1) == '/' || *(ptr + i + 1) == '=' || *(ptr + i + 1) == '^') {
					cout << "Wrong! (";
					a = 1;
					break;
				}
				numberOfOp1++;
			}
			if (*(ptr + i) == '{') {
				if (*(ptr + i + 1) == '+' || *(ptr + i + 1) == '-' || *(ptr + i + 1) == '*' || *(ptr + i + 1) == '/' || *(ptr + i + 1) == '=' || *(ptr + i + 1) == '^') {
					cout << "Wrong! {";
					a = 1;
					break;
				}
				numberOfFig1++;
			}
			if (*(ptr + i) == ')') {
				if (*(ptr + i - 1) == '+' || *(ptr + i - 1) == '-' || *(ptr + i - 1) == '*' || *(ptr + i - 1) == '/' || *(ptr + i - 1) == '=' || *(ptr + i - 1) == '^') {
					cout << "Wrong! )";
					a = 1;
					break;
				}
				numberOfOp2++;
			}
			if (*(ptr + i) == '}') {
				if (*(ptr + i - 1) == '+' || *(ptr + i - 1) == '-' || *(ptr + i - 1) == '*' || *(ptr + i - 1) == '/' || *(ptr + i - 1) == '=' || *(ptr + i - 1) == '^') {
					cout << "Wrong!  }";
					a = 1;
					break;
				}
				numberOfFig2++;
			}
		}
	}

		
		
		
	if (numberOfFig1 != numberOfFig2 || numberOfOp1 != numberOfOp2 && a == 0) {
		cout << "Wrong!" << endl;
		a = 1;
	}
	if (a == 0) {
		cout << "Right";
	}
	return 0;
}