#include <iostream>
#include <string>
using namespace std;

// Sottomenu: gestione categorie 
void menuCategorie () {
     int sceltaCat = 0;
     
     // Il sottomenu resta attivo finché l'utente non sceglie "Torna al Menu Principale"
     while (sceltaCat != 4) {
     cout << "--- Gestione Categorie ---\n";     
     cout << "1. Inserisci Categoria\n";
     cout << "2. Visualizza Categorie\n";
     cout << "3. Elimina Categoria\n";
     cout << "4. Torna al Menu Principale\n";

     cin >> sceltaCat;
     
      switch (sceltaCat) {
                  case 1: { 
                  string nomeCategoria;
                  cout << "Inserisci nome categoria\n";
                  cin >> nomeCategoria;
                  
                  // Validazione: nome minimo 3 caratteri (coerente con il vincolo CHECK in SQL)
                  if (nomeCategoria.length() < 3) { 
                         cout << "Nome Categoria non valido\n";
                  } else {  
                         cout << "Categoria inserita: " << nomeCategoria << "\n";   
                      } 
                      break;
                  }
                                         
                  case 2:
                      cout << "Modulo Visualizzazione Categorie\n";
                      break;
                  case 3:
                      cout << "Modulo Rimozione Categoria\n";
                      break;
                  case 4:
                      cout << "Torna al Menu Principale\n";
                      break;
                  default:
                         cout << "Scelta non valida\n";
                   }
                   cout << "\n";
                  }
                 } 

// Sottomenu: gestione spese                 
void menuSpesa () {
     int sceltaSpesa = 0;
     
     // Il sottomenu resta attivo finché l'utente non torna al menu principale
     while (sceltaSpesa != 4) {
           cout << "--- Inserimento Spesa ---\n";     
           cout << "1. Inserisci Spesa\n";
           cout << "2. Visualizza Spese\n";
           cout << "3. Elimina Spesa\n";
           cout << "4. Torna al Menu Principale\n";

           cin >> sceltaSpesa;
     
           switch (sceltaSpesa) {
                  case 1: { 
                  // Inserimento spesa: acquisizione dati (data trattata come stringa YYYY-MM-DD)
                  string data;
                  cout << "Inserisci data (YYYY-MM-DD):\n";
                  cin >> data;
                  
                  float importo;
                  cout << "Inserisci importo\n";
                  cin >> importo;
                  
                  string nomeCategoria;
                  cout << "Inserisci nome categoria\n";
                  cin >> nomeCategoria;
                  
                  string descrizione;
                  cout << "Inserisci descrizione\n";
                  cin >> descrizione;
                  
                  // Validazione importo: deve essere > 0
                  if (importo <=0) { 
                         cout << "Errore: l'importo deve essere maggiore di zero.\n";
                  } else {  
                         cout << "Spesa inserita\n";
                         cout << "Data: " << data << "\n";
                         cout << "Categoria: " << nomeCategoria << "\n";
                         cout << "Importo: " << importo << "\n"; 
                         cout << "Descrizione: " << descrizione << "\n";
                      } 
                      break;
                  }
                  case 2:
                      cout << "Modulo Visualizzazione Spese\n";
                      break;
                  case 3:
                      cout << "Modulo Rimozione Spesa\n";
                      break;
                  case 4:
                      cout << "Torna al Menu Principale\n";
                      break;
                  default:
                         cout << "Scelta non valida\n";
                   }
                   cout << "\n";
                  }
                 } 
                 
// Sottomenu: gestione budget mensili 
void menuBudget() {
     int sceltaBudget = 0;
     
     // Il sottomenu resta attivo finché l'utente non torna al menu principale
     while (sceltaBudget != 4) {
           cout << "--- Budget Mensile ---\n";     
           cout << "1. Imposta Budget\n";
           cout << "2. Visualizza Budget\n";
           cout << "3. Elimina Budget\n";
           cout << "4. Torna al Menu Principale\n";

           cin >> sceltaBudget;
     
           switch (sceltaBudget) {
                  case 1: { 
                  // Impostazione budget: mese trattato come stringa (es. YYYY-MM)
                  string mese;
                  cout << "Inserisci mese:\n";
                  cin >> mese;
                  
                  string nomeCategoria;
                  cout << "Inserisci nome categoria\n";
                  cin >> nomeCategoria;
                  
                  float budget;
                  cout << "Inserisci importo budget\n";
                  cin >> budget;
                  
                  // Validazione budget: deve essere > 0
                  if (budget <=0) { 
                         cout << "Errore: l'importo del budget deve essere maggiore di zero.\n";
                  } else {  
                         cout << "Budget inserito\n";
                         cout << "Mese: " << mese << "\n";
                         cout << "Categoria: " << nomeCategoria << "\n";
                         cout << "Importo budget: " << budget << "\n"; 
                      } 
                      break;
                  }
                  case 2:
                      cout << "Modulo Visualizzazione Budget\n";
                      break;
                  case 3:
                      cout << "Modulo Rimozione Budget\n";
                      break;
                  case 4:
                      cout << "Torna al Menu Principale\n";
                      break;
                  default:
                         cout << "Scelta non valida\n";
                   }
                   cout << "\n";
                  }
                 } 

// Sottomenu: report
void menuReport () {
     int sceltaReport = 0;
     
     // Il sottomenu resta attivo finché l'utente non torna al menu principale
     while (sceltaReport != 4) {
           cout << "--- Report delle Spese ---\n";     
           cout << "1. Totale spese per categoria\n";
           cout << "2. Spese mensili\n";
           cout << "3. Elenco spese completo\n";
           cout << "4. Torna al Menu Principale\n";

           cin >> sceltaReport;
     
           switch (sceltaReport) {
                  case 1: 
                      cout << "Report: Totale spese per categoria\n";
                      cout << "(Calcolo: somma delle spese raggruppate per categoria)\n";
                      break;
                  case 2:
                      cout << "Report: Elenco spese mensili\n";
                      cout << "(Confronto tra spese e budget per ogni categoria)\n";
                      break;
                  case 3:
                      cout << "Report: Elenco spese completo\n";
                      cout << "Elenco di tutte le spese ordinato per data)\n";
                      break;
                  case 4:
                      cout << "Torna al Menu Principale\n";
                      break;
                  default:
                         cout << "Scelta non valida\n";
                   }
                   cout << "\n";
                  }
                 }      
     
                 
// Menu principale dell'applicazione:
int main () {
    int scelta = 0;
    
    cout << "BENVENUTO\n";
    cout << "\n";
    cout << "-------------------------\n";
    cout << "SISTEMA SPESE PERSONALI\n";
    cout << "-------------------------\n";
    // Il menu principale resta attivo finché l'utente non sceglie "Esci"
    while (scelta != 5) {
          cout << "1. Gestione Categorie\n";
          cout << "2. Inserisci Spesa\n";
          cout << "3. Definisci Budget Mensile\n";
          cout << "4. Visualizza Report\n";
          cout << "5. Esci\n";
          cout << "-------------------------\n";
          cout << "Inserisci la tua scelta:\n";
          
          cin >> scelta;
          
          // Smistamento verso i diversi moduli tramite switch
          switch (scelta) {
                 case 1:
                      menuCategorie();
                      break;
                 case 2:
                      menuSpesa();
                      break;
                 case 3:
                      menuBudget();
                      break;
                 case 4:
                      menuReport();
                      break;
                 case 5:
                      cout << "Uscita dal Menu\n";
                      break;                      
                 default:
                      cout << "Scelta non valida. Riprovare\n";
                         
                 }
                         
                 cout << "\n";
                }
                
                return 0;
               } 
                 
     

