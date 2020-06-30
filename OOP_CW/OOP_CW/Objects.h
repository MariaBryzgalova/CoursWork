#pragma once
//Ѕиблиотеки иерархии
#include "SWTools.h"
#include"GeneralAssignment.h"
#include "SpecialAssignment.h"
#include "OS.h"
#include "Backend.h"
#include "Basic.h"
#include "Applications.h"
#include "Software.h"
#include "Interface.h"


//библиотека контейнера
#include "TemplateCont.h"


class Objects {
public:
	static TemplateCont<Interface*> container;

	static std::vector<SWTools> swt;
	static std::vector<GeneralAssignment> ga;
	static std::vector<SpecialAssignment> sa;
	static std::vector<OS> os;
	static std::vector<Backend> be;
};