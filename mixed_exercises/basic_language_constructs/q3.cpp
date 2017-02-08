#include <string>
using namespace std;

int main ()
{
	char* c (nullptr);
	int array[10] = { 1,2,3,4,5,78,8,9,3,2};
	int (&copiteur)[10] (array);
	string tmp[10] { "string tmp[10] {", "string tmp[10] { ", "string tmp[10] {", "1", "1", "1", "1", "1", "1", "1", };
	string (*useless)[10] = &tmp;
	char** ptrptr = &c;
	const int trois = 4;
	int troisdujour = 5;
	const int *deux = &trois; //deux n'est pas constant car on peut lui affecter nullptr: pointeur sur int const
	int* const un = &troisdujour;
	
}
