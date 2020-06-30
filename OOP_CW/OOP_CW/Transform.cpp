#include "Transform.h"

String^ CharToSysString(const char* ch)
{
	return gcnew String(ch);
}

std::string SysStringToChar(String^ string)
{
	const char* str = (const char*)(Marshal::StringToHGlobalAnsi(string)).ToPointer();
	std::string s(str);
	return s;
}

bool boolconv(String^ x) {
	if (x == "True" || x == "1" || x == "true" || x == "Да" || x == "+") return true;
	else if (x == "false" || x == "-" || x == "0" || x == "False" || "Нет") return false;
}