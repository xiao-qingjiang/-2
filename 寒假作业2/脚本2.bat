@echo off
echo  "输入所在盘符"
set /p a=
cd  "%c%"
echo   输入文件路径
set /p b=
cd "%b%"
echo 输入文件名
set /p c=
cd “%c%”
echo 编译开始
gcc "%c%" -o try.exe
if exist "try.exe"  echo 编译成功
if not exist "try.exe" echo 编译失败
pause


