//
//  Mesh.cpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 4/29/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//
#pragma once
#include <GL/glew.h>
class Mesh
{
public:
    Mesh();

    void CreateMesh(GLfloat *vertices, unsigned int *indices, unsigned int numOfVertices, unsigned int numOfIndices);
    void RenderMesh();
    void ClearMesh();

    ~Mesh();

private:
    GLuint VAO, VBO, IBO;
    GLsizei indexCount;
};
