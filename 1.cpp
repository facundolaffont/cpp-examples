// 1.cpp

/**
 * @brief Validates if an AD date is correctly written, including leap years.
 * 
 * @param day day of the date.
 * @param month month of the date.
 * @param year year of the date.
 * @return true, if the date is valid; false, if it's not.
 */
bool isValidDate(short day, short month, short year) {
    int maxDayNumber[13] = {
        0, // Alingment
        31, // January
        29, // February
        31, // March
        30, // April
        31, // May
        30, // June
        31, // July
        31, // August
        30, // September
        31, // October
        30, // November
        31 // December
    };

    // Validates year.
    if(year < 0) return false;

    // Validates month.
    if(month < 1 || month > 12) return false;

    // Validates day.
    if(day < 1 || day > maxDayNumber[month]) return false;
    else if(month == 2 && day == 29 && !(
        year % 400 == 0
        ||
        (
            year % 4 == 0
            &&
            year % 100 != 0
        )
    )) return false;

    return true;
}
