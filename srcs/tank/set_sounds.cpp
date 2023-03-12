#include "../../includes/h_tank.h"

void Tank::set_sounds()
{
    sound_rattle.setBuffer(sb_rattle);
    sound_rattle_end.setBuffer(sb_rattle_end);
    sound_fire.setBuffer(sb_fire);

    return;
}