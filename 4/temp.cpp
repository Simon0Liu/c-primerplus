#include <iostream>
using std::cin;
using std::cout;
const int SIZE = 15;
int main( ){
cout << "Enter your name:";
char name[SIZE];
cin.getline(name,SIZE);
cout << "name:" << name;
cout << "/nEnter your address:";
char address[SIZE];
cin.get(address,SIZE);
cout << "address:" << address;
}
 