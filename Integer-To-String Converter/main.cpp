#include "Int2StringConverter.h"

using namespace std;


int main()
{
	Int2StringConverter converter;

	cout << 10000 << " after conversion to string:\n\t" << converter.convert(10000) << endl;
	cout << 3 << " after conversion to string:\n\t" << converter.convert(3) << endl;
	cout << 125 << " after conversion to string:\n\t" << converter.convert(125) << endl;
	cout << 8754 << " after conversion to string:\n\t" << converter.convert(8754) << endl;
	cout << -2678 << " after conversion to string:\n\t" << converter.convert(-2678) << endl;
	
}



