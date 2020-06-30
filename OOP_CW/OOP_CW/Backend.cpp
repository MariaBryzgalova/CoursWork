#include "Backend.h"
Backend::Backend() : Basic() {
	BEprice="1999 rub";
	BEtype="Antivirus";
}

Backend::Backend(std::string name, std::string developer, std::string data, std::string lastV, std::string BEtype, std::string BEprice) : Basic(name, developer, data, lastV) {
	this->BEtype = BEtype;
	this->BEprice = BEprice;
}

void Backend::print(DataTable^ dataT) {
	dataT->Rows->Add(CharToSysString(name.c_str()), CharToSysString(developer.c_str()), CharToSysString(data.c_str()), CharToSysString(lastV.c_str()), CharToSysString(BEtype.c_str()), CharToSysString(BEprice.c_str()));
}

void Backend::Save() {
	StreamWriter^ writer = gcnew StreamWriter("backend.txt", true);

	String^ str = CharToSysString(name.c_str()) + ";" + CharToSysString(developer.c_str()) +  ";" + CharToSysString(data.c_str()) + ";" + CharToSysString(lastV.c_str()) + ";" + CharToSysString(BEtype.c_str()) + ";" + CharToSysString(BEprice.c_str());
	writer->WriteLine(str); writer->Close();
}

void Backend::Load(String^ str) {
	cli::array<String^>^ arr = str->Split(';');
	name = SysStringToChar(arr[0]);
	developer = SysStringToChar(arr[1]);
	data = SysStringToChar(arr[2]);
	lastV = SysStringToChar(arr[3]);
	BEtype = SysStringToChar(arr[4]);
	BEprice = SysStringToChar(arr[5]);
	
}