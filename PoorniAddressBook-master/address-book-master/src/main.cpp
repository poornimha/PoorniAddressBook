#include "addressbookcontroller.h"
#include "sqlitedatasource.h"
#include <QtWidgets>
#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SQLiteDataSource dSrc("contacts.db", true);  
    AddressBookController myBook(dSrc);




    myBook.start();
    return app.exec();
}

/*#include <QtWidgets>
#include "addressbook.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    AddressBook addressBook;
    addressBook.show();

    return app.exec();
}*/
