#pragma once
#include "Basic.h"
class Backend : public Basic
{
public:
	Backend();
	Backend(std::string name, std::string developer, std::string data, std::string lastV, std::string BEprice, std::string BEtype);
	void print(DataTable^ dataT) override;
	void Save() override;
	virtual void Load(String^ str)override;
private:
	std::string BEprice;
	std::string BEtype;
};

