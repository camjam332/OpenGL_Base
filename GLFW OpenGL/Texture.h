//
//  Texture.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 4/30/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//

#include <GL/glew.h>
#include "stb_image.h"
#pragma once
class Texture
{
public:
    Texture();
    Texture(const char* fileLoc);

    bool LoadTexture();
    bool LoadTextureA();
    void UseTexture();
    void ClearTexture();

    ~Texture();

private:
    GLuint textureID;
    int width, height, bitDepth;

    const char* fileLocation;
};

