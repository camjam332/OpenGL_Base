//
//  Model.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 5/3/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//
#pragma once
#include <vector>
#include <string>

#include <assimp/Importer.hpp>
#include <assimp/scene.h>
#include <assimp/postprocess.h>

#include "Mesh.h"
#include "Texture.h"

class Model
{
public:
    Model();
    
    void LoadModel(const std::string& fileName);
    void RenderModel();
    void ClearModel();
    
    
    ~Model();
private:
    
    void LoadNode(aiNode *node, const aiScene *scene);
    void LoadMesh(aiMesh *mesh, const aiScene *scene);
    void LoadMaterials(const aiScene *scene);
    
    std::vector<Mesh*> meshList;
    std::vector<Texture*> textureList;
    std::vector<unsigned int> meshToText;
    
};
