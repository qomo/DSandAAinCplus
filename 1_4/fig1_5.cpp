#include <iostream>

/**
 * A class for simulating an integer memory cell.
 */
class IntCell
{
public:
	/**
	 * Construct the IntCell.
	 * Initial value is 0.
	 */
	IntCell( )
	{storedValue = 0;}
	~IntCell();

private:
	int storedValue;
};