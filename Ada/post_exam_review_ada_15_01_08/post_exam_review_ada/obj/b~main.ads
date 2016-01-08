pragma Ada_95;
with System;
package ada_main is
   pragma Warnings (Off);

   gnat_argc : Integer;
   gnat_argv : System.Address;
   gnat_envp : System.Address;

   pragma Import (C, gnat_argc);
   pragma Import (C, gnat_argv);
   pragma Import (C, gnat_envp);

   gnat_exit_status : Integer;
   pragma Import (C, gnat_exit_status);

   GNAT_Version : constant String :=
                    "GNAT Version: GPL 2014 (20140331)" & ASCII.NUL;
   pragma Export (C, GNAT_Version, "__gnat_version");

   Ada_Main_Program_Name : constant String := "_ada_main" & ASCII.NUL;
   pragma Export (C, Ada_Main_Program_Name, "__gnat_ada_main_program_name");

   procedure adainit;
   pragma Export (C, adainit, "adainit");

   procedure adafinal;
   pragma Export (C, adafinal, "adafinal");

   function main
     (argc : Integer;
      argv : System.Address;
      envp : System.Address)
      return Integer;
   pragma Export (C, main, "main");

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#40109963#;
   pragma Export (C, u00001, "mainB");
   u00002 : constant Version_32 := 16#fbff4c67#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#be97bf44#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#3ffc8e18#;
   pragma Export (C, u00004, "adaS");
   u00005 : constant Version_32 := 16#0d784a00#;
   pragma Export (C, u00005, "ada__real_timeB");
   u00006 : constant Version_32 := 16#41de19c7#;
   pragma Export (C, u00006, "ada__real_timeS");
   u00007 : constant Version_32 := 16#69adb1b9#;
   pragma Export (C, u00007, "interfacesS");
   u00008 : constant Version_32 := 16#bd760655#;
   pragma Export (C, u00008, "systemS");
   u00009 : constant Version_32 := 16#1607bce4#;
   pragma Export (C, u00009, "system__arith_64B");
   u00010 : constant Version_32 := 16#9496121e#;
   pragma Export (C, u00010, "system__arith_64S");
   u00011 : constant Version_32 := 16#7bae1148#;
   pragma Export (C, u00011, "ada__exceptionsB");
   u00012 : constant Version_32 := 16#889e39f6#;
   pragma Export (C, u00012, "ada__exceptionsS");
   u00013 : constant Version_32 := 16#032105bb#;
   pragma Export (C, u00013, "ada__exceptions__last_chance_handlerB");
   u00014 : constant Version_32 := 16#2b293877#;
   pragma Export (C, u00014, "ada__exceptions__last_chance_handlerS");
   u00015 : constant Version_32 := 16#daf76b33#;
   pragma Export (C, u00015, "system__soft_linksB");
   u00016 : constant Version_32 := 16#f7a96367#;
   pragma Export (C, u00016, "system__soft_linksS");
   u00017 : constant Version_32 := 16#c8ed38da#;
   pragma Export (C, u00017, "system__parametersB");
   u00018 : constant Version_32 := 16#bbac9ee7#;
   pragma Export (C, u00018, "system__parametersS");
   u00019 : constant Version_32 := 16#c96bf39e#;
   pragma Export (C, u00019, "system__secondary_stackB");
   u00020 : constant Version_32 := 16#1617c93c#;
   pragma Export (C, u00020, "system__secondary_stackS");
   u00021 : constant Version_32 := 16#39a03df9#;
   pragma Export (C, u00021, "system__storage_elementsB");
   u00022 : constant Version_32 := 16#90b54c51#;
   pragma Export (C, u00022, "system__storage_elementsS");
   u00023 : constant Version_32 := 16#41837d1e#;
   pragma Export (C, u00023, "system__stack_checkingB");
   u00024 : constant Version_32 := 16#33c96dbd#;
   pragma Export (C, u00024, "system__stack_checkingS");
   u00025 : constant Version_32 := 16#393398c1#;
   pragma Export (C, u00025, "system__exception_tableB");
   u00026 : constant Version_32 := 16#136f6040#;
   pragma Export (C, u00026, "system__exception_tableS");
   u00027 : constant Version_32 := 16#ce4af020#;
   pragma Export (C, u00027, "system__exceptionsB");
   u00028 : constant Version_32 := 16#d5156ba3#;
   pragma Export (C, u00028, "system__exceptionsS");
   u00029 : constant Version_32 := 16#2652ec14#;
   pragma Export (C, u00029, "system__exceptions__machineS");
   u00030 : constant Version_32 := 16#b895431d#;
   pragma Export (C, u00030, "system__exceptions_debugB");
   u00031 : constant Version_32 := 16#0e941feb#;
   pragma Export (C, u00031, "system__exceptions_debugS");
   u00032 : constant Version_32 := 16#570325c8#;
   pragma Export (C, u00032, "system__img_intB");
   u00033 : constant Version_32 := 16#bfade697#;
   pragma Export (C, u00033, "system__img_intS");
   u00034 : constant Version_32 := 16#ff5c7695#;
   pragma Export (C, u00034, "system__tracebackB");
   u00035 : constant Version_32 := 16#95729908#;
   pragma Export (C, u00035, "system__tracebackS");
   u00036 : constant Version_32 := 16#8c33a517#;
   pragma Export (C, u00036, "system__wch_conB");
   u00037 : constant Version_32 := 16#a60b2487#;
   pragma Export (C, u00037, "system__wch_conS");
   u00038 : constant Version_32 := 16#9721e840#;
   pragma Export (C, u00038, "system__wch_stwB");
   u00039 : constant Version_32 := 16#8b1a0886#;
   pragma Export (C, u00039, "system__wch_stwS");
   u00040 : constant Version_32 := 16#9b29844d#;
   pragma Export (C, u00040, "system__wch_cnvB");
   u00041 : constant Version_32 := 16#a9bc9e74#;
   pragma Export (C, u00041, "system__wch_cnvS");
   u00042 : constant Version_32 := 16#ece6fdb6#;
   pragma Export (C, u00042, "system__wch_jisB");
   u00043 : constant Version_32 := 16#29cc8755#;
   pragma Export (C, u00043, "system__wch_jisS");
   u00044 : constant Version_32 := 16#8cb17bcd#;
   pragma Export (C, u00044, "system__traceback_entriesB");
   u00045 : constant Version_32 := 16#086766c7#;
   pragma Export (C, u00045, "system__traceback_entriesS");
   u00046 : constant Version_32 := 16#636d49d6#;
   pragma Export (C, u00046, "system__taskingB");
   u00047 : constant Version_32 := 16#93794a81#;
   pragma Export (C, u00047, "system__taskingS");
   u00048 : constant Version_32 := 16#55939e2c#;
   pragma Export (C, u00048, "system__task_primitivesS");
   u00049 : constant Version_32 := 16#2c3ab68e#;
   pragma Export (C, u00049, "system__os_interfaceB");
   u00050 : constant Version_32 := 16#5753c339#;
   pragma Export (C, u00050, "system__os_interfaceS");
   u00051 : constant Version_32 := 16#769e25e6#;
   pragma Export (C, u00051, "interfaces__cB");
   u00052 : constant Version_32 := 16#3b563890#;
   pragma Export (C, u00052, "interfaces__cS");
   u00053 : constant Version_32 := 16#0388d900#;
   pragma Export (C, u00053, "system__linuxS");
   u00054 : constant Version_32 := 16#ed551cbb#;
   pragma Export (C, u00054, "system__os_constantsS");
   u00055 : constant Version_32 := 16#ec7094fa#;
   pragma Export (C, u00055, "system__unsigned_typesS");
   u00056 : constant Version_32 := 16#f907f9ae#;
   pragma Export (C, u00056, "system__task_primitives__operationsB");
   u00057 : constant Version_32 := 16#cc6ffe4f#;
   pragma Export (C, u00057, "system__task_primitives__operationsS");
   u00058 : constant Version_32 := 16#d5f079bc#;
   pragma Export (C, u00058, "system__bit_opsB");
   u00059 : constant Version_32 := 16#0765e3a3#;
   pragma Export (C, u00059, "system__bit_opsS");
   u00060 : constant Version_32 := 16#903909a4#;
   pragma Export (C, u00060, "system__interrupt_managementB");
   u00061 : constant Version_32 := 16#53fe8619#;
   pragma Export (C, u00061, "system__interrupt_managementS");
   u00062 : constant Version_32 := 16#f65595cf#;
   pragma Export (C, u00062, "system__multiprocessorsB");
   u00063 : constant Version_32 := 16#85da9926#;
   pragma Export (C, u00063, "system__multiprocessorsS");
   u00064 : constant Version_32 := 16#22d03640#;
   pragma Export (C, u00064, "system__os_primitivesB");
   u00065 : constant Version_32 := 16#0da78a7c#;
   pragma Export (C, u00065, "system__os_primitivesS");
   u00066 : constant Version_32 := 16#3c04b2bf#;
   pragma Export (C, u00066, "system__stack_checking__operationsB");
   u00067 : constant Version_32 := 16#64c2cb2b#;
   pragma Export (C, u00067, "system__stack_checking__operationsS");
   u00068 : constant Version_32 := 16#97adbb70#;
   pragma Export (C, u00068, "system__crtlS");
   u00069 : constant Version_32 := 16#375a3ef7#;
   pragma Export (C, u00069, "system__task_infoB");
   u00070 : constant Version_32 := 16#6b5a0bd6#;
   pragma Export (C, u00070, "system__task_infoS");
   u00071 : constant Version_32 := 16#5cf44d0b#;
   pragma Export (C, u00071, "system__tasking__debugB");
   u00072 : constant Version_32 := 16#e2cec1ea#;
   pragma Export (C, u00072, "system__tasking__debugS");
   u00073 : constant Version_32 := 16#57a37a42#;
   pragma Export (C, u00073, "system__address_imageB");
   u00074 : constant Version_32 := 16#1c9a9b6f#;
   pragma Export (C, u00074, "system__address_imageS");
   u00075 : constant Version_32 := 16#fd83e873#;
   pragma Export (C, u00075, "system__concat_2B");
   u00076 : constant Version_32 := 16#bfd6d185#;
   pragma Export (C, u00076, "system__concat_2S");
   u00077 : constant Version_32 := 16#2b70b149#;
   pragma Export (C, u00077, "system__concat_3B");
   u00078 : constant Version_32 := 16#b6065af0#;
   pragma Export (C, u00078, "system__concat_3S");
   u00079 : constant Version_32 := 16#a83b7c85#;
   pragma Export (C, u00079, "system__concat_6B");
   u00080 : constant Version_32 := 16#6fb12be7#;
   pragma Export (C, u00080, "system__concat_6S");
   u00081 : constant Version_32 := 16#608e2cd1#;
   pragma Export (C, u00081, "system__concat_5B");
   u00082 : constant Version_32 := 16#3a28457b#;
   pragma Export (C, u00082, "system__concat_5S");
   u00083 : constant Version_32 := 16#932a4690#;
   pragma Export (C, u00083, "system__concat_4B");
   u00084 : constant Version_32 := 16#c3122d75#;
   pragma Export (C, u00084, "system__concat_4S");
   u00085 : constant Version_32 := 16#d0432c8d#;
   pragma Export (C, u00085, "system__img_enum_newB");
   u00086 : constant Version_32 := 16#dc3a0095#;
   pragma Export (C, u00086, "system__img_enum_newS");
   u00087 : constant Version_32 := 16#4bc4ed76#;
   pragma Export (C, u00087, "system__stack_usageB");
   u00088 : constant Version_32 := 16#09222097#;
   pragma Export (C, u00088, "system__stack_usageS");
   u00089 : constant Version_32 := 16#d7aac20c#;
   pragma Export (C, u00089, "system__ioB");
   u00090 : constant Version_32 := 16#2334f11a#;
   pragma Export (C, u00090, "system__ioS");
   u00091 : constant Version_32 := 16#6771a31d#;
   pragma Export (C, u00091, "studentsB");
   u00092 : constant Version_32 := 16#626148bd#;
   pragma Export (C, u00092, "studentsS");
   u00093 : constant Version_32 := 16#4d7aa13a#;
   pragma Export (C, u00093, "ada__real_time__delaysB");
   u00094 : constant Version_32 := 16#6becaccd#;
   pragma Export (C, u00094, "ada__real_time__delaysS");
   u00095 : constant Version_32 := 16#034d7998#;
   pragma Export (C, u00095, "ada__tagsB");
   u00096 : constant Version_32 := 16#ce72c228#;
   pragma Export (C, u00096, "ada__tagsS");
   u00097 : constant Version_32 := 16#c3335bfd#;
   pragma Export (C, u00097, "system__htableB");
   u00098 : constant Version_32 := 16#39b4b5bf#;
   pragma Export (C, u00098, "system__htableS");
   u00099 : constant Version_32 := 16#089f5cd0#;
   pragma Export (C, u00099, "system__string_hashB");
   u00100 : constant Version_32 := 16#9beadec1#;
   pragma Export (C, u00100, "system__string_hashS");
   u00101 : constant Version_32 := 16#4266b2a8#;
   pragma Export (C, u00101, "system__val_unsB");
   u00102 : constant Version_32 := 16#fcd879c1#;
   pragma Export (C, u00102, "system__val_unsS");
   u00103 : constant Version_32 := 16#27b600b2#;
   pragma Export (C, u00103, "system__val_utilB");
   u00104 : constant Version_32 := 16#11d6b0ab#;
   pragma Export (C, u00104, "system__val_utilS");
   u00105 : constant Version_32 := 16#d1060688#;
   pragma Export (C, u00105, "system__case_utilB");
   u00106 : constant Version_32 := 16#997f6f82#;
   pragma Export (C, u00106, "system__case_utilS");
   u00107 : constant Version_32 := 16#1ac8b3b4#;
   pragma Export (C, u00107, "ada__text_ioB");
   u00108 : constant Version_32 := 16#5820428b#;
   pragma Export (C, u00108, "ada__text_ioS");
   u00109 : constant Version_32 := 16#1b5643e2#;
   pragma Export (C, u00109, "ada__streamsB");
   u00110 : constant Version_32 := 16#2564c958#;
   pragma Export (C, u00110, "ada__streamsS");
   u00111 : constant Version_32 := 16#db5c917c#;
   pragma Export (C, u00111, "ada__io_exceptionsS");
   u00112 : constant Version_32 := 16#9f23726e#;
   pragma Export (C, u00112, "interfaces__c_streamsB");
   u00113 : constant Version_32 := 16#bb1012c3#;
   pragma Export (C, u00113, "interfaces__c_streamsS");
   u00114 : constant Version_32 := 16#967994fc#;
   pragma Export (C, u00114, "system__file_ioB");
   u00115 : constant Version_32 := 16#0186ea53#;
   pragma Export (C, u00115, "system__file_ioS");
   u00116 : constant Version_32 := 16#b7ab275c#;
   pragma Export (C, u00116, "ada__finalizationB");
   u00117 : constant Version_32 := 16#19f764ca#;
   pragma Export (C, u00117, "ada__finalizationS");
   u00118 : constant Version_32 := 16#95817ed8#;
   pragma Export (C, u00118, "system__finalization_rootB");
   u00119 : constant Version_32 := 16#f28475c5#;
   pragma Export (C, u00119, "system__finalization_rootS");
   u00120 : constant Version_32 := 16#40e54f38#;
   pragma Export (C, u00120, "system__os_libB");
   u00121 : constant Version_32 := 16#94c13856#;
   pragma Export (C, u00121, "system__os_libS");
   u00122 : constant Version_32 := 16#1a817b8e#;
   pragma Export (C, u00122, "system__stringsB");
   u00123 : constant Version_32 := 16#c3c91733#;
   pragma Export (C, u00123, "system__stringsS");
   u00124 : constant Version_32 := 16#72d1a78b#;
   pragma Export (C, u00124, "system__file_control_blockS");
   u00125 : constant Version_32 := 16#a4371844#;
   pragma Export (C, u00125, "system__finalization_mastersB");
   u00126 : constant Version_32 := 16#c9602f15#;
   pragma Export (C, u00126, "system__finalization_mastersS");
   u00127 : constant Version_32 := 16#7268f812#;
   pragma Export (C, u00127, "system__img_boolB");
   u00128 : constant Version_32 := 16#48af77be#;
   pragma Export (C, u00128, "system__img_boolS");
   u00129 : constant Version_32 := 16#6d4d969a#;
   pragma Export (C, u00129, "system__storage_poolsB");
   u00130 : constant Version_32 := 16#482d81d1#;
   pragma Export (C, u00130, "system__storage_poolsS");
   u00131 : constant Version_32 := 16#e34550ca#;
   pragma Export (C, u00131, "system__pool_globalB");
   u00132 : constant Version_32 := 16#c88d2d16#;
   pragma Export (C, u00132, "system__pool_globalS");
   u00133 : constant Version_32 := 16#d6f619bb#;
   pragma Export (C, u00133, "system__memoryB");
   u00134 : constant Version_32 := 16#e40b6061#;
   pragma Export (C, u00134, "system__memoryS");
   u00135 : constant Version_32 := 16#7b002481#;
   pragma Export (C, u00135, "system__storage_pools__subpoolsB");
   u00136 : constant Version_32 := 16#e3b008dc#;
   pragma Export (C, u00136, "system__storage_pools__subpoolsS");
   u00137 : constant Version_32 := 16#63f11652#;
   pragma Export (C, u00137, "system__storage_pools__subpools__finalizationB");
   u00138 : constant Version_32 := 16#fe2f4b3a#;
   pragma Export (C, u00138, "system__storage_pools__subpools__finalizationS");
   u00139 : constant Version_32 := 16#0dcf8f16#;
   pragma Export (C, u00139, "busy_waitB");
   u00140 : constant Version_32 := 16#d836d27a#;
   pragma Export (C, u00140, "busy_waitS");
   u00141 : constant Version_32 := 16#2e1ffcac#;
   pragma Export (C, u00141, "review_settingsS");
   u00142 : constant Version_32 := 16#e5b30d27#;
   pragma Export (C, u00142, "system__tasking__protected_objects__single_entryB");
   u00143 : constant Version_32 := 16#c4e5d33c#;
   pragma Export (C, u00143, "system__tasking__protected_objects__single_entryS");
   u00144 : constant Version_32 := 16#62148cec#;
   pragma Export (C, u00144, "system__tasking__protected_objectsB");
   u00145 : constant Version_32 := 16#6fa056d1#;
   pragma Export (C, u00145, "system__tasking__protected_objectsS");
   u00146 : constant Version_32 := 16#5e588602#;
   pragma Export (C, u00146, "system__soft_links__taskingB");
   u00147 : constant Version_32 := 16#e47ef8be#;
   pragma Export (C, u00147, "system__soft_links__taskingS");
   u00148 : constant Version_32 := 16#17d21067#;
   pragma Export (C, u00148, "ada__exceptions__is_null_occurrenceB");
   u00149 : constant Version_32 := 16#8b1b3b36#;
   pragma Export (C, u00149, "ada__exceptions__is_null_occurrenceS");
   u00150 : constant Version_32 := 16#ee80728a#;
   pragma Export (C, u00150, "system__tracesB");
   u00151 : constant Version_32 := 16#4f6b6eff#;
   pragma Export (C, u00151, "system__tracesS");
   u00152 : constant Version_32 := 16#9c6d7412#;
   pragma Export (C, u00152, "system__tasking__restricted__stagesB");
   u00153 : constant Version_32 := 16#33e0c1a6#;
   pragma Export (C, u00153, "system__tasking__restricted__stagesS");
   u00154 : constant Version_32 := 16#330ce9c9#;
   pragma Export (C, u00154, "system__tasking__restrictedS");
   u00155 : constant Version_32 := 16#8ccb7cef#;
   pragma Export (C, u00155, "waiting_roomB");
   u00156 : constant Version_32 := 16#6121f372#;
   pragma Export (C, u00156, "waiting_roomS");
   u00157 : constant Version_32 := 16#26e2f35a#;
   pragma Export (C, u00157, "taB");
   u00158 : constant Version_32 := 16#a633fa81#;
   pragma Export (C, u00158, "taS");
   u00159 : constant Version_32 := 16#70eab0ea#;
   pragma Export (C, u00159, "ada__assertionsB");
   u00160 : constant Version_32 := 16#f87489a7#;
   pragma Export (C, u00160, "ada__assertionsS");
   u00161 : constant Version_32 := 16#06e2137b#;
   pragma Export (C, u00161, "system__assertionsB");
   u00162 : constant Version_32 := 16#70fb2ac1#;
   pragma Export (C, u00162, "system__assertionsS");
   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  interfaces%s
   --  system%s
   --  system.arith_64%s
   --  system.case_util%s
   --  system.case_util%b
   --  system.htable%s
   --  system.img_bool%s
   --  system.img_bool%b
   --  system.img_enum_new%s
   --  system.img_enum_new%b
   --  system.img_int%s
   --  system.img_int%b
   --  system.io%s
   --  system.io%b
   --  system.linux%s
   --  system.multiprocessors%s
   --  system.os_primitives%s
   --  system.os_primitives%b
   --  system.parameters%s
   --  system.parameters%b
   --  system.crtl%s
   --  interfaces.c_streams%s
   --  interfaces.c_streams%b
   --  system.standard_library%s
   --  system.exceptions_debug%s
   --  system.exceptions_debug%b
   --  system.storage_elements%s
   --  system.storage_elements%b
   --  system.stack_checking%s
   --  system.stack_checking%b
   --  system.stack_checking.operations%s
   --  system.stack_usage%s
   --  system.stack_usage%b
   --  system.string_hash%s
   --  system.string_hash%b
   --  system.htable%b
   --  system.strings%s
   --  system.strings%b
   --  system.os_lib%s
   --  system.traceback_entries%s
   --  system.traceback_entries%b
   --  ada.exceptions%s
   --  system.arith_64%b
   --  ada.exceptions.is_null_occurrence%s
   --  ada.exceptions.is_null_occurrence%b
   --  system.soft_links%s
   --  system.stack_checking.operations%b
   --  system.traces%s
   --  system.traces%b
   --  system.unsigned_types%s
   --  system.val_uns%s
   --  system.val_util%s
   --  system.val_util%b
   --  system.val_uns%b
   --  system.wch_con%s
   --  system.wch_con%b
   --  system.wch_cnv%s
   --  system.wch_jis%s
   --  system.wch_jis%b
   --  system.wch_cnv%b
   --  system.wch_stw%s
   --  system.wch_stw%b
   --  ada.exceptions.last_chance_handler%s
   --  ada.exceptions.last_chance_handler%b
   --  system.address_image%s
   --  system.bit_ops%s
   --  system.bit_ops%b
   --  system.concat_2%s
   --  system.concat_2%b
   --  system.concat_3%s
   --  system.concat_3%b
   --  system.concat_4%s
   --  system.concat_4%b
   --  system.concat_5%s
   --  system.concat_5%b
   --  system.concat_6%s
   --  system.concat_6%b
   --  system.exception_table%s
   --  system.exception_table%b
   --  ada.io_exceptions%s
   --  ada.tags%s
   --  ada.streams%s
   --  ada.streams%b
   --  interfaces.c%s
   --  system.multiprocessors%b
   --  system.exceptions%s
   --  system.exceptions%b
   --  system.exceptions.machine%s
   --  system.finalization_root%s
   --  system.finalization_root%b
   --  ada.finalization%s
   --  ada.finalization%b
   --  system.os_constants%s
   --  system.os_interface%s
   --  system.os_interface%b
   --  system.interrupt_management%s
   --  system.storage_pools%s
   --  system.storage_pools%b
   --  system.finalization_masters%s
   --  system.storage_pools.subpools%s
   --  system.storage_pools.subpools.finalization%s
   --  system.storage_pools.subpools.finalization%b
   --  system.task_info%s
   --  system.task_info%b
   --  system.task_primitives%s
   --  system.interrupt_management%b
   --  system.tasking%s
   --  system.task_primitives.operations%s
   --  system.tasking%b
   --  system.tasking.debug%s
   --  system.task_primitives.operations%b
   --  system.assertions%s
   --  system.assertions%b
   --  ada.assertions%s
   --  ada.assertions%b
   --  system.memory%s
   --  system.memory%b
   --  system.standard_library%b
   --  system.pool_global%s
   --  system.pool_global%b
   --  system.file_control_block%s
   --  system.file_io%s
   --  system.secondary_stack%s
   --  system.file_io%b
   --  system.tasking.debug%b
   --  system.storage_pools.subpools%b
   --  system.finalization_masters%b
   --  interfaces.c%b
   --  ada.tags%b
   --  system.soft_links%b
   --  system.os_lib%b
   --  system.secondary_stack%b
   --  system.address_image%b
   --  system.soft_links.tasking%s
   --  system.soft_links.tasking%b
   --  system.tasking.restricted%s
   --  system.traceback%s
   --  ada.exceptions%b
   --  system.traceback%b
   --  ada.real_time%s
   --  ada.real_time%b
   --  ada.real_time.delays%s
   --  ada.real_time.delays%b
   --  ada.text_io%s
   --  ada.text_io%b
   --  system.tasking.protected_objects%s
   --  system.tasking.protected_objects%b
   --  system.tasking.protected_objects.single_entry%s
   --  system.tasking.protected_objects.single_entry%b
   --  system.tasking.restricted.stages%s
   --  system.tasking.restricted.stages%b
   --  busy_wait%s
   --  busy_wait%b
   --  review_settings%s
   --  students%s
   --  ta%s
   --  main%b
   --  waiting_room%s
   --  waiting_room%b
   --  ta%b
   --  students%b
   --  END ELABORATION ORDER


end ada_main;
