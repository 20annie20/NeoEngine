#include "GeneralException.h"
#include <sstream>
#include "resource.h"

GeneralException::GeneralException(int line, const char* file) noexcept
	:
	line(line),
	file(file)
{}

const char* GeneralException::what() const noexcept
{
	std::ostringstream oss;
	oss << GetType() << std::endl
		<< GetOriginString();
	whatBuffer = oss.str();
	return whatBuffer.c_str();
}

const char* GeneralException::GetType() const noexcept
{
	return "General Exception";
}

int GeneralException::GetLine() const noexcept
{
	return 0;
}

const std::string& GeneralException::GetFile() const noexcept
{
	return file;
}

std::string GeneralException::GetOriginString() const noexcept
{
	return std::string();
}
