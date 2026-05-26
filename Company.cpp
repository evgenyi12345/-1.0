#include "Company.h"
#include <string>
#include <iostream>
#include <memory>

Company::Company()
{
}

Company::Company(const std::string& companyName_, const std::string& profession_) :companyName_(companyName_), profession_(profession_)
{
	std::cout << "Название компании: " << companyName_ << "\n";            // Добавление сотрудника
}

Company::~Company()
{
	std::cout << "Деструктор 'Company' вызван." << "\n";     // Вызван деструктор для класса Company
}

void Company::addEmployee(std::unique_ptr<EmployeeBase> employee)
{
	if (employee) {
		employees.push_back(std::move(employee));
		std::cout << "Сотрудник добавлен в " << companyName_ << " " << employees.size() << "-сотрудник(ов)" << "\n";
	}
}

std::string Company::getName()
{
	return companyName_;
}

void Company::listAll()
{
	if (employees.empty()) {
		std::cout << "В компании пока нет сотрудников." << "\n";
		return;
	}
	for (const auto& emp_ptr : employees) {
		if (emp_ptr) {
			emp_ptr->printInfo();
		}
		else {
			std::cout << "Найден пустой указатель на сотрудникаю" << "\n";
		}
	}
}

void Company::totalPay() 
{
	
}

void Company::printInfo() const
{
	std::cout << "Род деятельности компании: " << profession_ << "\n";
	std::cout << "\nСписок сотрудников:" << "\n";
}

