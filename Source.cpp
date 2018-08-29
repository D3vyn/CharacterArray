#include <iostream>
using namespace std;

int main()
{
	//Comparing Names
	{
		int count1 = 0;
		int count2 = 0;
		char name1[] = "Devyn";
		char name2[] = "Devyn";

		for (int i = 0; (name1[count1] != '\0'); i++)
		{
			count1++;
		}
		for (int i = 0; (name2[count2] != '\0'); i++)
		{
			count2++;
		}
		if (count1 == count2)
		{
			if (name1 == name2)
			{
				cout << "They are the same \n";
			}
			else
			{
				cout << "They are NOT the same \n";
			}
		}
		else
		{
			cout << "Not the same length \n";
		}
	}
	system("pause");
	return 0;
}