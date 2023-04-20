#ifndef CHESSMODEL_H
#define CHESSMODEL_H

#include <QAbstractItemModel>
#include <QObject>

class Chessmodel : public QAbstractItemModel
{
    Q_OBJECT
public:
    explicit Chessmodel(QObject *parent = nullptr);

    // QAbstractItemModel interface
public:
    QModelIndex index(int row, int column, const QModelIndex &parent) const override;
    QModelIndex parent(const QModelIndex &child) const override;
    int rowCount(const QModelIndex &parent) const override;
    int columnCount(const QModelIndex &parent) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role) override;
    QMap<int, QVariant> itemData(const QModelIndex &index) const override;
};

#endif // CHESSMODEL_H
