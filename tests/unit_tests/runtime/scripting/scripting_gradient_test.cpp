
#include "catch.hpp"
#include "scripting_test_utilities.hpp"

using namespace rive;

TEST_CASE("gradient can be constructed", "[scripting]")
{
    CHECK(
        lua_userdatatag(ScriptingTest(
                            // clang-format off
                            "return Gradient.linear(Vec2D(), Vec2D(10, 0), {"
                                "{ position = 0.0, color = Color(255, 0, 0, 255) },"
                                "{ position = 1.0, color = Color(255, 0, 0, 0) },"
                            "})")
                            // clang-format on
                            .state(),
                        -1) == ScriptedGradient::luaTag);
}
