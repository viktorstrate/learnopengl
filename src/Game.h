//
// Created by Viktor Hundahl Strate on 15/02/2019.
//


#pragma once

#include <GLFW/glfw3.h>
#include <string>

class Game
{
public:

    Game(std::string windowTitle, unsigned int windowWidth, unsigned int windowHeight);

    virtual ~Game();

    bool update();

    GLFWwindow* window;
    unsigned int screenWidth, screenHeight;

    double deltaTime() const;

private:
    static void window_resize_callback(GLFWwindow* window, int width, int height);
    double dt;
    double lastFrame;
};
