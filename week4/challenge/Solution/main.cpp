/* Class Pair has already been
 * declared and defined with the
 * following constructor:
 *
 *   Pair(int,int)
 *
 * that stores its two arguments in
 * two private member variables of Pair.
 *
 * Class sumPair has also already been
 * defined as follows:
 *
 * class sumPair : public Pair {
 * public:
 *   int sum;
 *   sumPair(int,int);
 * };
 *
 * Implement the constructor
 * sumPair(int,int) such that it
 * loads the two member variables of
 * the base Pair class with its
 * arguments, and initializes the
 * member variable sum with their sum.
 */
#include <iostream>

class Pair 
{
public:
	Pair(int _a, int _b)
	{
		a = _a;
		b = _b;
	}

	int getA()
	{
		return a;
	}
	int getB()
	{
		return b;
	}
private:
	int a, b;
};

class sumPair :public Pair
{
public: 
	int sum;
	sumPair(int x, int y) : Pair(x, y)
	{
		sum = x + y;
	}
};

int main()
{
	sumPair sump = sumPair(2, 3);
	std::cout << sump.sum << std::endl;
	std::cout << sump.getA() << std::endl;
	std::cout << sump.getB() << std::endl;
	
	
	return 0;
}