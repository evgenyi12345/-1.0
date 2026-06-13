#ifndef EMPLOYEEBASE_H
#define EMPLOYEEBASE_H
#include <iostream>
#include <string>

class EmployeeBase {
public:
	EmployeeBase           ();
	EmployeeBase           (const std::string& name_, const std::string& profession_, double salary_,int ID_);
	virtual                ~EmployeeBase();
	EmployeeBase           (const EmployeeBase& other);
	EmployeeBase&          operator=(const EmployeeBase& other);
	const std::string&     getName() const;
	double                 getSalary() const;
	virtual                void printInfo() const;
	void                   setEmployeeID(int id);
	
private:
	std::string            name_;
	std::string            profession_;
	double                 salary_;
	int                    ID_;
	int                    totalEmployees;
};


#endif
