#pragma once

#include "lve_window.hpp"
#include "lve_pipeline.hpp"

namespace lve {

    class FirstApp {
        public:
            static constexpr int WIDTH = 800;
            static constexpr int HEIGHT = 600;

            void run();
        private:
            lveWindow lveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
            LvePipeline lvePipeline{"../shader/simple_shader.vert.spv", "../shader/simple_shader.frag.spv"};
    };

}
