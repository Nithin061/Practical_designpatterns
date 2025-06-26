#include "FindDiag.h"


void FindDiag::SetSearchText(const std::string& text)
{
	m_SearchText = text;
}

void FindDiag::Find()
{
	m_pCmd->ExecuteFind(m_SearchText);
}
