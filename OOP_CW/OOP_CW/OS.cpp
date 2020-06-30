#include "OS.h"
OS::OS() : Basic() {
	price = "9040 rub";
}

OS::OS(std::string name, std::string developer, std::string data, std::string lastV, std::string price) : Basic(name, developer, data, lastV) {
	this->price = price;
}

void OS::print(DataTable^ dataT) {
	dataT->Rows->Add(CharToSysString(name.c_str()), CharToSysString(developer.c_str()), CharToSysString(data.c_str()), CharToSysString(lastV.c_str()), CharToSysString(price.c_str()));
}

void OS::Save() {
	StreamWriter^ writer = gcnew StreamWriter("os.txt", true);

	String^ str = CharToSysString(name.c_str()) + ";" + CharToSysString(developer.c_str()) + ";" + CharToSysString(data.c_str()) + ";" + CharToSysString(lastV.c_str()) + ";" + CharToSysString(price.c_str());
	writer->WriteLine(str); writer->Close();
}

void OS::Load(String^ str) {
	cli::array<String^>^ arr = str->Split(';');
	name = SysStringToChar(arr[0]);
	developer = SysStringToChar(arr[1]);
	data = SysStringToChar(arr[2]);
	lastV = SysStringToChar(arr[3]);
	price = SysStringToChar(arr[4]);
}