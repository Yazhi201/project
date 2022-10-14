#include <iostream>
#include "csapp.h"
using namespace std;


int main() {
	int x = 1, cnt = 0;
	for (int i = 1; i <= 10; i++) {
		pid_t pid = fork();
		x += 1000000;
		cout << (pid == 0) << endl;
		if(pid == 0) {
			cout << "tt" << endl;
			for (int j = x; j < x + 1000000000; j++) 
					cnt ++;
			cout << "gg" << endl;
			cout << cnt << endl;
			exit(0);
		}
		

	}



}
