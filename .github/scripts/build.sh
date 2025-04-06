# This script is just an example running the standard build
# It can be customized (and preferably changed to python)
/opt/Unity/Editor/Unity \
    -batchmode \
    -nographics \
    -quit \
    -projectPath . \
    -executeMethod BuildScript.PerformBuild \
    -buildTarget $1