@echo off
echo  "���������̷�"
set /p a=
cd  "%c%"
echo   �����ļ�·��
set /p b=
cd "%b%"
echo �����ļ���
set /p c=
cd ��%c%��
echo ���뿪ʼ
gcc "%c%" -o try.exe
if exist "try.exe"  echo ����ɹ�
if not exist "try.exe" echo ����ʧ��
pause


