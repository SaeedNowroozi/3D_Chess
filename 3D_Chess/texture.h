#ifndef TEXTURE_H
#define TEXTURE_H

#include <QObject>

class Texture : public QObject
{
    Q_OBJECT
public:
    explicit Texture(QObject *parent = nullptr);

signals:
     void textue();
};

#endif // TEXTURE_H
