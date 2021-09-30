#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	int x = 123;
	
	vector<int> nums;
        while(x != 0){
            if(x % 10 != 0)
                nums.push_back(x % 10);
            x = (int) x/10;
        }
        
        int size = nums.size();
        int solution = 0;
        int test = 0;
        for(int i = 0; i < size; i++){
            /*cout << nums[i] << endl;
            test = 10(size - i - 1);
            cout<<test<<endl;*/
            solution += (nums[i] * pow(10, (size - i - 1)));
            cout << solution << endl;
        }
        
        cout << solution << endl;
}
	
	
