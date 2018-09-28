# blue_tooth_RCcar

## 快毕业了，毕业设计给自己出题《基于神经网络图像识别的自动驾驶汽车》

## 然后这是第一节，改装遥控车，把普通的遥控车改装成esp32控制的蓝牙车

###  就是下面这辆车

![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180927_210749.jpg)


### 拆车，拆到露出主电路板位置，然后用万用表测量，分别找出它的电源正负极vcc，gnd，然后找出左右转向控制信号的触点，再找出前进后退信号的触点，用导线把这些触点分别引出


![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180927_193842.jpg)

### 近距离看一下
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180927_193850.jpg)

### 引出导线
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180927_195423.jpg)


### 再将导线延长加上杜邦线接头
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180927_195409.jpg)



### 把车按原样装回去，但要把刚才的线头漏出来，这是装好后的效果，电池也是自己组装的大容量电池，把线头接到esp32上，程序在上面,原来的车是没有pwm的，直接是最大速度，总是漂移，这次改装加上了pwm好多了，可降速，可加速
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/IMG_20180928_194448.jpg)


### 手机连接ESP32蓝牙，用的是蓝牙串口APP，设置好发送的命令
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/Screenshot_2018_0928_201425.jpg)
![asdas](https://raw.githubusercontent.com/LiuXinyu12378/blue_tooth_RCcar/master/picture/Screenshot_2018_0928_194422.jpg)



