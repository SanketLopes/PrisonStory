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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_TextController949652095.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TextController_States2214569690.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "mscorlib_System_Boolean3825574718.h"

// TextController
struct TextController_t949652095;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
extern Il2CppCodeGenString* _stringLiteral1455970685;
extern const uint32_t TextController_Start_m3645149610_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1210496721;
extern const uint32_t TextController_state_cell_m1454208962_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2179381181;
extern const uint32_t TextController_state_cell_mirror_m996261858_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3771501785;
extern const uint32_t TextController_state_sheet0_m146052361_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3546747504;
extern const uint32_t TextController_state_lock0_m802879637_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3573332858;
extern const uint32_t TextController_state_sheet1_m4889860_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral2829867138;
extern const uint32_t TextController_state_lock1_m802879542_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral270423828;
extern const uint32_t TextController_state_mirror_m2099738399_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1671973364;
extern const uint32_t TextController_state_freedom_m4080224758_MetadataUsageId;




// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_cell()
extern "C"  void TextController_state_cell_m1454208962 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_lock0()
extern "C"  void TextController_state_lock0_m802879637 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_mirror()
extern "C"  void TextController_state_mirror_m2099738399 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_sheet0()
extern "C"  void TextController_state_sheet0_m146052361 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_cell_mirror()
extern "C"  void TextController_state_cell_mirror_m996261858 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_lock1()
extern "C"  void TextController_state_lock1_m802879542 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_sheet1()
extern "C"  void TextController_state_sheet1_m4889860 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextController::state_freedom()
extern "C"  void TextController_state_freedom_m4080224758 (TextController_t949652095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m1771960377 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TextController::.ctor()
extern "C"  void TextController__ctor_m4032868830 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextController::Start()
extern "C"  void TextController_Start_m3645149610 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_Start_m3645149610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_myState_3(0);
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1455970685);
		return;
	}
}
// System.Void TextController::Update()
extern "C"  void TextController_Update_m1619616711 (TextController_t949652095 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_myState_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		TextController_state_cell_m1454208962(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0016:
	{
		int32_t L_1 = __this->get_myState_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		TextController_state_lock0_m802879637(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_002d:
	{
		int32_t L_2 = __this->get_myState_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		TextController_state_mirror_m2099738399(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0044:
	{
		int32_t L_3 = __this->get_myState_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		TextController_state_sheet0_m146052361(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_005b:
	{
		int32_t L_4 = __this->get_myState_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)6))))
		{
			goto IL_0072;
		}
	}
	{
		TextController_state_cell_mirror_m996261858(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0072:
	{
		int32_t L_5 = __this->get_myState_3();
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_0089;
		}
	}
	{
		TextController_state_lock1_m802879542(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_0089:
	{
		int32_t L_6 = __this->get_myState_3();
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_00a0;
		}
	}
	{
		TextController_state_sheet1_m4889860(__this, /*hidden argument*/NULL);
		goto IL_00b3;
	}

IL_00a0:
	{
		int32_t L_7 = __this->get_myState_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_00b3;
		}
	}
	{
		TextController_state_freedom_m4080224758(__this, /*hidden argument*/NULL);
	}

IL_00b3:
	{
		return;
	}
}
// System.Void TextController::state_cell()
extern "C"  void TextController_state_cell_m1454208962 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_cell_m1454208962_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1210496721);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(2);
		goto IL_0053;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_myState_3(3);
		goto IL_0053;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)109), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_myState_3(1);
	}

IL_0053:
	{
		return;
	}
}
// System.Void TextController::state_cell_mirror()
extern "C"  void TextController_state_cell_mirror_m996261858 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_cell_mirror_m996261858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2179381181);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(4);
		goto IL_0053;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)108), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_myState_3(5);
		goto IL_0053;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0053:
	{
		return;
	}
}
// System.Void TextController::state_sheet0()
extern "C"  void TextController_state_sheet0_m146052361 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_sheet0_m146052361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3771501785);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::state_lock0()
extern "C"  void TextController_state_lock0_m802879637 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_lock0_m802879637_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3546747504);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::state_sheet1()
extern "C"  void TextController_state_sheet1_m4889860 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_sheet1_m4889860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral3573332858);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(6);
	}

IL_0023:
	{
		return;
	}
}
// System.Void TextController::state_lock1()
extern "C"  void TextController_state_lock1_m802879542 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_lock1_m802879542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral2829867138);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(6);
		goto IL_003c;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)111), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		__this->set_myState_3(((int32_t)13));
	}

IL_003c:
	{
		return;
	}
}
// System.Void TextController::state_mirror()
extern "C"  void TextController_state_mirror_m2099738399 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_mirror_m2099738399_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral270423828);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		__this->set_myState_3(0);
		goto IL_003b;
	}

IL_0028:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)116), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		__this->set_myState_3(6);
	}

IL_003b:
	{
		return;
	}
}
// System.Void TextController::state_freedom()
extern "C"  void TextController_state_freedom_m4080224758 (TextController_t949652095 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextController_state_freedom_m4080224758_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_text_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteral1671973364);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKeyDown_m1771960377(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_myState_3(0);
	}

IL_0023:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
