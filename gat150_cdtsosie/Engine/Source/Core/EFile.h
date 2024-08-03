#pragma once
#include <string>
#include <iostream>
#include <filesystem>

namespace File
{
	std::string GetFilePath();

	bool SetFilePath(const std::string& filepath);
}