#pragma once

#include <Plasma/DataEngine>

class NetworkdEngine : public Plasma::DataEngine {
    Q_OBJECT

public:
    NetworkdEngine(QObject* parent, const QVariantList& args);
    ~NetworkdEngine();
};
