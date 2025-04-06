using System;
using System.Linq;
using UnityEditor;
using UnityEditor.Build.Reporting;

public class BuildScript
{
    public static void PerformBuild()
    {
        string[] args = Environment.GetCommandLineArgs();
        string targetArg = GetArgument(args, "buildTarget") ?? "Android";

        if (!Enum.TryParse(targetArg, true, out BuildTarget buildTarget))
        {
            Console.WriteLine($"Invalid build target: {targetArg}");
            EditorApplication.Exit(1);
            return;
        }

        string outputPath = buildTarget switch
        {
            BuildTarget.Android => "build/Android/mygame.apk",
            BuildTarget.iOS => "build/iOS",
            _ => throw new NotSupportedException($"Platform {buildTarget} is not supported.")
        };

        var scenes = EditorBuildSettings.scenes
            .Where(s => s.enabled)
            .Select(s => s.path)
            .ToArray();

        BuildPlayerOptions buildOptions = new BuildPlayerOptions
        {
            scenes = scenes,
            locationPathName = outputPath,
            target = buildTarget,
            options = BuildOptions.None
        };

        BuildReport report = BuildPipeline.BuildPlayer(buildOptions);
        BuildSummary summary = report.summary;

        if (summary.result == BuildResult.Succeeded)
        {
            Console.WriteLine($"Build succeeded: {summary.totalSize} bytes");
        }
        else
        {
            Console.WriteLine($"Build failed: {summary.result}");
            EditorApplication.Exit(1);
        }
    }

    private static string GetArgument(string[] args, string name)
    {
        for (int i = 0; i < args.Length - 1; i++)
        {
            if (args[i].Equals($"-{name}", StringComparison.OrdinalIgnoreCase))
            {
                return args[i + 1];
            }
        }
        return null;
    }
}
