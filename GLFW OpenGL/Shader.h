//
//  Shader.hpp
//  GLFW OpenGL
//
//  Created by Cameron Jensen on 4/29/20.
//  Copyright © 2020 Cameron Jensen. All rights reserved.
//



#include <stdio.h>
#include <iostream>
#include <string>
#include <fstream>

#include <GL/glew.h>
#include "CommonValues.h"
#include "DirectionalLight.h"
#include "PointLight.h"
#include "SpotLight.h"

class Shader
{
public:
    Shader();
    
    void CreateFromString(const char* vertexCode, const char* fragmentCode);
    
    void CreateFromFiles(const char* vertexLocation, const char* fragmentLocation);
    
    std::string ReadFile(const char* fileLocation);
    
    GLuint GetProjectionLocation();
    GLuint GetModelLocation();
    GLuint GetViewLocation();
    GLuint GetAmbientIntensityLocation();
    GLuint GetAmbientColorLocation();
    GLuint GetDiffuseIntensityLocation();
    GLuint GetDirectionLocation();
    GLuint GetSpecularIntensityLocation();
    GLuint GetShininessLocation();
    GLuint GetEyePositionLocation();
    
    void SetDirectionalLight(DirectionalLight * dLight);
    void SetPointLights(PointLight * pLight, unsigned int lightCount);
    void SetSpotLights(SpotLight * sLight, unsigned int lightCount);

    
    void UseShader();
    void ClearShader();
    
    ~Shader();
    
private:
    
    int pointLightCount;
    int spotLightCount;
    
    GLuint shaderID, uniformProjection, uniformModel, uniformView, uniformEyePosition,
        uniformSpecularIntensity, uniformShininess;
    
    struct
    {
        GLuint uniformColor;
        GLuint uniformAmbientIntensity;
        GLuint uniformDiffuseIntensity;
        
        GLuint uniformDirection;
    }   uniformDirectionalLight;
    
    GLuint uniformPointLightCount;
    
    struct
    {
        GLuint uniformColor;
        GLuint uniformAmbientIntensity;
        GLuint uniformDiffuseIntensity;
        
        GLuint uniformPosition;
        GLuint uniformConstant;
        GLuint uniformLinear;
        GLuint uniformExponent;
    }   uniformPointLight[MAX_POINT_LIGHTS];
    
    GLuint uniformSpotLightCount;
    
    struct
    {
        GLuint uniformColor;
        GLuint uniformAmbientIntensity;
        GLuint uniformDiffuseIntensity;
        
        GLuint uniformPosition;
        GLuint uniformConstant;
        GLuint uniformLinear;
        GLuint uniformExponent;
        
        GLuint uniformDirection;
        GLuint uniformEdge;
        
    } uniformSpotLight[MAX_SPOT_LIGHTS];
    
    void CompileShader(const char* vertexCode, const char* fragmentCode);
    void AddShader(GLuint theProgram, const char* shaderCode, GLenum shaderType);
};
