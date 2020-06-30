#include "Applications.h"
Applications::Applications() :Software() {
	app_area = "design";
	app_type = "downloading";
}
Applications::Applications(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type) : Software(name, developer, data) {
	this->app_area = app_area;
	this->app_type = app_type;
}