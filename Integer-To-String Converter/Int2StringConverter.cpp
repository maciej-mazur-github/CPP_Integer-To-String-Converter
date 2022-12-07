#include "Int2StringConverter.h"


string Int2StringConverter::convert(int inputNumber)
{
	if ((inputNumber < -9999) || (inputNumber > 9999))
	{
		return "The provided number is outside of the permitted range.";
	}

	string conversionArray[4][9] = { "One thousand", "Two thousand", "Three thousand", "Four thousand", "Five thousand", "Six thousand", "Seven thousand", "Eight thousand", "Nine thousand",
		" one hundred ", " two hundred ", " three hundred ", " four hundred ", " five hundred "," six hundred ", " seven hundred ", " eight hundred ", " nine hundred ",
		" ten ", " twenty ", " thirty ", " forty ", " fifty ", " sixty ", " seventy ", " eighty ", " ninety ",
		" one ", " two ", " three ", " four ", " five ", " six ", " seven ", " eight ", " nine " };



	string returnString;
	int tempNumber = inputNumber;   //  to avoid modifying the original variable

	if (inputNumber < 0)
	{
		returnString += '-';
		tempNumber *= -1;
	}

	int integerOfDivision = 0;
	int restOfDivision = 0;
	int divisor = 1000;
	int arrayRow = 0;

	while (divisor)
	{
		integerOfDivision = tempNumber / divisor;

		if (integerOfDivision > 0)
		{
			returnString += conversionArray[arrayRow][integerOfDivision - 1];
		}

		tempNumber %= divisor;
		divisor /= 10;
		arrayRow++;
	}

	return returnString;
}