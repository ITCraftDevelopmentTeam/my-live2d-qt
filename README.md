# live2d-qt
使用QWebEngineView在桌面上显示live2d模型。

## 原理
使用QWebEngineView加载一个只包含live2d模型的html页面，设其为全屏，并设置窗口背景透明，忽略鼠标键盘事件。

## 注意
* 使用了`X11`提供的`XShapeCombineRectangles()`实现鼠标键盘操作的穿透，因此程序的通用性不强。
* 设置了鼠标键盘操作的穿透，因此网页上live2d的交互效果无法实现。
* 使用QWebEngineView，测试过程中CPU占用10%以上，影响较大。
* 托盘图标左键点击可隐藏/显示，右键切换模型或者退出。

## 相关链接
该程序的最重要部分其实是live2d的js部分，直接引用了以下项目提供的链接：
* [live2d-widget.js](https://github.com/xiazeyu/live2d-widget.js)
* [live2d-widget-models](https://github.com/xiazeyu/live2d-widget-models)
