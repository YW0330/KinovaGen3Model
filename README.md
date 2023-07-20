# MATLAB Code Generation 原始碼建置靜態函式庫
利用 MATLAB Code Generation 生成的原始碼建置靜態函式庫，本專案以建置 Kinova Gen3 相關函式為例，也可推廣至其他函式庫。

MATLAB 版本： 2021a

## 使用方法
- 使用 MATLAB code generation 產生 c++ 形式的 `source code` 
- 將 MATLAB 工作資料夾下的 `codegen/lib/<package>` 直接放置於本專案 `lib` 資料夾中
- 執行事前準備工作
    ```shell
    $ bash scripts/preparation.sh
    ```
    上述命令會包含以下動作：
    - 只保留 `<package>` 資料夾中的 `*.h` 與 `*.cpp`
    - 修改 `<package>` 資料夾中的 `rtwtypes.h`
        ```diff
        - #include "tmwtypes.h"
        + #include "../tmwtypes.h"
        ```
    - `<package>` 資料夾中新增 `Makefile` 檔案 
- 打包所有 `<package>` 資料夾成一靜態函式庫 `lib<static libary name>.a`
    ```shell
    $ make LIBARY_NAME=<static libary name>
    ```
    - 預設名稱 `libKinovaGen3Model.a`
- 建置特定 `<package>` 資料夾之靜態函式庫 `lib<package>.a`
    ```shell
    $ make exclude
    ```
    - 排除 MATLAB 於不同資料夾使用相同名稱之方法，造成 multiple defined 的問題
    - 若需要單獨製作成靜態函式庫的 `<package>` 資料夾，請將 `<package>` 名稱填於本專案目錄下 `Makefile` 中的 `MODULE_IGNORED_DIR` 變數
- 獨立建置所有 `<package>` 資料夾之靜態函式庫 `lib<directory name>.a`
    ```shell
    $ make all
    ```
- 清除編譯暫存檔
    ```shell
    $ make clean
    ```
- 標頭檔 `KinovaGen3Model.h` 可視情況自行新增程式碼，內容通常如 `<package>/<package>.h` 所示
