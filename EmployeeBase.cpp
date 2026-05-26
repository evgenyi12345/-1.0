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
	std::cout << "Имя сотрудника- " << name_ << "\n";
	std::cout << "Должность- " << profession_ << "\n";
	std::cout << "\n";
}
