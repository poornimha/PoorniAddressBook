#include<QtWidgets/QApplication>
#include<QtWidgets/QMessageBox>
#include<QSqlDatabase>
#include<QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql>
#include<QtGui>
#include<QTableWidget>
#include<QTableView>
//#include<QMessageBox>


int main(int argc,char* argv[])
{
    QApplication app(argc,argv);
    QTableWidget* table = new QTableWidget();
    table->setWindowTitle("Connect to Mysql Database Example");

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("addressbook");
    db.setUserName("root");
    db.setPassword("root");
    if (!db.open())
    {
      QMessageBox::critical(0, QObject::tr("Database Error"),
                db.lastError().text());
    }

    QSqlQuery query("SELECT * FROM simple");

    table->setColumnCount(query.record().count());
    table->setRowCount(query.size());

    int index=0;
    while (query.next())
    {
    table->setItem(index,0,new QTableWidgetItem(query.value(0).toString()));
    table->setItem(index,1,new QTableWidgetItem(query.value(1).toString()));
    index++;
    }

    table->show();
    return app.exec();
}
