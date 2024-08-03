#include "..//../Source/Core/EFile.h"


std::string File::GetFilePath()
{
    //return std::filesystem::current_path().string();

    std::string h("hello");
    return h;
}

bool File::SetFilePath(const std::string& filepath)
{
    std::error_code ec;
    //std::filesystem::currentpath(filepath);

    return !ec;
}
