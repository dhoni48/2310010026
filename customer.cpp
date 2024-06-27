#include "customer.h"
#include "ui_customer.h"

customer::customer(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::customer)
{
    ui->setupUi(this);
}

customer::~customer()
{
    delete ui;
}

customer::customer(QString nmCust, QString siupCust, QString alamatCust, QString email1, QString telp1,
                   QString fax1, QString cpCust, QString email2, QString telp2, int idUser)
{
    this->nmCust = nmCust;
    this->siupCust = siupCust;
    this->alamatCust = alamatCust;
    this->email1 = email1;
    this->telp1 = telp1;
    this->fax1 = fax1;
    this->cpCust = cpCust;
    this->email2 = email2;
    this->telp2 = telp2;
    this->idUser = idUser;
}

void customer::setNmCust(QString nmCust)
{
    this->nmCust = nmCust;
}

QString customer::getNmCust()
{
    return this->nmCust;
}

void customer::setSiupCust(QString siupCust)
{
    this->siupCust = siupCust;
}

QString customer::getSiupCust()
{
    return this->siupCust;
}

void customer::setAlamatCust(QString alamatCust)
{
    this->alamatCust = alamatCust;
}

QString customer::getAlamatCust()
{
    return this->alamatCust;
}

void customer::setEmaill1(QString email1)
{
    this->email1 = email1;
}

QString customer::getEmaill1()
{
    return this->email1;
}

void customer::setTelp1(QString telp1)
{
    this->telp1 = telp1;
}

QString customer::getTelp1()
{
    return this->telp1;
}

void customer::setFax1(QString fax1)
{
    this->fax1 = fax1;
}

QString customer::getFax1()
{
    return this->fax1;
}

void customer::setCpCust(QString cpCust)
{
    this->cpCust = cpCust;
}

QString customer::getCpCust()
{
    return this->cpCust;
}

void customer::setEmail2(QString email2)
{
    this->email2 = email2;
}

QString customer::getEmail2()
{
    return this->email2;
}

void customer::setTelp2(QString telp2)
{
    this->telp2 = telp2;
}

QString customer::getTelp2()
{
    return this->telp2;
}

void customer::setIdUser(int idUser)
{
    this->idUser = idUser;
}

int customer::getIdUser()
{
    return this->idUser;
}

void customer::on_pushButton_clicked()
{
    customer c;

    c.setNmCust(ui->namaCustLineEdit->text());
    c.setSiupCust(ui->siupCustLineEdit->text());
    c.setAlamatCust(ui->alamatCustLineEdit->text());
    c.setEmaill1(ui->email1LineEdit->text());
    c.setTelp1(ui->telp1LineEdit->text());
    c.setFax1(ui->fax1LineEdit->text());
    c.setCpCust(ui->cPCustLineEdit->text());
    c.setEmail2(ui->email2LineEdit->text());
    c.setTelp2(ui->telp2LineEdit->text());
    c.setIdUser(ui->iDUserLineEdit->text().toInt());

    qDebug()<<"Nama Customer : "<<c.getNmCust()<<"\n";
    qDebug()<<"SIUP Customer : "<<c.getSiupCust()<<"\n";
    qDebug()<<"Alamat : "<<c.getAlamatCust()<<"\n";
    qDebug()<<"Email 1 : "<<c.getEmaill1()<<"\n";
    qDebug()<<"No Telp 1 : "<<c.getTelp1()<<"\n";
    qDebug()<<"Fax 1 : "<<c.getFax1()<<"\n";
    qDebug()<<"CP Customer : "<<c.getCpCust()<<"\n";
    qDebug()<<"Email 2 : "<<c.getEmail2()<<"\n";
    qDebug()<<"No Telp 2 : "<<c.getTelp2()<<"\n";
    qDebug()<<"ID User : "<<c.getIdUser()<<"\n";
}

