#include "Objects.h"

TemplateCont<Interface*> Objects::container;

static std::vector<SWTools> swt;
static std::vector<GeneralAssignment> ga;
static std::vector<SpecialAssignment> sa;
static std::vector<OS> os;
static std::vector<Backend> be;