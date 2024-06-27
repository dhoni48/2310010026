#ifndef PERMINTAAN_H
#define PERMINTAAN_H

#include <QDialog>
#include <QString>
#include <QDate>

namespace Ui {
class permintaan;
}

class permintaan : public QDialog
{
    Q_OBJECT

public:
    explicit permintaan(QWidget *parent = nullptr);
    ~permintaan();

    permintaan(QDate tglMinta, QDate tglKirim, QString desc, QString status, int idCust);

    void setTglMinta(QDate tglMinta);
    QDate getTglMinta();

    void setTglKirim(QDate tglKirim);
    QDate getTglKirim();

    void setDesc(QString desc);
    QString getDesc();

    void setStatus(QString status);
    QString getStatus();

    void setIdCust(int idCust);
    int getIdCust();

private slots:
    void on_pushButton_clicked();

private:
    Ui::permintaan *ui;

    QDate tglMinta, tglKirim;
    QString desc, status;
    int idCust;
};

#endif // PERMINTAAN_H
