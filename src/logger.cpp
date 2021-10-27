#include "../include/logger.h"

namespace logger {
	Logger::Logger(QString file_path) {
		this->log_file.setFileName(file_path);
		this->log_file.open(QIODevice::WriteOnly | QIODevice::Text);
		this->log_stream.setDevice(&(this->log_file));
	}

	Logger::~Logger() {
		this->log_file.close();
	}
} // namespace logger
