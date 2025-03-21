#pragma once

#include <fstream>
#include <sstream>

class FileManager {
public:
	static std::string ReadFile(const std::string&);
	static bool CreateFile(const std::string&, bool);
};
