#pragma once
#include "string"
#include "assert.h"
#include "chrono"
#include "sorting_algorithms.h"
//#include "Math.h"
namespace Coursework {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Summary for cw_form
	/// </summary>
	public ref class cw_form : public System::Windows::Forms::Form
	{
	public:
		cw_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cw_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  header;
	private: System::Windows::Forms::Label^  func_name1;
	private: System::Windows::Forms::Label^  func_name2;
	private: System::Windows::Forms::Label^  func_name3;




	private: System::Windows::Forms::Label^  el_number_label;
	private: System::Windows::Forms::TextBox^  el_number_tb;
	private: System::Windows::Forms::TextBox^  from_tb;



	private: System::Windows::Forms::Label^  el_range_label;
	private: System::Windows::Forms::TextBox^  to_tb;
	private: System::Windows::Forms::Label^  time_label1;

	private: System::Windows::Forms::Label^  time_label2;
	private: System::Windows::Forms::Label^  time_label3;
	private: System::Windows::Forms::Label^  ratio1;
	private: System::Windows::Forms::Label^  ratio2;
	private: System::Windows::Forms::Label^  ratio3;





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  sort_button;

	private: System::Windows::Forms::Timer^  sort_timer;
	private: System::ComponentModel::BackgroundWorker^  measurement_bw;
	private: System::Windows::Forms::CheckBox^  disable_cb1;

	private: System::Windows::Forms::CheckBox^  disable_cb2;
	private: System::Windows::Forms::CheckBox^  disable_cb3;
	private: System::Windows::Forms::Button^  continue_button;










	private: System::ComponentModel::IContainer^  components;




	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->header = (gcnew System::Windows::Forms::Label());
			this->func_name1 = (gcnew System::Windows::Forms::Label());
			this->func_name2 = (gcnew System::Windows::Forms::Label());
			this->func_name3 = (gcnew System::Windows::Forms::Label());
			this->el_number_label = (gcnew System::Windows::Forms::Label());
			this->el_number_tb = (gcnew System::Windows::Forms::TextBox());
			this->from_tb = (gcnew System::Windows::Forms::TextBox());
			this->el_range_label = (gcnew System::Windows::Forms::Label());
			this->to_tb = (gcnew System::Windows::Forms::TextBox());
			this->time_label1 = (gcnew System::Windows::Forms::Label());
			this->time_label2 = (gcnew System::Windows::Forms::Label());
			this->time_label3 = (gcnew System::Windows::Forms::Label());
			this->ratio1 = (gcnew System::Windows::Forms::Label());
			this->ratio2 = (gcnew System::Windows::Forms::Label());
			this->ratio3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->sort_button = (gcnew System::Windows::Forms::Button());
			this->sort_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->measurement_bw = (gcnew System::ComponentModel::BackgroundWorker());
			this->disable_cb1 = (gcnew System::Windows::Forms::CheckBox());
			this->disable_cb2 = (gcnew System::Windows::Forms::CheckBox());
			this->disable_cb3 = (gcnew System::Windows::Forms::CheckBox());
			this->continue_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->header->AutoSize = true;
			this->header->Location = System::Drawing::Point(146, 32);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(248, 13);
			this->header->TabIndex = 0;
			this->header->Text = L"Let\'s compare the speed of these sorting algorithms";
			// 
			// func_name1
			// 
			this->func_name1->AutoSize = true;
			this->func_name1->Location = System::Drawing::Point(62, 90);
			this->func_name1->Name = L"func_name1";
			this->func_name1->Size = System::Drawing::Size(63, 13);
			this->func_name1->TabIndex = 1;
			this->func_name1->Text = L"Funcname1";
			// 
			// func_name2
			// 
			this->func_name2->AutoSize = true;
			this->func_name2->Location = System::Drawing::Point(249, 90);
			this->func_name2->Name = L"func_name2";
			this->func_name2->Size = System::Drawing::Size(63, 13);
			this->func_name2->TabIndex = 2;
			this->func_name2->Text = L"Funcname2";
			// 
			// func_name3
			// 
			this->func_name3->AutoSize = true;
			this->func_name3->Location = System::Drawing::Point(428, 90);
			this->func_name3->Name = L"func_name3";
			this->func_name3->Size = System::Drawing::Size(63, 13);
			this->func_name3->TabIndex = 3;
			this->func_name3->Text = L"Funcname3";
			// 
			// el_number_label
			// 
			this->el_number_label->AutoSize = true;
			this->el_number_label->Location = System::Drawing::Point(28, 228);
			this->el_number_label->Name = L"el_number_label";
			this->el_number_label->Size = System::Drawing::Size(124, 13);
			this->el_number_label->TabIndex = 4;
			this->el_number_label->Text = L"Set number of elements: ";
			// 
			// el_number_tb
			// 
			this->el_number_tb->Location = System::Drawing::Point(31, 258);
			this->el_number_tb->MaxLength = 7;
			this->el_number_tb->Name = L"el_number_tb";
			this->el_number_tb->Size = System::Drawing::Size(121, 20);
			this->el_number_tb->TabIndex = 5;
			this->el_number_tb->Text = L"50000";
			this->el_number_tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &cw_form::KeyPressed_limit_to_int);
			// 
			// from_tb
			// 
			this->from_tb->Location = System::Drawing::Point(206, 258);
			this->from_tb->MaxLength = 9;
			this->from_tb->Name = L"from_tb";
			this->from_tb->Size = System::Drawing::Size(73, 20);
			this->from_tb->TabIndex = 7;
			this->from_tb->Text = L"1";
			this->from_tb->TextChanged += gcnew System::EventHandler(this, &cw_form::TextChanged_range_check);
			this->from_tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &cw_form::KeyPressed_limit_to_int);
			// 
			// el_range_label
			// 
			this->el_range_label->AutoSize = true;
			this->el_range_label->Location = System::Drawing::Point(203, 228);
			this->el_range_label->Name = L"el_range_label";
			this->el_range_label->Size = System::Drawing::Size(102, 13);
			this->el_range_label->TabIndex = 6;
			this->el_range_label->Text = L"Set range of values:";
			// 
			// to_tb
			// 
			this->to_tb->Location = System::Drawing::Point(304, 258);
			this->to_tb->MaxLength = 9;
			this->to_tb->Name = L"to_tb";
			this->to_tb->Size = System::Drawing::Size(73, 20);
			this->to_tb->TabIndex = 8;
			this->to_tb->Text = L"100";
			this->to_tb->TextChanged += gcnew System::EventHandler(this, &cw_form::TextChanged_range_check);
			this->to_tb->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &cw_form::KeyPressed_limit_to_int);
			// 
			// time_label1
			// 
			this->time_label1->Location = System::Drawing::Point(65, 118);
			this->time_label1->Name = L"time_label1";
			this->time_label1->Size = System::Drawing::Size(66, 13);
			this->time_label1->TabIndex = 9;
			this->time_label1->Text = L"0";
			this->time_label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// time_label2
			// 
			this->time_label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->time_label2->Location = System::Drawing::Point(251, 119);
			this->time_label2->Name = L"time_label2";
			this->time_label2->Size = System::Drawing::Size(54, 13);
			this->time_label2->TabIndex = 10;
			this->time_label2->Text = L"0";
			this->time_label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// time_label3
			// 
			this->time_label3->Location = System::Drawing::Point(428, 118);
			this->time_label3->Name = L"time_label3";
			this->time_label3->Size = System::Drawing::Size(68, 13);
			this->time_label3->TabIndex = 11;
			this->time_label3->Text = L"0";
			this->time_label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ratio1
			// 
			this->ratio1->AutoSize = true;
			this->ratio1->Location = System::Drawing::Point(87, 142);
			this->ratio1->Name = L"ratio1";
			this->ratio1->Size = System::Drawing::Size(24, 13);
			this->ratio1->TabIndex = 12;
			this->ratio1->Text = L"sec";
			// 
			// ratio2
			// 
			this->ratio2->AutoSize = true;
			this->ratio2->Location = System::Drawing::Point(266, 142);
			this->ratio2->Name = L"ratio2";
			this->ratio2->Size = System::Drawing::Size(24, 13);
			this->ratio2->TabIndex = 13;
			this->ratio2->Text = L"sec";
			// 
			// ratio3
			// 
			this->ratio3->AutoSize = true;
			this->ratio3->Location = System::Drawing::Point(449, 142);
			this->ratio3->Name = L"ratio3";
			this->ratio3->Size = System::Drawing::Size(24, 13);
			this->ratio3->TabIndex = 14;
			this->ratio3->Text = L"sec";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(213, 281);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 15;
			this->label1->Text = L"( from )";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(301, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 13);
			this->label2->TabIndex = 16;
			this->label2->Text = L"( to )";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(285, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"—";
			// 
			// sort_button
			// 
			this->sort_button->Location = System::Drawing::Point(452, 255);
			this->sort_button->Name = L"sort_button";
			this->sort_button->Size = System::Drawing::Size(75, 23);
			this->sort_button->TabIndex = 18;
			this->sort_button->Text = L"Sort!";
			this->sort_button->UseVisualStyleBackColor = true;
			this->sort_button->Click += gcnew System::EventHandler(this, &cw_form::sort_button_Click_start);
			// 
			// sort_timer
			// 
			this->sort_timer->Tick += gcnew System::EventHandler(this, &cw_form::sort_timer_Tick);
			// 
			// measurement_bw
			// 
			this->measurement_bw->WorkerReportsProgress = true;
			this->measurement_bw->WorkerSupportsCancellation = true;
			this->measurement_bw->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &cw_form::measurement_bw_DoWork);
			this->measurement_bw->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &cw_form::measurement_bw_ProgressChanged);
			this->measurement_bw->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &cw_form::measurement_bw_RunWorkerCompleted);
			// 
			// disable_cb1
			// 
			this->disable_cb1->AutoSize = true;
			this->disable_cb1->Location = System::Drawing::Point(64, 167);
			this->disable_cb1->Name = L"disable_cb1";
			this->disable_cb1->Size = System::Drawing::Size(61, 17);
			this->disable_cb1->TabIndex = 19;
			this->disable_cb1->Text = L"Disable";
			this->disable_cb1->UseVisualStyleBackColor = true;
			this->disable_cb1->CheckStateChanged += gcnew System::EventHandler(this, &cw_form::disable_cb1_CheckStateChanged);
			// 
			// disable_cb2
			// 
			this->disable_cb2->AutoSize = true;
			this->disable_cb2->Location = System::Drawing::Point(251, 167);
			this->disable_cb2->Name = L"disable_cb2";
			this->disable_cb2->Size = System::Drawing::Size(61, 17);
			this->disable_cb2->TabIndex = 20;
			this->disable_cb2->Text = L"Disable";
			this->disable_cb2->UseVisualStyleBackColor = true;
			this->disable_cb2->CheckStateChanged += gcnew System::EventHandler(this, &cw_form::disable_cb2_CheckStateChanged);
			// 
			// disable_cb3
			// 
			this->disable_cb3->AutoSize = true;
			this->disable_cb3->Location = System::Drawing::Point(431, 167);
			this->disable_cb3->Name = L"disable_cb3";
			this->disable_cb3->Size = System::Drawing::Size(61, 17);
			this->disable_cb3->TabIndex = 21;
			this->disable_cb3->Text = L"Disable";
			this->disable_cb3->UseVisualStyleBackColor = true;
			this->disable_cb3->CheckStateChanged += gcnew System::EventHandler(this, &cw_form::disable_cb3_CheckStateChanged);
			// 
			// continue_button
			// 
			this->continue_button->Location = System::Drawing::Point(452, 300);
			this->continue_button->Name = L"continue_button";
			this->continue_button->Size = System::Drawing::Size(75, 23);
			this->continue_button->TabIndex = 22;
			this->continue_button->Text = L"Continue";
			this->continue_button->UseVisualStyleBackColor = true;
			this->continue_button->Visible = false;
			this->continue_button->Click += gcnew System::EventHandler(this, &cw_form::continue_button_Click);
			// 
			// cw_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(552, 335);
			this->Controls->Add(this->continue_button);
			this->Controls->Add(this->disable_cb3);
			this->Controls->Add(this->disable_cb2);
			this->Controls->Add(this->disable_cb1);
			this->Controls->Add(this->sort_button);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ratio3);
			this->Controls->Add(this->ratio2);
			this->Controls->Add(this->ratio1);
			this->Controls->Add(this->time_label3);
			this->Controls->Add(this->time_label2);
			this->Controls->Add(this->time_label1);
			this->Controls->Add(this->to_tb);
			this->Controls->Add(this->from_tb);
			this->Controls->Add(this->el_range_label);
			this->Controls->Add(this->el_number_tb);
			this->Controls->Add(this->el_number_label);
			this->Controls->Add(this->func_name3);
			this->Controls->Add(this->func_name2);
			this->Controls->Add(this->func_name1);
			this->Controls->Add(this->header);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"cw_form";
			this->ShowIcon = false;
			this->Text = L"Sorting Algorithms";
			this->Load += gcnew System::EventHandler(this, &cw_form::cw_form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		// ------------ SOTRING FUNCTION STRUCTURE ----------

		ref struct Algorithm {
			String^ name;
			sorting::sorting_func_t sorting_function;
			System::Windows::Forms::Label^ time_label;
			System::Windows::Forms::Label^ name_label;
			System::Windows::Forms::Label^ ratio_label;
			System::Windows::Forms::CheckBox^ disable_cb;
			bool disable_flag;
			double result;
		};

		// ------------- CUSTOM PROPS -----------------
private: array<Algorithm^>^ algorithms;
private: std::chrono::system_clock::time_point* sorting_start_time;
private: System::Windows::Forms::Label^ active_time_label = nullptr;
private: int* original_arr = nullptr;
private: array<double>^ time_results;

		 //------------- CUSTOM METHODS ----------------
		 // GETTING INFO FROM LABELS

private: int el_number() {
	if (this->el_number_tb->Text == "")
		return 0;
	return Convert::ToInt64(this->el_number_tb->Text);
}
private: int from() {
	if (this->from_tb->Text == "")
		return 0;
	return Convert::ToInt64(this->from_tb->Text);
}
private: int to() {
	if (this->to_tb->Text == "")
		return 0;
	return Convert::ToInt64(this->to_tb->Text);
}

		 ////TIME MANIPULATION

private: double current_sorting_time() {
	return std::chrono::duration<double>(std::chrono::system_clock::now() - *this->sorting_start_time).count();
}

private: void start_timer_on_label(System::Windows::Forms::Label^ label) {
	this->active_time_label = label;
	*this->sorting_start_time = std::chrono::system_clock::now();
	this->sort_timer->Enabled = true;
}

		// INTERFACE ACTIONS

private: void set_input_enabled(bool state) {
	// switch textboxes
	this->el_number_tb->Enabled = state;
	this->from_tb->Enabled = state;
	this->to_tb->Enabled = state;
	// switch checkboxes
	for (int i = 0; i < 3; i++) {
		this->algorithms[i]->disable_cb->Enabled = state;
	}
	
	this->sort_button->Enabled = state;
}

private: void set_run_mode() {
	this->set_input_enabled(false);
	this->continue_button->Visible = false;
}


private: void set_input_mode() {

	this->set_input_enabled(true);

	// Clean time measurement
	for (int i = 0; i < 3; i++) {
		if (!this->algorithms[i]->disable_flag)
			this->algorithms[i]->time_label->Text = "0";
		this->algorithms[i]->result = 0;
	}
	this->continue_button->Visible = false;
}

private: void set_result_mode() {
	this->set_input_enabled(false);
	
	this->continue_button->Visible = true;

}


private: void switch_disable_checkbox(int index)
{
	if (this->algorithms[index]->disable_cb->Checked) {
		this->algorithms[index]->time_label->Text = "disabled";
		this->algorithms[index]->ratio_label->Visible = false;
		this->algorithms[index]->disable_flag = true;
	}
	else{
		this->algorithms[index]->time_label->Text = "0";
		this->algorithms[index]->ratio_label->Visible = true;
		this->algorithms[index]->disable_flag = false;
	}

}

		// ------------- EVENT HANDLERS -----------------

		//FORM
private: System::Void cw_form_Load(System::Object^  sender, System::EventArgs^  e) {

	this->sorting_start_time = new std::chrono::system_clock::time_point;

	this->algorithms = gcnew array<Algorithm^>(3);
	
	this->algorithms[0] = gcnew Algorithm;
	this->algorithms[0]->name = "Selection sort";
	this->algorithms[0]->sorting_function = sorting::selection_sort;
	this->algorithms[0]->time_label = this->time_label1;
	this->algorithms[0]->ratio_label = this->ratio1;
	this->algorithms[0]->name_label = this->func_name1;
	this->algorithms[0]->disable_flag = false;
	this->algorithms[0]->disable_cb = this->disable_cb1;
	this->algorithms[0]->result = 0;

	this->algorithms[1] = gcnew Algorithm;
	this->algorithms[1]->name = "Merge sort";
	this->algorithms[1]->sorting_function = sorting::merge_sort;
	this->algorithms[1]->time_label = this->time_label2;
	this->algorithms[1]->ratio_label = this->ratio2;
	this->algorithms[1]->name_label = this->func_name2;
	this->algorithms[1]->disable_flag = false;
	this->algorithms[1]->disable_cb = this->disable_cb2;
	this->algorithms[1]->result = 0;

	this->algorithms[2] = gcnew Algorithm;
	this->algorithms[2]->name = "Counting sort";
	this->algorithms[2]->sorting_function = sorting::counting_sort;
	this->algorithms[2]->time_label = this->time_label3;
	this->algorithms[2]->ratio_label = this->ratio3;
	this->algorithms[2]->name_label = this->func_name3;
	this->algorithms[2]->disable_flag = false;
	this->algorithms[2]->disable_cb = this->disable_cb3;
	this->algorithms[2]->result = 0;

	for (int i = 0; i < 3; i++) {
		this->algorithms[i]->name_label->Text = this->algorithms[i]->name;
	}

	this->time_results = gcnew array<double>(3);
}

		 //SORT BUTTON
private: System::Void sort_button_Click_start(System::Object^  sender, System::EventArgs^  e) {

	if (this->el_number() > 400000) {
		auto result = System::Windows::Forms::MessageBox::Show(
			"Beware! Slow sorting algorithms may work for minutes and more.",
			"Big number of elements",
			System::Windows::Forms::MessageBoxButtons::OKCancel
		);
		if (result == System::Windows::Forms::DialogResult::Cancel) {
			return;
		}
	}

	this->set_run_mode();
	this->measurement_bw->RunWorkerAsync();
}
		 // CONTINUE BUTTON
private: System::Void continue_button_Click(System::Object^  sender, System::EventArgs^  e) {
	this->set_input_mode();
}
		 //TIMER
private: System::Void sort_timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	this->active_time_label->Text = Convert::ToString(this->current_sorting_time());
}
		 // ANY TEXTBOX
private: void KeyPressed_limit_to_int(Object^, System::Windows::Forms::KeyPressEventArgs^ e) {
	const int BACKSPACE = 8;
	const int ZERO = 48;
	const int NINE = 57;
	const int MINUS = 45;

	int keyvalue = e->KeyChar;

	if ((keyvalue == BACKSPACE) ||
		((keyvalue >= ZERO) && (keyvalue <= NINE))) return;

	e->Handled = true;
}
		 // RANGE TEXTBOX

private: System::Void TextChanged_range_check(System::Object^  sender, System::EventArgs^  e) {
	this->sort_button->Enabled = this->from() < this->to();
}
		 // !BACKGOUND WORKER!

private: System::Void measurement_bw_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	int el_number = this->el_number();


	// Generate array
	this->original_arr = sorting::generate_array(el_number, this->from(), this->to());
	
	// Make measurements three times for different functions
	for (int i = 0; i < 3; i++) {
		if (this->algorithms[i]->disable_flag)
			continue;

		int* arr = sorting::create_copy(this->original_arr, el_number);

		// Set timer
		// First parameter contains process number instead of persentage
		// Second parameter:
		// 0 - process started
		// sorting time - process finished
		this->measurement_bw->ReportProgress(i, 0);

		// Start sorting process
		double sorting_time = sorting::measure_sorting_time(arr, el_number, this->algorithms[i]->sorting_function);

		// Stop timer after sorting
		this->measurement_bw->ReportProgress(i, sorting_time);
		delete[] arr;
	}
}


private: System::Void measurement_bw_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {

	// Once again, ProgressPercentage contains process number, not percentage! 
	int process_number = e->ProgressPercentage;
	double time = Convert::ToDouble(e->UserState);
	if (time != 0) {
		this->sort_timer->Enabled = false;
		this->time_results->SetValue(time, process_number);
		this->algorithms[process_number]->time_label->Text = Convert::ToString(time);
	}
	else
		this->start_timer_on_label(this->algorithms[process_number]->time_label);
}

private: System::Void measurement_bw_RunWorkerCompleted(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {
	this->set_result_mode();
}

	// CHECKBOXES
private: System::Void disable_cb3_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
	this->switch_disable_checkbox(2);
}
private: System::Void disable_cb2_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
	this->switch_disable_checkbox(1);
}
private: System::Void disable_cb1_CheckStateChanged(System::Object^  sender, System::EventArgs^  e) {
	this->switch_disable_checkbox(0);
}
};
}

