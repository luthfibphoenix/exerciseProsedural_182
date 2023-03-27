#include <iostream>
using namespace std;

double rerata(double a, double b)
{
	return (a + b) / 2;
}
string status(double d)
{
	if (d >= 70)
		return "Diterima";
	else
		return "Ditolak";
}
string status2(double r, double n)
{
	if (r >= 70 && n >= 80)
		return "Diterima";
	else
		return "Ditolak";
}

int main()
{
	double nilM, nilB;
	int a[20];
	int JumlahKandidat = 20;
	string nama;

	cout << "masukan nilai matematika : ";
	cin >> nilM;
	cout << "masukan nilai bahasa inggris : ";
	cin >> nilB;
	cout << " masukan nama : ";
	cin >> nama;

	cout << "status kelulusannya " << status(rerata(nilM, nilB)) << endl;
	cout << "status kelulusannya 2 " << status2(rerata(nilM, nilB), nilM);
}