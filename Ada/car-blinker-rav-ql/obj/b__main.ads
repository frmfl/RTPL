pragma Ada_95;
with System;
package ada_main is
   pragma Warnings (Off);


   GNAT_Version : constant String :=
                    "GNAT Version: Pro 7.3.0w (20140517-47)" & ASCII.NUL;
   pragma Export (C, GNAT_Version, "__gnat_version");

   Ada_Main_Program_Name : constant String := "_ada_main" & ASCII.NUL;
   pragma Export (C, Ada_Main_Program_Name, "__gnat_ada_main_program_name");

   procedure adainit;
   pragma Export (C, adainit, "adainit");

   procedure adafinal;
   pragma Export (C, adafinal, "adafinal");

   procedure main;
   pragma Export (C, main, "main");

   type Version_32 is mod 2 ** 32;
   u00001 : constant Version_32 := 16#07e8a674#;
   pragma Export (C, u00001, "mainB");
   u00002 : constant Version_32 := 16#cf9eba42#;
   pragma Export (C, u00002, "system__standard_libraryB");
   u00003 : constant Version_32 := 16#2d94ab2e#;
   pragma Export (C, u00003, "system__standard_libraryS");
   u00004 : constant Version_32 := 16#3ffc8e18#;
   pragma Export (C, u00004, "adaS");
   u00005 : constant Version_32 := 16#4e3479be#;
   pragma Export (C, u00005, "ada__real_timeB");
   u00006 : constant Version_32 := 16#cf4a25c2#;
   pragma Export (C, u00006, "ada__real_timeS");
   u00007 : constant Version_32 := 16#2e75123f#;
   pragma Export (C, u00007, "systemS");
   u00008 : constant Version_32 := 16#8481373b#;
   pragma Export (C, u00008, "system__task_primitivesS");
   u00009 : constant Version_32 := 16#ff9ec751#;
   pragma Export (C, u00009, "system__os_interfaceS");
   u00010 : constant Version_32 := 16#a6427ae9#;
   pragma Export (C, u00010, "system__bbS");
   u00011 : constant Version_32 := 16#cdc071aa#;
   pragma Export (C, u00011, "system__bb__board_supportB");
   u00012 : constant Version_32 := 16#c731b4f5#;
   pragma Export (C, u00012, "system__bb__board_supportS");
   u00013 : constant Version_32 := 16#32e65627#;
   pragma Export (C, u00013, "system__bb__parametersS");
   u00014 : constant Version_32 := 16#49cfcd25#;
   pragma Export (C, u00014, "system__bb__cpu_primitivesB");
   u00015 : constant Version_32 := 16#2bb1de5e#;
   pragma Export (C, u00015, "system__bb__cpu_primitivesS");
   u00016 : constant Version_32 := 16#12ded6e0#;
   pragma Export (C, u00016, "ada__exceptionsB");
   u00017 : constant Version_32 := 16#7076c476#;
   pragma Export (C, u00017, "ada__exceptionsS");
   u00018 : constant Version_32 := 16#28b8c5f2#;
   pragma Export (C, u00018, "ada__exceptions__last_chance_handlerB");
   u00019 : constant Version_32 := 16#3aac8c92#;
   pragma Export (C, u00019, "ada__exceptions__last_chance_handlerS");
   u00020 : constant Version_32 := 16#fd2ad2f1#;
   pragma Export (C, u00020, "gnatS");
   u00021 : constant Version_32 := 16#f5d292f7#;
   pragma Export (C, u00021, "gnat__debug_utilitiesB");
   u00022 : constant Version_32 := 16#d04e6775#;
   pragma Export (C, u00022, "gnat__debug_utilitiesS");
   u00023 : constant Version_32 := 16#5e68c1f5#;
   pragma Export (C, u00023, "system__secondary_stackB");
   u00024 : constant Version_32 := 16#a7663279#;
   pragma Export (C, u00024, "system__secondary_stackS");
   u00025 : constant Version_32 := 16#39a03df9#;
   pragma Export (C, u00025, "system__storage_elementsB");
   u00026 : constant Version_32 := 16#03b6583b#;
   pragma Export (C, u00026, "system__storage_elementsS");
   u00027 : constant Version_32 := 16#37ec8d54#;
   pragma Export (C, u00027, "system__ioB");
   u00028 : constant Version_32 := 16#b037e570#;
   pragma Export (C, u00028, "system__ioS");
   u00029 : constant Version_32 := 16#570325c8#;
   pragma Export (C, u00029, "system__img_intB");
   u00030 : constant Version_32 := 16#2caef2fd#;
   pragma Export (C, u00030, "system__img_intS");
   u00031 : constant Version_32 := 16#4e337d99#;
   pragma Export (C, u00031, "system__text_ioB");
   u00032 : constant Version_32 := 16#5b4742ce#;
   pragma Export (C, u00032, "system__text_ioS");
   u00033 : constant Version_32 := 16#21ce69f1#;
   pragma Export (C, u00033, "system__machine_codeS");
   u00034 : constant Version_32 := 16#701f9d88#;
   pragma Export (C, u00034, "ada__exceptions__tracebackB");
   u00035 : constant Version_32 := 16#5b6d87c9#;
   pragma Export (C, u00035, "ada__exceptions__tracebackS");
   u00036 : constant Version_32 := 16#9ed49525#;
   pragma Export (C, u00036, "system__traceback_entriesB");
   u00037 : constant Version_32 := 16#2e2ee44f#;
   pragma Export (C, u00037, "system__traceback_entriesS");
   u00038 : constant Version_32 := 16#0d526ee4#;
   pragma Export (C, u00038, "system__exception_tableB");
   u00039 : constant Version_32 := 16#806c742a#;
   pragma Export (C, u00039, "system__exception_tableS");
   u00040 : constant Version_32 := 16#c4b31199#;
   pragma Export (C, u00040, "system__soft_linksB");
   u00041 : constant Version_32 := 16#e2321421#;
   pragma Export (C, u00041, "system__soft_linksS");
   u00042 : constant Version_32 := 16#eb2bcc3b#;
   pragma Export (C, u00042, "system__task_primitives__operationsB");
   u00043 : constant Version_32 := 16#6fbfcbd0#;
   pragma Export (C, u00043, "system__task_primitives__operationsS");
   u00044 : constant Version_32 := 16#81552fb4#;
   pragma Export (C, u00044, "system__taskingB");
   u00045 : constant Version_32 := 16#a0a4fcf1#;
   pragma Export (C, u00045, "system__taskingS");
   u00046 : constant Version_32 := 16#84f3a776#;
   pragma Export (C, u00046, "system__multiprocessorsB");
   u00047 : constant Version_32 := 16#679a22fb#;
   pragma Export (C, u00047, "system__multiprocessorsS");
   u00048 : constant Version_32 := 16#69adb1b9#;
   pragma Export (C, u00048, "interfacesS");
   u00049 : constant Version_32 := 16#84b803dd#;
   pragma Export (C, u00049, "interfaces__cS");
   u00050 : constant Version_32 := 16#c0ab394a#;
   pragma Export (C, u00050, "system__parametersB");
   u00051 : constant Version_32 := 16#e78b4160#;
   pragma Export (C, u00051, "system__parametersS");
   u00052 : constant Version_32 := 16#e0fce7f8#;
   pragma Export (C, u00052, "system__task_infoB");
   u00053 : constant Version_32 := 16#ae6faf3e#;
   pragma Export (C, u00053, "system__task_infoS");
   u00054 : constant Version_32 := 16#0f8eba36#;
   pragma Export (C, u00054, "system__tasking__debugB");
   u00055 : constant Version_32 := 16#8e39484d#;
   pragma Export (C, u00055, "system__tasking__debugS");
   u00056 : constant Version_32 := 16#ce4af020#;
   pragma Export (C, u00056, "system__exceptionsB");
   u00057 : constant Version_32 := 16#46167fc9#;
   pragma Export (C, u00057, "system__exceptionsS");
   u00058 : constant Version_32 := 16#37d758f1#;
   pragma Export (C, u00058, "system__exceptions__machineS");
   u00059 : constant Version_32 := 16#b895431d#;
   pragma Export (C, u00059, "system__exceptions_debugB");
   u00060 : constant Version_32 := 16#9d970b81#;
   pragma Export (C, u00060, "system__exceptions_debugS");
   u00061 : constant Version_32 := 16#9d8d817e#;
   pragma Export (C, u00061, "system__tracebackB");
   u00062 : constant Version_32 := 16#8c423d4b#;
   pragma Export (C, u00062, "system__tracebackS");
   u00063 : constant Version_32 := 16#8c33a517#;
   pragma Export (C, u00063, "system__wch_conB");
   u00064 : constant Version_32 := 16#350830ed#;
   pragma Export (C, u00064, "system__wch_conS");
   u00065 : constant Version_32 := 16#9721e840#;
   pragma Export (C, u00065, "system__wch_stwB");
   u00066 : constant Version_32 := 16#18191cec#;
   pragma Export (C, u00066, "system__wch_stwS");
   u00067 : constant Version_32 := 16#9b29844d#;
   pragma Export (C, u00067, "system__wch_cnvB");
   u00068 : constant Version_32 := 16#3abf8a1e#;
   pragma Export (C, u00068, "system__wch_cnvS");
   u00069 : constant Version_32 := 16#ece6fdb6#;
   pragma Export (C, u00069, "system__wch_jisB");
   u00070 : constant Version_32 := 16#bacf933f#;
   pragma Export (C, u00070, "system__wch_jisS");
   u00071 : constant Version_32 := 16#f22a3c08#;
   pragma Export (C, u00071, "system__bb__cpu_primitives__multiprocessorsB");
   u00072 : constant Version_32 := 16#71f00eda#;
   pragma Export (C, u00072, "system__bb__cpu_primitives__multiprocessorsS");
   u00073 : constant Version_32 := 16#03b885f8#;
   pragma Export (C, u00073, "system__bb__protectionB");
   u00074 : constant Version_32 := 16#7cbd1653#;
   pragma Export (C, u00074, "system__bb__protectionS");
   u00075 : constant Version_32 := 16#ed95aa26#;
   pragma Export (C, u00075, "system__bb__threadsB");
   u00076 : constant Version_32 := 16#5ef1a4bd#;
   pragma Export (C, u00076, "system__bb__threadsS");
   u00077 : constant Version_32 := 16#86b94167#;
   pragma Export (C, u00077, "system__bb__threads__queuesB");
   u00078 : constant Version_32 := 16#204e2c19#;
   pragma Export (C, u00078, "system__bb__threads__queuesS");
   u00079 : constant Version_32 := 16#7d81453c#;
   pragma Export (C, u00079, "system__bb__timeB");
   u00080 : constant Version_32 := 16#abe932e9#;
   pragma Export (C, u00080, "system__bb__timeS");
   u00081 : constant Version_32 := 16#12c8cd7d#;
   pragma Export (C, u00081, "ada__tagsB");
   u00082 : constant Version_32 := 16#ce72c228#;
   pragma Export (C, u00082, "ada__tagsS");
   u00083 : constant Version_32 := 16#c3335bfd#;
   pragma Export (C, u00083, "system__htableB");
   u00084 : constant Version_32 := 16#aab7a1d5#;
   pragma Export (C, u00084, "system__htableS");
   u00085 : constant Version_32 := 16#089f5cd0#;
   pragma Export (C, u00085, "system__string_hashB");
   u00086 : constant Version_32 := 16#08e9caab#;
   pragma Export (C, u00086, "system__string_hashS");
   u00087 : constant Version_32 := 16#7f738090#;
   pragma Export (C, u00087, "system__unsigned_typesS");
   u00088 : constant Version_32 := 16#4266b2a8#;
   pragma Export (C, u00088, "system__val_unsB");
   u00089 : constant Version_32 := 16#6fdb6dab#;
   pragma Export (C, u00089, "system__val_unsS");
   u00090 : constant Version_32 := 16#27b600b2#;
   pragma Export (C, u00090, "system__val_utilB");
   u00091 : constant Version_32 := 16#82d5a4c1#;
   pragma Export (C, u00091, "system__val_utilS");
   u00092 : constant Version_32 := 16#d1060688#;
   pragma Export (C, u00092, "system__case_utilB");
   u00093 : constant Version_32 := 16#0a7c7be8#;
   pragma Export (C, u00093, "system__case_utilS");
   u00094 : constant Version_32 := 16#57810d75#;
   pragma Export (C, u00094, "system__bb__interruptsB");
   u00095 : constant Version_32 := 16#a8eea8fb#;
   pragma Export (C, u00095, "system__bb__interruptsS");
   u00096 : constant Version_32 := 16#4ce2ed34#;
   pragma Export (C, u00096, "system__bb__timing_eventsB");
   u00097 : constant Version_32 := 16#bf231a9e#;
   pragma Export (C, u00097, "system__bb__timing_eventsS");
   u00098 : constant Version_32 := 16#ec2092fc#;
   pragma Export (C, u00098, "system__multiprocessors__fair_locksB");
   u00099 : constant Version_32 := 16#a70e2885#;
   pragma Export (C, u00099, "system__multiprocessors__fair_locksS");
   u00100 : constant Version_32 := 16#9fbff207#;
   pragma Export (C, u00100, "system__multiprocessors__spin_locksB");
   u00101 : constant Version_32 := 16#9ac42bf1#;
   pragma Export (C, u00101, "system__multiprocessors__spin_locksS");
   u00102 : constant Version_32 := 16#255b90d9#;
   pragma Export (C, u00102, "bcontrolB");
   u00103 : constant Version_32 := 16#a3659187#;
   pragma Export (C, u00103, "bcontrolS");
   u00104 : constant Version_32 := 16#4a32d090#;
   pragma Export (C, u00104, "ada__real_time__delaysB");
   u00105 : constant Version_32 := 16#6fcba83e#;
   pragma Export (C, u00105, "ada__real_time__delaysS");
   u00106 : constant Version_32 := 16#e015b539#;
   pragma Export (C, u00106, "blinkerB");
   u00107 : constant Version_32 := 16#2268e7f2#;
   pragma Export (C, u00107, "blinkerS");
   u00108 : constant Version_32 := 16#710039ae#;
   pragma Export (C, u00108, "controlB");
   u00109 : constant Version_32 := 16#0fafa1da#;
   pragma Export (C, u00109, "controlS");
   u00110 : constant Version_32 := 16#b0e3eede#;
   pragma Export (C, u00110, "gioB");
   u00111 : constant Version_32 := 16#7f2c9c06#;
   pragma Export (C, u00111, "gioS");
   u00112 : constant Version_32 := 16#293c4492#;
   pragma Export (C, u00112, "reg_gioS");
   u00113 : constant Version_32 := 16#b85aa9cc#;
   pragma Export (C, u00113, "reg_hetS");
   u00114 : constant Version_32 := 16#179b99a3#;
   pragma Export (C, u00114, "system__tasking__restricted__stagesB");
   u00115 : constant Version_32 := 16#57e13518#;
   pragma Export (C, u00115, "system__tasking__restricted__stagesS");
   u00116 : constant Version_32 := 16#83680a71#;
   pragma Export (C, u00116, "system__tasking__restrictedS");
   u00117 : constant Version_32 := 16#ba1e63fb#;
   pragma Export (C, u00117, "text_ioS");
   u00118 : constant Version_32 := 16#d3a2eabd#;
   pragma Export (C, u00118, "ada__text_ioB");
   u00119 : constant Version_32 := 16#c034cb2a#;
   pragma Export (C, u00119, "ada__text_ioS");
   u00120 : constant Version_32 := 16#4aa4186c#;
   pragma Export (C, u00120, "system__memoryB");
   u00121 : constant Version_32 := 16#7708740b#;
   pragma Export (C, u00121, "system__memoryS");
   --  BEGIN ELABORATION ORDER
   --  ada%s
   --  gnat%s
   --  interfaces%s
   --  interfaces.c%s
   --  system%s
   --  gnat.debug_utilities%s
   --  system.bb%s
   --  system.bb.parameters%s
   --  system.bb.cpu_primitives%s
   --  system.bb.protection%s
   --  system.case_util%s
   --  system.case_util%b
   --  system.exceptions%s
   --  system.exceptions%b
   --  system.htable%s
   --  system.img_int%s
   --  system.img_int%b
   --  system.io%s
   --  system.machine_code%s
   --  system.multiprocessors%s
   --  system.multiprocessors%b
   --  system.bb.cpu_primitives.multiprocessors%s
   --  system.bb.cpu_primitives.multiprocessors%b
   --  system.bb.interrupts%s
   --  system.bb.board_support%s
   --  system.bb.board_support%b
   --  system.bb.time%s
   --  system.multiprocessors.spin_locks%s
   --  system.multiprocessors.spin_locks%b
   --  system.multiprocessors.fair_locks%s
   --  system.parameters%s
   --  system.parameters%b
   --  system.bb.threads%s
   --  system.bb.threads.queues%s
   --  system.bb.threads.queues%b
   --  system.bb.protection%b
   --  system.os_interface%s
   --  system.multiprocessors.fair_locks%b
   --  system.standard_library%s
   --  system.exceptions_debug%s
   --  system.exceptions_debug%b
   --  system.storage_elements%s
   --  system.storage_elements%b
   --  system.bb.threads%b
   --  system.bb.interrupts%b
   --  ada.tags%s
   --  system.bb.timing_events%s
   --  system.bb.timing_events%b
   --  system.bb.time%b
   --  system.string_hash%s
   --  system.string_hash%b
   --  system.htable%b
   --  system.task_info%s
   --  system.task_info%b
   --  system.task_primitives%s
   --  system.text_io%s
   --  system.text_io%b
   --  system.io%b
   --  system.traceback_entries%s
   --  system.traceback_entries%b
   --  ada.exceptions%s
   --  system.bb.cpu_primitives%b
   --  system.exceptions.machine%s
   --  system.soft_links%s
   --  system.tasking%s
   --  system.task_primitives.operations%s
   --  system.soft_links%b
   --  system.tasking.debug%s
   --  system.tasking.debug%b
   --  system.task_primitives.operations%b
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
   --  ada.exceptions.traceback%s
   --  ada.text_io%s
   --  ada.text_io%b
   --  system.exception_table%s
   --  system.exception_table%b
   --  system.memory%s
   --  system.memory%b
   --  system.standard_library%b
   --  system.secondary_stack%s
   --  system.tasking%b
   --  ada.tags%b
   --  gnat.debug_utilities%b
   --  system.secondary_stack%b
   --  ada.exceptions.traceback%b
   --  ada.exceptions.last_chance_handler%b
   --  system.tasking.restricted%s
   --  system.tasking.restricted.stages%s
   --  system.tasking.restricted.stages%b
   --  system.traceback%s
   --  ada.exceptions%b
   --  system.traceback%b
   --  ada.real_time%s
   --  ada.real_time%b
   --  ada.real_time.delays%s
   --  ada.real_time.delays%b
   --  text_io%s
   --  bcontrol%s
   --  blinker%s
   --  control%s
   --  blinker%b
   --  reg_gio%s
   --  gio%s
   --  gio%b
   --  reg_het%s
   --  control%b
   --  bcontrol%b
   --  main%b
   --  END ELABORATION ORDER


end ada_main;
