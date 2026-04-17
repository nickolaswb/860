bool lemonadeChange(int* bills, int billsSize) {
    int cinco = 0, dez = 0;

    for (int i = 0; i<billsSize; i++) {
        if ( bills[i] == 5 ) {
            cinco++;
        } else if ( bills[i] == 10 ) {
            if ( cinco > 0 ) {
            cinco--;
            dez++;
            } else {
                return false;
            }
        } else if ( bills[i] == 20 ) {
            if (cinco > 0 && dez > 0) {
                cinco--;
                dez--;
            } else if ( cinco >= 3 ) {
                cinco--;
                cinco--;
                cinco--;
            } else {
                return false;
            }
        }
    }
    return true;
}
