#pragma once
#include<string>
#include "Command.h"

class FindDiag
{
	std::string m_SearchText{};
	Command* m_pCmd{};
public:
	FindDiag(Command* cmd) : m_pCmd(cmd) {

	}
	void SetSearchText(const std::string& text);
	void Find();
};

