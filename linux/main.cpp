#include "hook.hpp"

__attribute__((constructor)) void init_so()
{
    hook();
}