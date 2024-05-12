#pragma once

#include<iostream>
#include<string>
using namespace std;
using namespace System;
ref class Product {
public:
    int PID;
    int Quantity;
    String^ PName;

    int weight;
    int price;
    

    void SetPDetails(String^ name, int W, int cost, int Qty, int id) {
        PName = name;
        weight = W;
        price = cost;
        Quantity = Qty;
        PID = id;
    }
   
    inline void GetPDetails() {
        Console::WriteLine("Product Name: " + PName);
        Console::WriteLine("Product ID: " + PID);
        Console::WriteLine("Weight in grams: " + weight);
        Console::WriteLine("Product Price: " + price);
        Console::WriteLine("Product Quantity: " + Quantity);
    }

};

