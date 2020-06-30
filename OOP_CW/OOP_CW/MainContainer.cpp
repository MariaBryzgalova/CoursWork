#include "MainContainer.h"

void MainContainer::_push(void* const& p)
{
	StackInterfacePointers.push(p);
}

void MainContainer::_pop()
{
	StackInterfacePointers.pop();
}

void*& MainContainer::_top()
{
	return StackInterfacePointers.top();
}