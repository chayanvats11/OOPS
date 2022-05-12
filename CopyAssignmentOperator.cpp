#include<bits/stdc++.h>
using namespace std;

class Product {
	int id;
	char *name; //Dynamic array
	int mrp;
	int selling_price;

public:
	//Constructor
	Product()
	{
		cout << "In Constructor" << endl;
	}

	//Parameterised Constructor
	Product(int id, char *n, int mrp, int selling_price)
	{
		this->id = id;
		this->mrp = mrp;
		this->selling_price = selling_price;
		name = new char[strlen(n) + 1]; //Allocating the memory first
		strcpy(name, n); //Now copying everything inside n from name

	}


	Product(Product &X)
	{
		id = X.id;
		mrp = X.mrp;
		selling_price = X.selling_price;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
	}

	void operator = (Product &X)
	{
		id = X.id;
		mrp = X.mrp;
		selling_price = X.selling_price;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
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

	void setName(char *name)
	{
		strcpy(this->name, name);
	}

};

int main()
{
	// Product camera;
	Product camera(10, "GoPro9", 29000, 23000);
	Product old_camera;

	old_camera = camera;
	old_camera.setName("GorPro8Old");
	old_camera.setMrp(40000);

	old_camera.showDetails();
	camera.showDetails();

	return 0;
}