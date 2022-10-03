#include <stdio.h>

int switch_eg(int x, int y) {
	switch(x) {
		case 1: {
			x = y + x;
			break;
		}
		// case 2: {
		// 	x = y*2 + x;
		// }
		// case 3: {
		// 	x = y*3 + x;
		// 	break;
		// }
		case 400000000: {
			x = y*4 + x;
			break;
		}
		default: {
			x = y;
		}
	}
	return x;


}


int main() {


}


