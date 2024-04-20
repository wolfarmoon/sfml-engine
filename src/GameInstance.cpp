#include "../include/engine/GameInstance.hpp"

///////////////////////////////////////////////////////////////////////////

/*                        GameInstance Singleton                         */

///////////////////////////////////////////////////////////////////////////
namespace game
{
    GameInstance *GameInstance::pinstance_{nullptr};
    std::mutex GameInstance::mutex_;

    GameInstance *GameInstance::GetInstance()
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (pinstance_ == nullptr)
        {
            pinstance_ = new GameInstance();
        }
        return pinstance_;
    }

    // Getters
    float GameInstance::getDeltaTime()
    {
        return globaldt;
    }

    // Resource Manager Stuff

    // Internal stuff
    void GameInstance::__internal__attach_current__scene__reference(std::string& current_scene) 
    {
        
    }

    void GameInstance::__internal__set__delta__time(float dt)
    {
        globaldt = dt;
    }

}