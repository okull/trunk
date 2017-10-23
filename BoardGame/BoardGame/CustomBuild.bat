set targetDir=%~1
set projectDir=%~2
set solutionDir=%~3
set configuration=%~4

set sdkDir="%solutionDir%\SDK\BOARDGAME_SDK"

xcopy "%targetDir%*.dll" "%solutionDir%bin\%configuration%" /Y /F
xcopy "%targetDir%*.lib" "%solutionDir%bin\%configuration%" /Y /F

if not exist "%sdkDir%" mkdir "%sdkDir%"

xcopy "%projectDir%include" "%sdkDir%" /Y /F