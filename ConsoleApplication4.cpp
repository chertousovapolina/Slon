//  Чертоусова 27.10.2022 ср1 Слоник

#include <iostream>
using namespace std;
int main()
{
	int a, i = 0;
	cin >> a;
	while (a > 4) {
		a -= 5;
		i++;
	 }
	if (a > 3)
	{
		a -= 4;
		i++;
	}
	if(a > 2) 
	 {
		a -= 3; 
		i++;
	}
	if (a>1) {
	a -= 2;
	i++;

    }
	if (a > 0)
	{
	a -= 1;
	i++;
    }
	cout << i;
}






