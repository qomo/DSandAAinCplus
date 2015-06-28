#include <iostream>

/**
 * A class for simulating an integer memory cell.
 */
class IntCell
{
public:
	explicit IntCell(int initialValue = 0)
		: storedValue( initialValue) { }

	int read( ) const
		{ return storedValue; }

	void write(int x)
		{ storedValue = x; }

private:
	int storedValue;
};

int main()
{
	IntCell obj;

	/* 使用explicit意味着单参数构造函数不能用来创建隐式临时对象 
	 * 编译以下两句会得到如下错误
	 * note: candidate function (the implicit copy assignment operator) 
	 * not viable: no known conversion from 'int' to 'const IntCell' for 1st argument
	 */
	// obj = 37;

	obj.write(666);
	std::cout << obj.read() << "\n";


	return 0;
}