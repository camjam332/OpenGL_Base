//
//  DirectionalLight.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/2/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//
#pragma once
#include "Light.h"

class DirectionalLight :
    public Light
{
public:
    DirectionalLight();
    
    DirectionalLight(GLfloat red, GLfloat green, GLfloat blue, GLfloat aIntensity,
          GLfloat xDir, GLfloat yDir, GLfloat zDir, GLfloat dIntensity);
    
    void UseLight(GLfloat ambientIntensityLocation, GLfloat ambientColorLocation, GLfloat diffuseIntensityLocation,
        GLfloat directionLocation);
    
    ~DirectionalLight();
    
private:
    glm::vec3 direction;
};

