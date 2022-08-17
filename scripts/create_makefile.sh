# source code 資料夾
SOURCE_DIR=./lib

FILE=Makefile

for dir in `find $SOURCE_DIR -mindepth 1 -maxdepth 1 -type d`; do
    if [ ! -f "$dir/$FILE" ]; then
        echo "===== Remove extra file in $dir =====";
        find $dir -mindepth 1 -type d -exec rm -rf {} +;
        find $dir -mindepth 1 ! \( -name "*.cpp" -o -name "*.h" \) -delete;
        echo "===== Creating Makefile in $dir =====";
        touch $dir/$FILE;
        echo "include ../../g++.mk" >> $dir/$FILE;
    fi
done
