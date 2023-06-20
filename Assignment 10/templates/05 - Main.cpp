// Created by Dayu Wang (dwang@stchas.edu) on 2022-11-17

// Last updated by Dayu Wang (dwang@stchas.edu) on 2023-05-03


#include "Pair.h"
#include "Rectangle.h"
#include "Template_Functions.h"

#include <iostream>
#include <string>

using namespace std;

int main() {
    int x_1 = 5, x_2 = -3, x_3 = 8;
    string s_1 = "CPT-182-83", s_2 = "CPT-106-02", s_3 = "CPT-281-42";
    Rectangle r_1(5, 10), r_2(17, 3), r_3(25, 3);
    Pair<unsigned int, char> p_1(3, 'z'), p_2(3, 'a'), p_3(5, 'd');

    cout << min_of_three(x_1, x_2, x_3) << endl;
    cout << min_of_three(s_1, s_2, s_3) << endl;
    cout << min_of_three(r_1, r_2, r_3) << endl;
    cout << min_of_three(p_1, p_2, p_3) << endl;

    system("pause");
    return 0;
}