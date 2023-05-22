#include "fraction.h"

fraction make_fraction(double F, int S)
{
	fraction t;
	t.Init(F, S);
	return t;
}

int main()
{
	fraction A;
	fraction B;
	A.Init(3.0, 2);
	B.Read();
	A.Show();
	B.Show();
	cout << "A.Power(" << A.first << "," << A.second << ")=" << A.Element(5) << endl;
	cout << "B.Power(" << B.first << "," << B.second << ")=" << B.Element(5) << endl;
	fraction* X = new fraction;
	X->Init(2.0, 5);
	X->Show();
	X->Element(5);
	cout << "X.Element(" << X->first << "," << X->second << ")=" << X->Element(5) << endl;
	delete X;
	fraction mas[3];
	for (int i = 0; i < 3; i++)
		mas[i].Read();
	for (int i = 0; i < 3; i++)
		mas[i].Show();
	for (int i = 0; i < 3; i++)
	{
		mas[i].Element(5);
		cout << "mas[" << i << "].Power(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Element(5) << endl;
	}
	fraction* p_mas = new fraction[3];
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Element(5);
		cout << "p_mas[" << i << "].Power(" << p_mas[i].first << "," << p_mas[i].second;
		cout << ")=" << p_mas[i].Element(5) << endl;
	}
	delete[] p_mas;
	double y; int z;
	cout << "first?"; cin >> y;
	cout << "second?"; cin >> z;
	fraction F = make_fraction(y, z);
	F.Show();
	system("pause");
	return 0;
}