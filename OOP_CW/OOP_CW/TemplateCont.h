#pragma once

#include "MainContainer.h"

template <class T>
class TemplateCont : private MainContainer
{
public:

	void push(const T& p);

	void pop();

	T& top();

};

// --------------------------------------------------------------------------------

template <class T>
void TemplateCont<T>::push(const T& p)
{
	_push(p);
}

template <class T>
void TemplateCont<T>::pop()
{
	_pop();
}

template <class T>
T& TemplateCont<T>::top()
{
	return reinterpret_cast<T&>(_top());
}
