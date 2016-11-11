#include <QCoreApplication>
#include<QSqlDatabase>
#include<QDebug>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtSql/QSqlQuery>
#include <QtSql>

int main(int argc, char *argv[])
{
QCoreApplication a(argc, argv);




QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
db.setHostName("localhost");
db.setUserName("root");
db.setPassword("root");
db.setDatabaseName("addressbook");

if(db.open())
{
    qDebug() << "connected " << db.hostName();
    QSqlQuery query;
            query.exec("SELECT * FROM simple");

            while (query.next()) {
                QString name = query.value(0).toString();
                QString age = query.value(1).toString();
                qDebug() << "name:" << name;
                qDebug() << "age:" << age;
            }

            return 0;
}else{
qDebug() << "Connection FAILED.";

}

return a.exec();
}

