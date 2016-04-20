all: qsalary

qsalary: main.o employee.o
	g++ main.o employee.o -o qsalary

main.o: main.cpp
	g++ -c main.cpp

employee.o: employee.cpp employee.h 
	g++ -c employee.cpp

clean:
	rm *o qsalary
