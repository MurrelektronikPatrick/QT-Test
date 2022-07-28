# pragma once

#include <iostream>
#include <thread>
#include <chrono>
#include <atomic>

class METimerCPP 
{
    std::atomic<bool> active{ true };

public:
    METimerCPP(){}
    void setTimeout(auto function, int delay)
    {
        this->active = true;
        std::thread t([=]() {
            if (!this->active.load()) return;
            std::this_thread::sleep_for(std::chrono::milliseconds(delay));
            if (!this->active.load()) return;
            function();
            });
        t.detach();
    }

    void setInterval(auto function, int interval)
    {
        this->active = true;
        std::thread t([=]() {
            while (this->active.load()) {
                std::this_thread::sleep_for(std::chrono::milliseconds(interval));
                if (!this->active.load()) return;
                function();
            }
            });
        t.detach();
    }

    void stop()
    {
        this->active = false;
    }
};
