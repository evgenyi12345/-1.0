#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "EmployeeBase.h"
#include "Company.h"
#include "Logger.h"
#include "Intern.h"
#include "Manager.h"
#include "Worker.h"

int main() {
	setlocale(LC_ALL, "RU");
	Logger log;

	std::unique_ptr<EmployeeBase> emp1 = std::make_unique<Worker>("Tom", "Accountant", 100);
	std::unique_ptr<EmployeeBase> emp2 = std::make_unique<Manager>("Ric", "Sales Manager", 80);
	std::unique_ptr<EmployeeBase> emp3 = std::make_unique<Manager>("Nadia", "Purchasing Manager",80);
	std::unique_ptr<EmployeeBase> emp4 = std::make_unique<Intern>("John", "CNC Operator Station", 80);
	std::unique_ptr<EmployeeBase> emp5 = std::make_unique<Intern>("Victor", "Intern", 55);

	Company company("SmartGrain", "Production of grain dryers", 0);
	
	company.addEmployee(std::move(emp1));
	company.addEmployee(std::move(emp2));
	company.addEmployee(std::move(emp3));
	company.addEmployee(std::move(emp4));
	company.addEmployee(std::move(emp5));

	std::cout << "\nList of employees" << "\n";
	company.printInfo();
	company.listAll();
	company.findByld();
}