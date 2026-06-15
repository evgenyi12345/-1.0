#include "Company.h"
#include <string>
#include <iostream>
#include <memory>

Company::Company()
{
}

Company::Company(const std::string& companyName_, const std::string& profession_, int totalEmployees_) :companyName_(companyName_), profession_(profession_), totalEmployees_(0)
{
	std::cout << "Company name: " << companyName_ << "\n";                                  // "Название компании: "
	std::cout << "Company's business type: " << profession_ << "\n";                        // "Род деятельности компании: "
}

Company::~Company()
{
	std::cout << "The 'Company' destructor has been called." << "\n";     // "Деструктор 'Company' вызван."
}

void Company::addEmployee(std::unique_ptr<EmployeeBase> employee)
{
	if (employee) {
		totalEmployees_ += 1;
		employee->setEmployeeID(totalEmployees_);
		employees.push_back(std::move(employee));
		std::cout << "Employee added to " << companyName_ << " " << employees.size() << "-employee(s)" << "\n";     // "Сотрудник добавлен в " "-сотрудник(ов)"
	}
	
}

std::string Company::getName() const
{
	return companyName_;
}

void Company::listAll() const
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
		totalSalary += emp->getSalary();                                                    // исправил на emp->getSalary()
	}
	std::cout << "Total payroll for company '" << companyName_ << "': " << totalSalary << "\n";

}

void Company::printInfo() const
{
	std::cout << "Number of added employees:" << employees.size() << "\n";                                              // "Колличество добавленных сотрудников:"
	
}

void Company::findByld(int id)
{
	if (id <= 0 || id > totalEmployees_) {                                                                              // Проверяем, что ID в допустимом диапазоне
		std::cout << "Employee with ID " << id << " not found or ID is invalid in '" << companyName_ << "'." << "\n";
		return;
	}
	auto it = std::find_if(employees.begin(), employees.end(), [id](const std::unique_ptr<EmployeeBase>& emp_ptr) {
		return emp_ptr != nullptr && emp_ptr->getId() == id;
		});
	if (it != employees.end()) {
		std::cout << "Employee found in '" << companyName_ << "':" << "\n";
		(*it)->printInfo();
	}
	else {
		std::cout << "Employee with ID " << id << " not found by ID check in '" << companyName_ << "'." << "\n";
	}

};



