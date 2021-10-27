#include "../include/logger.h"

#define FILE_PATH "./test_file.txt"

int main(void) {
	logger::Logger logger(FILE_PATH);

	logger.log_stream << "Test" << Qt::endl;

	return EXIT_SUCCESS;
}
