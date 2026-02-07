#include <iostream>
#include <glm/glm.hpp>

class Player {
private:
    glm::vec3 position;
    glm::vec3 velocity;
    float speed;

public:
    Player() : position(0.0f), velocity(0.0f), speed(5.0f) {}

    void handleInput(int key, float deltaTime) {
        if (key == 'W') {
            position.z -= speed * deltaTime;
        }
        if (key == 'S') {
            position.z += speed * deltaTime;
        }
        if (key == 'A') {
            position.x -= speed * deltaTime;
        }
        if (key == 'D') {
            position.x += speed * deltaTime;
        }
    }

    void update(float deltaTime) {
        position += velocity * deltaTime;
    }

    glm::vec3 getPosition() const {
        return position;
    }

    void setPosition(glm::vec3 newPos) {
        position = newPos;
    }
};
