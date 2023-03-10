//
// Created by Chris on 2023/2/2.
//

#ifndef TOWERDEF_SPLASHCASTERFRIEND_H
#define TOWERDEF_SPLASHCASTERFRIEND_H

#include "AbstractFriendObjects.h"
class SplashCasterFriend: public AbstractFriendObjects {
public:
    virtual friendType getType() { return SplashCaster; }

    SplashCasterFriend(int blockNum,
                       int cost,
                       double healthLimit,
                       double atk,
                       double def,
                       double atkInterval,
                       const QString &appearFileName,
                       const QString &msFileName,
                       QGraphicsRectItem *parent = nullptr);
    void attack(QGraphicsItem *target) override;
private:
    QTimer* imageTimer;
    QGraphicsPixmapItem* image;
};


#endif //TOWERDEF_SPLASHCASTERFRIEND_H
