#pragma once
#include "Product.h"
#include"Customer.h"
#include"DB.h"
#include "Admin.h"
#include "Billing.h"
namespace Grocessory {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		DatabaseOperations^ Crud;
		//Product^ P;
		cli::array<Product^>^ Prod;
		cli::array<Cust^>^ C;
		Billing^ Bill;

	private: System::Windows::Forms::TabPage^ CustomerCart;
	public:





	private: System::Windows::Forms::TextBox^ phoneNo;
	private: System::Windows::Forms::TextBox^ CName;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ ProceedToBill;

	private: System::Windows::Forms::Button^ UpdateCart;
	private: System::Windows::Forms::Button^ DeleteFromCart;




	private: System::Windows::Forms::Button^ AddToCart;
	private: System::Windows::Forms::TextBox^ selQty;

	private: System::Windows::Forms::ComboBox^ selWeight;

	private: System::Windows::Forms::ComboBox^ selProd;
	private: System::Windows::Forms::ComboBox^ name;
	private: System::Windows::Forms::ComboBox^ wght;
	private: System::Windows::Forms::TabPage^ BillPage;

	private: System::Windows::Forms::TextBox^ PayAmount;

	private: System::Windows::Forms::Button^ generateBill;





	private: System::Windows::Forms::Label^ label9;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ billSlip;
	private: System::Windows::Forms::TabPage^ ThankYou;
	private: System::Windows::Forms::Button^ End;







	public:

	public:


		Admin^ A;
		MainForm(void)
		{
			Crud = gcnew DatabaseOperations();
			//P = gcnew Product();
			Prod = gcnew cli::array<Product^>(100);
			C = gcnew cli::array<Cust^>(100);
			A = gcnew Admin();
			Bill = gcnew Billing();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			dataGridView1->Columns->Add("c1", "Name");
			dataGridView1->Columns->Add("c2", "prodID");
			dataGridView1->Columns->Add("c3", "Weight");
			dataGridView1->Columns->Add("c4", "Quantity");
			dataGridView1->Columns->Add("c5", "Price");

			dataGridView2->Columns->Add("c1", "CName");
			dataGridView2->Columns->Add("c2", "phNo:");
			dataGridView2->Columns->Add("c3", "Prod");
			dataGridView2->Columns->Add("c4", " W(g)");
			dataGridView2->Columns->Add("c5", "Qty");
			

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^ Home;
	protected:
	private: System::Windows::Forms::TabPage^ Welcome;
	private: System::Windows::Forms::Button^ OK;
	private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TabControl^ tabControl1;




	private: System::Windows::Forms::TabPage^ LoginPage;
	private: System::Windows::Forms::TabPage^ AdminPage;
	private: System::Windows::Forms::Button^ Customer;

	private: System::Windows::Forms::Button^ adminLogin;
	private: System::Windows::Forms::Button^ Login;

	private: System::Windows::Forms::Label^ userpass;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::TextBox^ Pass;

	private: System::Windows::Forms::TextBox^ User;

	private: System::Windows::Forms::Button^ CustomerInventory;
	private: System::Windows::Forms::Button^ ProductInventory;
	private: System::Windows::Forms::TabPage^ ProductDetails;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ DisplayAll;
	private: System::Windows::Forms::Button^ Search;
	private: System::Windows::Forms::Button^ Delete;
	private: System::Windows::Forms::Button^ AddProduct;
	private: System::Windows::Forms::Button^ UpdateQty;
	private: System::Windows::Forms::Label^ Price;
	private: System::Windows::Forms::Label^ Quantity;
	private: System::Windows::Forms::Label^ Weight;
	private: System::Windows::Forms::Label^ ProdName;
	private: System::Windows::Forms::TextBox^ cost;
	private: System::Windows::Forms::TextBox^ qty;

















	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Home = (gcnew System::Windows::Forms::TabPage());
			this->Customer = (gcnew System::Windows::Forms::Button());
			this->adminLogin = (gcnew System::Windows::Forms::Button());
			this->Welcome = (gcnew System::Windows::Forms::TabPage());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->LoginPage = (gcnew System::Windows::Forms::TabPage());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->userpass = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::Label());
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->User = (gcnew System::Windows::Forms::TextBox());
			this->AdminPage = (gcnew System::Windows::Forms::TabPage());
			this->CustomerInventory = (gcnew System::Windows::Forms::Button());
			this->ProductInventory = (gcnew System::Windows::Forms::Button());
			this->ProductDetails = (gcnew System::Windows::Forms::TabPage());
			this->wght = (gcnew System::Windows::Forms::ComboBox());
			this->name = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->DisplayAll = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::Button());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->AddProduct = (gcnew System::Windows::Forms::Button());
			this->UpdateQty = (gcnew System::Windows::Forms::Button());
			this->Price = (gcnew System::Windows::Forms::Label());
			this->Quantity = (gcnew System::Windows::Forms::Label());
			this->Weight = (gcnew System::Windows::Forms::Label());
			this->ProdName = (gcnew System::Windows::Forms::Label());
			this->cost = (gcnew System::Windows::Forms::TextBox());
			this->qty = (gcnew System::Windows::Forms::TextBox());
			this->CustomerCart = (gcnew System::Windows::Forms::TabPage());
			this->AddToCart = (gcnew System::Windows::Forms::Button());
			this->ProceedToBill = (gcnew System::Windows::Forms::Button());
			this->UpdateCart = (gcnew System::Windows::Forms::Button());
			this->DeleteFromCart = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->phoneNo = (gcnew System::Windows::Forms::TextBox());
			this->CName = (gcnew System::Windows::Forms::TextBox());
			this->selQty = (gcnew System::Windows::Forms::TextBox());
			this->selWeight = (gcnew System::Windows::Forms::ComboBox());
			this->selProd = (gcnew System::Windows::Forms::ComboBox());
			this->BillPage = (gcnew System::Windows::Forms::TabPage());
			this->End = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->billSlip = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->PayAmount = (gcnew System::Windows::Forms::TextBox());
			this->generateBill = (gcnew System::Windows::Forms::Button());
			this->ThankYou = (gcnew System::Windows::Forms::TabPage());
			this->Home->SuspendLayout();
			this->Welcome->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->LoginPage->SuspendLayout();
			this->AdminPage->SuspendLayout();
			this->ProductDetails->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->CustomerCart->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->BillPage->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Home
			// 
			this->Home->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Home->Controls->Add(this->Customer);
			this->Home->Controls->Add(this->adminLogin);
			this->Home->Location = System::Drawing::Point(4, 22);
			this->Home->Name = L"Home";
			this->Home->Padding = System::Windows::Forms::Padding(3);
			this->Home->Size = System::Drawing::Size(807, 291);
			this->Home->TabIndex = 1;
			this->Home->Text = L"Home";
			this->Home->Click += gcnew System::EventHandler(this, &MainForm::Home_Click);
			// 
			// Customer
			// 
			this->Customer->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Customer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Customer->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Customer->Location = System::Drawing::Point(250, 143);
			this->Customer->Name = L"Customer";
			this->Customer->Size = System::Drawing::Size(300, 49);
			this->Customer->TabIndex = 4;
			this->Customer->Text = L"Continue as Customer";
			this->Customer->UseVisualStyleBackColor = false;
			this->Customer->Click += gcnew System::EventHandler(this, &MainForm::Customer_Click);
			// 
			// adminLogin
			// 
			this->adminLogin->BackColor = System::Drawing::Color::PaleTurquoise;
			this->adminLogin->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminLogin->Location = System::Drawing::Point(250, 67);
			this->adminLogin->Name = L"adminLogin";
			this->adminLogin->Size = System::Drawing::Size(300, 50);
			this->adminLogin->TabIndex = 3;
			this->adminLogin->Text = L"Login As Admin";
			this->adminLogin->UseVisualStyleBackColor = false;
			this->adminLogin->Click += gcnew System::EventHandler(this, &MainForm::adminLogin_Click);
			// 
			// Welcome
			// 
			this->Welcome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Welcome->Controls->Add(this->OK);
			this->Welcome->Controls->Add(this->label2);
			this->Welcome->Location = System::Drawing::Point(4, 22);
			this->Welcome->Name = L"Welcome";
			this->Welcome->Padding = System::Windows::Forms::Padding(3);
			this->Welcome->Size = System::Drawing::Size(807, 291);
			this->Welcome->TabIndex = 0;
			this->Welcome->Text = L"Welcome";
			this->Welcome->Click += gcnew System::EventHandler(this, &MainForm::Welcome_Click);
			// 
			// OK
			// 
			this->OK->BackColor = System::Drawing::Color::PaleTurquoise;
			this->OK->Location = System::Drawing::Point(356, 164);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(75, 23);
			this->OK->TabIndex = 2;
			this->OK->Text = L"OK";
			this->OK->UseVisualStyleBackColor = false;
			this->OK->Click += gcnew System::EventHandler(this, &MainForm::OK_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Navy;
			this->label2->Location = System::Drawing::Point(158, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(442, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Welcome to Grocery store";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->Welcome);
			this->tabControl1->Controls->Add(this->Home);
			this->tabControl1->Controls->Add(this->LoginPage);
			this->tabControl1->Controls->Add(this->AdminPage);
			this->tabControl1->Controls->Add(this->ProductDetails);
			this->tabControl1->Controls->Add(this->CustomerCart);
			this->tabControl1->Controls->Add(this->BillPage);
			this->tabControl1->Controls->Add(this->ThankYou);
			this->tabControl1->Location = System::Drawing::Point(2, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(815, 317);
			this->tabControl1->TabIndex = 3;
			// 
			// LoginPage
			// 
			this->LoginPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->LoginPage->Controls->Add(this->Login);
			this->LoginPage->Controls->Add(this->userpass);
			this->LoginPage->Controls->Add(this->username);
			this->LoginPage->Controls->Add(this->Pass);
			this->LoginPage->Controls->Add(this->User);
			this->LoginPage->Location = System::Drawing::Point(4, 22);
			this->LoginPage->Name = L"LoginPage";
			this->LoginPage->Size = System::Drawing::Size(807, 291);
			this->LoginPage->TabIndex = 2;
			this->LoginPage->Text = L"Login";
			this->LoginPage->Click += gcnew System::EventHandler(this, &MainForm::LoginPage_Click);
			// 
			// Login
			// 
			this->Login->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Login->Location = System::Drawing::Point(348, 194);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(89, 32);
			this->Login->TabIndex = 7;
			this->Login->Text = L"Login";
			this->Login->UseVisualStyleBackColor = false;
			this->Login->Click += gcnew System::EventHandler(this, &MainForm::Login_Click_1);
			// 
			// userpass
			// 
			this->userpass->AutoSize = true;
			this->userpass->Location = System::Drawing::Point(254, 140);
			this->userpass->Name = L"userpass";
			this->userpass->Size = System::Drawing::Size(53, 13);
			this->userpass->TabIndex = 6;
			this->userpass->Text = L"Password";
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Location = System::Drawing::Point(250, 80);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(57, 13);
			this->username->TabIndex = 5;
			this->username->Text = L"UserName";
			// 
			// Pass
			// 
			this->Pass->Location = System::Drawing::Point(313, 137);
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(163, 20);
			this->Pass->TabIndex = 4;
			this->Pass->TextChanged += gcnew System::EventHandler(this, &MainForm::Pass_TextChanged);
			// 
			// User
			// 
			this->User->Location = System::Drawing::Point(313, 77);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(163, 20);
			this->User->TabIndex = 3;
			this->User->TextChanged += gcnew System::EventHandler(this, &MainForm::User_TextChanged);
			// 
			// AdminPage
			// 
			this->AdminPage->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->AdminPage->Controls->Add(this->CustomerInventory);
			this->AdminPage->Controls->Add(this->ProductInventory);
			this->AdminPage->Location = System::Drawing::Point(4, 22);
			this->AdminPage->Name = L"AdminPage";
			this->AdminPage->Size = System::Drawing::Size(807, 291);
			this->AdminPage->TabIndex = 3;
			this->AdminPage->Text = L"Admin";
			this->AdminPage->Click += gcnew System::EventHandler(this, &MainForm::AdminPage_Click);
			// 
			// CustomerInventory
			// 
			this->CustomerInventory->BackColor = System::Drawing::Color::PaleTurquoise;
			this->CustomerInventory->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerInventory->Location = System::Drawing::Point(318, 140);
			this->CustomerInventory->Name = L"CustomerInventory";
			this->CustomerInventory->Size = System::Drawing::Size(137, 32);
			this->CustomerInventory->TabIndex = 2;
			this->CustomerInventory->Text = L"CustomerInventory";
			this->CustomerInventory->UseVisualStyleBackColor = false;
			this->CustomerInventory->Click += gcnew System::EventHandler(this, &MainForm::CustomerInventory_Click);
			// 
			// ProductInventory
			// 
			this->ProductInventory->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ProductInventory->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ProductInventory->Location = System::Drawing::Point(318, 69);
			this->ProductInventory->Name = L"ProductInventory";
			this->ProductInventory->Size = System::Drawing::Size(137, 31);
			this->ProductInventory->TabIndex = 1;
			this->ProductInventory->Text = L"ProductInventory";
			this->ProductInventory->UseVisualStyleBackColor = false;
			this->ProductInventory->Click += gcnew System::EventHandler(this, &MainForm::ProductInventory_Click);
			// 
			// ProductDetails
			// 
			this->ProductDetails->Controls->Add(this->wght);
			this->ProductDetails->Controls->Add(this->name);
			this->ProductDetails->Controls->Add(this->dataGridView1);
			this->ProductDetails->Controls->Add(this->DisplayAll);
			this->ProductDetails->Controls->Add(this->Search);
			this->ProductDetails->Controls->Add(this->Delete);
			this->ProductDetails->Controls->Add(this->AddProduct);
			this->ProductDetails->Controls->Add(this->UpdateQty);
			this->ProductDetails->Controls->Add(this->Price);
			this->ProductDetails->Controls->Add(this->Quantity);
			this->ProductDetails->Controls->Add(this->Weight);
			this->ProductDetails->Controls->Add(this->ProdName);
			this->ProductDetails->Controls->Add(this->cost);
			this->ProductDetails->Controls->Add(this->qty);
			this->ProductDetails->Location = System::Drawing::Point(4, 22);
			this->ProductDetails->Name = L"ProductDetails";
			this->ProductDetails->Padding = System::Windows::Forms::Padding(3);
			this->ProductDetails->Size = System::Drawing::Size(807, 291);
			this->ProductDetails->TabIndex = 4;
			this->ProductDetails->Text = L"ProdDetails";
			this->ProductDetails->UseVisualStyleBackColor = true;
			this->ProductDetails->Click += gcnew System::EventHandler(this, &MainForm::ProductDetails_Click);
			// 
			// wght
			// 
			this->wght->FormattingEnabled = true;
			this->wght->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"250", L"500", L"1000", L"5000" });
			this->wght->Location = System::Drawing::Point(685, 34);
			this->wght->Name = L"wght";
			this->wght->Size = System::Drawing::Size(109, 21);
			this->wght->TabIndex = 32;
			this->wght->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::wght_SelectedIndexChanged);
			// 
			// name
			// 
			this->name->FormattingEnabled = true;
			this->name->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"p1", L"p2", L"p3", L"p4", L"p5", L"p6", L"p7", L"p8",
					L"p9", L"p10"
			});
			this->name->Location = System::Drawing::Point(568, 34);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(97, 21);
			this->name->TabIndex = 31;
			this->name->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::name_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(9, 60);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(509, 214);
			this->dataGridView1->TabIndex = 30;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// DisplayAll
			// 
			this->DisplayAll->BackColor = System::Drawing::Color::PaleTurquoise;
			this->DisplayAll->Location = System::Drawing::Point(345, 18);
			this->DisplayAll->Name = L"DisplayAll";
			this->DisplayAll->Size = System::Drawing::Size(75, 23);
			this->DisplayAll->TabIndex = 29;
			this->DisplayAll->Text = L"DisplayAll";
			this->DisplayAll->UseVisualStyleBackColor = false;
			this->DisplayAll->Click += gcnew System::EventHandler(this, &MainForm::DisplayAll_Click);
			// 
			// Search
			// 
			this->Search->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Search->Location = System::Drawing::Point(264, 18);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(75, 23);
			this->Search->TabIndex = 28;
			this->Search->Text = L"Search";
			this->Search->UseVisualStyleBackColor = false;
			this->Search->Click += gcnew System::EventHandler(this, &MainForm::Search_Click);
			// 
			// Delete
			// 
			this->Delete->BackColor = System::Drawing::Color::PaleTurquoise;
			this->Delete->Location = System::Drawing::Point(183, 18);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(75, 23);
			this->Delete->TabIndex = 27;
			this->Delete->Text = L"Delete";
			this->Delete->UseVisualStyleBackColor = false;
			this->Delete->Click += gcnew System::EventHandler(this, &MainForm::Delete_Click);
			// 
			// AddProduct
			// 
			this->AddProduct->BackColor = System::Drawing::Color::PaleTurquoise;
			this->AddProduct->Location = System::Drawing::Point(26, 18);
			this->AddProduct->Name = L"AddProduct";
			this->AddProduct->Size = System::Drawing::Size(75, 23);
			this->AddProduct->TabIndex = 26;
			this->AddProduct->Text = L"AddProduct";
			this->AddProduct->UseVisualStyleBackColor = false;
			this->AddProduct->Click += gcnew System::EventHandler(this, &MainForm::AddProduct_Click);
			// 
			// UpdateQty
			// 
			this->UpdateQty->BackColor = System::Drawing::Color::PaleTurquoise;
			this->UpdateQty->Location = System::Drawing::Point(107, 18);
			this->UpdateQty->Name = L"UpdateQty";
			this->UpdateQty->Size = System::Drawing::Size(75, 23);
			this->UpdateQty->TabIndex = 25;
			this->UpdateQty->Text = L"UpdateQty";
			this->UpdateQty->UseVisualStyleBackColor = false;
			this->UpdateQty->Click += gcnew System::EventHandler(this, &MainForm::UpdateQty_Click);
			// 
			// Price
			// 
			this->Price->AutoSize = true;
			this->Price->Location = System::Drawing::Point(714, 128);
			this->Price->Name = L"Price";
			this->Price->Size = System::Drawing::Size(31, 13);
			this->Price->TabIndex = 24;
			this->Price->Text = L"Price";
			// 
			// Quantity
			// 
			this->Quantity->AutoSize = true;
			this->Quantity->Location = System::Drawing::Point(565, 128);
			this->Quantity->Name = L"Quantity";
			this->Quantity->Size = System::Drawing::Size(46, 13);
			this->Quantity->TabIndex = 23;
			this->Quantity->Text = L"Quantity";
			// 
			// Weight
			// 
			this->Weight->AutoSize = true;
			this->Weight->Location = System::Drawing::Point(714, 18);
			this->Weight->Name = L"Weight";
			this->Weight->Size = System::Drawing::Size(41, 13);
			this->Weight->TabIndex = 22;
			this->Weight->Text = L"Weight";
			// 
			// ProdName
			// 
			this->ProdName->AutoSize = true;
			this->ProdName->Location = System::Drawing::Point(583, 18);
			this->ProdName->Name = L"ProdName";
			this->ProdName->Size = System::Drawing::Size(57, 13);
			this->ProdName->TabIndex = 21;
			this->ProdName->Text = L"ProdName";
			// 
			// cost
			// 
			this->cost->Location = System::Drawing::Point(694, 144);
			this->cost->Name = L"cost";
			this->cost->Size = System::Drawing::Size(100, 20);
			this->cost->TabIndex = 20;
			this->cost->TextChanged += gcnew System::EventHandler(this, &MainForm::cost_TextChanged);
			// 
			// qty
			// 
			this->qty->Location = System::Drawing::Point(568, 144);
			this->qty->Name = L"qty";
			this->qty->Size = System::Drawing::Size(100, 20);
			this->qty->TabIndex = 19;
			this->qty->TextChanged += gcnew System::EventHandler(this, &MainForm::qty_TextChanged);
			// 
			// CustomerCart
			// 
			this->CustomerCart->Controls->Add(this->AddToCart);
			this->CustomerCart->Controls->Add(this->ProceedToBill);
			this->CustomerCart->Controls->Add(this->UpdateCart);
			this->CustomerCart->Controls->Add(this->DeleteFromCart);
			this->CustomerCart->Controls->Add(this->label6);
			this->CustomerCart->Controls->Add(this->label5);
			this->CustomerCart->Controls->Add(this->label4);
			this->CustomerCart->Controls->Add(this->label3);
			this->CustomerCart->Controls->Add(this->label1);
			this->CustomerCart->Controls->Add(this->dataGridView2);
			this->CustomerCart->Controls->Add(this->phoneNo);
			this->CustomerCart->Controls->Add(this->CName);
			this->CustomerCart->Controls->Add(this->selQty);
			this->CustomerCart->Controls->Add(this->selWeight);
			this->CustomerCart->Controls->Add(this->selProd);
			this->CustomerCart->Location = System::Drawing::Point(4, 22);
			this->CustomerCart->Name = L"CustomerCart";
			this->CustomerCart->Padding = System::Windows::Forms::Padding(3);
			this->CustomerCart->Size = System::Drawing::Size(807, 291);
			this->CustomerCart->TabIndex = 5;
			this->CustomerCart->Text = L"CustomerCart";
			this->CustomerCart->UseVisualStyleBackColor = true;
			// 
			// AddToCart
			// 
			this->AddToCart->BackColor = System::Drawing::Color::LightSkyBlue;
			this->AddToCart->Location = System::Drawing::Point(214, 31);
			this->AddToCart->Name = L"AddToCart";
			this->AddToCart->Size = System::Drawing::Size(106, 23);
			this->AddToCart->TabIndex = 15;
			this->AddToCart->Text = L"AddToCart";
			this->AddToCart->UseVisualStyleBackColor = false;
			this->AddToCart->Click += gcnew System::EventHandler(this, &MainForm::AddToCart_Click_1);
			// 
			// ProceedToBill
			// 
			this->ProceedToBill->BackColor = System::Drawing::Color::SkyBlue;
			this->ProceedToBill->Location = System::Drawing::Point(582, 31);
			this->ProceedToBill->Name = L"ProceedToBill";
			this->ProceedToBill->Size = System::Drawing::Size(117, 23);
			this->ProceedToBill->TabIndex = 14;
			this->ProceedToBill->Text = L"ProceedToBill";
			this->ProceedToBill->UseVisualStyleBackColor = false;
			this->ProceedToBill->Click += gcnew System::EventHandler(this, &MainForm::ProceedToBill_Click);
			// 
			// UpdateCart
			// 
			this->UpdateCart->BackColor = System::Drawing::Color::SkyBlue;
			this->UpdateCart->Location = System::Drawing::Point(339, 31);
			this->UpdateCart->Name = L"UpdateCart";
			this->UpdateCart->Size = System::Drawing::Size(112, 23);
			this->UpdateCart->TabIndex = 13;
			this->UpdateCart->Text = L"UpdateCart";
			this->UpdateCart->UseVisualStyleBackColor = false;
			this->UpdateCart->Click += gcnew System::EventHandler(this, &MainForm::UpdateCart_Click);
			// 
			// DeleteFromCart
			// 
			this->DeleteFromCart->BackColor = System::Drawing::Color::SkyBlue;
			this->DeleteFromCart->Location = System::Drawing::Point(472, 31);
			this->DeleteFromCart->Name = L"DeleteFromCart";
			this->DeleteFromCart->Size = System::Drawing::Size(104, 23);
			this->DeleteFromCart->TabIndex = 12;
			this->DeleteFromCart->Text = L"DeleteFromCart";
			this->DeleteFromCart->UseVisualStyleBackColor = false;
			this->DeleteFromCart->Click += gcnew System::EventHandler(this, &MainForm::DeleteFromCart_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(151, 4);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Quantity";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(75, 3);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Weight";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Products";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 200);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Phone Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Customer Name";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(185, 60);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(514, 214);
			this->dataGridView2->TabIndex = 5;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView2_CellContentClick);
			// 
			// phoneNo
			// 
			this->phoneNo->Location = System::Drawing::Point(6, 216);
			this->phoneNo->Name = L"phoneNo";
			this->phoneNo->Size = System::Drawing::Size(159, 20);
			this->phoneNo->TabIndex = 4;
			this->phoneNo->TextChanged += gcnew System::EventHandler(this, &MainForm::phoneNo_TextChanged);
			// 
			// CName
			// 
			this->CName->BackColor = System::Drawing::SystemColors::Window;
			this->CName->Location = System::Drawing::Point(9, 160);
			this->CName->Name = L"CName";
			this->CName->Size = System::Drawing::Size(159, 20);
			this->CName->TabIndex = 3;
			this->CName->TextChanged += gcnew System::EventHandler(this, &MainForm::CName_TextChanged);
			// 
			// selQty
			// 
			this->selQty->Location = System::Drawing::Point(144, 20);
			this->selQty->Name = L"selQty";
			this->selQty->Size = System::Drawing::Size(53, 20);
			this->selQty->TabIndex = 2;
			this->selQty->TextChanged += gcnew System::EventHandler(this, &MainForm::selQty_TextChanged);
			// 
			// selWeight
			// 
			this->selWeight->FormattingEnabled = true;
			this->selWeight->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"250", L"500", L"1000", L"5000" });
			this->selWeight->Location = System::Drawing::Point(78, 20);
			this->selWeight->Name = L"selWeight";
			this->selWeight->Size = System::Drawing::Size(49, 21);
			this->selWeight->TabIndex = 1;
			this->selWeight->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::selWeight_SelectedIndexChanged);
			// 
			// selProd
			// 
			this->selProd->FormattingEnabled = true;
			this->selProd->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"p1", L"p2", L"p3", L"p4", L"p5", L"p6", L"p7",
					L"p8", L"p9", L"p10"
			});
			this->selProd->Location = System::Drawing::Point(7, 19);
			this->selProd->Name = L"selProd";
			this->selProd->Size = System::Drawing::Size(48, 21);
			this->selProd->TabIndex = 0;
			this->selProd->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::selProd_SelectedIndexChanged);
			// 
			// BillPage
			// 
			this->BillPage->BackColor = System::Drawing::Color::PowderBlue;
			this->BillPage->Controls->Add(this->End);
			this->BillPage->Controls->Add(this->panel1);
			this->BillPage->Controls->Add(this->label9);
			this->BillPage->Controls->Add(this->PayAmount);
			this->BillPage->Controls->Add(this->generateBill);
			this->BillPage->Location = System::Drawing::Point(4, 22);
			this->BillPage->Name = L"BillPage";
			this->BillPage->Padding = System::Windows::Forms::Padding(3);
			this->BillPage->Size = System::Drawing::Size(807, 291);
			this->BillPage->TabIndex = 6;
			this->BillPage->Text = L"GenBill";
			// 
			// End
			// 
			this->End->BackColor = System::Drawing::Color::Azure;
			this->End->Location = System::Drawing::Point(496, 46);
			this->End->Name = L"End";
			this->End->Size = System::Drawing::Size(75, 23);
			this->End->TabIndex = 8;
			this->End->Text = L"Go to End";
			this->End->UseVisualStyleBackColor = false;
			this->End->Click += gcnew System::EventHandler(this, &MainForm::End_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->billSlip);
			this->panel1->Location = System::Drawing::Point(201, 75);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(385, 208);
			this->panel1->TabIndex = 7;
			// 
			// billSlip
			// 
			this->billSlip->Location = System::Drawing::Point(22, 6);
			this->billSlip->Multiline = true;
			this->billSlip->Name = L"billSlip";
			this->billSlip->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->billSlip->Size = System::Drawing::Size(332, 199);
			this->billSlip->TabIndex = 0;
			this->billSlip->TextChanged += gcnew System::EventHandler(this, &MainForm::GenerateBill_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(198, 33);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(120, 13);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Enter Amount You have";
			// 
			// PayAmount
			// 
			this->PayAmount->Location = System::Drawing::Point(201, 49);
			this->PayAmount->Name = L"PayAmount";
			this->PayAmount->Size = System::Drawing::Size(208, 20);
			this->PayAmount->TabIndex = 3;
			this->PayAmount->TextChanged += gcnew System::EventHandler(this, &MainForm::PayAmount_TextChanged);
			// 
			// generateBill
			// 
			this->generateBill->BackColor = System::Drawing::Color::LightCyan;
			this->generateBill->Location = System::Drawing::Point(415, 46);
			this->generateBill->Name = L"generateBill";
			this->generateBill->Size = System::Drawing::Size(75, 23);
			this->generateBill->TabIndex = 2;
			this->generateBill->Text = L"generateBill";
			this->generateBill->UseVisualStyleBackColor = false;
			this->generateBill->Click += gcnew System::EventHandler(this, &MainForm::billSlip_Click_1);
			// 
			// ThankYou
			// 
			this->ThankYou->Location = System::Drawing::Point(4, 22);
			this->ThankYou->Name = L"ThankYou";
			this->ThankYou->Padding = System::Windows::Forms::Padding(3);
			this->ThankYou->Size = System::Drawing::Size(807, 291);
			this->ThankYou->TabIndex = 7;
			this->ThankYou->Text = L"ThankYou";
			this->ThankYou->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 315);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Home->ResumeLayout(false);
			this->Welcome->ResumeLayout(false);
			this->Welcome->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->LoginPage->ResumeLayout(false);
			this->LoginPage->PerformLayout();
			this->AdminPage->ResumeLayout(false);
			this->ProductDetails->ResumeLayout(false);
			this->ProductDetails->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->CustomerCart->ResumeLayout(false);
			this->CustomerCart->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->BillPage->ResumeLayout(false);
			this->BillPage->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Welcome_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->TabPages->Remove(Welcome);
	}
	private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void LoginPage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AdminPage_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void adminLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->TabPages->Remove(Home);
	}

	private: System::Void Customer_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->TabPages->Remove(Home);
		tabControl1->TabPages->Remove(LoginPage);
		tabControl1->TabPages->Remove(AdminPage);
		tabControl1->TabPages->Remove(ProductDetails);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Login_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (User->Text == A->GetAdminID() && Pass->Text == A->GetPass()) {
			tabControl1->TabPages->Remove(LoginPage);
		}
	}
	private: System::Void User_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Pass_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ProductInventory_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->TabPages->Remove(AdminPage);
	}
	//private: System::Void name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//}
	//private: System::Void wght_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//}
	private: System::Void qty_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cost_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}        int^ ID;
		   int^ ProdID = 10000;
		   int^ Counter = 0;
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


	}
	private: System::Void AddProduct_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";
		Crud->insert(file + "products.txt", name->Text + "," + ProdID + "," + wght->Text + "," + qty->Text + "," + cost->Text);

		dataGridView1->Rows->Add(name->Text, ProdID, wght->Text, qty->Text, cost->Text);

		Counter = *Counter + 1;
		ProdID = 10000 + *Counter;

	}
	private: System::Void UpdateQty_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";

		//dataGridView1->Rows->Remove(name->Text, ProdID, wght->Text, qty->Text, cost->Text);
		ID = *ProdID - 1;
		Crud->update(file + "products.txt", name->Text,wght->Text, 0, name->Text + ",", "," + wght->Text + "," + qty->Text + "," + cost->Text);

		Prod = mapper::map_product(Crud->read(file + "products.txt"));
		dataGridView1->Rows->Clear();
		for (int i = 0; i < Prod->Length; i++)
		{
			//Prod[i]->PID = 10000 + i;
			dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->PID, Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);

		}


	}
	private: System::Void Search_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";

		Prod = mapper::map_product(Crud->search(file + "products.txt", name->Text, 0));
		dataGridView1->Rows->Clear();
		for (int i = 0; i < Prod->Length; i++)
		{
			dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->PID, Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
		}
	}
	private: System::Void Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";
		Crud->discard(file + "products.txt", name->Text,wght->Text, 0);
		Prod = mapper::map_product(Crud->read(file + "products.txt"));

		dataGridView1->Rows->Clear();
		for (int i = 0; i < Prod->Length; i++)
		{
			dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->PID, Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);
		}
	}

	private: System::Void CustomerInventory_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DisplayAll_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";
		Prod = mapper::map_product(Crud->read(file + "products.txt"));
		dataGridView1->Rows->Clear();
		for (int i = 0; i < Prod->Length; i++)
		{

			dataGridView1->Rows->Add(Prod[i]->PName, Prod[i]->PID, Prod[i]->weight, Prod[i]->Quantity, Prod[i]->price);


		}
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void AddToCart_Click_1(System::Object^ sender, System::EventArgs^ e) {

		String^ file = "C:\\Users\\hp\\Desktop\\";

		Prod = mapper::map_product(Crud->search(file + "products.txt", selProd->Text, 0));
		int^ rem;
		int^ cost;
		bool prodFound = false;
		if (!String::IsNullOrEmpty(CName->Text) && !String::IsNullOrEmpty(phoneNo->Text))
		{
			for (int i = 0; i < Prod->Length; i++) {
				if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
				{
					prodFound = true;
					rem = Prod[i]->Quantity - Int32::Parse(selQty->Text);
					if (*rem >= 0)
					{
						cost = Prod[i]->price;
						

						String^ insertData = CName->Text + "," + phoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text;

						Crud->insert(file + "Customers.txt", insertData);
						Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);
						dataGridView2->Rows->Add(CName->Text, phoneNo->Text, selProd->Text, selWeight->Text, selQty->Text);

					}
					else {
						// Product has insufficient quantity
						MessageBox::Show("Insufficient quantity of " + selProd->Text + " with weight " + selWeight->Text);
					}
				}

			}

		}
		


	}
	private: System::Void UpdateCart_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";
		bool prodFound = false;
		int^ rem;
		//int^ cost;
		int^ PrevQty, cost; // Declare cost if it's not declared elsewhere
		if (!String::IsNullOrEmpty(CName->Text) && !String::IsNullOrEmpty(phoneNo->Text))
		{
			int total = 1;
			C = mapper::map_customer(Crud->search(file + "Customers.txt", selProd->Text, 2));
			for (int i = 0; i < C->Length; i++)
			{
				if ((C[i]->P[i]->PName == selProd->Text) && (C[i]->P[i]->weight == Int32::Parse(selWeight->Text)))
				{
					PrevQty = C[i]->P[i]->Quantity;
					
						total = C[i]->P[i]->price * Int32::Parse(selQty->Text);
						Cust::updateCart(file + "Customers.txt", selProd->Text, selWeight->Text, 2, CName->Text + "," + phoneNo->Text, "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text + "," + Convert::ToString(total));
					break;
				}
			}


			
			//	Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
			C = mapper::map_customer(Crud->read(file + "Customers.txt"));
			dataGridView2->Rows->Clear();
			for (int i = 0; i < C->Length; i++) {
				for (int j = 0; j < C[j]->P->Length; j++) {
				if(C[i]->P != nullptr && C[i]->P->Length > 0) {
				 total = C[i]->P[j]->price * C[i]->P[j]->Quantity;
				
					dataGridView2->Rows->Add(C[i]->Cname, Convert::ToString(C[i]->Phone), C[i]->P[j]->PName, Convert::ToString(C[i]->P[j]->weight), Convert::ToString(C[i]->P[j]->Quantity), total);
						
						
						break;
				}
					}
			}
	//Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
			for (int i = 0; i < Prod->Length; i++) {
				if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
				{
					prodFound = true;
					rem = Prod[i]->Quantity - Int32::Parse(selQty->Text);
					if (*rem >= 0)
					{
						cost = Prod[i]->price;
						//Crud->insert(file + "Customers.txt", CName->Text + "," + phoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
						Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);


					}
				}

			}

		}


	}


	private: System::Void DeleteFromCart_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ file = "C:\\Users\\hp\\Desktop\\";
		bool prodFound = false;
		int^ rem;
		//int^ cost;
		int^ PrevQty, cost; // Declare cost if it's not declared elsewhere
		if (!String::IsNullOrEmpty(CName->Text) && !String::IsNullOrEmpty(phoneNo->Text))
		{
			C = mapper::map_customer(Crud->search(file + "Customers.txt", selProd->Text, 2));
			for (int i = 0; i < C->Length; i++)
			{
				if ((C[i]->P[i]->PName == selProd->Text) && (C[i]->P[i]->weight == Int32::Parse(selWeight->Text)))
				{
					PrevQty = C[i]->P[i]->Quantity;
					break;
				}
			}


	//Cust::updateCart(file + "Customers.txt", selProd->Text, selWeight->Text, 2, CName->Text + "," + phoneNo->Text, "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
			Cust::DeleteFromCart(file + "Customers.txt", selProd->Text, selWeight->Text, Convert::ToInt32(PrevQty), 2);
			C = mapper::map_customer(Crud->read(file + "Customers.txt"));
			dataGridView2->Rows->Clear();
			for (int i = 0; i < C->Length; i++) {
				if (C[i]->P != nullptr && C[i]->P->Length > 0) {
					int total = C[i]->P[i]->Quantity * C[i]->P[i]->price;
					dataGridView2->Rows->Add(C[i]->Cname, C[i]->Phone, C[i]->P[i]->PName,C[i]->P[i]->weight, C[i]->P[i]->Quantity);
				}
			}
			for (int i = 0; i < Prod->Length; i++) {
				if ((Prod[i]->PName == selProd->Text) && (Prod[i]->weight == Int32::Parse(selWeight->Text)))
				{
					prodFound = true;
					rem = Prod[i]->Quantity +Int32::Parse(selQty->Text);
					if (*rem >= 0)
					{
						cost = Prod[i]->price;
						//Crud->insert(file + "Customers.txt", CName->Text + "," + phoneNo->Text + "," + selProd->Text + "," + selWeight->Text + "," + selQty->Text);
						Crud->update(file + "products.txt", selProd->Text, selWeight->Text, 0, selProd->Text + ",", "," + selWeight->Text + "," + rem + "," + cost);


					}
				}

			}
		}
	}
	private: System::Void ProceedToBill_Click(System::Object^ sender, System::EventArgs^ e) {
		tabControl1->TabPages->Remove(CustomerCart);
	}


	private: System::Void selWeight_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void selProd_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void selQty_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void CName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void phoneNo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void name_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void wght_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void billSlip_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ file = "C:\\Users\\hp\\Desktop\\";
	cli::array<Cust^>^ C = mapper::map_customer(Crud->read(file + "Customers.txt"));
	cli::array<Product^>^ Prod = mapper::map_product(Crud->read(file + "Products.txt"));
	String^ billText = Convert::ToString(Bill->GetID()) + "\r\n";
	billText += "Customer Name: " + CName->Text + "\r\n";
	billText += "Products:\r\n";

	float billAmount = Bill->CalBill(Crud->read(file + "products.txt"), Crud->read(file + "Customers.txt"));

	if (billAmount <= 5000) {
		for (int i = 0; i < C->Length; i++) {
			if (C[i] != nullptr && C[i]->P != nullptr) {
				for (int j = 0; j < C[i]->P->Length; j++) {
					billText += Prod[i]->PID + " " + C[i]->P[j]->PName + "  " + Bill->SubTotal[i] + "\r\n";
					break;
				}
			}
		}

		billText += "Total Amount: " + Convert::ToString(billAmount) + "\r\n"; // No discount

		if (Convert::ToInt32(PayAmount->Text) > billAmount) {
			float refundAmount = Convert::ToInt32(PayAmount->Text) - billAmount;
			MessageBox::Show("Your Refund Amount: " + Convert::ToString(refundAmount) + "\r\n" + "HAPPY SHOPPING");
		}
		else {
			MessageBox::Show("Insufficient Amount. Please re-enter the amount in the TextBox.");
		}
	}
	else {
		for (int i = 0; i < C->Length; i++) {
			if (C[i] != nullptr && C[i]->P != nullptr) {
				for (int j = 0; j < C[i]->P->Length; j++) {
					billText += Prod[i]->PID + "  " + C[i]->P[j]->PName + "  " + Bill->SubTotal[i] + "  " + C[i]->P[i]->Quantity + "\r\n";
					break;
				}
			}
		}

		float discountedAmount = Bill->getAmount(0.1); // Apply 10% discount
		billText += "Total Amount after Discount: " + Convert::ToString(discountedAmount) + "\r\n"; // Display discounted amount

		if (Convert::ToInt32(PayAmount->Text) > discountedAmount) {
			float refundAmount = Convert::ToInt32(PayAmount->Text) - discountedAmount;
			MessageBox::Show("Your Refund Amount: " + Convert::ToString(refundAmount) + "\r\n" + "HAPPY SHOPPING");
		}
		else {
			MessageBox::Show("Insufficient Amount. Please re-enter the amount in the TextBox.");
		}
	}

	billSlip->Text = billText;
}





private: System::Void GenerateBill_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}


private: System::Void PayAmount_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void End_Click(System::Object^ sender, System::EventArgs^ e) {
	
	tabControl1->TabPages->Remove(BillPage);
	
}
private: System::Void ProductDetails_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}