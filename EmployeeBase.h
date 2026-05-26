#ifndef EMPLOYEEBASE_H
#define EMPLOYEEBASE_H
#include <iostream>
#include <string>

class EmployeeBase {
public:
	EmployeeBase           ();
	EmployeeBase           (const std::string& name_, const std::string& profession_);
	virtual                ~EmployeeBase();
	EmployeeBase           (const EmployeeBase& other);
	EmployeeBase&          operator=(const EmployeeBase& other);
	std::string            getName() const;
	virtual                void printInfo() const;
private:
	std::string name_;
	std::string profession_;
};


#endif
