#include "chessmodel.h"

Chessmodel::Chessmodel(QObject *parent)
    : QAbstractItemModel{parent}
{

}


QModelIndex Chessmodel::index(int row, int column, const QModelIndex &parent) const
{
}

QModelIndex Chessmodel::parent(const QModelIndex &child) const
{
}

int Chessmodel::rowCount(const QModelIndex &parent) const
{
}

int Chessmodel::columnCount(const QModelIndex &parent) const
{
}

QVariant Chessmodel::data(const QModelIndex &index, int role) const
{
}

bool Chessmodel::setData(const QModelIndex &index, const QVariant &value, int role)
{
}

QMap<int, QVariant> Chessmodel::itemData(const QModelIndex &index) const
{
}
