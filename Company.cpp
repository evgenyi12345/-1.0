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

void Company::findByld()
{
    int id;                                                                                                  // Объявляем переменную для введенного ID

    std::cout << "Выберите сотрудника по ID начиная с 1 до 5: "; 
    std::cin >> id;                                                                                             // Считываем ID, введенный пользователем

                                                                                                               // Теперь используем switch ТОЛЬКО для id
    switch (id) {
    case 1: {
		std::cout << "Name-Tom; Profession-Accountant; Salary-100; ID-1" << "\n";
        break;
    }
    case 2: {
        std::cout << "Вернулся второй сотрудник" << "\n";
		std::cout << "Name-Ric; Profession-Sales Manager; Salary-80; ID-2";
        break;
    }
    case 3: {
        std::cout << "Вернулся третий сотрудник" << "\n";
		std::cout << "Name-Nadia; Profession-Purchasing Manager; Salary-80; ID-3";
        break;
    }
    case 4: {
        std::cout << "Вернулся четвертый сотрудник" << "\n";
		std::cout << "Name-John; Profession-CNC Operator Station; Salary-80; ID-4";
        break;
    }
    case 5: {
        std::cout << "Вернулся пятый сотрудник" << "\n";
		std::cout << "Name-Victor; Profession-Intern; Salary-55; ID-5";
        break;
    }
    default: { 
      
        break;
    }
    }
	if (id <= 0 || id > totalEmployees_) {                                                                              // Проверяем, что ID в допустимом диапазоне
		std::cout << "Employee with ID " << id << " not found or ID is invalid in '" << companyName_ << "'." << "\n";
		return;
	}

}



