/*

/*
// Pointers to two "day" states
current_day = &day1; // points to day 1
next_day = &day2; // points to day 2

// Initialise
compute_next_state(*current_day, *next_day); // compute using current and store in next

// Main loop
while (true) {
    // Swap the pointers
    temp = current_day; // temporary hold current day (pointer)
    current_day = next_day; (today becomes the new tomorrow)
    next_day = temp; day 2 becomes day 1 (but will be replaced) - can't overwrite if we lose the memory place
 
    // Compute next state based on the current state
    compute_next_state(*current_day, *next_day);
}

*/