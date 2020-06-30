#include "Software.h"

std::string ToStr(String^ value) {
	return msclr::interop::marshal_as<std::string>(value);
}
String^ ToStr(std::string value) {
	return gcnew System::String(value.c_str());
}


Software::Software() {
	Random^ rand = gcnew Random();
	rand = nullptr;
	rand = gcnew Random();
	srand(time(NULL));
	name = "Windows";
	developer = "Windows";
	data = "20 November 1985";
	idfts = rand->Next(1000000, 9999999);
}
Software::Software(std::string name, std::string developer, std::string data) {
	Random^ rand = gcnew Random();
	rand = nullptr;
	rand = gcnew Random();
	srand(time(NULL));
	this->name = name;
	this->developer = developer;
	this->data = data;
	this->idfts = idfts = idfts = rand->Next(1000000, 9999999);
}

int Software::get_idfts() {
	return idfts;
}