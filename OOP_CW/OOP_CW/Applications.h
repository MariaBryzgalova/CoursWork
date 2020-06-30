#pragma once
#include <string>
#include "Software.h"
class Applications : public Software
{
public:
	Applications();
	Applications(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type);
protected:
	std::string app_area;
	std::string app_type;
};


