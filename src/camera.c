#include "camera.h"

camera_t camera = {
    .position = { 0, 0, 0 },
    .direction = { 0, 0, 1 },
    .fwd_velocity = { 0, 0, 0 },
    .yaw_angle = 0.0
};
