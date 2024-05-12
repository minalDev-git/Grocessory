#pragma once
#include<string>
#include"Product.h"
#include<iostream>
#include"Customer.h"
using namespace System;
using namespace System::IO;
using namespace System::Text;
ref class mapper
{
public:
	static cli::array<Product^>^ map_product(cli::array<String^>^ rows) {
		cli::array<Product^>^ P = gcnew cli::array<Product^>(rows->Length);
		 
		for (int i = 0; i < rows->Length; i++) {
			
			cli::array<String^>^ temp = rows[i]->Split(',');
			P[i] = gcnew Product();
			if (temp->Length>1) {
				P[i]->PName = temp[0];
				P[i]->PID = Int32::Parse(temp[1]);
				P[i]->weight = Int32::Parse(temp[2]);
				P[i]->Quantity = Int32::Parse(temp[3]);
				P[i]->price = Int32::Parse(temp[4]);
			}

		}
		return P;
	}
	static cli::array<Cust^>^ map_customer(cli::array<String^>^ rows) {
		cli::array<Cust^>^ C = gcnew cli::array<Cust^>(rows->Length);
		for (int i = 0; i < rows->Length; i++) {
			cli::array<String^>^ temp = rows[i]->Split(',');
			C[i] = gcnew Cust();
			C[i]->P = gcnew cli::array<Product^>(temp->Length - 1); // Initialize P array based on temp length
			for (int j = 0; j < temp->Length - 1; j++) {
				C[i]->P[j] = gcnew Product(); // Initialize each product in the array
				C[i]->Cname = temp[0];
				C[i]->Phone = Int32::Parse(temp[1]);
				C[i]->P[j]->PName = temp[2];
				C[i]->P[j]->weight = Int32::Parse(temp[3]);
				C[i]->P[j]->Quantity = Int32::Parse(temp[ 4]);
				
			}
		}
		return C;
	}

	
};

