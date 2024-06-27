#ifndef USER_H
#define USER_H

#include <QDialog>
#include <QString>

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

    user(QString nmUser, QString jab, QString telp, QString pass, int hak);

    void setNmUser(QString nmUser);
    QString getNmUser();

    void setJab(QString jab);
    QString getJab();

    void setTelp(QString telp);
    QString getTelp();

    void setPass(QString pass);
    QString getPass();

    void setHak(int hak);
    int getHak();

private slots:
    void on_pushButton_clicked();

private:
    Ui::user *ui;

    QString nmUser, jab, telp, pass;
    int hak;
};

#endif // USER_H
