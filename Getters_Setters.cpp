#include<bits/stdc++.h>
using namespace std;

class Product {
	int id;
	char name[100];
	int mrp;
	int selling_price;

public:
	//Setters - They use private data member to further modify and apply conditions on it
	void setMrp(int price)
	{
		if (price > 0)
			mrp = price;
	}

	void setSellingPrice(int price)
	{
		//additional checks
		if (price > mrp)
			selling_price = mrp;
		else
			selling_price = price;
	}

	//Getters - These are used to access private data members through Setters outside of this class using object.getMrp() etc
	int getMrp()
	{
		return mrp;
	}

	int getSellingPrice()
	{
		return selling_price;
	}
};

int main()
{
	Product camera;

	camera.setMrp(100);
	camera.setSellingPrice(200);
	cout << "MRP = " << camera.getMrp() << endl;
	cout << "Selling Price = " << camera.getSellingPrice() << endl;

	cout << endl;

	camera.setMrp(100);
	camera.setSellingPrice(50);
	cout << "MRP = " << camera.getMrp() << endl;
	cout << "Selling Price = " << camera.getSellingPrice() << endl;

	return 0;
}