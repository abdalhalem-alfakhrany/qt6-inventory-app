#pragma once

#include <QObject>
#include <QMap>

class Inventory : public QObject
{
    Q_OBJECT
public:
    explicit Inventory(QObject *parent = nullptr);
    ~Inventory();

    void add(QString name, int quantity);
    void remove(QString name, int quantity);
    void list();

public slots:
    void save();
    void load();

private:
    QMap<QString, int> m_items;
};