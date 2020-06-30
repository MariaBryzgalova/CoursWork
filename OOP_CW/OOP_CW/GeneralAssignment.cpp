#include "GeneralAssignment.h"
GeneralAssignment::GeneralAssignment() : Applications() {
	GARenewal = "2018";
}

GeneralAssignment::GeneralAssignment(std::string name, std::string developer, std::string data, std::string app_area, std::string app_type, std::string GARenewal) : Applications(name, developer, data, app_area, app_type) {
	this->GARenewal = GARenewal;
}

void GeneralAssignment::print(DataTable^ dataT) {
	dataT->Rows->Add(CharToSysString(name.c_str()), CharToSysString(developer.c_str()), CharToSysString(data.c_str()), CharToSysString(app_area.c_str()), CharToSysString(app_type.c_str()), CharToSysString(GARenewal.c_str()));
}

void GeneralAssignment::Save() {
	StreamWriter^ writer = gcnew StreamWriter("generalassignment.txt", true);

	String^ str = CharToSysString(name.c_str()) + ";" + CharToSysString(developer.c_str()) + ";" + CharToSysString(data.c_str()) + ";" + CharToSysString(app_area.c_str()) + ";" + CharToSysString(app_type.c_str()) + ";" + CharToSysString(GARenewal.c_str());
	writer->WriteLine(str); writer->Close();
}

void GeneralAssignment::Load(String^ str) {
	cli::array<String^>^ arr = str->Split(';');
	name = SysStringToChar(arr[0]);
	developer = SysStringToChar(arr[1]);
	data = SysStringToChar(arr[2]);
	app_area = SysStringToChar(arr[3]);
	app_type = SysStringToChar(arr[4]);
	GARenewal = SysStringToChar(arr[5]);
}