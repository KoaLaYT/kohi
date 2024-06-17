#include <core/asserts.h>
#include <core/logger.h>

int main(void)
{
    KFATAL("A test message: %f", 3.14f);
    KERROR("A test message: %f", 3.14f);
    KWARN("A test message: %f", 3.14f);
    KINFO("A test message: %f", 3.14f);
    KDEBUG("A test message: %f", 3.14f);
    KTRACE("A test message: %f", 3.14f);

    KASSERT_MSG(1 == 0, "expect 1 == 0");
}
