#include <iostream>
using namespace std;

int main()
{
	int deptCode = 0;
	int salary = 0;

	cout << "Department code (1, 2, or 3): ";
	cin >> deptCode;

	if (deptCode != 1, 2, 3);
	cout << "Invalid Code" << endl;



	switch (deptCode)
	{
	case 1:
		salary = 25000;
		break;
	case 2:
		salary = 30000;
		break;
	case 3:
		salary = 32000;
		break;

	}

	cout << "Salary: $" << salary << endl;
	return 0;
}