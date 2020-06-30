#pragma once
#include <string>
#include "Software.h"
class SWTools : public Software
{
public:
	SWTools();
	SWTools(std::string name, std::string developer, std::string data, std::string systype, std::string exetype);
	void print(DataTable^ dataT) override;
	void Save() override;
	virtual void Load(String^ str)override;
protected:
	std::string systype;
	std::string exetype;
};

