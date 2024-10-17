#ifndef ME_H
#define ME_H

#include <QObject>

class me : public QObject
{
    Q_OBJECT
public:
    explicit me(QObject *parent = nullptr);

public slots:
    void eat();
    
};

#endif // ME_H
