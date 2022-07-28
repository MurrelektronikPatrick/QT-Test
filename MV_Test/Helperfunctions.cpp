void setInterval(auto function, int interval) {
    thread th([&]() {
        while (true) {
            Sleep(interval);
            function();
        }
        });
    th.detach();
}