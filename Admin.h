#pragma once
#include<string>
#include<iostream>
using namespace std;
using namespace System;

ref class Admin
{
private:
	String^ Pass="12345";
	String^ AdminID= "Admin@12345";
public:
	String^ GetAdminID() {
		return AdminID;
	}
	String^ GetPass() {
		return Pass;
	}
};


