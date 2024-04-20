#ifndef __GAMEINSTANCE_H__
#define __GAMEINSTANCE_H__

#include <iostream>
#include <mutex>

namespace game
{
    class GameInstance
    {

    private:
        static GameInstance *pinstance_;
        static std::mutex mutex_;

        float globaldt;

    protected:
        GameInstance()
        {
        }
        ~GameInstance() {}

    public:
    // Copy prevent
        GameInstance(GameInstance &other) = delete;
        void operator=(const GameInstance &) = delete;

        static GameInstance *GetInstance();

        float getDeltaTime();
        
        // Internal do not touch
 
        void __internal__set__delta__time(float dt);
        void __internal__attach_current__scene__reference(std::string& current_scene);

    };
} // namespace game

#endif // __GAMEINSTANCE_H__