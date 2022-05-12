#include<bits/stdc++.h>
using namespace std;

class Product {
	int id;
	char name[100];
	int mrp;
	int selling_price;

public:
	//Constructor
	Product()
	{
		cout << "In Constructor";
	}

	//Parameterised Constructor
	Product(int id, char *n, int mrp, int selling_price)
	{
		this->id = id;
		this->mrp = mrp;
		this->selling_price = selling_price;
		strcpy(name, n);

	}

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

	int getMrp()
	{
		return mrp;
	}

	int getSellingPrice()
	{
		return selling_price;
	}

	void showDetails()
	{
		cout << "Name : " << name << endl;
		cout << "Id : " << id << endl;
		cout << "Selling Price : " << selling_price << endl;
		cout << "MRP : " << mrp << endl;
	}
};

int main()
{
	// Product camera;
	Product camera(10, "GoPro", 29000, 23000);
	Product webcam(camera);

	Product handycam = camera;
	handycam.setMrp(35000);

	camera.showDetails();
	webcam.showDetails();
	handycam.showDetails();

	return 0;
}