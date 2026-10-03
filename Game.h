#pragma once
#include <vector>
#include "Box.h"
#include "Ball.h"

class Game
{
    Ball ball;
    Box paddle;
    std::vector<Box> bricks;
    bool lost = false;

public:
    Game();
    bool Update();
    void Render() const;
    void Reset();
    void ResetBall();
    void CheckCollision();
};