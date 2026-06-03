#ifndef INTERN_H
#define INTERN_H
#include "EmployeeBase.h"

class Intern :public EmployeeBase {
public:
	Intern              (const std::string& name_, const std::string& profession_, double salary_);
	~Intern             ();
	void                printInfo() const override;
private:
	std::string            name_;
	std::string            profession_;
	double                 salary_;

};
#endif // !INTERN_H

