/**
 * @file a.h
 * @brief 
 * @author chen wan hong, redchen1255@gmail.com
 * @version 1
 * @date 2016-04-09
 */
#ifndef A_H
#define A_H

typedef struct A A;

typedef enum Day {
    /// 第一天
    DAY_1,
    /// 第二天
    DAY_2,
    /// 第三天
    DAY_3
} Day;

/**
 * @brief 创建A对象
 *
 * 这个函数是初始化构造函数，专门负责对象的初始化
 *
 * @return 
 *     返回已经创建好的A对象
 */
A* a_create();


/**
 * @brief 释放函数
 *
 * @param self A对象自身
 */
void a_destroy(A* self);


/**
 * @brief 累加函数
 *
 * @param x x值
 * @param y y值
 *
 * @return 
 *     返回累加的值
 */
int a_add(int x, int y);

#endif
