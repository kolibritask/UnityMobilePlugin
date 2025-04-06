# This script is just an example running the standard build
# It can be customized (and preferably changed to python)
unity-editor \
    -batchmode \
    -nographics \
    -quit \
    -projectPath . \
    -executeMethod BuildScript.PerformBuild \
    -buildTarget $1
