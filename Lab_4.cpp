#include <iostream>
#include <string> 

using namespace std;

int main()
{
	long n, Petia = 0, Masha = 0;
	long Petia_count = 0, Masha_count = 0;
	string Petia_portions = "", Masha_portions = "";

	cin >> n;
	
	for (int i = n; i >0; i--)
	{
		if (Petia <= Masha)
		{
			Petia += i;
			Petia_portions += to_string(i);
			Petia_portions += " ";
			Petia_count++;
		}
		else
		{
			Masha += i;
			Masha_count++;
			Masha_portions += to_string(i);
			Masha_portions += " ";
		}
	}

	if (Masha != Petia)
		cout << "NO";
	else
	{
		cout << "YES" << endl;
		cout << Petia_count << endl;
		cout << Petia_portions << endl;
		cout << Masha_count << endl;
		cout << Masha_portions;
	}

	return 0;
}