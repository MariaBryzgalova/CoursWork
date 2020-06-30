#pragma once
#include "Applications.h"
class SpecialAssignment : public Applications
{
public:
	SpecialAssignment();
	SpecialAssignment(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type, std::string SARenewal, std::string SALastV);
	void print(DataTable^ dataT) override;
	void Save() override;
	void Load(String^ str)override;
private:
	std::string SARenewal;
	std::string SALastV;
};

