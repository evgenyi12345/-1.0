#ifndef WORKER_H
#define WORKER_H
#include "EmployeeBase.h"

class Worker :public EmployeeBase {
public:
	Worker            (const std::string& name_, const std::string& profession_, double salary_);
	~Worker           ();
	void              printInfo() const override;
private:
	std::string            name_;
	std::string            profession_;
	double                 salary_;

};
#endif // !WORKER_H

