#ifndef LOGGER_H
#define LOGGER_H

#include <QFile>
#include <QTextStream>

namespace logger {
	class Logger {
	private:
		QFile log_file;
	public:
		QTextStream log_stream;
		Logger(QString file_path);
		virtual ~Logger();
	};
} // namespace logger

#endif // LOGGER_H
