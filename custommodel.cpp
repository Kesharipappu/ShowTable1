// CustomModel.cpp
#include <custommodel.h>
#include <QObject>
#include <QAbstractItemModel>
#include <QSqlQueryModel>
#include <QSqlQuery>

CustomModel::CustomModel(QObject *parent) : QAbstractListModel(parent)
{
    QSqlQuery query("SELECT name, fatherName, motherName FROM student");

    while (query.next()) {
        QString name = query.value(0).toString();
        QString fatherName = query.value(1).toString();
        QString motherName = query.value(2).toString();

        // Create a data structure to store this information in your model
    }
}


int CustomModel::rowCount(const QModelIndex &parent) const
{
    // Return the number of rows
}

QVariant CustomModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    int row = index.row();

    switch (role) {
    case Qt::UserRole + 1:
        return studentData[row].name;
    case Qt::UserRole + 2:
        return studentData[row].fatherName;
    case Qt::UserRole + 3:
        return studentData[row].motherName;
    default:
        return QVariant();
    }
}


QHash<int, QByteArray> CustomModel::roleNames() const
{
    // Define role names
}
