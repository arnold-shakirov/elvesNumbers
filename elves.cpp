#include <string>
#include <iostream>
using namespace std;

int main() {
	string line;
	string answer;
	int number;
	int sum = 0;
	int cnt = 0;
	int j;
	int k;
	int first;
	while(true) {
		cnt = 0;
		cout << "Input your line:";
		getline(cin, line);
			for (int i = 0; i < line.size(); i ++) {
				if (line[i] >= '0' && line[i] <= '9') {
					if (cnt == 0) {
						first = line[i] - '0';
						cnt = 1;
						j = i;
					}
					else {
						number = line[i] - '0';
						k = i;
					}
				}
			}
			sum = sum + first * 10 + number;
			if (j == k) {
				sum = sum / 2;
			}
		cout << "Do you want to continue? Input yes or no" << endl;
		getline(cin, answer);
		if (answer == "yes") {
			
			}
		else if (answer == "no") {
			break;
		}
		else {
			cout << "no such response" << endl;
		}
	}
	cout << "answer is" << sum;
}
	
		
