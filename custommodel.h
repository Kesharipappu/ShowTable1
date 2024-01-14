// CustomModel.h
//#pragma once

#include <QAbstractListModel>

class CustomModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit CustomModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

protected:
    QHash<int, QByteArray> CustomModel::roleNames() const
    {
        QHash<int, QByteArray> roles;
        roles[Qt::UserRole + 1] = "name";
        roles[Qt::UserRole + 2] = "fatherName";
        roles[Qt::UserRole + 3] = "motherName";
        return roles;
    }

private:
    // Data structures to hold your SQLite data
};
