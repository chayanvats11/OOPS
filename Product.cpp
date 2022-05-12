#include<bits/stdc++.h>
using namespace std;

class Product {
	int id;
	char name[100];

public:
	int mrp;
	int selling_price;
};

int main()
{
	Product camera;
	//camera.id = 10; Throws error as id is a private data member

	camera.mrp = 100;
	//selling price <= mrp but due to public data members there is no check on these data so we will use getters and setters
	camera.selling_price = 200;

	cout << "MRP = " << camera.mrp << endl;
	cout << "Selling Price = " << camera.selling_price << endl;

	return 0;
}