#include "playlistelement.h"

PlayListElement::PlayListElement(const QString& other = QString()) : QString(other)
{
}

void PlayListElement::setPath(const QString &path)
{
    m_path = path;
}

QString PlayListElement::path()
{
    return m_path;
}
