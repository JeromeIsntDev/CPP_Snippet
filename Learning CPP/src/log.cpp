#include <iostream>
#include "../header/log.h"

void Logger::PrintLog(LogLevel lvl, string msg) {
	switch (lvl)
	{
	case LogLevel::Error:
		std::cout << "[ERROR] -> ";
		break;

	case LogLevel::Warning:
		std::cout << "[WARNING] -> ";
		break;

	case LogLevel::Info:
		std::cout << "[INFO] -> ";
		break;

	default:
		break;
	}
	std::cout << msg << std::endl;
}