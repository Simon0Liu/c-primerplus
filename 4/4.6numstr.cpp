#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout << "What year was your hous built?\n";
	int year;
	cin >> year;
	cin.get();
	cout <<"What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout <<"Year built: " << year <<endl;
	cout << "Adress: " << address << endl;
	cout << "Done!\n";
	return 0;
}