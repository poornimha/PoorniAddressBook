#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"
//#include "QPalette"
//QMainWindow m;
QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{
  // QLabel *textLabel=new QLabel();
   //textLabel->setText("<font color='red'>*</font>");
   //addRow("First Name", firstNameField);
   // firstNameField->setText()
    addRow("firstname<font color='red'>*</font>",firstNameField);
    addRow("Last Name<font color='red'>*</font>", lastNameField);
    addRow("Address<font color='red'>*</font>", addressField);
    addRow("Phone Number<font color='red'>*</font>", phoneNumberField);
    addRow("Email", emailField);
    addRow("city", cityField);


}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
