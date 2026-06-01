#include "Company.h"
#include <string>
#include <iostream>
#include <memory>

Company::Company()
{
}

Company::Company(const std::string& companyName_, const std::string& profession_) :companyName_(companyName_), profession_(profession_)
{
	std::cout << "Company name: " << companyName_ << "\n";            // "Название компании: "
}

Company::~Company()
{
	std::cout << "The 'Company' destructor has been called." << "\n";     // "Деструктор 'Company' вызван."
}

void Company::addEmployee(std::unique_ptr<EmployeeBase> employee)
{
	if (employee) {
		employees.push_back(std::move(employee));
		std::cout << "Employee added to " << companyName_ << " " << employees.size() << "-employee(s)" << "\n";     // "Сотрудник добавлен в " "-сотрудник(ов)"
	}
}

std::string Company::getName() const
{
	return companyName_;
}

void Company::listAll()
{
	if (employees.empty()) {
		std::cout << "The company doesn't have any employees yet." << "\n";                // "В компании пока нет сотрудников."
		return;
	}
	for (const auto& emp_ptr : employees) {
		if (emp_ptr) {
			emp_ptr->printInfo();
		}
		else {
			std::cout << "An empty employee pointer has been found" << "\n";                 // "Найден пустой указатель на сотрудникаю"
		}
	}
}

void Company::totalPay() 
{
	double totalSalary = 0.0;
	for (const auto& emp : employees) {
		totalSalary += emp.get()->getSalary();
	}
	std::cout << "Total payroll for company '" << companyName_ << "': " << totalSalary << "\n";

}

void Company::printInfo() const
{
	std::cout << "Company's business type: " << profession_ << "\n";                        // "Род деятельности компании: "
	std::cout << "\nList of employees:" << "\n";                                              // "\nСписок сотрудников:"
}

