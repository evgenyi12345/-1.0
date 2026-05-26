#ifndef MANAGER_H
#define MANAGER_H
#include "EmployeeBase.h"

class Manager :public EmployeeBase {
public:
	Manager();
	~Manager();
	void printInfo() const override;
};
#endif // !MANAGER_H

