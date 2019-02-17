//
// Created by Viktor Hundahl Strate on 15/02/2019.
//

#include "GameObject.h"

GameObject::GameObject() = default;

GameObject::~GameObject()
{
    for(auto& comp : components) {
        delete comp.second;
    }
}