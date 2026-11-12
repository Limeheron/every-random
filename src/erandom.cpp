#include "erandom/erandom.h"

#include <chrono>

namespace erandom
{
    int micro_digit()
    {
        const auto ms = std::chrono::duration_cast<std::chrono::microseconds>
                (std::chrono::system_clock::now().time_since_epoch()).count();
        
        return static_cast<int>(ms % 10);
    }

}  // namespace erandom
