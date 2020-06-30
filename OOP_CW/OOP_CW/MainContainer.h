#pragma once


#include <stack>
#include "Interface.h"

class MainContainer
{
protected:

	void*& _top();
	void _push(void* const& p);
	void _pop();

private:

	std::stack<void*> StackInterfacePointers;
};