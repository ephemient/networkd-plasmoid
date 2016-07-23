#include "wpa_supplicant_engine.h"

#include <QDebug>

WpaSupplicantEngine::WpaSupplicantEngine(QObject* parent, const QVariantList& args) {
    qDebug() << "WpaSupplicantEngine::WpaSupplicantEngine(" << parent << ", " << args << ")";
}

WpaSupplicantEngine::~WpaSupplicantEngine() {
    qDebug() << "WpaSupplicantEngine::~WpaSupplicantEngine()";
}

K_EXPORT_PLASMA_DATAENGINE_WITH_JSON(networkd, WpaSupplicantEngine, "plasma-dataengine-wpa_supplicant.json")

#include "wpa_supplicant_engine.moc"
