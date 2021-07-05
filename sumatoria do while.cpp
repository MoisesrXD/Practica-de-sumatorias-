	
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int suma = 0, n = 0,i=1;

	cin >> n;

	do
	{
		suma = suma +( i * 2);
		i++;
	} while (i<= n);

	cout << suma;
  
  return 0;

}
