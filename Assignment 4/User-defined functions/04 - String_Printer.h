// Created by Dayu Wang (dwang@stchas.edu) on 2022-06-26

// Last updated by Dayu Wang (dwang@stchas.edu) on 2022-09-16


#ifndef STRING_PRINTER_H
#define STRING_PRINTER_H

#include "String_Processor.h"

void print_uppercase_string(string& s) {
    to_uppercase(s);
    print_string(s);
}

#endif