#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
	int name = 0;
	FILE * fptr;
	string pre = "test";

	while(1) {
		int c = 0;
		//string fname = pre.insert(pre.size(),to_string(++name));
		//char arr[100] = {fname.c_str()};
		fptr = fopen("test","w");
		while (c<100000) {
			int num = rand()%1000;
			fprintf(fptr, "%d\n", num);
			c++;
		}
		fclose (fptr);
	}	
	return 0;
}