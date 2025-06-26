#pragma once
#include "Command.h"
class Invoker
{
	Command* m_ptr;
public:
	void Action();
	void setCommand(Command* ptr);
};

