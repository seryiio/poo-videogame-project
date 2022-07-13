#pragma once
#include "LibreriaGeneral.h"
namespace TF_201916220_201816393 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  vidajugador;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  vidaelegida;
	private: System::Windows::Forms::Label^  tiempoelegido;
	private: System::Windows::Forms::Label^  puntajeganado;
	private: System::Windows::Forms::Label^  acumularpuntaje;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->vidajugador = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->vidaelegida = (gcnew System::Windows::Forms::Label());
			this->tiempoelegido = (gcnew System::Windows::Forms::Label());
			this->puntajeganado = (gcnew System::Windows::Forms::Label());
			this->acumularpuntaje = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->Location = System::Drawing::Point(722, 621);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"JUGAR";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"5", L"7", L"10" });
			this->comboBox1->Location = System::Drawing::Point(163, 566);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"5", L"60", L"120", L"180", L"240" });
			this->comboBox2->Location = System::Drawing::Point(163, 639);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(92, 565);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"VIDAS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(79, 638);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"TIEMPO";
			// 
			// vidajugador
			// 
			this->vidajugador->AutoSize = true;
			this->vidajugador->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vidajugador->Location = System::Drawing::Point(12, 7);
			this->vidajugador->Name = L"vidajugador";
			this->vidajugador->Size = System::Drawing::Size(50, 19);
			this->vidajugador->TabIndex = 5;
			this->vidajugador->Text = L"Vida:";
			this->vidajugador->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(818, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Tiempo:";
			this->label3->Visible = false;
			// 
			// vidaelegida
			// 
			this->vidaelegida->AutoSize = true;
			this->vidaelegida->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vidaelegida->Location = System::Drawing::Point(59, 7);
			this->vidaelegida->Name = L"vidaelegida";
			this->vidaelegida->Size = System::Drawing::Size(18, 19);
			this->vidaelegida->TabIndex = 7;
			this->vidaelegida->Text = L"0";
			this->vidaelegida->Visible = false;
			// 
			// tiempoelegido
			// 
			this->tiempoelegido->AutoSize = true;
			this->tiempoelegido->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tiempoelegido->Location = System::Drawing::Point(887, 9);
			this->tiempoelegido->Name = L"tiempoelegido";
			this->tiempoelegido->Size = System::Drawing::Size(18, 19);
			this->tiempoelegido->TabIndex = 8;
			this->tiempoelegido->Text = L"0";
			this->tiempoelegido->Visible = false;
			// 
			// puntajeganado
			// 
			this->puntajeganado->AutoSize = true;
			this->puntajeganado->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->puntajeganado->Location = System::Drawing::Point(104, 7);
			this->puntajeganado->Name = L"puntajeganado";
			this->puntajeganado->Size = System::Drawing::Size(84, 19);
			this->puntajeganado->TabIndex = 9;
			this->puntajeganado->Text = L"Puntaje:";
			this->puntajeganado->Visible = false;
			// 
			// acumularpuntaje
			// 
			this->acumularpuntaje->AutoSize = true;
			this->acumularpuntaje->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acumularpuntaje->Location = System::Drawing::Point(184, 7);
			this->acumularpuntaje->Name = L"acumularpuntaje";
			this->acumularpuntaje->Size = System::Drawing::Size(18, 19);
			this->acumularpuntaje->TabIndex = 10;
			this->acumularpuntaje->Text = L"0";
			this->acumularpuntaje->Visible = false;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1", L"2" });
			this->comboBox3->Location = System::Drawing::Point(163, 493);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(47, 492);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 19);
			this->label4->TabIndex = 12;
			this->label4->Text = L"DIFICULTAD";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(718, 507);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 62);
			this->button2->TabIndex = 13;
			this->button2->Text = L"INSTRUCCIONES";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(415, 666);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 33);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Retroceder";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(18, 335);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(457, 19);
			this->label5->TabIndex = 15;
			this->label5->Text = L"El movimiento del jugador es con las teclas W, A, S, D";
			this->label5->Visible = false;
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(18, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(382, 19);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Para arrojar un objeto presione la tecla P";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Red;
			this->label7->Font = (gcnew System::Drawing::Font(L"Stencil", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Location = System::Drawing::Point(18, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 19);
			this->label7->TabIndex = 17;
			this->label7->Text = L"CONTROLES";
			this->label7->Visible = false;
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 711);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->acumularpuntaje);
			this->Controls->Add(this->puntajeganado);
			this->Controls->Add(this->tiempoelegido);
			this->Controls->Add(this->vidaelegida);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->vidajugador);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::MyForm_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		int TIEMPO, DIFICULTAD, VIDA, N = 0;
		int VIDAPRINCIPIO;
		int pasavida;
		Random F;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: CJuegoNivel1*ObjMan1 = new CJuegoNivel1();
	private: CJuegoNivel2*ObjMan2 = new CJuegoNivel2(); 
	private: CJuegoNivel3*ObjMan3 = new CJuegoNivel3();

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
	{

		int PRUEBA;
		PRUEBA = F.Next(1, 100);
		N = 1;

		SoundPlayer ^musica = gcnew SoundPlayer();
		Graphics^g = this->CreateGraphics();
		BufferedGraphicsContext^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::AntiqueWhite);

		Bitmap^img = gcnew Bitmap("MundoCriminal2.jpg");
		buffer->Graphics->DrawImage(img, 0, 0, 950, 750);

		ObjMan1->DibujarBalas(buffer->Graphics);
		ObjMan1->MoverBalas(buffer->Graphics);
		ObjMan1->DibujaJugador(buffer->Graphics);
		ObjMan1->DibujaEnemigos(buffer->Graphics);
		ObjMan1->MoverEnemigos();
	   
		ObjMan1->MuereEnemigo();

		ObjMan1->EliminarBalas(buffer->Graphics);
		if (DIFICULTAD == 2)
		{
			if (PRUEBA < 5) { ObjMan1->GenerarBalasE(); }
			ObjMan1->MoverBalasE(buffer->Graphics);
			ObjMan1->DibujarBalasE(buffer->Graphics);
			ObjMan1->MuereJugador();
			ObjMan1->EliminarBalasE(buffer->Graphics);
			
		}
		buffer->Render(g);
    
		tiempoelegido->Text = ObjMan1->gettiempo().ToString();

		vidaelegida->Text = ObjMan1->getvida().ToString();

		acumularpuntaje->Text = ObjMan1->acumularpuntaje1().ToString();

		delete img;
		delete espacioBuffer;
		delete buffer;
		delete g;
		if (ObjMan1->gettiempo() > 0 && ObjMan1->acumularpuntaje1() >= 100)
		{
			VIDAPRINCIPIO = ObjMan1->getvida();
			delete ObjMan1;
			this->timer1->Enabled = false;
			this->timer2->Enabled = true;

			ObjMan2->setvida(VIDAPRINCIPIO);
			N = 2;
		}

		if (ObjMan1->getvida() == 0 || ObjMan1->gettiempo() == 0 && ObjMan1-> acumularpuntaje1() < 100)
		{	
			musica->SoundLocation = "LOSE.wav";
			musica->Load();
			musica->Play();
			this->timer1->Enabled = false;
			MessageBox::Show("PERDISTE");
			this->Close();
			delete musica;
		}
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		N = 2;

		SoundPlayer ^musica = gcnew SoundPlayer();
		Graphics^g = this->CreateGraphics();
		BufferedGraphicsContext^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::AntiqueWhite);

		Bitmap^img = gcnew Bitmap("MundoCorrupto.jpg");
		buffer->Graphics->DrawImage(img, 0, 0, 950, 750);

		ObjMan2->DibujarBalas(buffer->Graphics);
		ObjMan2->MoverBalas(buffer->Graphics);
		ObjMan2->DibujaJugador(buffer->Graphics);
		ObjMan2->DibujaEnemigos(buffer->Graphics);
		ObjMan2->MoverEnemigos();
		ObjMan2->MuereEnemigo();


		ObjMan2->EliminarBalas(buffer->Graphics);
		if (DIFICULTAD == 2)
		{
			ObjMan2->MuereJugador();
		}
		buffer->Render(g);
		tiempoelegido->Text = ObjMan2->gettiempo().ToString();



		vidaelegida->Text = ObjMan2->getvida().ToString();

		acumularpuntaje->Text = ObjMan2->acumularpuntaje1().ToString();
		delete img;
		delete espacioBuffer;
		delete buffer;
		delete g;
		
		if (ObjMan2->gettiempo() > 0 && ObjMan2->acumularpuntaje1() >= 50)
		{
			pasavida = ObjMan2->getvida();
			delete ObjMan2;
			this->timer2->Enabled = false;
			this->timer3->Enabled = true;
			ObjMan3->setvida(pasavida);
			N = 3;
		}

		if (ObjMan2->getvida() == 0 || ObjMan2->gettiempo() == 0 && ObjMan2->acumularpuntaje1() < 50)
		{
			musica->SoundLocation = "LOSE.wav";
			musica->Load();
			musica->Play();
			this->timer2->Enabled = false;
			MessageBox::Show("PERDISTE");
			this->Close();
			delete musica;

		}
	}
			
	private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e)
	{
		int restarv, guardvida;
		N = 3;

		SoundPlayer ^musica = gcnew SoundPlayer();
		Graphics^g = this->CreateGraphics();
		BufferedGraphicsContext^espacioBuffer = BufferedGraphicsManager::Current;
		BufferedGraphics^buffer = espacioBuffer->Allocate(g, this->ClientRectangle);
		buffer->Graphics->Clear(Color::AntiqueWhite);

		Bitmap^img = gcnew Bitmap("MundoSalvemosO.jpeg");
		buffer->Graphics->DrawImage(img, 0, 0, 950, 750);

		ObjMan3->DibujarBalas(buffer->Graphics);
		ObjMan3->MoverBalas(buffer->Graphics);
		ObjMan3->DibujaJugador(buffer->Graphics);
		ObjMan3->DibujaEnemigos(buffer->Graphics);
		ObjMan3->MoverEnemigos();
		ObjMan3->MuereEnemigo();
		ObjMan3->MuereJugador();
		ObjMan3->EliminarBalas(buffer->Graphics);
		buffer->Render(g);

		tiempoelegido->Text = ObjMan3->gettiempo().ToString();


		vidaelegida->Text = ObjMan3->getvida().ToString();


		acumularpuntaje->Text = ObjMan3->acumularpuntaje1().ToString();
		delete img;
		delete espacioBuffer;
		delete buffer;
		delete g;

		if (ObjMan3->getvida() == 0 || ObjMan3->gettiempo() == 0 && ObjMan3->acumularpuntaje1() < 50)
		{
			musica->SoundLocation = "LOSE.wav";
			musica->Load();
			musica->Play();
			this->timer3->Enabled = false;
			MessageBox::Show("PERDISTE");
			this->Close();
			delete musica;
		}
		if (ObjMan3->getvida() > 0 && ObjMan3->gettiempo() > 0 && ObjMan3->acumularpuntaje1() >= 50)
		{
			
			musica->SoundLocation = "WINNER.wav";
			musica->Load();
			musica->Play();
			this->timer3->Enabled = false;
			MessageBox::Show("GANASTE");

			this->Close();
			delete musica;
		}
	}
	private: System::Void MyForm_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
	{
		Graphics^g = this->CreateGraphics();
		if (e->KeyChar == 'W' || e->KeyChar == 'w')
		{
			if (N == 1) { ObjMan1->MoverJugador(g, 'W'); }
			if (N == 2) { ObjMan2->MoverJugador(g, 'W'); }
			if (N == 3) { ObjMan3->MoverJugador(g, 'W'); }
		}
		if (e->KeyChar == 'S' || e->KeyChar == 's')
		{
			if (N == 1) { ObjMan1->MoverJugador(g, 'S'); }
			if (N == 2) { ObjMan2->MoverJugador(g, 'S'); }
			if (N == 3) { ObjMan3->MoverJugador(g, 'S'); }
		}
		if (e->KeyChar == 'A' || e->KeyChar == 'a')
		{
			if (N == 1) { ObjMan1->MoverJugador(g, 'A'); }
			if (N == 2) { ObjMan2->MoverJugador(g, 'A'); }
			if (N == 3) { ObjMan3->MoverJugador(g, 'A'); }
		}
		if (e->KeyChar == 'D' || e->KeyChar == 'd')
		{
			if (N == 1) { ObjMan1->MoverJugador(g, 'D'); }
			if (N == 2) { ObjMan2->MoverJugador(g, 'D'); }
			if (N == 3) { ObjMan3->MoverJugador(g, 'D'); }
		}
		if (e->KeyChar == 'P' || e->KeyChar == 'p')
		{
			if (N == 1) { ObjMan1->GenerarBalas(); }
			if (N == 2) { ObjMan2->GenerarBalas(); }
			if (N == 3) { ObjMan3->GenerarBalas(); }
		}
		delete g;
	}


private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e)
{
	Graphics^g = this->CreateGraphics();
	Bitmap^img = gcnew Bitmap("Portada.jpg");
	g->DrawImage(img, 0, 0, 950, 750);
	delete img;
	delete g;
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	DIFICULTAD = Convert::ToInt32(comboBox3->SelectedItem->ToString());
	this->timer1->Enabled = true;
	
	TIEMPO = Convert::ToInt32(comboBox2->SelectedItem->ToString());
	ObjMan1->settiempo(TIEMPO, 0);
	ObjMan2->settiempo(TIEMPO, 0);
	ObjMan3->settiempo(TIEMPO, 0);
	VIDA = Convert::ToInt32(comboBox1->SelectedItem->ToString());
	ObjMan1->setvida(VIDA);

	
	vidajugador->Visible = true;
	vidaelegida->Visible = true;
	acumularpuntaje->Visible = true;
	puntajeganado->Visible = true;
	tiempoelegido->Visible = true;
	button1->Visible = false;
	button1->Enabled = false;
	button2->Visible = false;
	button2->Enabled = false;
	label1->Visible = false;
	label1->Enabled = false;
	label2->Visible = false;
	label2->Enabled = false;
	label3->Visible = true;
	label4->Visible = false;
	label4->Enabled = false;
	label5->Visible = false;
	label5->Enabled = false;
	label6->Visible = false;
	label6->Enabled = false;
	comboBox1->Visible = false;
	comboBox1->Enabled = false;
	comboBox2->Visible = false;
	comboBox2->Enabled = false;
	comboBox3->Visible = false;
	comboBox3->Enabled = false;
	this->Focus();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
	

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	button1->Visible = false;
	button1->Enabled = false;
	button2->Visible = false;
	button2->Enabled = false;
	button3->Visible = true;
	button3->Enabled = true;
	label1->Visible = false;
	label1->Enabled = false;
	label2->Visible = false;
	label2->Enabled = false;
	label4->Visible = false;
	label4->Enabled = false;
	label5->Visible = true;
	label5->Enabled = true;
	label6->Visible = true;
	label6->Enabled = true;

	label7->Visible = true;
	label7->Enabled = true;
	comboBox1->Visible = false;
	comboBox1->Enabled = false;
	comboBox2->Visible = false;
	comboBox2->Enabled = false;
	comboBox3->Visible = false;
	comboBox3->Enabled = false;
	this->Focus();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	button1->Visible = true;
	button1->Enabled = true;
	button2->Visible = true;
	button2->Enabled = true;
	button3->Visible = false;
	button3->Enabled = false;
	label1->Visible = true;
	label1->Enabled = true;
	label2->Visible = true;
	label2->Enabled = true;
	label4->Visible = true;
	label4->Enabled = true;
	label5->Visible = false;
	label5->Enabled = false;
	label6->Visible = false;
	label6->Enabled = false;

	label7->Visible =false;
	label7->Enabled =false;
	comboBox1->Visible = true;
	comboBox1->Enabled = true;
	comboBox2->Visible = true;
	comboBox2->Enabled = true;
	comboBox3->Visible = true;
	comboBox3->Enabled = true;
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
