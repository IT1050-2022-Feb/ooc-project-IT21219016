#include<iostream>
#include <cstring>
using namespace std;

class Cart{
	protected:
		int itemId;
		string itemName;
		float itemPrice;
	public:
		Cart();
		void setCartDetails(int id,string name,float price);
		void displayDetails();
		~Cart();	
};

Cart::Cart(){
	itemId = 0;
	itemName = "";
	itemPrice= 0;
}

void Cart::setCartDetails(int id,string name,float price){
	itemId =id;
	itemName =name;
	itemPrice = price;	
}

void Cart::displayDetails(){
	cout<<"Item ID:"<<itemId<<endl<<"Item Name:"<<itemName<<endl
	<<"item Price:"<<itemPrice<<endl;
}

Cart::~Cart(){
	cout <<"Destructor"<<endl;
}

class Package {
private:
	Vehicle * vehcle[3];
	Location * locate[4];
	int packageID;
	char packageName[30];
	char packageType[20];
	float packagePrice;
public:
	Package();
	void assignDetails(int PID, const char pName[], const char pType[], float price);
	float getPackagePrice();
	int getPackageID();
  void packageOfVehicle(Vehicle * V1,Vehicle * V2,Vehicle * V3);
  void packageLocations(Location * L1, Location * L2,Location * L3,Location * L4);
  void displayDetails();
	~Package();
};

Package::Package() {
	packageID = 0;
	strcpy(packageName,"");
	strcpy(packageType,"");
	packagePrice = 0;
}

void Package::assignDetails(int PID, const char pName[], const char pType[], float price) {
	packageID = PID;
	packageName = pName;
	packageType = pType;
	packagePrice = price;
}

float Package::getPackagePrice(){
	return packagePrice;
}

int Package::getPackageID(){
	return packageID;
}

void Package::packageOfVehicle(Vehicle * V1,Vehicle * V2,Vehicle * V3,Vehicle * V4){
	vehcle[0] = V1;
	vehcle[1] = V2;
	vehcle[2] = V3;
	vehcle[3] = V4;	
}

void Location::packageLocations(Location * L1, Location * L2,Location * L3,Location * L4,Location * L5){
	locate[0] = L1;
	locate[1] = L2;
	locate[2] = L3;
	locate[3] = L4;
	locate[4] = L5;
}

void Package::displayDetails(){
	cout<<"Package ID:"<<packageID<<endl<<"Package Name:"<<packageName<<endl
	<<"package Name:"<<packageName<<endl<<"Package Type:"<<packageType<<endl;
	
	for(int i = 0;i < 4;i++){
		vehcle[i]->displayVehicleDetails();
	}
	
	for(int j = 0; j < 5;j++){
		locate[j]->displayLocDetails();
	}
}

Package::~Package(){
	cout <<"Destructor"<<endl;
}