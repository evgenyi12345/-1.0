#include "Manager.h"

Manager::Manager()
{
}

Manager::~Manager()
{
}

void Manager::printInfo() const
{
	std::cout << "Обязанности: Менеджер(по продажам)  занимается продажами." << "\n";
	std::cout << "Обязанности: Менеджер(по закупке) занимается закупками." << "\n";
}
