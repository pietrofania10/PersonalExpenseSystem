PRAGMA foreign_keys = ON;
CREATE TABLE IF NOT EXISTS categorie (
id INTEGER PRIMARY KEY AUTOINCREMENT,
nome TEXT NOT NULL UNIQUE CHECK (length(nome) >=3);
)
CREATE TABLE IF NOT EXISTS spese (
id INTEGER PRIMARY KEY AUTOINCREMENT,
data TEXT NOT NULL,
importo REAL NOT NULL CHECK (importo >0),
categoria_id INTEGER NOT NULL,
FOREIGN KEY (categoria_id) REFERENCES categorie(id)
);

CREATE TABLE IF NOT EXISTS budget_mensili (
id INTEGER PRIMARY KEY AUTOINCREMENT,
mese TEXT NOT NULL,
categoria_id INTEGER NOT NULL,
importo REAL NOT NULL CHECK (importo >0),
UNIQUE (mese, categoria_id),
FOREIGN KEY (categoria_id) REFERENCES categorie(id)
);

-- Inserimento categorie
INSERT INTO categorie (nome) VALUES 
('Alimentari'),
('Svago');
-- Inserimento spese
INSERT INTO spese (data, importo, categoria_id) VALUES 
('2025-03-20', 3.50, 1);
('2025-03-22', 6.50, 2); 
--Inserimento budget mensile
INSERT INTO budget_mensili (mese, categoria_id, importo) VALUES
('Marzo', 1, 100.00);

-- Violazione vincolo NOT NULL categorie.nome
INSERT INTO categorie (nome) VALUES ('NULL');
-- Violazione vincolo CHECK su spese.importo (importo deve essere >0)
INSERT INTO spese (data, importo, categoria_id) VALUES 
('2025-03-20', 0, 1); 
-- Violazione vincolo FOREIGN KEY su budget_mensili.categoriaid
INSERT INTO budget_mensili (mese, categoria_id, importo) VALUES
('2025-03', 80, 100.00);

-- Report 1: Totale delle spese per ciascuna categoria
-- Calcolo della somma degli importi raggruppati per categoria
SELECT categorie.nome, SUM(spese.importo) AS Totale_speso
FROM spese, categorie
WHERE spese.categoria_id = categorie.id
GROUP BY categorie.nome
ORDER by Totale_speso DESC;

-- Report 2: Confronto tra spese mensili e budget per categoria
-- Somma delle spese del mese e confronto con il budget assegnato
SELECT categorie.nome, budget_mensili.mese, SUM(spese.importo) AS Totale_speso, budget_mensili.importo AS Totale_budget
FROM spese, categorie, budget_mensili
WHERE spese.categoria_id = categorie.id 
AND budget_mensili.categoria_id = categorie.id
AND spese.data LIKE budget_mensili.mese || '%'
GROUP BY categorie.nome, budget_mensili.mese, budget_mensili.importo 
ORDER BY budget_mensili.mese, Totale_speso DESC;

-- Report 3: Elenco completo delle spese
-- Visualizzazione delle spese ordinate per data
SELECT spese.data, categorie.nome, spese.importo, spese.descrizione
FROM spese, categorie
WHERE spese.categoria_id = categorie.id  
ORDER BY spese.data;