#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

user::user(QString nmUser, QString jab, QString telp, QString pass, int hak)
{
    this->nmUser = nmUser;
    this->jab = jab;
    this->telp = telp;
    this->pass = pass;
    this->hak = hak;
}

void user::setNmUser(QString nmUser)
{
    this->nmUser = nmUser;
}

QString user::getNmUser()
{
    return this->nmUser;
}

void user::setJab(QString jab)
{
    this->jab = jab;
}

QString user::getJab()
{
    return this->jab;
}

void user::setTelp(QString telp)
{
    this->telp = telp;
}

QString user::getTelp()
{
    return this->telp;
}

void user::setPass(QString pass)
{
    this->pass = pass;
}

QString user::getPass()
{
    return this->pass;
}

void user::setHak(int hak)
{
    this->hak = hak;
}

int user::getHak()
{
    return this->hak;
}

void user::on_pushButton_clicked()
{
    user u;

    u.setNmUser(ui->namaUserLineEdit->text());
    u.setJab(ui->jabatanLineEdit->text());
    u.setTelp(ui->teleponLineEdit->text());
    u.setPass(ui->passwordLineEdit->text());
    u.setHak(ui->hakAksesLineEdit->text().toInt());

    qDebug()<<"Nama User : "<<u.getNmUser()<<"\n";
    qDebug()<<"No Telepon : "<<u.getTelp()<<"\n";
    qDebug()<<"Jabatan : "<<u.getJab()<<"\n";
    qDebug()<<"Password : "<<u.getPass()<<"\n";
    qDebug()<<"Hak Akses : "<<u.getHak()<<"\n";
}

