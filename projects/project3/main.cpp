#include <cstdlib>
#include <iostream>

#include "scene_roaming.h"

Options getOptions(int argc, char* argv[]) {
    Options options;
    options.windowTitle = "Scene Roaming";
    options.windowWidth = 1280;
    options.windowHeight = 720;
    options.windowResizable = false;
    options.vSync = true;
    options.msaa = true;
    options.glVersion = {3, 3};
    options.backgroundColor = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
    options.assetRootDir = "../../media/";

    return options;
}

int main(int argc, char* argv[]) {
    Options options = getOptions(argc, argv);

    try {
        SceneRoaming app(options);
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        exit(EXIT_FAILURE);
    } catch (...) {
        std::cerr << "Unknown exception" << std::endl;
        exit(EXIT_FAILURE);
    }

    return 0;
}