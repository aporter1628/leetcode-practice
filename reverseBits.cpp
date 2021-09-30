#include <iostream>
using namespace std;

int main() {
	uint32_t n = 43261596;
        uint32_t fin = 0;
        uint32_t temp;
	for(int i = 0; i < 32; i++){
		temp = (n & 1);
		
        	cout << temp << endl;
            	fin += fin | (n & 1);
            	fin = fin << 1;
            	n = n >> 1;
        }
}
       
