#ifndef TST_UPDATERESOLVER_H
#define TST_UPDATERESOLVER_H

#include "updateresolver.h"
#include <QtTest/QtTest>

QTX_USE_NAMESPACE


class tst_UpdateResolver : public QObject
{
    Q_OBJECT

private slots:
    void initTestCase();
    void init();
    void cleanup();
    
    void resolveTest();
    void resolveNoUpdateTest();
    void resolveErrorTest();
    void resolveInvalidCheckerError();

    void updateFromTest();
    void updateFromWithNoUpdatesTest();
    void updateFromInvalidVersionTest();
    void updateFromInvalidCheckerTest();
    
    void filterTest();
    void multipleFilterTest();
    
private:
    UpdateResolver *mResolver;
};

#endif // TST_UPDATERESOLVER_H
