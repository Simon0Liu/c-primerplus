#include <iostream>
int main(int argc, char const *argv[])
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tub = 10.0 / 3.0;
	double mint = 10.0 / 3.0;
	const float Million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a Million tubs = " << Million * tub;
	cout << ",\nand ten millin tubs = ";
	cout << 10 * Million * tub << endl;

	cout << "mint = " << mint << " and a millin mints = ";
	cout << Million * mint << endl;
	return 0;
}