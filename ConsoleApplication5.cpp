#include<iostream>
struct person { 
	int num;
	std::string name;
	double sum;
};
void change(person* p)
{
	std::cout << "Введите новый баланс: ";
	std::cin >> p->sum;
}
int main(int argc, char** argv)
{
	person pers;
	std::cout << "Введите номер счета: ";
	std::cin >> pers.num;
	std::cout << "Введите имя владельца: ";
	std::cin >> pers.name;
	std::cout << "Введите баланс: ";
	std::cin >> pers.sum;
	change(&pers);
	std::cout << "ваш счет: " << pers.name<<", "<<pers.num<<", "<<pers.sum;
}