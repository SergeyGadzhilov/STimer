#include "STimer.h"
#include <QTimer>

STimer::STimer(QObject* parent) :
   QObject(parent),
   m_timer(new QTimer(this))
{
   m_timer->setInterval(1000);
   connect(m_timer, &QTimer::timeout, this, &STimer::update);
}

const QTime& STimer::time() const
{
   return m_time;
}

void STimer::start()
{
   m_timer->start();
}

void STimer::stop()
{
   m_timer->stop();
}

void STimer::update()
{
   m_time = m_time.addSecs(1);
   emit timeChanged(m_time);
}
