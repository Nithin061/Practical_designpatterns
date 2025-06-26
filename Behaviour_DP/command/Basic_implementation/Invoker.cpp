#include "Invoker.h"

void Invoker::Action()
{
	m_ptr->Execute();
}

void Invoker::setCommand(Command* ptr)
{
	m_ptr = ptr;
}
