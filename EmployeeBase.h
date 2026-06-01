#ifndef EMPLOYEEBASE_H
#define EMPLOYEEBASE_H
#include <iostream>
#include <string>

class EmployeeBase {
public:
	EmployeeBase           ();
	EmployeeBase           (const std::string& name_, const std::string& profession_, double salary_);
	virtual                ~EmployeeBase();
	EmployeeBase           (const EmployeeBase& other);
	EmployeeBase&          operator=(const EmployeeBase& other);
	const std::string&     getName() const;
	double                 getSalary() const;
	virtual                void printInfo() const;
private:
	std::string            name_;
	std::string            profession_;
	double                 salary_;
};


#endif
