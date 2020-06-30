#include "Basic.h"
Basic::Basic():Software() {
	lastV = "10.0.18363.592";
}
Basic::Basic(std::string name, std::string developer, std::string data, std::string lastV) : Software(name, developer, data) {
	this->lastV = lastV;
}