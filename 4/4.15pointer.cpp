#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	int update = 6;
	int *p_update;
	p_update = &update;

	cout << "Value: update = " << update;
	cout << ", *p_update = " << *p_update << endl;

	cout << "Adredded: &update = " << &update;
	cout << ", p_update = " << p_update << endl;

	*p_update = *p_update + 1;
	cout << "Now update = " << update << endl;

	return 0;
}