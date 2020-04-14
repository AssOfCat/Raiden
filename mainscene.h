#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QWidget>
#include <config.h>
#include <map.h>
#include <QTimer>
#include <QPainter>
#include <heroplane.h>
#include<QMouseEvent>
#include <bullet.h>
#include <enemyplane.h>
#include <bomb.h>


class MainScene : public QWidget
{
    Q_OBJECT
    QTimer m_Timer;
    //地图对象
    Map m_map;
    //飞机对象
    HeroPlane m_hero;

    //敌机数组
    EnemyPlane m_enemys[ENEMY_NUM];

    //敌机出场间隔记录
    int m_recorder;

    //爆炸数组
    Bomb m_bombs[BOMB_NUM];

public:
    MainScene(QWidget *parent = 0);
    ~MainScene();

    void  initScene();
    //启动游戏  用于启动定时器对象
    void playGame();
    //更新坐标
    void updatePosition();
    //绘图事件
    void paintEvent(QPaintEvent *event);
    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *event);

    //敌机出场
    void enemyToScene();
    //碰撞检测函数
    void collisionDetection();




};

#endif // MAINSCENE_H
