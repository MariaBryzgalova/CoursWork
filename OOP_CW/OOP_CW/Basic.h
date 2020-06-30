#pragma once
#include <string>
#include "Software.h"
class Basic: public Software
{
public:
	Basic();
	Basic(std::string name, std::string developer, std::string data, std::string lastV);
protected:
	std::string lastV;
};



