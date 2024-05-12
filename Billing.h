#pragma once
#include "Customer.h"
#include "Product.h"
#include<string>
#include "mapper.h"

using namespace System;
using namespace System::IO;
using namespace System::Text;
ref class Billing
{
private:
	int	BillID = 4000;
    float TotalAmount = 0;
	const int discount = 0.1;
	cli::array<Product^>^ Prod;  
	cli::array<Cust^>^ Customer;
   
	
public:
	cli::array<int^>^ SubTotal;
	Billing() {
		Prod = gcnew cli::array<Product^>(100);
		Customer = gcnew cli::array<Cust^>(100);
        BillID++;
		
	}
    float CalBill(cli::array<String^>^ P, cli::array<String^>^ C) {
    Prod = mapper::map_product(P);
    Customer = mapper::map_customer(C);
    TotalAmount = 0; // Reset TotalAmount before calculating the bill
    SubTotal = gcnew cli::array<int^>(Customer->Length); // Initialize SubTotal array here
    for (int i = 0; i < Customer->Length; i++) {
        if (Customer[i]->P != nullptr) {
            for (int j = 0; j < Customer[i]->P->Length; j++) {
                if (Prod != nullptr && Prod->Length > j && Customer[i]->P[j]->PName == Prod[j]->PName && Customer[i]->P[j]->weight == Prod[j]->weight) {
                    SubTotal[j] = Prod[j]->price * Customer[i]->P[j]->Quantity;
                    Customer[i]->P[j]->PID = Prod[j]->PID;
                    TotalAmount += *SubTotal[j];
                    break;
                }
            }
        }
    }
    return TotalAmount;
}

float getAmount() {
    return TotalAmount;
}

float  getAmount(float dis) {
    if (dis >= 0 && dis <= 1) {
        float discountedAmount = TotalAmount * (dis);
        return TotalAmount = TotalAmount - discountedAmount;
    }
    else {
        return TotalAmount;
    }
    
}

int GetID() {
   // BillID++;
    return BillID;
}
	
};