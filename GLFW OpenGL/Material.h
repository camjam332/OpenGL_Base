//
//  Material.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/2/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//

#include <GL/glew.h>


class Material
{
public:
    Material();
    Material(GLfloat sIntensity, GLfloat shine);
    
    void UseMaterial(GLuint specularIntensityLocation, GLuint shininessLocation);
    
    ~Material();
    
private:
    GLfloat specularIntensity;
    GLfloat shininess;
};
