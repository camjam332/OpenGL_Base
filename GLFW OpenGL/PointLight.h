//
//  PointLight.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/2/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//
#pragma once
#include "Light.h"

class PointLight : public Light
{
public:
    
    PointLight();
    
    PointLight(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity, GLfloat dIntensity, GLfloat xPos, GLfloat yPos, GLfloat zPos, GLfloat con, GLfloat lin, GLfloat exp);
    
    void UseLight(GLuint ambientIntensityLocation, GLuint ambientColorLocation, GLuint diffuseIntensityLocation,
    GLuint positionLocation, GLuint constantLocation, GLuint linearLocation, GLuint exponentLocation);
    
    ~PointLight();
    
protected:
    glm::vec3 position;
    
    GLfloat constant, linear, exponent;
    
};
