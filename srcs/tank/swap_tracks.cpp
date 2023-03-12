#include "../../includes/h_tank.h"

void Tank::swap_tracks()
{
    tracks_frame = (tracks_frame + 1) % 2;

    if (!tracks_frame) {
        spr_track_1.setTexture(tx_track_1);
        spr_track_2.setTexture(tx_track_1);
    } else {
        spr_track_1.setTexture(tx_track_2);
        spr_track_2.setTexture(tx_track_2);
    }

    return;
}