#
# pod.sh
#
# Created by ZuopanYao on 2021/03/31.

if [ -z "$1" ]; then
 echo "缺少版本号参数"
 exit 0
fi

MODULE='DDLLSDK'
MODULENAME='DDLLSDKInner'
SPECS='Specs'

cp podspec.example $MODULENAME.podspec
REPLACE=`sed "s/{v}/$1/g" $MODULENAME.podspec`
echo "$REPLACE" > $MODULENAME.podspec

# 打 tag
# git add $MODULE.podspec
git add *
git commit -m "modify $MODULENAME.podspec for $1"
git tag -a $1 -m "$1"

# 推送
git push

# 把 tag 提交到远程仓库
git push origin : $1

# cocoapods 索引更新
cd ../$SPECS
git pull

mkdir -p $MODULENAME/$1
cp ../$MODULE/$MODULENAME.podspec $MODULENAME/$1/$MODULENAME.podspec
git add *
git commit -m "$MODULE-$1"
git push

# cocoapods Specs
# pod trunk push "../$MODULE/$MODULENAME.podspec" --allow-warnings

echo 'Done'