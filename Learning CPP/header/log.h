#pragma once

#ifndef _MES_H_
#define _MES_H_

#include <string>
#define string std::string

class Logger {
//Costructor
public:
	Logger() = delete;

//Variables
public:
	enum class LogLevel{
		Error = 0, Warning = 1, Info = 2
	};

//Functions
public:
	static void PrintLog(LogLevel lvl, string msg);
};

#define INFO Logger::LogLevel::Info
#define WARNING Logger::LogLevel::Warning
#define ERROR Logger::LogLevel::Error

#endif // !_MES_H_