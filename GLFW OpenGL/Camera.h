#include <stdio.h>
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera
{
public:
    Camera();
    Camera(glm::vec3 startPosition, glm::vec3 startUp, GLfloat startYaw, GLfloat startPitch, GLfloat startMoveSpeed, GLfloat startTurnSpeed);
    
    void keyControl(bool* keys, GLfloat deltaTime);
    
    void mouseControl(GLfloat xChange, GLfloat yChange);
    
    glm::vec3 getCameraPosition();
    
    glm::mat4 calculateViewMatrix();
    
    glm::vec3 getCameraDirection();

    
    ~Camera();
    
private:
    glm::vec3 position;
    glm::vec3 front;
    glm::vec3 up;
    glm::vec3 right;
    glm::vec3 worldUp;
    GLfloat yaw;
    GLfloat pitch;
    
    GLfloat movementSpeed;
    GLfloat turnSpeed;
    
    void update();
};
