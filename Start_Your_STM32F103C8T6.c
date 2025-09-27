//-------------------------
//
//    工程建立:配置标准库
//
//-------------------------
/* 基于江协科技教程做的优化 */
首先打开Keil5 ,选好芯片型号
建立三个group以及同名文件夹 ,分别是
Lib		:放置标准外设库函数
Usr		:放置自己的代码 ,还有"stm32f10x_conf.h"/*不用RSS记得改掉只读模式 ,把RSS那一部分全部注释掉 ,不然报错嘻嘻嘻*/,"stm32f10x_it.c","stm32f10x_it.h"
Start	:放置启动项 ,对于 STM32F103C8T6 应选用"startup_stm32f10x_md.s" ,剩下四个C语言文件也要加进去
//对于在Keil5内下载PACK包的情况 ,文件位置在"C:\Keil_v5\ARM\PACK\Keil\STM32F1xx_DFP\2.4.1"里面
//照着江协科技照着找那些文件就好 ,不难找

//-------------------------

随后要进行数个设定
"Options of Target" 里面找到 "C/C++" 选项
1. DEFINE 项输入 "USE_STDPERIPH_DRIVER"
2. Include Path 选项添加上面三个 Group 的位置 ,还有//"C:\Keil_v5\ARM\PACK\ARM\CMSIS\5.3.0\CMSIS\Include"

"Options of Target" 里面找到 "Debug" 选项
设置为 "ST-Link" ,右边有个 "Setting" ,找到 "Flash Download" ,把"Reset and Run"打对勾

恭喜你完成初步的工程建立 !开始你的STM32F103初学旅途吧 !
Ciallo～(∠・ω< )⌒★