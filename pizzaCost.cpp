// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Date: May 5, 2021
// This program asks the user for the diameter and then
// displays the cost of the pizza based on the diameter.
#include <iostream>

int main() {
  // declare constants
const float HST = .13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

  // declare variables
  float diameter, subtotal, tax, total;

  // get the radius from the user
  std::cout << "Enter the diameter of the pizza (cm): ";
  std::cin >> diameter;

  // calculate the subtotal, tax and total of the pizza
  subtotal = LABOUR_COST + RENTAL_COST + diameter * INGRED_COST;
  tax = HST * subtotal;
  total = subtotal + tax;

  // display the total of the pizza to the user
  std::cout << "\n";
  std::cout << "total = $" <<  printf("%.2f", total) << "" << std::endl;
}
