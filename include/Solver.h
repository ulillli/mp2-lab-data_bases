#pragma once
#include <stack>
#include <vector>
#include <map>
#include <string>
#include "Term.h"
/// <summary>
/// �����, ������� ����� �������� �� ���������������� ���������� �������������� ���������
/// </summary>
class Solver
{
public:
	Polynom solve(const std::vector<Term*>&, std::map<std::string, Polynom>&);
};

