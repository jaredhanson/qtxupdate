#ifndef TST_APPCASTENCLOSURE_H
#define TST_APPCASTENCLOSURE_H

#include "appcastenclosure.h"
#include <QtxXml>
#include <QtTest/QtTest>

QTX_USE_NAMESPACE


class tst_AppcastEnclosure : public QObject,
                             public IXmlDeserializerDelegate
{
    Q_OBJECT

private slots:
    void init();
    void cleanup();
    
    void readElement();
    void readElementWithMd5Sum();
    
protected:
    virtual IXmlDeserializing* deserializeXmlStart(XmlDeserializer *deserializer, const QStringRef & namespaceUri, const QStringRef & name, const QXmlStreamAttributes & attributes);
    virtual void deserializeXmlEnd(XmlDeserializer *deserializer);
    virtual void deserializeXmlError(XmlDeserializer *deserializer, const QXmlStreamReader::Error error, const QString & errorString);
    
private:
    XmlDeserializer *mDeserializer;
    AppcastEnclosure *mEnclosure;
};

#endif // TST_APPCASTENCLOSURE_H
