#include "SWTools.h"
SWTools::SWTools() :Software() {
	systype = "static";
	exetype = "compilable";
}
SWTools::SWTools(std::string name, std::string developer, std::string data, std::string systype, std::string exetype) : Software(name, developer, data) {
	this->systype = systype;
	this->exetype = exetype;
}
void SWTools::print(DataTable^ dataT) {
	dataT->Rows->Add(CharToSysString(name.c_str()), CharToSysString(developer.c_str()), CharToSysString(data.c_str()), CharToSysString(systype.c_str()), CharToSysString(exetype.c_str()));
}

void SWTools::Save() {
	StreamWriter^ writer = gcnew StreamWriter("swtools.txt", true);

	String^ str = CharToSysString(name.c_str()) + ";" + CharToSysString(developer.c_str()) + ";" + CharToSysString(data.c_str()) + ";" + CharToSysString(systype.c_str()) + ";" + CharToSysString(exetype.c_str());
	writer->WriteLine(str); writer->Close();
}

void SWTools::Load(String^ str) {
	cli::array<String^>^ arr = str->Split(';');
	name = SysStringToChar(arr[0]);
	developer = SysStringToChar(arr[1]);
	data = SysStringToChar(arr[2]);
	systype = SysStringToChar(arr[3]);
	exetype = SysStringToChar(arr[4]);
}