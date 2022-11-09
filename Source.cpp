#include <iostream>
using namespace std;

class PC
{
private:
	int index;
	int power;
	double price;

public:
	void setIndex(int index)
	{
		this->index = index;
	}
	int getIndex()const
	{
		return this->index;
	}

	void setPower(int power)
	{
		this->index = power;
	}
	int getPower()const
	{
		return this->power;
	}

	void setPrice(int price)
	{
		this->index = price;
	}
	int getPrice()const
	{
		return this->price;
	}
};

int main()
{

}
