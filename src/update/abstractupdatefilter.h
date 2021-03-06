#ifndef QTXUPDATE_ABSTRACTUPDATEFILTER_H
#define QTXUPDATE_ABSTRACTUPDATEFILTER_H

#include "updateglobal.h"
#include <QtCore>

QTX_BEGIN_NAMESPACE


class Update;

class AbstractUpdateFilter : public QObject
{
    Q_OBJECT
    
public:
    AbstractUpdateFilter(QObject *parent = 0);
    virtual ~AbstractUpdateFilter();
    
    virtual QList<Update *> filter(const QList<Update *> candidates) = 0;
};


QTX_END_NAMESPACE

#endif // QTXUPDATE_ABSTRACTUPDATEFILTER_H
