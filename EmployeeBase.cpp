#include "EmployeeBase.h"
#include <iostream>
#include <string>

EmployeeBase::EmployeeBase()
{
}

EmployeeBase::EmployeeBase(const std::string& name_, const std::string& profession_) :name_(name_), profession_(profession_)
{
}

EmployeeBase::~EmployeeBase()
{
}

EmployeeBase::EmployeeBase(const EmployeeBase& other)
{
}

EmployeeBase& EmployeeBase::operator=(const EmployeeBase& other)
{
	if (this != &other) {
		name_ = std::move(other.name_);
		profession_ = std::move(other.profession_);
	}
	return *this;
}

std::string EmployeeBase::getName() const
{
	return name_;
}

void EmployeeBase::printInfo() const
{
	std::cout << "The employee's name is " << name_ << "\n";         // "Имя сотрудника- "
	std::cout << "Position- " << profession_ << "\n";        // "Должность- "
	std::cout << "\n";
}
