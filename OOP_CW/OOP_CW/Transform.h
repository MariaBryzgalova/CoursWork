#pragma once

#include <string.h>
#include <typeinfo>
#include <memory>
#include <string>
#include <msclr\marshal_cppstd.h>


using namespace std;

using namespace System;
using namespace System::IO;
using namespace System::Data;
using namespace System::Collections;
using namespace System::Runtime::InteropServices;

String^ CharToSysString(const char* ch);
std::string SysStringToChar(String^ string);
bool boolconv(String^ x);

