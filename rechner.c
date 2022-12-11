// Das ist die Standarddatei für Eingabe und Ausgabe, die 
// von C bereitgestellt wird. Hier liegen printf, scanf,
// getchar, system etc.
#include <stdio.h>

int main ()
{

	// Wir erstellen eine Variable von Typ "char" für Zeichen
	char rechenweg;

	// Wir erstellen drei Variablen von Typ "double"
	double zahl1, zahl2, ergebnis;

	// Textausgabe für das Menü
	printf( "Programm Menü\n" );
	printf( "[1] Addieren\n" );
	printf( "[2] Subtrahieren\n" );
	printf( "[3] Multiplizieren\n" );
	printf( "[4] Dividieren\n" );
	printf( "[5] Beenden\n" );

	// Solange der Anwender nicht auf 1, 2, 3, 4 oder 5 drückt und bestätigt, wird die
	// Schleife wiederholt und der Anwender erneut aufgefordert, eine Option zu wählen
	while ( rechenweg != '1' && rechenweg != '2' && rechenweg != '3' && rechenweg != '4' && rechenweg != '5' )
	{
		// Aufforderungstext
		printf( "\nGültige Werte: 1 bis 5" );
		printf( "\nWelche Option? _ " );
		// Eingabe
		rechenweg = getchar();
		// Sobald eine gültige Wahl getroffen wurde, wird die Schleife umgehend verlassen
		if ( rechenweg == '1' || rechenweg == '2' || rechenweg == '3' || rechenweg == '4' || rechenweg == '5' )
		{
			// Verlassen der Schleife
			break;
		}
	};

	// Welcher Rechenweg gewählt wird, dem entsprchend wird eine
	// Berechnung durchgeführt oder das Programm beendet
	if ( rechenweg == '1' )
	{
		printf( "\nSuper, wir addieren zwei Zahlen!\n" );
		printf( "\n1. Zahl _ " );
		scanf( "%lf", &zahl1 );
		printf( "\n2. Zahl _ " );
		scanf( "%lf", &zahl2 );
		ergebnis = zahl1 + zahl2;
	}
	else if ( rechenweg == '2' )
	{
		printf( "\nSuper, wir subtrahieren zwei Zahlen!\n" );
		printf( "\n1. Zahl _ " );
		scanf( "%lf", &zahl1 );
		printf( "\n2. Zahl _ " );
		scanf( "%lf", &zahl2 );
		ergebnis = zahl1 - zahl2;
	}
	else if ( rechenweg == '3' )
	{
		printf( "\nSuper, wir multiplizieren zwei Zahlen!\n" );
		printf( "\n1. Zahl _ " );
		scanf( "%lf", &zahl1 );
		printf( "\n2. Zahl _ " );
		scanf( "%lf", &zahl2 );
		ergebnis = zahl1 * zahl2;
	}
	else if ( rechenweg == '4' )
	{
		printf( "\nSuper, wir dividieren zwei Zahlen!\n" );
		printf( "\n1. Zahl _ " );
		scanf( "%lf", &zahl1 );
		printf( "\n2. Zahl _ " );
		scanf( "%lf", &zahl2 );
		ergebnis = zahl1 / zahl2;
	}
	else if ( rechenweg == '5' )
	{
		printf( "Schade, bis zum nächsten Mal...\n" );
		exit(0);
	}

	// Anzeige des Ergebnisses
	printf( "\nErgebnis aus %lf und %lf ergibt = %lf\n\n", zahl1, zahl2, ergebnis );	

	// Soll das Programm neugesartet werden?
	printf( "\nMöchtest du noch eine weitere Rechnung durchführen? [j/n] _ " );

	// Solange keine Auswahl getroffen wird, wird erneut auf Eingabe gewartet
	while ( rechenweg != 'j' && rechenweg != 'J' && rechenweg != 'n' && rechenweg != 'N' )
	{
		rechenweg = getchar();
		// *** //
		if ( rechenweg == 'j' || rechenweg == 'J' )
		{
			// Program neustarten
			system("./rechner");
			// Den aktuellen Prozess beenden
			exit(0);
		}
		else if ( rechenweg == 'n' || rechenweg == 'N' )
		{
			// Programm ganz verlassen
			printf( "\n\nAdios... :-)\n\n" );
			exit(0);
		}
	}

	// Rückgabe an Terminal 0, also kein Problem,
	// alles lief ohne Fehler.
	return 0;

}