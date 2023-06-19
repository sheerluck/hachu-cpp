
#include <array>

using Move = std::uint64_t;

struct MoveInfo
{
    Move from;
    Move to;
    std::array<Move, 2> path;
};
