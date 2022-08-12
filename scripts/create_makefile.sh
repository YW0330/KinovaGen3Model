# source code 資料夾
SOURCE_DIR=./lib

FILE=Makefile

for dir in `find $SOURCE_DIR -mindepth 1 -type d`; do
    if [ ! -f "$dir/$FILE" ]; then
        echo "===== Creating Makefile in $dir =====";
        touch $dir/$FILE;
        echo "include ../../g++.mk" >> $dir/$FILE;
    fi
done