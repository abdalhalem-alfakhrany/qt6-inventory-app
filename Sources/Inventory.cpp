#include "../Headers/Inventory.h"

Inventory::Inventory(QObject *parent) : QObject{parent}
{
    load();
}

void Inventory::add(QString name, int quantity)
{
}

void Inventory::remove(QString name, int quantity)
{
}

void Inventory::list()
{
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
