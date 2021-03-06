

/******************************************************************************

                  版权所有 (C), 2001-2012, 华为技术有限公司

 ******************************************************************************
  文 件 名   : ScCommCtx.c
  版 本 号   : 初稿
  作    者   : d00212987
  生成日期   : 2015年08月10日
  最近修改   :
  功能描述   : SC CONTEXT文件
  函数列表   :
  修改历史   :
  1.日    期   : 2015年08月10日
    作    者   : d00212987
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "ScCommCtx.h"


#define THIS_FILE_ID PS_FILE_ID_SC_CONTEXT_C

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/*****************************************************************************
 全局变量名    : g_stScCtx
 全局变量说明  : SC运行上下文
 1.日    期   : 2012年04月19日
   作    者   : w00184875
   修改内容   : 新建

  2.日    期   : 2016年05月07日
    作    者   : d00212987
    修改内容   : 锁网锁卡算法升级项目修改
*****************************************************************************/
static SC_CONTEXT_STRU                  g_stScCtx = {
    /* SC_COMM_GLOBAL_VAR */
    {
        {
            "/modem_secure/SC/Pers/CKFile.bin",
            "/modem_secure/SC/Pers/DKFile.bin",
            "/modem_secure/SC/Pers/AKFile.bin",
            "/modem_secure/SC/Pers/PIFile.bin",
            "/modem_secure/SC/Pers/ImeiFile_I0.bin",
            "/modem_secure/SC/Pers/ImeiFile_I1.bin",
            "/modem_secure/SC/Pers/ImeiFile_I2.bin",
        },
        {
            "/modem_secure/SC/Pers/CKSign.hash",
            "/modem_secure/SC/Pers/DKSign.hash",
            "/modem_secure/SC/Pers/AKSign.hash",
            "/modem_secure/SC/Pers/PISign.hash",
            "/modem_secure/SC/Pers/ImeiFile_I0.hash",
            "/modem_secure/SC/Pers/ImeiFile_I1.hash",
            "/modem_secure/SC/Pers/ImeiFile_I2.hash",
        }
    },
    /* SC_FAC_GLOBAL_VAR */
    {
        SC_AUTH_STATUS_UNDO,
        "",
        VOS_FALSE,
        ""
    },
    /* SC_APSEC_GLOBAL_VAR */
    {
        0,
        {0, 0},
        0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        SC_SECURITY_FILE_STATE_IDEL,
        {
            {0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},
            {0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR},{0,VOS_NULL_PTR}
        },
        "/modem_secure/SC/Apsec/SecureDataA.bin",
        "/modem_secure/SC/Apsec/SecureDataC.bin"
    }
};

/*****************************************************************************
  3 函数实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  : SC_CTX_GetScCtxAddr
 功能描述  : 获取当前SC的CTX
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 返回当前SC的CTX地址
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年04月20日
   作    者   : w00184875
   修改内容   : 新生成函数

*****************************************************************************/
SC_CONTEXT_STRU* SC_CTX_GetScCtxAddr(VOS_VOID)
{
    return &(g_stScCtx);
}

/*****************************************************************************
 函 数 名  : SC_CTX_GetCommGlobalVarAddr
 功能描述  : 获取SC公共操作的全局变量地址
 输入参数  : 无
 输出参数  : 无
 返 回 值  : SC公共操作的全局变量上下文指针
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年04月19日
    作    者   : w00184875
    修改内容   : 新生成函数
*****************************************************************************/
SC_COMM_GLOBAL_STRU*  SC_CTX_GetCommGlobalVarAddr( VOS_VOID )
{
    return &g_stScCtx.stScCommGlobalVar;
}


