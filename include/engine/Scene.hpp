#ifndef __SCENE_H__
#define __SCENE_H__

#include <memory>
#include <SFML/Graphics.hpp>


namespace game
{
    class Scene
    {
    public:
        Scene() {}
        virtual void update(float deltaTime) = 0;
        virtual void render(sf::RenderWindow  &window) = 0;
        virtual ~Scene() {}
    };
} // namespace game

#endif // __SCENE_H__