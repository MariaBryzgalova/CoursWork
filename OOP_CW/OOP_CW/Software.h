#pragma once
#include <msclr\marshal_cppstd.h>
#include <string>
#include <time.h>
#include "Interface.h"


class Software :public Interface {

protected:
	std::string name;
	std::string developer;
	std::string data;
private:
	int idfts;
public:
	Software();
	Software(std::string name, std::string developer, std::string data);

	int get_idfts();

};


