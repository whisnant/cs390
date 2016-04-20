#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "employee.h"

struct employee
{
	std::string last_name;
	std::string first_name;
	int salary;
	std::ifstream eFile;
}guy1;

void open_file(std::string fileName)
{
	guy1.eFile.open(fileName.c_str());
}
void close_file()
{
	guy1.eFile.close();
}

void prompt_for_last_name()
{
	std::cout << "Enter employee last name: " << std::endl;
	std::cin >> guy1.last_name;
}
void prompt_for_first_name()
{
	std::cout << "Enter employee first name: " << std::endl;
	std::cin >> guy1.first_name;
}
void calculate_salary()
{
	std::string employee_records;
	std::string word_in_file;
	while(guy1.eFile >> word_in_file)
	{
		if(atoi(word_in_file.c_str())){
			if(employee_records == (guy1.first_name + " " + guy1.last_name + " "))
			{
				std::cout << "Salary of: " << guy1.first_name << " " << guy1.last_name << ": $" << word_in_file << std::endl;
			}
			employee_records = "";
		}
		else
		{
			employee_records += word_in_file + " ";
		}
	}
}
