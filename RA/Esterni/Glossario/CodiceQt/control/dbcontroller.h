#ifndef DBCONTROLLER_H
#define DBCONTROLLER_H
#include "model/database.h"

class DbController
{
public:
	 DbController();
	 void carica();
	 void inserisci(const QString& w, const QString& d);
	 void save();
	 void texprint();
     void replace(const QString& nomefile);
private:
	 DataBase* database;
};

#endif // DBCONTROLLER_H
