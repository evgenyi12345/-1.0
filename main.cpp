#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "EmployeeBase.h"
#include "Company.h"
#include "Logger.h"
#include "Intern.h"
#include "Manager.h"

int main() {
	setlocale(LC_ALL, "RU");
	Logger log;
	std::unique_ptr<EmployeeBase>user1 = std::make_unique<EmployeeBase>("Tom", "Бухгалтер");
	std::unique_ptr<EmployeeBase>user2 = std::make_unique<EmployeeBase>("Ric", "Менеджер по продажам");
	std::unique_ptr<EmployeeBase>user3 = std::make_unique<EmployeeBase>("Nadia", "Менеджер по закупкам");
	std::unique_ptr<EmployeeBase>user4 = std::make_unique<EmployeeBase>("John", "Оператор 'ЧПУ' стонка");
	std::unique_ptr<EmployeeBase>user5 = std::make_unique<EmployeeBase>("Victor", "Стажер");

	Company company("SmartGrain","Производство зерносушилок");

	company.addEmployee(std::move(user1));
	company.addEmployee(std::move(user2));
	company.addEmployee(std::move(user3));
	company.addEmployee(std::move(user4));
	company.addEmployee(std::move(user5));
	company.printInfo();
	company.listAll();

	Manager manager;
	manager.printInfo();
	Intern intern;
	intern.printInfo();



}