#include "appitemdelegate.h"

#include <QDebug>

AppItemDelegate::AppItemDelegate(QObject *parent) :
    QAbstractItemDelegate(parent)
{

}

void AppItemDelegate::paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    painter->setPen(Qt::black);
    painter->setBrush(QBrush(QColor(238, 23, 238)));
    painter->drawRect(option.rect);
    painter->drawText(option.rect, index.data(Qt::DisplayRole).toString());
}

QSize AppItemDelegate::sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    Q_UNUSED(option)

    return index.data(Qt::SizeHintRole).toSize();
}