#pragma once
#include "Basic.h"
class OS :  public Basic
{
public:
	OS();
	OS(std::string name, std::string developer, std::string data, std::string lastV, std::string price);
	void print(DataTable^ dataT) override;
	void Save() override;
	virtual void Load(String^ str)override;
private:
	std::string price;
};

