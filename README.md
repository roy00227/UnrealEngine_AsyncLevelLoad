# AsyncLevelLoad
AsyncLevelLoad is a plugin for UnrealEngine.

[marketplace](https://www.unrealengine.com/marketplace/ja/product/fedd4da327a946a1ae5461da851ffcf1)

This plugin allows asynchronous level loading. It also comes with a loading screen widget.

This is a plug-in made with reference to this video ([UE4/UE5 How to async level load (with C++)](https://youtube.com/watch?v=GwCD2WQ7-4U)).

[UE5.1How to use AsyncLevelLoadPlugin](https://www.youtube.com/watch?v=Mda-TK7-a18)

You can use the AsyncLevelLoad node by adding the scene components included in this plugin to your characters, player controllers, etc.
This node enables asynchronous level loading. So unlike the OpenLevel node, the loading screen never gets stuck.(It will stop when the level load ends and the level opens)

It also comes with a loading screen widget.

<b>sorry</b>

Observed an issue when loading levels with world partitions.

I'll update the plugin once it's resolved.

Update Ver1.1 (2023/03/23)
Added Async Level Load by Object Reference function that references a World soft object.

Features:
・Asynchronous Level Loading
・Loading Screen

Code Modules:
・AsyncLevelLoad[Runtime]
Number of C++ Classes: 2
Number of Widgets: 1
Network Replicated: No
Supported Development Platforms: Win64
Supported Target Build Platforms: Win64

Put it in the Plugins folder of your project folder.

![image](https://github.com/roy00227/AsyncLevelLoad/assets/100113338/34e6b65b-8ec1-450d-bdc1-591abdfa2dbc)

![image](https://github.com/roy00227/AsyncLevelLoad/assets/100113338/a57ef635-a60a-40ae-89f3-bb15d4a1a36d)

