#include "../Headers/Inventory.h"

Inventory::Inventory(QObject *parent) : QObject{parent}
{
    load();
}

void Inventory::add(QString name, int quantity)
{
    if (m_items.contains(name))
    {
        m_items[name] += quantity;
    }
    else
    {
        m_items.insert(name, quantity);
    }
}

void Inventory::remove(QString name, int quantity)
{
    if (m_items.contains(name))
    {
        m_items[name] -= quantity;
    }
    else
    {
        qInfo() << " There is no item with that name.";
    }
}

void Inventory::list()
{
    qInfo() << " Inventroy items : ";
    foreach (QString key, m_items.keys())
    {
        qInfo() << "item : " << key << ", value : " << m_items.value(key);
    }
}

void Inventory::save()
{
}

void Inventory::load()
{
}

Inventory::~Inventory()
{
}
