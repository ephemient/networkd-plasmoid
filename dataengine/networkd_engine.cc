#include "networkd_engine.h"

#include <QDebug>

NetworkdEngine::NetworkdEngine(QObject* parent, const QVariantList& args) {
    qDebug() << "NetworkdEngine::NetworkdEngine(" << parent << ", " << args << ")";
}

NetworkdEngine::~NetworkdEngine() {
    qDebug() << "NetworkdEngine::~NetworkdEngine()";
}

K_EXPORT_PLASMA_DATAENGINE_WITH_JSON(networkd, NetworkdEngine, "plasma-dataengine-networkd.json")

#include "networkd_engine.moc"
