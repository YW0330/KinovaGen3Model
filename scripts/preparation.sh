# source code 資料夾
SOURCE_DIR=./lib

FILE=Makefile

for dir in `find $SOURCE_DIR -mindepth 1 -maxdepth 1 -type d`; do
    if [ ! -f "$dir/$FILE" ]; then
        echo "===== In $dir folder ======"
        echo "----- Remove extra files -----";
        find $dir -mindepth 1 -type d -exec rm -rf {} +;
        find $dir -mindepth 1 ! \( -name "*.cpp" -o -name "*.h" \) -delete;
        echo "----- Modify line in rtwtypes.h -----";
        sed -i 's/tmwtypes.h/..\/tmwtypes.h/g' $dir/rtwtypes.h;
        echo "----- Creating Makefile -----";
        touch $dir/$FILE;
        echo "include ../../g++.mk" >> $dir/$FILE;
    fi
done
