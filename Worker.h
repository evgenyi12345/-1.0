#ifndef WORKER_H
#define WORKER_H
#include "EmployeeBase.h"

class Worker :public EmployeeBase {
public:
	Worker();
	~Worker();
	void printInfo() const override;
};
#endif // !WORKER_H

