#pragma once

#include <Plasma/DataEngine>

class WpaSupplicantEngine : public Plasma::DataEngine {
    Q_OBJECT

public:
    WpaSupplicantEngine(QObject* parent, const QVariantList& args);
    ~WpaSupplicantEngine();
};
