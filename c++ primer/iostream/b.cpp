#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


int main(int argc, char *argv[]) {
	string line = "sdajlslda  sadd  asdas sdasd";
	istringstream input(line);
	// input.str;
	while (!input.eof()) {
		string word;
		// input >> word;
		getline(input, word);
		cout << word << endl;
	}

}


