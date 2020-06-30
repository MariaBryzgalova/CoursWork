#pragma once
#include "Transform.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;

public class Interface {
public:
	virtual void print(DataTable^ dataT) = 0;
	virtual void Save() = 0;
	virtual void Load(String^ str) = 0;
};