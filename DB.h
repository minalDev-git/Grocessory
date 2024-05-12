#pragma once
#include<string>
#include"Product.h"
#include "mapper.h"
using namespace System;
using namespace System::IO;
using namespace System::Text;
#include <iostream>
#include <fstream>
#include <vector>




ref class DatabaseOperations {
public:

    void insert(String^ filename, String^ rows)
    {
        if (File::Exists(filename) == true)
        {
            File::AppendAllText(filename, "\n" + rows);
        }
        else
        {
            File::AppendAllText(filename, rows);

        }

    }

    cli::array<String^>^ read(String^ filename)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');

        return lines;
    }
    cli::array<String^>^ search(String^ filename, String^ search, int column)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            cli::array<String^>^ var = lines[i]->Split(',');
            if (var->Length > 1)
            {
                if (var[column] == search)
                {
                    temp += lines[i] + "#";
                }
            }
        }

        cli::array<String^>^ last = temp->Split('#');
        cli::array<String^>^ result = gcnew cli::array<String^>(last->Length - 1);
        for (int i = 0; i < result->Length; i++)
        {
            result[i] = last[i];
        }

        return result;


    }
    void update(String^ filename, String^ search1, String^ search2, int column, String^ newval1,String^newval2)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            cli::array<String^>^ var = lines[i]->Split(',');
            String^ sep = "\n";
            if (i == lines->Length - 1)
            {
                sep = "";
            }

            if (var[column] == search1 &&var[column+2]==search2)
            {
                temp += newval1+var[column + 1] + newval2 + sep;
            }
            else
            {
                temp += lines[i] + sep;

            }

        }
        File::WriteAllText(filename, temp);


    }
    void discard(String^ filename, String^ search1, String^ search2, int column)
    {

        String^ bytes = File::ReadAllText(filename);
        cli::array<String^>^ lines = bytes->Split('\n');
        String^ temp = "";
        for (int i = 0; i < lines->Length; i++)
        {
            cli::array<String^>^ var = lines[i]->Split(',');
            String^ sep = "\n";
            if (i==0)
            {
                sep = "";
            }
            if (var->Length >1)
            {
                if (!((var[column] + "," + var[column + 2]) == (search1 + "," + search2)))
                {
                    temp += sep + lines[i];
                }
            }
        }
        File::WriteAllText(filename, temp);
    }





};

ref class DB {



};

