void CommaSeparatedNumbers(char* f_bill, const double bill_price, const char precision)
{
    char format[] = {'%', '.', precision, 'f', '\0'};
    int x = sprintf(f_bill, format, bill_price);
    int digit_iter = strcspn(f_bill, ".");

    int digitCount = 0;
    while (--digit_iter)
    {
        ++digitCount;
        if (!(digitCount%3) && f_bill[digit_iter-1] != '-')
        {
            memmove(&f_bill[digit_iter+1], &f_bill[digit_iter], strlen(f_bill) - digit_iter);
            f_bill[digit_iter] = ',';
        }
    }
}

void FloatToString(char string_float[11], double inputFloat, char precision)
{
    char format[] = {'%', '.', precision, 'f', '\0'};
    int n = 0;
    n = sprintf(string_float, format, inputFloat);
    string_float[11] = '\0';
}
