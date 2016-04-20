#ifndef __E_H_INCLUDED__   // if employee.h isn't included yet
#define __E_H_INCLUDED__   //   don't include it again

#include <string>

void prompt_for_last_name();
void prompt_for_first_name();
void calculate_salary();
void display_salary();
void open_file(std::string);
void close_file();

#endif
