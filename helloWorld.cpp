#include <iostream>
using namespace std;

int main()
{
	int i;
	int[] a = {1,2,3,4};
	int sum = 0;
	for(i = 0; i < 4; i++)
	{
		sum += a[i];
	}
	cout << "sum = " << sum <<endl;
    cout << "hello world." <<endl;
	return 0;
}
