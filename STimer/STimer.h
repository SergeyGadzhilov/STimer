#ifndef STIMER_H
#define STIMER_H

#include <QObject>
#include <QTime>

class QTimer;

class STimer : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QTime time READ time NOTIFY timeChanged)

public:
    STimer(QObject* parent = nullptr);

    const QTime& time() const;

    Q_INVOKABLE void start();
    Q_INVOKABLE void stop();

signals:
    void timeChanged(const QTime& time);

private:
    QTime m_time{0,0,0,0};
    QTimer* m_timer = nullptr;

    void update();
};

#endif // STIMER_H
