#include "zFlyingObject.h"

zFlyingObject::zFlyingObject(QWidget* parent) : zObject(parent)
{

}

void zFlyingObject::act()
{

}

zPea::zPea(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);
    anim->start();
    this->show();
    this->speed = 10;
    this->canFire = true;
}

void zPea::act()
{
    this->raise();
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 20) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zAnim* pea_anim = new zPeaHit(scene);
            pea_anim->setGeometry(this->x() + 20, this->y(), 40, 40);
            this->scene->Anims.append(pea_anim);
            zombie->hit(10);
            return;
        }
    }
}

zPea::~zPea()
{
    delete this->anim;
}

zBall::zBall(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);

    anim->start();
    this->show();
    this->speed = 10;
    this->canFire = false;
    this->is_ball = true;//可以变火篮球
}

void zBall::act()
{
    this->raise();
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 20) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zAnim* ball_anim = new zPeaHit(scene);
            ball_anim->setGeometry(this->x() + 20, this->y() + 50, 40, 40);
            this->scene->Anims.append(ball_anim);
            zombie->hit(10);
            return;
        }
    }
}

zBall::~zBall()
{
    delete this->anim;
}


zFirePea::zFirePea(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);
    anim->start();
    this->show();
    this->speed = 10;
}

void zFirePea::act()
{
    this->raise();
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 20) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zAnim* pea_anim = new zFire(scene);
            pea_anim->setGeometry(this->x() + 20, this->y(), 40, 40);
            this->scene->Anims.append(pea_anim);
            zombie->hit(10);
            zZombie* zombie_2;
            foreach (zombie_2, this->scene->Zombies)
            {
                if ((qAbs(zombie_2->x() - this->x() + zombie_2->offset + 60) < 60) && ((this->raw) == (zombie_2->raw)))
                {
                    zombie_2->hit(10, true);
                }
            }
            return;
        }
    }
}

zFirePea::~zFirePea()
{
    delete this->anim;
}

zFireBall::zFireBall(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);
    anim->start();
    this->show();
    this->speed = 15;
}

void zFireBall::act()
{
    this->raise();
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 40) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zAnim* Ball_anim = new zFire(scene);
            Ball_anim->setGeometry(this->x() + 20, this->y(), 40, 40);
            this->scene->Anims.append(Ball_anim);
            zombie->hit(200);
            zZombie* zombie_2;
            foreach (zombie_2, this->scene->Zombies)
            {
                if ((qAbs(zombie_2->x() - this->x() + zombie_2->offset + 60) < 60) && ((this->raw) == (zombie_2->raw)))
                {
                    zombie_2->hit(10, true);
                }
            }
            QSound::play(":/Sounds/rc/你干嘛.wav");
            return;
        }
    }
}

zFireBall::~zFireBall()
{
    delete this->anim;
}


zIcePea::zIcePea(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);
    anim->start();
    this->show();
    this->speed = 10;
    this->canFire = true;
}

void zIcePea::act()
{
    this->raise();
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 20) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zAnim* pea_anim = new zPeaHit(scene);
            pea_anim->setGeometry(this->x() + 20, this->y(), 40, 40);
            this->scene->Anims.append(pea_anim);
            zombie->ice();
            zombie->hit(10);
            return;
        }
    }
}

zIcePea::~zIcePea()
{
    delete this->anim;
}


zMush::zMush(QWidget* parent) : zFlyingObject(parent)
{
    this->setMovie(anim);
    anim->start();
    this->show();
    this->speed = 12;
    this->canFire = false;
    this->TimerFly = 22;
}

void zMush::act()
{
    this->raise();
    this->TimerFly --;
    if (this->TimerFly < 0)
    {
        this->alive = false;
    }
    if (!(this->scene->screen.contains(this->pos())))
    {
        this->alive = false;
    }
    this->move(this->x() + this->speed , this->y());
    zZombie* zombie;
    foreach (zombie, this->scene->Zombies)
    {
        if ((qAbs(zombie->x() - this->x() + zombie->offset + 60) < 20) && ((this->raw) == (zombie->raw)) && (this->alive))
        {
            this->alive = false;
            zombie->hit(10);
            return;
        }
    }
}

zMush::~zMush()
{
    delete this->anim;
}
