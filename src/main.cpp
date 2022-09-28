#include <iostream>
#include <lua.hpp>

int main() {
    std::string expression = "1 + 1";

    std::string lua_input = "return " + expression;

    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    luaL_dostring(L, lua_input.c_str());
    auto evaluated = lua_tointeger(L, 1);
    lua_close(L);

    std::cout << expression << " = " << evaluated << std::endl;

    std::cin.get();
    return 0;
}
