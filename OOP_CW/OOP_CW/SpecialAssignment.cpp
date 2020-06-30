#include "SpecialAssignment.h"
SpecialAssignment::SpecialAssignment() : Applications() {
	SALastV = "CC20";
	SARenewal = "19 May 2020";
}

SpecialAssignment::SpecialAssignment(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type, std::string SALastV, std::string SARenewal) : Applications(name, developer, data, app_area, app_type) {
	this->SALastV = SALastV;
	this->SARenewal = SARenewal;
}

void SpecialAssignment::print(DataTable^ dataT) {
	dataT->Rows->Add(CharToSysString(name.c_str()), CharToSysString(developer.c_str()), CharToSysString(data.c_str()), CharToSysString(app_area.c_str()), CharToSysString(app_type.c_str()), CharToSysString(SALastV.c_str()), CharToSysString(SARenewal.c_str()));
}

void SpecialAssignment::Save() {
	StreamWriter^ writer = gcnew StreamWriter("specialassignment.txt", true);

	String^ str = CharToSysString(name.c_str()) + ";" + CharToSysString(developer.c_str()) + ";" + CharToSysString(data.c_str()) + ";" + CharToSysString(app_area.c_str()) + ";" + CharToSysString(app_type.c_str()) + ";" + CharToSysString(SALastV.c_str()) + ";" + CharToSysString(SARenewal.c_str());
	writer->WriteLine(str); writer->Close();
}

void SpecialAssignment::Load(String^ str) {
	cli::array<String^>^ arr = str->Split(';');
	name = SysStringToChar(arr[0]);
	developer = SysStringToChar(arr[1]);
	data = SysStringToChar(arr[2]);
	app_area = SysStringToChar(arr[3]);
	app_type = SysStringToChar(arr[4]);
	SALastV = SysStringToChar(arr[5]);
	SARenewal = SysStringToChar(arr[6]);
}