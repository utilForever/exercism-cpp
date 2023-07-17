int ovenTime() {
    return 40;
}

int remainingOvenTime(int actualMinutesInOven) {
    return 40 - actualMinutesInOven;
}

int preparationTime(int numberOfLayers) {
    return 2 * numberOfLayers;
}

int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    return preparationTime(numberOfLayers) + actualMinutesInOven;
}
