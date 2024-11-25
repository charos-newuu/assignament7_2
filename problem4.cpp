double probability(int *A, int *B) {
    int dilya_wins = 0;
    int total_outcomes = 36;

    for (int d = 1; d <= 6; d++) {
        for (int a = 1; a <= 6; a++) {
            for (int b = 1; b <= 6; b++) {
                if (d > a && d > b) {
                    dilya_wins++;
                } else if (d == a || d == b) {
                    dilya_wins++;
                }
            }
        }
    }
    return static_cast<double>(dilya_wins) / total_outcomes;
}

