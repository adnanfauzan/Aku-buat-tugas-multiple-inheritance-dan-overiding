    #include<iostream.h>
	#include<string.h>
	using namespace std;
	class Buku
	{
		private:
			char judul [35];
			char pengarang [25];
			long harga;
		public:
			Buku(char *judul, char *pengarang, long harga);
			void info_buku();
	};

	class Disket
	{
		private:
			char ukuran [15];
			long harga;
		public:
			Disket(char *ukuran, long harga);
			void info_disket();
	};

	class PaketBukuDisket : public Buku, public Disket
	{
		private:
			long harga;
		public:
PaketBukuDisket(char *judul, char *pengarang, long harga_buku, char *ukuran, long harga_disk);
			void info_paket();
	};

	// Definisi metode-metode
	Buku::Buku(char *judul, char *pengarang, long harga)

	{
		strcpy(Buku::judul, judul);
		strcpy(Buku::pengarang, pengarang);
		Buku::harga = harga;
	}

	void Buku::info_buku()
	{	
		cout<<"Judul buku	: "<< judul << endl;
		cout<<"Pengarang	: "<< pengarang << endl;
		cout<<"Harga buku	: "<< harga << endl;
	}

	Disket::Disket(char *ukuran, long harga)
	{
		strcpy(Disket::ukuran, ukuran);
		Disket::harga = harga;
	}

	void Disket::info_disket()
	{
		cout<<"Ukuran disket 	: " << ukuran << endl;
		cout<<"Harga disket 	: " << harga << endl;
	}

	PaketBukuDisket::PaketBukuDisket(
char *judul, char *pengarang, long harga_buku, char *ukuran, long harga_disket):
		Buku(judul, pengarang, harga_buku),
		Disket(ukuran, harga_disket)
	{
		harga = harga_buku + harga_disket;
	}

	void PaketBukuDisket::info_paket()
	{
		info_buku();
		info_disket();
		cout<<"Harga total 	: "<< harga << endl << endl;
	}

	//PROGRAM UTAMA

	int main()
	{
PaketBukuDisket cpp("C++", "Ardyriyanto", 25000, "3,5 inci", 12000);
		cpp.info_paket();
		return 0;
	}
