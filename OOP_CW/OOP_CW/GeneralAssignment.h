#pragma once
#include "Applications.h"
class GeneralAssignment : public Applications
{
public:
	GeneralAssignment();
	GeneralAssignment(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type, std::string GARenewal);
	void print(DataTable^ dataT) override;
	void Save() override;
	void Load(String^ str)override;
private:
	std::string GARenewal;
};

