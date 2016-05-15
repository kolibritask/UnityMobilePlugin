using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class PlaybasisWrapper : MonoBehaviour {
	#if UNITY_ANDROID
	private static AndroidJavaClass javaUnityPlayer;
	private static AndroidJavaObject currentActivity;
	private static AndroidJavaObject playbasis = null;

	private PlaybasisWrapper()
	{

	}

	public static void init()
	{
		javaUnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		currentActivity = javaUnityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
		playbasis = new AndroidJavaObject("io.wasin.wrapper.playbasis.PlaybasisAndroidWrapper", currentActivity);
		Debug.Log("Initialized PlaybasisWrapper successfully");
	}

	public static void initPlaybasis()
	{
		// set up apikey and apisecret
		/*var builder = new AndroidJavaObject("com.playbasis.android.playbasissdk.core.Playbasis$Builder", currentActivity);
		builder.Call<AndroidJavaObject>("setApiKey", "2410120595");
		builder.Call<AndroidJavaObject>("setApiSecret", "0b98a945d6ba51153133767a14654c79");
		builder.Call<AndroidJavaObject>("build");*/

		//string version = playbasis.GetStatic<string>("SDK_VERSION");
		//Debug.Log("sdk version = " + version);

		playbasis.Call("getUserPublicInfo");
		playbasis.Call("login");
		playbasis.Call("like");

		Debug.Log("Initialized Playbasis instance succesfully");
	}

	#endif

	#if UNITY_IOS
	/* Interface to native implementations */
	[DllImport ("__Internal")]
	private static extern int _getOne();

	[DllImport ("__Internal")]
	private static extern string _version();

	[DllImport ("__Internal")]
	private static extern void _auth(string apikey, string apisecret, string bundleId);

	/* Public interface for use inside C# / JS Code */
	public static int getOne()
	{
		return _getOne() + 1;
	}

	public static string version()
	{
		return _version();
	}

	public static void auth(string apikey, string apisecret, string bundleId)
	{
		_auth(apikey, apisecret, bundleId);
	}
	#endif
}