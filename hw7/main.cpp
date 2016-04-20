#include "employee.h"

int main(int argc,char *argv[])
{
	std::string fileName(argv[1]);
	open_file(fileName);
	prompt_for_last_name();
	prompt_for_first_name();
	calculate_salary();
	close_file();
	return 0;
}
