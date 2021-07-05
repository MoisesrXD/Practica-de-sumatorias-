#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int suma = 0, n,i;
	
	cin >> n;

	for (int i=1; i <= n; i++)
	{
		suma  += 2 * i;
		
	}

	cout << suma;
  
  return 0;
}
