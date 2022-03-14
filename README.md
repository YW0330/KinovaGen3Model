# Kinova Gen3 相關函式庫

## 用途
- 建置與Kinova Gen3相關靜態函式庫

## 使用方法
- 將從MATLAB code generation出來的`{package}`直接放置於`lib`資料夾中
    - 只需要保留`{package}`資料夾下的`*.h`與`*.cpp`
- 修改`{package}`資料夾中的`rtwtypes.h`檔案
    ```diff
    - #include "tmwtypes.h"
    + #include "../tmwtypes.h"
    ```
- 在`{package}`資料夾中的`makefile`檔案
    ```makefile
    include ../../g++.mk
    ```
- 建置靜態函式庫`KinovaGen3Model.a`
    ```shell
    $ make
    ```
- 清除專案`
    ```shell
    $ make clean
    ```
- 標頭檔`KinovaGen3Model.h`視情況自行新增程式碼