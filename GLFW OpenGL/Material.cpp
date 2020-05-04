//
//  Material.cpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/2/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//

#include "Material.h"

Material::Material()
{
    specularIntensity = 0;
    shininess = 0;
}

Material::Material(GLfloat sIntensity, GLfloat shine)
{
    specularIntensity = sIntensity;
    shininess = shine;
}

void Material::UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation)
{
    glUniform1f(specularIntensityLocation, specularIntensity);
    glUniform1f(shininessLocation, shininess);
}

Material::~Material()
{
    
}
