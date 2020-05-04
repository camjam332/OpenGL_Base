//
//  Light.h
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/1/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//
#pragma once 

#include <glm/glm.hpp>
#include <GL/glew.h>

class Light
{
public:
    Light();
    
    Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity);
    
    ~Light();
    
protected:
    
    glm::vec3 color;
    GLfloat ambientIntensity;
    GLfloat diffuseIntensity;
    
};
