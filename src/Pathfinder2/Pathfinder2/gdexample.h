#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <core\Godot.hpp>
#include <gen\Sprite.hpp>

namespace godot {

    class GDExample : public Sprite {
        GODOT_CLASS(GDExample, Sprite)

    private:
        float time_passed;

    public:
        static void _register_methods();

        GDExample();
        ~GDExample();

        void _init(); // our initializer called by Godot

        void _process(float delta);
    };

}

#endif
