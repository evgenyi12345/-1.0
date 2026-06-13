#include "EmployeeBase.h"
#include <iostream>
#include <string>

EmployeeBase::EmployeeBase() :name_("Unknown"), profession_("Unknown"), salary_(0.0)
{
}

EmployeeBase::EmployeeBase(const std::string& name_, const std::string& profession_, double salary_,int ID_) :name_(name_), profession_(profession_), salary_(salary_),ID_(ID_)
{
}

EmployeeBase::~EmployeeBase()
{
}

EmployeeBase::EmployeeBase(const EmployeeBase& other) :name_(other.name_), profession_(other.profession_), salary_(other.salary_),ID_(other.ID_)
{
}

EmployeeBase& EmployeeBase::operator=(const EmployeeBase& other)
{
	if (this != &other) {
		name_ = other.name_;
		profession_ = other.profession_;
		salary_ = other.salary_;
	}
	return *this;
}

const std::string& EmployeeBase::getName() const
{
	return name_;
}

double EmployeeBase::getSalary() const
{
	return salary_;
}

void EmployeeBase::printInfo() const
{
	std::cout << "The employee's name is " << name_ << "\n";         // "Имя сотрудника- "
	std::cout << "Position- " << profession_ << "\n";        // "Должность- "
	std::cout << "Salary- " << salary_ << "\n";
	std::cout << "Employee ID: " << ID_ << "\n";
	std::cout << "\n";
}

void EmployeeBase::setEmployeeID(int id)
{
	this->ID_ = id;
}





