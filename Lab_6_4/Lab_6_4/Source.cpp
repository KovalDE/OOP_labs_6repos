#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	try
	{
		vector<int> V(4), U(4), Z(4), T(4);
		cin >> V;
		if (Odn(&V[0], &V[3]) == 1)
			cout << "TRUE!"<<endl;
		else cout << "FALSE!"<< endl;
		cin >> U;
		cin >> T;
		Z = U + T;
		cout << Z;
		cout << "min element = " << Z.ext("min") << endl;
		Z.sort("up");
		cout << "sorted:" << endl;
		cout << Z;
		cout << "norma = " << Z.norma() << endl;

	}
	catch (exception e)
	{
		cerr << e.what() << endl;
	}

	system("pause");
	return 0;
}
