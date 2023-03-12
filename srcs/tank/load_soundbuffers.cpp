#include "../../includes/h_tank.h"

void Tank::load_soundbuffers()
{
    sb_rattle.loadFromFile(WAV_RATTLE_PATH);
    sb_rattle_end.loadFromFile(WAV_RATTLE_END_PATH);
    sb_fire.loadFromFile(WAV_FIRE_PATH);

    return;
}