#include "../include/logger.h"
#include <iostream>

using namespace std;

int main(void) {
	cout << "**********************\n";
	cout << "*       LOGGER       *\n";
	cout << "**********************\n" << endl;

	const QString FILE_PATH = "./test_file.txt";

	logger::Logger logger(FILE_PATH);
	cout << "Created logger " << FILE_PATH.toStdString() << endl;

	cout << "Writing on logger..." << endl;
	logger.log_stream << "Test" << Qt::endl;

	cout << "End" << endl;
	return EXIT_SUCCESS;
}
