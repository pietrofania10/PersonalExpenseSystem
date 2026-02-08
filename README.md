# PersonalExpenseSystem
Questo progetto è stato sviluppato come elaborato d’esame e consiste in un Sistema di Gestione delle Spese Personali e del Budget per un singolo utente.
L’applicazione consente di gestire categorie di spesa, registrare spese giornaliere, definire budget mensili e visualizzare report riepilogativi.

# Requisiti per l’esecuzione

• Compilatore C++ (ad esempio g++)

• Sistema operativo compatibile con compilazione C++

• Librerie standard C++ (iostream, string)

• Database SQLite per l’esecuzione degli script SQL
# Compilazione del programma

Posizionarsi nella cartella contenente il file sorgente e compilare con il seguente comando:

g++ main.cpp -o expense_manager
# Avvio del programma

Dopo la compilazione, avviare il programma con:

./expense_manager
# Contenuto del repository

• src/

Contiene il codice sorgente C++ dell’applicazione.


• sql/

Contiene lo script SQL per:

 • creazione del database

 • inserimento dei dati di esempio

 • dimostrazione dei vincoli di integrità
 

• demo/

Contiene un video dimostrativo del funzionamento del programma, che mostra:

 • avvio dell’applicazione

 • utilizzo dei menu

 • inserimento dei dati

 • generazione di un report
 
# Note finali

Il progetto è stato sviluppato seguendo un approccio modulare, separando la logica applicativa dalla gestione del database, come richiesto dalla traccia d’esame.
