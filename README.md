# Color debugging information serial port assistant

一个能够显示彩色调试信息的串口助手

## 效果展示

![img.png](img/show.png)

存在六种数据类型，如下表格，每次以换行符为一行。

| **检测字符** | **含义** | **颜色** | **优先级** |
|----------|--------|--------|---------|
| err      | 错误     | 红色     | 0       |
| warn     | 警告     | 黄色     | 1       |
| info     | 消息     | 绿色     | 2       |
| debug    | 调试     | 蓝色     | 3       |
| verbose  | 详细     | 淡黄色    | 4       |
| 'null'   | 未检测到   | 白色     | 5       |

## 环境

可使用QT编译，注意采用的是CMake而不是qmake

- 操作系统
    - WIN11专业版
- 工具链
    - 工程管理：CMAKE3.26.4
    - 构建工具：ninja 1.10.2
    - 编译工具：gcc 13.1.0
- QT
    - QT版本：6.5.2（mingw_64)
    - 设计师：QT Designer 6.5.2
- IDE
    - CLION

## 构建步骤

### 方法一：QT

1. 使用QT打开CMakeLists.txt
2. 设置编译文件路径
3. 设置CMakeLists.txt内```set(CMAKE_PREFIX_PATH "D:/Qt/6.5.2/mingw_64/lib/cmake")``` 为自己的路径,可理解为QT的cmake包文件
4. 编译运行

### 方法二：命令行

这里使用的是powershell，需要配置系统环境变量cmake和ninja，gcc目录。方法自行使用搜索引擎

1. 设置CMakeLists.txt内```set(CMAKE_PREFIX_PATH "D:/Qt/6.5.2/mingw_64/lib/cmake")``` 为自己的路径；
2. 打开工程目录,使用下面命令进行创建build目录并进入，如果已有build请清空

```shell 
mkdir build
cd build
```

3. 使用命令加载cmake，并使用ninja编译

```shell
cmake -GNinja ..
ninja
```

此时文件可以直接打开运行，但是建议使用Qt 6.5.2 (MinGW 11.2.0 64-bit)进行打包，这样界面样式才是经过win11优化的。

### 方法三：IDE（推荐）

1. 设置CMakeLists.txt内```set(CMAKE_PREFIX_PATH "D:/Qt/6.5.2/mingw_64/lib/cmake")``` 为自己的路径；
2. 直接使用clion打开工程目录，或者选中CMakeLists.txt打开
3. 一键运行

## 字体下载

https://www.jetbrains.com/lp/mono/

新版本中字体内嵌到程序中

## TODO

本项目为用于早期学习的入门项目，在代码上有很多需要改进的地方
比如结构太乱，嵌套太多，字体没有嵌套到代码等

因此，如果未来使用频繁，会考虑重构

## 开源协议

MIT