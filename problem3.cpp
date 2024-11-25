int minsNewYear(int *hour, int *min) {
    int total_minutes_in_a_day = 24 * 60;
    int current_minutes = (*hour * 60) + *min;
    return total_minutes_in_a_day - current_minutes;
}
