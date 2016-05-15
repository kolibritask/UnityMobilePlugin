#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// PlaybasisWrapper
struct PlaybasisWrapper_t223299529;
// System.String
struct String_t;
// TestPlugin
struct TestPlugin_t3628025477;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlaybasisWrapper223299529.h"
#include "AssemblyU2DCSharp_PlaybasisWrapper223299529MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_TestPlugin3628025477.h"
#include "AssemblyU2DCSharp_TestPlugin3628025477MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application450040189MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug1588791936MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198.h"
#include "UnityEngine_UI_UnityEngine_UI_Text3286458198MethodDeclarations.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlaybasisWrapper::.ctor()
extern "C"  void PlaybasisWrapper__ctor_m2414842098 (PlaybasisWrapper_t223299529 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 PlaybasisWrapper::_getOne()
extern "C" {int32_t DEFAULT_CALL _getOne();}
extern "C"  int32_t PlaybasisWrapper__getOne_m3836827697 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_getOne;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_getOne'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.String PlaybasisWrapper::_version()
extern "C" {char* DEFAULT_CALL _version();}
extern "C"  String_t* PlaybasisWrapper__version_m3404309102 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_version;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_version'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	char* _return_value = _il2cpp_pinvoke_func();
	String_t* __return_value_unmarshaled = { 0 };
	__return_value_unmarshaled = il2cpp_codegen_marshal_string_result(_return_value);
	il2cpp_codegen_marshal_free(_return_value);
	_return_value = NULL;

	return __return_value_unmarshaled;
}
// System.Void PlaybasisWrapper::_auth(System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL _auth(char*, char*, char*);}
extern "C"  void PlaybasisWrapper__auth_m676901475 (Object_t * __this /* static, unused */, String_t* ___apikey, String_t* ___apisecret, String_t* ___bundleId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_auth;

		if (_il2cpp_pinvoke_func == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_auth'"));
		}
	}

	// Marshaling of parameter '___apikey' to native representation
	char* ____apikey_marshaled = { 0 };
	____apikey_marshaled = il2cpp_codegen_marshal_string(___apikey);

	// Marshaling of parameter '___apisecret' to native representation
	char* ____apisecret_marshaled = { 0 };
	____apisecret_marshaled = il2cpp_codegen_marshal_string(___apisecret);

	// Marshaling of parameter '___bundleId' to native representation
	char* ____bundleId_marshaled = { 0 };
	____bundleId_marshaled = il2cpp_codegen_marshal_string(___bundleId);

	// Native function invocation
	_il2cpp_pinvoke_func(____apikey_marshaled, ____apisecret_marshaled, ____bundleId_marshaled);

	// Marshaling cleanup of parameter '___apikey' native representation
	il2cpp_codegen_marshal_free(____apikey_marshaled);
	____apikey_marshaled = NULL;

	// Marshaling cleanup of parameter '___apisecret' native representation
	il2cpp_codegen_marshal_free(____apisecret_marshaled);
	____apisecret_marshaled = NULL;

	// Marshaling cleanup of parameter '___bundleId' native representation
	il2cpp_codegen_marshal_free(____bundleId_marshaled);
	____bundleId_marshaled = NULL;

}
// System.Int32 PlaybasisWrapper::getOne()
extern "C"  int32_t PlaybasisWrapper_getOne_m1880732016 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = PlaybasisWrapper__getOne_m3836827697(NULL /*static, unused*/, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0+(int32_t)1));
	}
}
// System.String PlaybasisWrapper::version()
extern "C"  String_t* PlaybasisWrapper_version_m2398362949 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		String_t* L_0 = PlaybasisWrapper__version_m3404309102(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void PlaybasisWrapper::auth(System.String,System.String,System.String)
extern "C"  void PlaybasisWrapper_auth_m608786208 (Object_t * __this /* static, unused */, String_t* ___apikey, String_t* ___apisecret, String_t* ___bundleId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___apikey;
		String_t* L_1 = ___apisecret;
		String_t* L_2 = ___bundleId;
		PlaybasisWrapper__auth_m676901475(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestPlugin::.ctor()
extern "C"  void TestPlugin__ctor_m2575488950 (TestPlugin_t3628025477 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TestPlugin::Start()
extern TypeInfo* Int32_t2847414787_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Debug_t1588791936_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3826172762;
extern Il2CppCodeGenString* _stringLiteral103437;
extern Il2CppCodeGenString* _stringLiteral1420063187;
extern Il2CppCodeGenString* _stringLiteral2162156312;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral647749999;
extern Il2CppCodeGenString* _stringLiteral3619098213;
extern Il2CppCodeGenString* _stringLiteral3983496749;
extern const uint32_t TestPlugin_Start_m1522626742_MetadataUsageId;
extern "C"  void TestPlugin_Start_m1522626742 (TestPlugin_t3628025477 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TestPlugin_Start_m1522626742_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* V_1 = {0};
	{
		Text_t3286458198 * L_0 = (__this->___debugText_2);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3826172762);
		bool L_1 = Application_get_isEditor_m1279348309(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0086;
		}
	}
	{
		Text_t3286458198 * L_2 = (__this->___debugText_2);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteral103437);
		int32_t L_3 = PlaybasisWrapper_getOne_m1880732016(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t2847414787_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m389863537(NULL /*static, unused*/, _stringLiteral1420063187, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		String_t* L_7 = PlaybasisWrapper_version_m2398362949(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2162156312, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		String_t* L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1588791936_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		Debug_Log_m1731103628(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Text_t3286458198 * L_11 = (__this->___debugText_2);
		String_t* L_12 = V_0;
		String_t* L_13 = V_1;
		String_t* L_14 = String_Concat_m1825781833(NULL /*static, unused*/, L_12, _stringLiteral10, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		PlaybasisWrapper_auth_m608786208(NULL /*static, unused*/, _stringLiteral647749999, _stringLiteral3619098213, _stringLiteral3983496749, /*hidden argument*/NULL);
	}

IL_0086:
	{
		return;
	}
}
// System.Void TestPlugin::Update()
extern "C"  void TestPlugin_Update_m4257608215 (TestPlugin_t3628025477 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
