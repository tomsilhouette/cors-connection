#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
233,
245,
246,
247,
248,
249,
250,
251,
252,
253,
256,
257,
258,
431,
432,
433,
462,
463,
464,
484,
485,
486,
487,
604,
605,
606,
609,
655,
656,
657,
660,
662,
664,
666,
671,
679,
680,
681,
682,
683,
684,
685,
686,
687,
688,
689,
690,
691,
692,
693,
694,
695,
697,
698,
699,
700,
701,
702,
703,
795,
796,
797,
798,
799,
800,
801,
802,
803,
804,
805,
806,
807,
808,
809,
810,
811,
813,
814,
815,
816,
817,
818,
819,
886,
887,
955,
962,
965,
967,
972,
973,
975,
976,
980,
981,
983,
985,
986,
989,
990,
991,
994,
996,
999,
1001,
1003,
1012,
1079,
1081,
1083,
1093,
1094,
1095,
1096,
1098,
1105,
1106,
1107,
1108,
1109,
1117,
1118,
1119,
1123,
1124,
1126,
1130,
1131,
1132,
1416,
1606,
1607,
9593,
9594,
9596,
9597,
9598,
9599,
9600,
9602,
9604,
9606,
9607,
9618,
9620,
9625,
9627,
9629,
9631,
9682,
9683,
9685,
9686,
9687,
9688,
9689,
9691,
9693,
10748,
10752,
10754,
10755,
10756,
10757,
11018,
11019,
11020,
11021,
11039,
11040,
11041,
11043,
11086,
11147,
11149,
11151,
11161,
11162,
11163,
11164,
11165,
11602,
11603,
11608,
11609,
11643,
11663,
11670,
11677,
11688,
11691,
11716,
11796,
11798,
11809,
11811,
11812,
11813,
11820,
11834,
11854,
11855,
11863,
11865,
11872,
11873,
11876,
11878,
11883,
11889,
11890,
11897,
11899,
11911,
11914,
11915,
11916,
11927,
11936,
11942,
11943,
11944,
11946,
11947,
11964,
11966,
11980,
12001,
12002,
12027,
12032,
12062,
12063,
12603,
12617,
12712,
12713,
12928,
12929,
12936,
12937,
12938,
12944,
13041,
13557,
13558,
14024,
14025,
14030,
14040,
14964,
14985,
14987,
14989,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 233,
ves_icall_System_Array_InternalCreate,
// token 245,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 246,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 247,
ves_icall_System_Array_CanChangePrimitive,
// token 248,
ves_icall_System_Array_FastCopy,
// token 249,
ves_icall_System_Array_GetLengthInternal_raw,
// token 250,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 251,
ves_icall_System_Array_GetGenericValue_icall,
// token 252,
ves_icall_System_Array_GetValueImpl_raw,
// token 253,
ves_icall_System_Array_SetGenericValue_icall,
// token 256,
ves_icall_System_Array_SetValueImpl_raw,
// token 257,
ves_icall_System_Array_InitializeInternal_raw,
// token 258,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 431,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 432,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 433,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 462,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 463,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 464,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 484,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 485,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 486,
ves_icall_System_Enum_InternalGetCorElementType,
// token 487,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 604,
ves_icall_System_Environment_get_ProcessorCount,
// token 605,
ves_icall_System_Environment_get_TickCount,
// token 606,
ves_icall_System_Environment_get_TickCount64,
// token 609,
ves_icall_System_Environment_FailFast_raw,
// token 655,
ves_icall_System_GC_GetCollectionCount,
// token 656,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 657,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 660,
ves_icall_System_GC_SuppressFinalize_raw,
// token 662,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 664,
ves_icall_System_GC_GetGCMemoryInfo,
// token 666,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 671,
ves_icall_System_Object_MemberwiseClone_raw,
// token 679,
ves_icall_System_Math_Acos,
// token 680,
ves_icall_System_Math_Acosh,
// token 681,
ves_icall_System_Math_Asin,
// token 682,
ves_icall_System_Math_Asinh,
// token 683,
ves_icall_System_Math_Atan,
// token 684,
ves_icall_System_Math_Atan2,
// token 685,
ves_icall_System_Math_Atanh,
// token 686,
ves_icall_System_Math_Cbrt,
// token 687,
ves_icall_System_Math_Ceiling,
// token 688,
ves_icall_System_Math_Cos,
// token 689,
ves_icall_System_Math_Cosh,
// token 690,
ves_icall_System_Math_Exp,
// token 691,
ves_icall_System_Math_Floor,
// token 692,
ves_icall_System_Math_Log,
// token 693,
ves_icall_System_Math_Log10,
// token 694,
ves_icall_System_Math_Pow,
// token 695,
ves_icall_System_Math_Sin,
// token 697,
ves_icall_System_Math_Sinh,
// token 698,
ves_icall_System_Math_Sqrt,
// token 699,
ves_icall_System_Math_Tan,
// token 700,
ves_icall_System_Math_Tanh,
// token 701,
ves_icall_System_Math_FusedMultiplyAdd,
// token 702,
ves_icall_System_Math_Log2,
// token 703,
ves_icall_System_Math_ModF,
// token 795,
ves_icall_System_MathF_Acos,
// token 796,
ves_icall_System_MathF_Acosh,
// token 797,
ves_icall_System_MathF_Asin,
// token 798,
ves_icall_System_MathF_Asinh,
// token 799,
ves_icall_System_MathF_Atan,
// token 800,
ves_icall_System_MathF_Atan2,
// token 801,
ves_icall_System_MathF_Atanh,
// token 802,
ves_icall_System_MathF_Cbrt,
// token 803,
ves_icall_System_MathF_Ceiling,
// token 804,
ves_icall_System_MathF_Cos,
// token 805,
ves_icall_System_MathF_Cosh,
// token 806,
ves_icall_System_MathF_Exp,
// token 807,
ves_icall_System_MathF_Floor,
// token 808,
ves_icall_System_MathF_Log,
// token 809,
ves_icall_System_MathF_Log10,
// token 810,
ves_icall_System_MathF_Pow,
// token 811,
ves_icall_System_MathF_Sin,
// token 813,
ves_icall_System_MathF_Sinh,
// token 814,
ves_icall_System_MathF_Sqrt,
// token 815,
ves_icall_System_MathF_Tan,
// token 816,
ves_icall_System_MathF_Tanh,
// token 817,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 818,
ves_icall_System_MathF_Log2,
// token 819,
ves_icall_System_MathF_ModF,
// token 886,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 887,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 955,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 962,
ves_icall_RuntimeType_make_array_type_raw,
// token 965,
ves_icall_RuntimeType_make_byref_type_raw,
// token 967,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 972,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 973,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 975,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 976,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 980,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 981,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 983,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 985,
ves_icall_System_RuntimeType_getFullName_raw,
// token 986,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 989,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 990,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 991,
ves_icall_RuntimeType_GetFields_native_raw,
// token 994,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 996,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 999,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 1001,
ves_icall_RuntimeType_GetName_raw,
// token 1003,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1012,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1079,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1081,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1083,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1093,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1094,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1095,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1096,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1098,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1105,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1106,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1107,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1108,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1109,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1117,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1118,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1119,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1123,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1124,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1126,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1130,
ves_icall_System_String_FastAllocateString_raw,
// token 1131,
ves_icall_System_String_InternalIsInterned_raw,
// token 1132,
ves_icall_System_String_InternalIntern_raw,
// token 1416,
ves_icall_System_Type_internal_from_handle_raw,
// token 1606,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1607,
ves_icall_System_ValueType_Equals_raw,
// token 9593,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9594,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 9596,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 9597,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 9598,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 9599,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 9600,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 9602,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 9604,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 9606,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 9607,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 9618,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 9620,
mono_monitor_exit_icall_raw,
// token 9625,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 9627,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 9629,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 9631,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 9682,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 9683,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 9685,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 9686,
ves_icall_System_Threading_Thread_GetState_raw,
// token 9687,
ves_icall_System_Threading_Thread_SetState_raw,
// token 9688,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 9689,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 9691,
ves_icall_System_Threading_Thread_YieldInternal,
// token 9693,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10748,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10752,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10754,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10755,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10756,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10757,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11018,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11019,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11020,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11021,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11039,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11040,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11041,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11043,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11086,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11147,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11149,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11151,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11161,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11162,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11163,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11164,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11165,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 11602,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 11603,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 11608,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 11609,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 11643,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 11663,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 11670,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 11677,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 11688,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 11691,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 11716,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 11796,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 11798,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 11809,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 11811,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 11812,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 11813,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 11820,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 11834,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 11854,
ves_icall_reflection_get_token_raw,
// token 11855,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 11863,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 11865,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 11872,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 11873,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 11876,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 11878,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 11883,
ves_icall_reflection_get_token_raw,
// token 11889,
ves_icall_get_method_info_raw,
// token 11890,
ves_icall_get_method_attributes,
// token 11897,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 11899,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 11911,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 11914,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 11915,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 11916,
ves_icall_reflection_get_token_raw,
// token 11927,
ves_icall_InternalInvoke_raw,
// token 11936,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 11942,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 11943,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 11944,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 11946,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 11947,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 11964,
ves_icall_InvokeClassConstructor_raw,
// token 11966,
ves_icall_InternalInvoke_raw,
// token 11980,
ves_icall_reflection_get_token_raw,
// token 12001,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12002,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12027,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12032,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12062,
ves_icall_reflection_get_token_raw,
// token 12063,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 12603,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 12617,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12712,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 12713,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 12928,
ves_icall_ModuleBuilder_basic_init_raw,
// token 12929,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 12936,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 12937,
ves_icall_ModuleBuilder_getToken_raw,
// token 12938,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 12944,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13041,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 13557,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 13558,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14024,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14025,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14030,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14040,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 14964,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 14985,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 14987,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 14989,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
};
