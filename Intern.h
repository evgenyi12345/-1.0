#ifndef INTERN_H
#define INTERN_H
#include "EmployeeBase.h"

class Intern :public EmployeeBase {
public:
	Intern();
	~Intern();
	void printInfo() const override;
};
#endif // !INTERN_H

