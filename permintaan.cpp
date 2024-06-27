#include "permintaan.h"
#include "ui_permintaan.h"

permintaan::permintaan(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::permintaan)
{
    ui->setupUi(this);
}

permintaan::~permintaan()
{
    delete ui;
}

permintaan::permintaan(QDate tglMinta, QDate tglKirim, QString desc, QString status, int idCust)
{
    this->tglMinta = tglMinta;
    this->tglKirim = tglKirim;
    this->desc = desc;
    this->status = status;
    this->idCust = idCust;
}

void permintaan::setTglMinta(QDate tglMinta)
{
    this->tglMinta = tglMinta;
}

QDate permintaan::getTglMinta()
{
    return this->tglMinta;
}

void permintaan::setTglKirim(QDate tglKirim)
{
    this->tglKirim = tglKirim;
}

QDate permintaan::getTglKirim()
{
    return this->tglKirim;
}

void permintaan::setDesc(QString desc)
{
    this->desc = desc;
}

QString permintaan::getDesc()
{
    return this->desc;
}

void permintaan::setStatus(QString status)
{
    this->status = status;
}

QString permintaan::getStatus()
{
    return this->status;
}

void permintaan::setIdCust(int idCust)
{
    this->idCust = idCust;
}

int permintaan::getIdCust()
{
    return this->idCust;
}

void permintaan::on_pushButton_clicked()
{
    permintaan p;

    p.setTglMinta(ui->tanggalMintaDateEdit->date());
    p.setTglKirim(ui->tanggalKirimDateEdit->date());
    p.setDesc(ui->deskripsiLineEdit->text());
    p.setStatus(ui->statusLineEdit->text());
    p.setIdCust(ui->idCustomerLineEdit->text().toInt());

    qDebug()<<"Tanggal Minta : "<<p.getTglMinta()<<"\n";
    qDebug()<<"Tanggal Kirim : "<<p.getTglKirim()<<"\n";
    qDebug()<<"Deskripsi : "<<p.getDesc()<<"\n";
    qDebug()<<"Status : "<<p.getStatus()<<"\n";
    qDebug()<<"ID Customer : "<<p.getIdCust()<<"\n";
}

