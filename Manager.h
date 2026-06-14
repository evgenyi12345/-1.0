#ifndef MANAGER_H
#define MANAGER_H
#include "EmployeeBase.h"

class Manager :public EmployeeBase {
public:
	Manager             (const std::string& name_, const std::string& profession_, double salary_,int ID_);
	~Manager            ();
	void                printInfo() const override;
private:
	std::string            name_;
	std::string            profession_;
	double                 salary_;
	int                    ID_;
};
#endif // !MANAGER_H

