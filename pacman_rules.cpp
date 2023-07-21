bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    return power_pellet_active && touching_ghost;
}

bool scored(bool touching_power_pellet, bool touching_dot) {
    return touching_power_pellet || touching_dot;
}

bool lost(bool power_pellet_active, bool touching_ghost) {
    return !power_pellet_active && touching_ghost;
}

bool won(bool has_eaten_all_dots, bool power_pellet_active,
         bool touching_ghost) {
    return has_eaten_all_dots && !lost(power_pellet_active, touching_ghost);
}
