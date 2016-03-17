#include <iostream>
#include <climits>
int main( )
{
	using namespace std;
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;
	char n_char = CHAR_MAX;
	char n_schar = SCHAR_MAX;
	char n_uchar = UCHAR_MAX;

	cout << "int is " << sizeof (int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "longlong is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum value: " << endl;
	cout << "int : " << n_int <<endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "longlong: " << n_llong << endl;
	cout << "char: " << n_char << endl;
	cout << "schar: " << n_schar << endl;
	cout << "uchar: " << n_uchar << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "Bits per bytes = " << CHAR_BIT << endl;
	return 0;
}