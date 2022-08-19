# MATLAB Code Generation 原始碼建置靜態函式庫
利用 MATLAB Code Generation 生成的原始碼建置靜態函式庫，本專案以建置 Kinova Gen3 相關靜態函式庫為例，也可推廣至其他函式庫。

MATLAB 版本： 2021a

## 使用方法
- 使用 MATLAB code generation 產生 `source code`
- 將 MATLAB 工作資料夾下的 `codegen/lib/<package>` 直接放置於本專案 `lib` 資料夾中
- 事前準備工作
    ```shell
    $ bash scripts/preparation.sh
    ```
    包含以下動作：
    - 只需要保留 `<package>` 資料夾中的 `*.h` 與 `*.cpp`
    - 修改 `<package>` 資料夾中的 `rtwtypes.h`
        ```diff
        - #include "tmwtypes.h"
        + #include "../tmwtypes.h"
        ```
    - `<package>` 資料夾中新增 `Makefile` 檔案 
- 建置靜態函式庫 `lib<static libary name>.a`
    ```shell
    $ make LIBARY_NAME=<static libary name>
    ```
    - 預設名稱 `libKinovaGen3Model.a`
- 清除專案
    ```shell
    $ make clean
    ```
- 標頭檔 `KinovaGen3Model.h` 可視情況自行新增程式碼，內容通常如 `<package>/<package>.h` 所示