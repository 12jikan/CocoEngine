#pragma once
#define SHADER_CLASS_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cerrno>

std::string get_file_contents(const char *filename);

class Shader {
    public:
        GLuint ID;
        Shader(onst char* vertexFile, const char* fragmentFile);

        void Activate();
        void Delete();
};
