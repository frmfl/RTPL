pragma Ada_95;
with System;
with System.Standard_Library;
package ada_main_for_main is
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
                    "GNAT Version: Pro 7.2.2 (20140525-47)" & ASCII.NUL;
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
   u00001 : constant Version_32 := 16#5de84e39#;
   pragma Export (C, u00001, "mainB");
   u00002 : constant Version_32 := 16#a7c2f407#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#2de10fd1#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#3ffc8e18#;
   pragma Export (C, u00004, "adaS");
   u00005 : constant Version_32 := 16#0d784a00#;
   pragma Export (C, u00005, "ada__real_timeB");
   u00006 : constant Version_32 := 16#41de19c7#;
   pragma Export (C, u00006, "ada__real_timeS");
   u00007 : constant Version_32 := 16#cb4a8015#;
   pragma Export (C, u00007, "interfacesS");
   u00008 : constant Version_32 := 16#bd760655#;
   pragma Export (C, u00008, "systemS");
   u00009 : constant Version_32 := 16#aa574b29#;
   pragma Export (C, u00009, "system__arith_64B");
   u00010 : constant Version_32 := 16#367123b2#;
   pragma Export (C, u00010, "system__arith_64S");
   u00011 : constant Version_32 := 16#874a8ed2#;
   pragma Export (C, u00011, "ada__exceptionsB");
   u00012 : constant Version_32 := 16#f75fad4d#;
   pragma Export (C, u00012, "ada__exceptionsS");
   u00013 : constant Version_32 := 16#88e07850#;
   pragma Export (C, u00013, "ada__exceptions__last_chance_handlerB");
   u00014 : constant Version_32 := 16#f7d41408#;
   pragma Export (C, u00014, "ada__exceptions__last_chance_handlerS");
   u00015 : constant Version_32 := 16#0071025c#;
   pragma Export (C, u00015, "system__soft_linksB");
   u00016 : constant Version_32 := 16#38bb93de#;
   pragma Export (C, u00016, "system__soft_linksS");
   u00017 : constant Version_32 := 16#27940d94#;
   pragma Export (C, u00017, "system__parametersB");
   u00018 : constant Version_32 := 16#0b940a95#;
   pragma Export (C, u00018, "system__parametersS");
   u00019 : constant Version_32 := 16#17775d6d#;
   pragma Export (C, u00019, "system__secondary_stackB");
   u00020 : constant Version_32 := 16#a91821fb#;
   pragma Export (C, u00020, "system__secondary_stackS");
   u00021 : constant Version_32 := 16#ace32e1e#;
   pragma Export (C, u00021, "system__storage_elementsB");
   u00022 : constant Version_32 := 16#47bb7bcd#;
   pragma Export (C, u00022, "system__storage_elementsS");
   u00023 : constant Version_32 := 16#4f750b3b#;
   pragma Export (C, u00023, "system__stack_checkingB");
   u00024 : constant Version_32 := 16#1ed4ba79#;
   pragma Export (C, u00024, "system__stack_checkingS");
   u00025 : constant Version_32 := 16#273e05cb#;
   pragma Export (C, u00025, "system__exception_tableB");
   u00026 : constant Version_32 := 16#b2ef93e7#;
   pragma Export (C, u00026, "system__exception_tableS");
   u00027 : constant Version_32 := 16#5665ab64#;
   pragma Export (C, u00027, "system__htableB");
   u00028 : constant Version_32 := 16#3ede485b#;
   pragma Export (C, u00028, "system__htableS");
   u00029 : constant Version_32 := 16#8b7dad61#;
   pragma Export (C, u00029, "system__string_hashB");
   u00030 : constant Version_32 := 16#9beadec1#;
   pragma Export (C, u00030, "system__string_hashS");
   u00031 : constant Version_32 := 16#aad75561#;
   pragma Export (C, u00031, "system__exceptionsB");
   u00032 : constant Version_32 := 16#b188cee2#;
   pragma Export (C, u00032, "system__exceptionsS");
   u00033 : constant Version_32 := 16#f97077da#;
   pragma Export (C, u00033, "system__exceptions__machineS");
   u00034 : constant Version_32 := 16#010db1dc#;
   pragma Export (C, u00034, "system__exceptions_debugB");
   u00035 : constant Version_32 := 16#1bf16a96#;
   pragma Export (C, u00035, "system__exceptions_debugS");
   u00036 : constant Version_32 := 16#570325c8#;
   pragma Export (C, u00036, "system__img_intB");
   u00037 : constant Version_32 := 16#bfade697#;
   pragma Export (C, u00037, "system__img_intS");
   u00038 : constant Version_32 := 16#dc8e33ed#;
   pragma Export (C, u00038, "system__tracebackB");
   u00039 : constant Version_32 := 16#dcf1d220#;
   pragma Export (C, u00039, "system__tracebackS");
   u00040 : constant Version_32 := 16#907d882f#;
   pragma Export (C, u00040, "system__wch_conB");
   u00041 : constant Version_32 := 16#029d2868#;
   pragma Export (C, u00041, "system__wch_conS");
   u00042 : constant Version_32 := 16#22fed88a#;
   pragma Export (C, u00042, "system__wch_stwB");
   u00043 : constant Version_32 := 16#2f8c0469#;
   pragma Export (C, u00043, "system__wch_stwS");
   u00044 : constant Version_32 := 16#617a40f2#;
   pragma Export (C, u00044, "system__wch_cnvB");
   u00045 : constant Version_32 := 16#1c63aebe#;
   pragma Export (C, u00045, "system__wch_cnvS");
   u00046 : constant Version_32 := 16#75729fba#;
   pragma Export (C, u00046, "system__wch_jisB");
   u00047 : constant Version_32 := 16#481135aa#;
   pragma Export (C, u00047, "system__wch_jisS");
   u00048 : constant Version_32 := 16#ada34a87#;
   pragma Export (C, u00048, "system__traceback_entriesB");
   u00049 : constant Version_32 := 16#ef57e814#;
   pragma Export (C, u00049, "system__traceback_entriesS");
   u00050 : constant Version_32 := 16#b4637e4a#;
   pragma Export (C, u00050, "system__taskingB");
   u00051 : constant Version_32 := 16#1c4e2513#;
   pragma Export (C, u00051, "system__taskingS");
   u00052 : constant Version_32 := 16#eb1c2a33#;
   pragma Export (C, u00052, "system__task_primitivesS");
   u00053 : constant Version_32 := 16#30457489#;
   pragma Export (C, u00053, "system__os_interfaceB");
   u00054 : constant Version_32 := 16#2121b96b#;
   pragma Export (C, u00054, "system__os_interfaceS");
   u00055 : constant Version_32 := 16#769e25e6#;
   pragma Export (C, u00055, "interfaces__cB");
   u00056 : constant Version_32 := 16#29899d4e#;
   pragma Export (C, u00056, "interfaces__cS");
   u00057 : constant Version_32 := 16#cdb1cd10#;
   pragma Export (C, u00057, "system__linuxS");
   u00058 : constant Version_32 := 16#eb91c6e6#;
   pragma Export (C, u00058, "system__os_constantsS");
   u00059 : constant Version_32 := 16#d7975a23#;
   pragma Export (C, u00059, "system__unsigned_typesS");
   u00060 : constant Version_32 := 16#b4921ea2#;
   pragma Export (C, u00060, "system__task_primitives__operationsB");
   u00061 : constant Version_32 := 16#c2d8de22#;
   pragma Export (C, u00061, "system__task_primitives__operationsS");
   u00062 : constant Version_32 := 16#dd92c3f0#;
   pragma Export (C, u00062, "system__bit_opsB");
   u00063 : constant Version_32 := 16#c30e4013#;
   pragma Export (C, u00063, "system__bit_opsS");
   u00064 : constant Version_32 := 16#903909a4#;
   pragma Export (C, u00064, "system__interrupt_managementB");
   u00065 : constant Version_32 := 16#ed713206#;
   pragma Export (C, u00065, "system__interrupt_managementS");
   u00066 : constant Version_32 := 16#f65595cf#;
   pragma Export (C, u00066, "system__multiprocessorsB");
   u00067 : constant Version_32 := 16#85da9926#;
   pragma Export (C, u00067, "system__multiprocessorsS");
   u00068 : constant Version_32 := 16#22d03640#;
   pragma Export (C, u00068, "system__os_primitivesB");
   u00069 : constant Version_32 := 16#0da78a7c#;
   pragma Export (C, u00069, "system__os_primitivesS");
   u00070 : constant Version_32 := 16#2642d0c9#;
   pragma Export (C, u00070, "system__stack_checking__operationsB");
   u00071 : constant Version_32 := 16#49df1cef#;
   pragma Export (C, u00071, "system__stack_checking__operationsS");
   u00072 : constant Version_32 := 16#d45bc0f4#;
   pragma Export (C, u00072, "system__crtlS");
   u00073 : constant Version_32 := 16#3d54d5f6#;
   pragma Export (C, u00073, "system__task_infoB");
   u00074 : constant Version_32 := 16#dfdb54c8#;
   pragma Export (C, u00074, "system__task_infoS");
   u00075 : constant Version_32 := 16#59d5ac6d#;
   pragma Export (C, u00075, "system__tasking__debugB");
   u00076 : constant Version_32 := 16#5c4175f5#;
   pragma Export (C, u00076, "system__tasking__debugS");
   u00077 : constant Version_32 := 16#39591e91#;
   pragma Export (C, u00077, "system__concat_2B");
   u00078 : constant Version_32 := 16#46a6f4a9#;
   pragma Export (C, u00078, "system__concat_2S");
   u00079 : constant Version_32 := 16#ae97ef6c#;
   pragma Export (C, u00079, "system__concat_3B");
   u00080 : constant Version_32 := 16#cb5c043f#;
   pragma Export (C, u00080, "system__concat_3S");
   u00081 : constant Version_32 := 16#c9fdc962#;
   pragma Export (C, u00081, "system__concat_6B");
   u00082 : constant Version_32 := 16#7abcf341#;
   pragma Export (C, u00082, "system__concat_6S");
   u00083 : constant Version_32 := 16#def1dd00#;
   pragma Export (C, u00083, "system__concat_5B");
   u00084 : constant Version_32 := 16#ad4fc8f4#;
   pragma Export (C, u00084, "system__concat_5S");
   u00085 : constant Version_32 := 16#3493e6c0#;
   pragma Export (C, u00085, "system__concat_4B");
   u00086 : constant Version_32 := 16#bf29e5eb#;
   pragma Export (C, u00086, "system__concat_4S");
   u00087 : constant Version_32 := 16#1eab0e09#;
   pragma Export (C, u00087, "system__img_enum_newB");
   u00088 : constant Version_32 := 16#3a71cda5#;
   pragma Export (C, u00088, "system__img_enum_newS");
   u00089 : constant Version_32 := 16#194ccd7b#;
   pragma Export (C, u00089, "system__img_unsB");
   u00090 : constant Version_32 := 16#486366d4#;
   pragma Export (C, u00090, "system__img_unsS");
   u00091 : constant Version_32 := 16#083296f2#;
   pragma Export (C, u00091, "system__stack_usageB");
   u00092 : constant Version_32 := 16#7ccb26a7#;
   pragma Export (C, u00092, "system__stack_usageS");
   u00093 : constant Version_32 := 16#d7aac20c#;
   pragma Export (C, u00093, "system__ioB");
   u00094 : constant Version_32 := 16#2334f11a#;
   pragma Export (C, u00094, "system__ioS");
   u00095 : constant Version_32 := 16#66910c12#;
   pragma Export (C, u00095, "bcontrolB");
   u00096 : constant Version_32 := 16#0d0c7bee#;
   pragma Export (C, u00096, "bcontrolS");
   u00097 : constant Version_32 := 16#f6c59fb5#;
   pragma Export (C, u00097, "ada__real_time__delaysB");
   u00098 : constant Version_32 := 16#6becaccd#;
   pragma Export (C, u00098, "ada__real_time__delaysS");
   u00099 : constant Version_32 := 16#4740c416#;
   pragma Export (C, u00099, "ada__tagsB");
   u00100 : constant Version_32 := 16#1442fc05#;
   pragma Export (C, u00100, "ada__tagsS");
   u00101 : constant Version_32 := 16#79817c71#;
   pragma Export (C, u00101, "system__val_unsB");
   u00102 : constant Version_32 := 16#c73fb718#;
   pragma Export (C, u00102, "system__val_unsS");
   u00103 : constant Version_32 := 16#aea309ed#;
   pragma Export (C, u00103, "system__val_utilB");
   u00104 : constant Version_32 := 16#11d6b0ab#;
   pragma Export (C, u00104, "system__val_utilS");
   u00105 : constant Version_32 := 16#b7fa72e7#;
   pragma Export (C, u00105, "system__case_utilB");
   u00106 : constant Version_32 := 16#106a66dd#;
   pragma Export (C, u00106, "system__case_utilS");
   u00107 : constant Version_32 := 16#5b6d0afa#;
   pragma Export (C, u00107, "blinkerB");
   u00108 : constant Version_32 := 16#6bc56ca4#;
   pragma Export (C, u00108, "blinkerS");
   u00109 : constant Version_32 := 16#7412e12e#;
   pragma Export (C, u00109, "controlB");
   u00110 : constant Version_32 := 16#74a25c5e#;
   pragma Export (C, u00110, "controlS");
   u00111 : constant Version_32 := 16#7dbbd31d#;
   pragma Export (C, u00111, "text_ioS");
   u00112 : constant Version_32 := 16#74219827#;
   pragma Export (C, u00112, "ada__text_ioB");
   u00113 : constant Version_32 := 16#c1aeef6a#;
   pragma Export (C, u00113, "ada__text_ioS");
   u00114 : constant Version_32 := 16#746bba4b#;
   pragma Export (C, u00114, "ada__streamsB");
   u00115 : constant Version_32 := 16#2564c958#;
   pragma Export (C, u00115, "ada__streamsS");
   u00116 : constant Version_32 := 16#b46168d5#;
   pragma Export (C, u00116, "ada__io_exceptionsS");
   u00117 : constant Version_32 := 16#e0b7a7e8#;
   pragma Export (C, u00117, "interfaces__c_streamsB");
   u00118 : constant Version_32 := 16#95ad191f#;
   pragma Export (C, u00118, "interfaces__c_streamsS");
   u00119 : constant Version_32 := 16#057097b0#;
   pragma Export (C, u00119, "system__file_ioB");
   u00120 : constant Version_32 := 16#2c376772#;
   pragma Export (C, u00120, "system__file_ioS");
   u00121 : constant Version_32 := 16#8cbe6205#;
   pragma Export (C, u00121, "ada__finalizationB");
   u00122 : constant Version_32 := 16#22e22193#;
   pragma Export (C, u00122, "ada__finalizationS");
   u00123 : constant Version_32 := 16#95817ed8#;
   pragma Export (C, u00123, "system__finalization_rootB");
   u00124 : constant Version_32 := 16#f28475c5#;
   pragma Export (C, u00124, "system__finalization_rootS");
   u00125 : constant Version_32 := 16#b2cb9bcf#;
   pragma Export (C, u00125, "interfaces__c__stringsB");
   u00126 : constant Version_32 := 16#603c1c44#;
   pragma Export (C, u00126, "interfaces__c__stringsS");
   u00127 : constant Version_32 := 16#d6bc4ecc#;
   pragma Export (C, u00127, "system__crtl__runtimeS");
   u00128 : constant Version_32 := 16#c31b16ce#;
   pragma Export (C, u00128, "system__os_libB");
   u00129 : constant Version_32 := 16#ae262a2c#;
   pragma Export (C, u00129, "system__os_libS");
   u00130 : constant Version_32 := 16#4cd8aca0#;
   pragma Export (C, u00130, "system__stringsB");
   u00131 : constant Version_32 := 16#0a9c4c91#;
   pragma Export (C, u00131, "system__stringsS");
   u00132 : constant Version_32 := 16#acaec55c#;
   pragma Export (C, u00132, "system__file_control_blockS");
   u00133 : constant Version_32 := 16#7944df58#;
   pragma Export (C, u00133, "system__finalization_mastersB");
   u00134 : constant Version_32 := 16#1d6d4055#;
   pragma Export (C, u00134, "system__finalization_mastersS");
   u00135 : constant Version_32 := 16#57a37a42#;
   pragma Export (C, u00135, "system__address_imageB");
   u00136 : constant Version_32 := 16#1c9a9b6f#;
   pragma Export (C, u00136, "system__address_imageS");
   u00137 : constant Version_32 := 16#7268f812#;
   pragma Export (C, u00137, "system__img_boolB");
   u00138 : constant Version_32 := 16#48af77be#;
   pragma Export (C, u00138, "system__img_boolS");
   u00139 : constant Version_32 := 16#6d4d969a#;
   pragma Export (C, u00139, "system__storage_poolsB");
   u00140 : constant Version_32 := 16#a436f314#;
   pragma Export (C, u00140, "system__storage_poolsS");
   u00141 : constant Version_32 := 16#70b38aeb#;
   pragma Export (C, u00141, "system__pool_globalB");
   u00142 : constant Version_32 := 16#1f831a8a#;
   pragma Export (C, u00142, "system__pool_globalS");
   u00143 : constant Version_32 := 16#14f6b935#;
   pragma Export (C, u00143, "system__memoryB");
   u00144 : constant Version_32 := 16#77fdba40#;
   pragma Export (C, u00144, "system__memoryS");
   u00145 : constant Version_32 := 16#f74ecfe7#;
   pragma Export (C, u00145, "system__storage_pools__subpoolsB");
   u00146 : constant Version_32 := 16#5ff0e7c5#;
   pragma Export (C, u00146, "system__storage_pools__subpoolsS");
   u00147 : constant Version_32 := 16#1777d351#;
   pragma Export (C, u00147, "system__storage_pools__subpools__finalizationB");
   u00148 : constant Version_32 := 16#12aaf1de#;
   pragma Export (C, u00148, "system__storage_pools__subpools__finalizationS");
   u00149 : constant Version_32 := 16#f85ea1d6#;
   pragma Export (C, u00149, "system__tasking__protected_objectsB");
   u00150 : constant Version_32 := 16#6fa056d1#;
   pragma Export (C, u00150, "system__tasking__protected_objectsS");
   u00151 : constant Version_32 := 16#dc7b9f4b#;
   pragma Export (C, u00151, "system__soft_links__taskingB");
   u00152 : constant Version_32 := 16#6ac0d6d0#;
   pragma Export (C, u00152, "system__soft_links__taskingS");
   u00153 : constant Version_32 := 16#17d21067#;
   pragma Export (C, u00153, "ada__exceptions__is_null_occurrenceB");
   u00154 : constant Version_32 := 16#30a405b9#;
   pragma Export (C, u00154, "ada__exceptions__is_null_occurrenceS");
   u00155 : constant Version_32 := 16#ee80728a#;
   pragma Export (C, u00155, "system__tracesB");
   u00156 : constant Version_32 := 16#4f6b6eff#;
   pragma Export (C, u00156, "system__tracesS");
   u00157 : constant Version_32 := 16#c8ad6c59#;
   pragma Export (C, u00157, "system__tasking__protected_objects__entriesB");
   u00158 : constant Version_32 := 16#4d64e3b6#;
   pragma Export (C, u00158, "system__tasking__protected_objects__entriesS");
   u00159 : constant Version_32 := 16#386436bc#;
   pragma Export (C, u00159, "system__restrictionsB");
   u00160 : constant Version_32 := 16#f1e10264#;
   pragma Export (C, u00160, "system__restrictionsS");
   u00161 : constant Version_32 := 16#031de744#;
   pragma Export (C, u00161, "system__tasking__initializationB");
   u00162 : constant Version_32 := 16#f20398cb#;
   pragma Export (C, u00162, "system__tasking__initializationS");
   u00163 : constant Version_32 := 16#040d8cfe#;
   pragma Export (C, u00163, "system__tasking__protected_objects__operationsB");
   u00164 : constant Version_32 := 16#415d7a1b#;
   pragma Export (C, u00164, "system__tasking__protected_objects__operationsS");
   u00165 : constant Version_32 := 16#78debc83#;
   pragma Export (C, u00165, "system__tasking__entry_callsB");
   u00166 : constant Version_32 := 16#e5160f9e#;
   pragma Export (C, u00166, "system__tasking__entry_callsS");
   u00167 : constant Version_32 := 16#385ecace#;
   pragma Export (C, u00167, "system__tasking__queuingB");
   u00168 : constant Version_32 := 16#3d02e133#;
   pragma Export (C, u00168, "system__tasking__queuingS");
   u00169 : constant Version_32 := 16#5270cf31#;
   pragma Export (C, u00169, "system__tasking__utilitiesB");
   u00170 : constant Version_32 := 16#39283e2c#;
   pragma Export (C, u00170, "system__tasking__utilitiesS");
   u00171 : constant Version_32 := 16#bd6fc52e#;
   pragma Export (C, u00171, "system__traces__taskingB");
   u00172 : constant Version_32 := 16#33a47127#;
   pragma Export (C, u00172, "system__traces__taskingS");
   u00173 : constant Version_32 := 16#9934372d#;
   pragma Export (C, u00173, "system__tasking__rendezvousB");
   u00174 : constant Version_32 := 16#d7d33e30#;
   pragma Export (C, u00174, "system__tasking__rendezvousS");
   u00175 : constant Version_32 := 16#8978ab3e#;
   pragma Export (C, u00175, "system__tasking__stagesB");
   u00176 : constant Version_32 := 16#bb202ccb#;
   pragma Export (C, u00176, "system__tasking__stagesS");
   u00177 : constant Version_32 := 16#4b37b589#;
   pragma Export (C, u00177, "system__val_enumB");
   u00178 : constant Version_32 := 16#066c44c0#;
   pragma Export (C, u00178, "system__val_enumS");
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
   --  system.restrictions%s
   --  system.restrictions%b
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
   --  system.img_uns%s
   --  system.img_uns%b
   --  system.val_enum%s
   --  system.val_uns%s
   --  system.val_util%s
   --  system.val_util%b
   --  system.val_uns%b
   --  system.val_enum%b
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
   --  interfaces.c.strings%s
   --  system.crtl.runtime%s
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
   --  system.tasking.debug%b
   --  system.task_primitives.operations%b
   --  system.traces.tasking%s
   --  system.traces.tasking%b
   --  system.memory%s
   --  system.memory%b
   --  system.standard_library%b
   --  system.pool_global%s
   --  system.pool_global%b
   --  system.file_control_block%s
   --  system.file_io%s
   --  system.secondary_stack%s
   --  system.file_io%b
   --  system.storage_pools.subpools%b
   --  system.finalization_masters%b
   --  interfaces.c.strings%b
   --  interfaces.c%b
   --  ada.tags%b
   --  system.soft_links%b
   --  system.os_lib%b
   --  system.secondary_stack%b
   --  system.address_image%b
   --  system.soft_links.tasking%s
   --  system.soft_links.tasking%b
   --  system.tasking.entry_calls%s
   --  system.tasking.initialization%s
   --  system.tasking.initialization%b
   --  system.tasking.protected_objects%s
   --  system.tasking.protected_objects%b
   --  system.tasking.utilities%s
   --  system.traceback%s
   --  ada.exceptions%b
   --  system.traceback%b
   --  ada.real_time%s
   --  ada.real_time%b
   --  ada.real_time.delays%s
   --  ada.real_time.delays%b
   --  ada.text_io%s
   --  ada.text_io%b
   --  system.tasking.protected_objects.entries%s
   --  system.tasking.protected_objects.entries%b
   --  system.tasking.queuing%s
   --  system.tasking.queuing%b
   --  system.tasking.utilities%b
   --  system.tasking.rendezvous%s
   --  system.tasking.protected_objects.operations%s
   --  system.tasking.protected_objects.operations%b
   --  system.tasking.rendezvous%b
   --  system.tasking.entry_calls%b
   --  system.tasking.stages%s
   --  system.tasking.stages%b
   --  text_io%s
   --  bcontrol%s
   --  blinker%s
   --  control%s
   --  control%b
   --  blinker%b
   --  bcontrol%b
   --  main%b
   --  END ELABORATION ORDER


end ada_main_for_main;
