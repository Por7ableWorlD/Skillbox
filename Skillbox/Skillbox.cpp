#include <iostream>
#include <cmath>

class Vector
{
private:
	double XAxis, YAxis, ZAxis;

public:
	Vector() : XAxis(0), YAxis(0), ZAxis(0) {}
	Vector(double x, double y, double z) : XAxis(x), YAxis(y), ZAxis(z) {}

	void Set(double x, double y, double z)
	{
		XAxis = x;
		YAxis = y;
		ZAxis - z;
	}

	Vector* GetCopy()
	{
		return this;
	}

	void Output()
	{
		std::cout << "Vector: (" << XAxis << ',' << YAxis << ',' << ZAxis << ')' << std::endl;
	}

	void OutputXAxis()
	{
		std::cout << "XAxis = " << XAxis << std::endl;
	}

	void OutputYAxis()
	{
		std::cout << "YAxis = " << YAxis << std::endl;
	}

	void OutputZAxis()
	{
		std::cout << "ZAxis = " << ZAxis << std::endl;
	}

	double CalculateLength()
	{
		return sqrt(XAxis * XAxis + YAxis * YAxis + ZAxis * ZAxis);
	}

};

int main()
{
	Vector A(5, 2, 1);
	Vector B;
	Vector* ACopy = A.GetCopy();

	A.Output();
	B.Output();
	ACopy->Output();

	std::cout << "\nAVector length = " << A.CalculateLength() << std::endl;
	std::cout << "BVector length = " << B.CalculateLength() << std::endl;

	return 0;
}
