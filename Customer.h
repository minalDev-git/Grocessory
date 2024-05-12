
#pragma once
#include<string>
#include<iostream>
#include<string>
#include"Product.h"
using namespace System::IO;
using namespace std;
using namespace System;
ref class Cust {
 
public:
    int count = 0;
    String^ Cname;
    cli::array<Product^>^ P;
    int Phone;
    
    void set(String^ name, int phone){
        Cname = name;
        Phone = phone;
    }
    Cust() {
        P = gcnew cli::array<Product^>(100);
    }
   
    


    static void updateCart(String^ filename, String^ search1, String^ search2, int column, String^ newval1, String^ newval2)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            cli::array<String^>^ var = lines[i]->Split(',');
            String^ sep = "\n";
            if (i == lines->Length-1)
            {
                sep = "";
            }

            if (column >= 0 && column + 1 < var->Length)
            {
                // Check if the values at column index and column+1 index match the search criteria
                if (var[column] == search1 && var[column + 1] == search2)
                {
                    temp += newval1 + newval2 + sep;
                }
                else
                {
                    temp += lines[i] + sep;
                }
            }

        }
        File::WriteAllText(filename, temp);


    }


    static void DeleteFromCart(String^ filename, String^ search1, String^ search2,int search3 ,int column)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            cli::array<String^>^ var = lines[i]->Split(',');
            String^ sep = "\n";
            if (i == lines->Length-1)
            {
                sep = "";
            }
            if (var->Length > 1)
            {
                String^ Quantity = Convert::ToString(search3);
                if (!((var[column] + "," + var[column + 1] + "," + var[column+2]) == (search1 + "," + search2 + "," + Quantity)))
                {
                    temp += sep + lines[i];
                }
            }
        }
        File::WriteAllText(filename, temp);
    }
};






ref class Customer {

public:
    String^ Cname;
    int Phone;
Customer(){}

};