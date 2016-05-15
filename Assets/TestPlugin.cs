using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;
using System.Runtime.InteropServices;

public class TestPlugin : MonoBehaviour {

	public Text debugText;

	// Use this for initialization
	void Start () {
		debugText.text = "Empty for now ...";

		if (!Application.isEditor)
		{
		#if UNITY_IOS

		debugText.text = "iOS";

		String getOneText = "Result is " + PlaybasisWrapper.getOne();
		String versionText = "Playbasis Version is " + PlaybasisWrapper.version();

		Debug.Log(getOneText);
		Debug.Log(versionText);

		debugText.text = getOneText + "\n" + versionText;

		PlaybasisWrapper.auth("1012718250", "a52097fc5a17cb0d8631d20eacd2d9c2", "io.wasin.testplugin");
		
		#elif UNITY_ANDROID

		debugText.text = "Android";

		PlaybasisWrapper.init();
		PlaybasisWrapper.initPlaybasis();

		#endif
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
