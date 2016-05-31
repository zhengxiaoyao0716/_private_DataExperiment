#ifndef util
#define util

#include "expression.h"

void Finish();


/**
 * 栈工具类.
 */
typedef struct {
    /**
     * 初始化.
     * @return 是否成功初始化
     */
    bool (* init)();
    
    /**
     * 入栈.
     * @param data 入栈的数据
     * @return 是否成功入栈
     */
    bool (* push)(ExprUnit data);
    
    /**
     * 出栈.
     * @return 栈顶的数据，栈空时返回NULL
     */
    ExprUnit (* pop)();
    
    /**
     * 释放.
     * @return 是否成功释放
     */
    bool (* release)();
} StackUtil;

/**
 * 栈工具构造方法.
 */
StackUtil NewStackUtil();

#endif