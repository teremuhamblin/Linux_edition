/*
 * Copyright 2012-2016 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */

#ifndef V9_STRUCTS_H_
#define V9_STRUCTS_H_

struct v9_sdma_mqd {
	uint32_t sdmax_rlcx_rb_cntl;
	uint32_t sdmax_rlcx_rb_base;
	uint32_t sdmax_rlcx_rb_base_hi;
	uint32_t sdmax_rlcx_rb_rptr;
	uint32_t sdmax_rlcx_rb_rptr_hi;
	uint32_t sdmax_rlcx_rb_wptr;
	uint32_t sdmax_rlcx_rb_wptr_hi;
	uint32_t sdmax_rlcx_rb_wptr_poll_cntl;
	uint32_t sdmax_rlcx_rb_rptr_addr_hi;
	uint32_t sdmax_rlcx_rb_rptr_addr_lo;
	uint32_t sdmax_rlcx_ib_cntl;
	uint32_t sdmax_rlcx_ib_rptr;
	uint32_t sdmax_rlcx_ib_offset;
	uint32_t sdmax_rlcx_ib_base_lo;
	uint32_t sdmax_rlcx_ib_base_hi;
	uint32_t sdmax_rlcx_ib_size;
	uint32_t sdmax_rlcx_skip_cntl;
	uint32_t sdmax_rlcx_context_status;
	uint32_t sdmax_rlcx_doorbell;
	uint32_t sdmax_rlcx_status;
	uint32_t sdmax_rlcx_doorbell_log;
	uint32_t sdmax_rlcx_watermark;
	uint32_t sdmax_rlcx_doorbell_offset;
	uint32_t sdmax_rlcx_csa_addr_lo;
	uint32_t sdmax_rlcx_csa_addr_hi;
	uint32_t sdmax_rlcx_ib_sub_remain;
	uint32_t sdmax_rlcx_preempt;
	uint32_t sdmax_rlcx_dummy_reg;
	uint32_t sdmax_rlcx_rb_wptr_poll_addr_hi;
	uint32_t sdmax_rlcx_rb_wptr_poll_addr_lo;
	uint32_t sdmax_rlcx_rb_aql_cntl;
	uint32_t sdmax_rlcx_minor_ptr_update;
	uint32_t sdmax_rlcx_midcmd_data0;
	uint32_t sdmax_rlcx_midcmd_data1;
	uint32_t sdmax_rlcx_midcmd_data2;
	uint32_t sdmax_rlcx_midcmd_data3;
	uint32_t sdmax_rlcx_midcmd_data4;
	uint32_t sdmax_rlcx_midcmd_data5;
	uint32_t sdmax_rlcx_midcmd_data6;
	uint32_t sdmax_rlcx_midcmd_data7;
	uint32_t sdmax_rlcx_midcmd_data8;
	uint32_t sdmax_rlcx_midcmd_cntl;
	uint32_t reserved_42;
	uint32_t reserved_43;
	uint32_t reserved_44;
	uint32_t reserved_45;
	uint32_t reserved_46;
	uint32_t reserved_47;
	uint32_t reserved_48;
	uint32_t reserved_49;
	uint32_t reserved_50;
	uint32_t reserved_51;
	uint32_t reserved_52;
	uint32_t reserved_53;
	uint32_t reserved_54;
	uint32_t reserved_55;
	uint32_t reserved_56;
	uint32_t reserved_57;
	uint32_t reserved_58;
	uint32_t reserved_59;
	uint32_t reserved_60;
	uint32_t reserved_61;
	uint32_t reserved_62;
	uint32_t reserved_63;
	uint32_t reserved_64;
	uint32_t reserved_65;
	uint32_t reserved_66;
	uint32_t reserved_67;
	uint32_t reserved_68;
	uint32_t reserved_69;
	uint32_t reserved_70;
	uint32_t reserved_71;
	uint32_t reserved_72;
	uint32_t reserved_73;
	uint32_t reserved_74;
	uint32_t reserved_75;
	uint32_t reserved_76;
	uint32_t reserved_77;
	uint32_t reserved_78;
	uint32_t reserved_79;
	uint32_t reserved_80;
	uint32_t reserved_81;
	uint32_t reserved_82;
	uint32_t reserved_83;
	uint32_t reserved_84;
	uint32_t reserved_85;
	uint32_t reserved_86;
	uint32_t reserved_87;
	uint32_t reserved_88;
	uint32_t reserved_89;
	uint32_t reserved_90;
	uint32_t reserved_91;
	uint32_t reserved_92;
	uint32_t reserved_93;
	uint32_t reserved_94;
	uint32_t reserved_95;
	uint32_t reserved_96;
	uint32_t reserved_97;
	uint32_t reserved_98;
	uint32_t reserved_99;
	uint32_t reserved_100;
	uint32_t reserved_101;
	uint32_t reserved_102;
	uint32_t reserved_103;
	uint32_t reserved_104;
	uint32_t reserved_105;
	uint32_t reserved_106;
	uint32_t reserved_107;
	uint32_t reserved_108;
	uint32_t reserved_109;
	uint32_t reserved_110;
	uint32_t reserved_111;
	uint32_t reserved_112;
	uint32_t reserved_113;
	uint32_t reserved_114;
	uint32_t reserved_115;
	uint32_t reserved_116;
	uint32_t reserved_117;
	uint32_t reserved_118;
	uint32_t reserved_119;
	uint32_t reserved_120;
	uint32_t reserved_121;
	uint32_t reserved_122;
	uint32_t reserved_123;
	uint32_t reserved_124;
	uint32_t reserved_125;
	/* reserved_126,127: repurposed for driver-internal use */
	uint32_t sdma_engine_id;
	uint32_t sdma_queue_id;
};

struct v9_mqd {
	uint32_t header;
	uint32_t compute_dispatch_initiator;
	uint32_t compute_dim_x;
	uint32_t compute_dim_y;
	uint32_t compute_dim_z;
	uint32_t compute_start_x;
	uint32_t compute_start_y;
	uint32_t compute_start_z;
	uint32_t compute_num_thread_x;
	uint32_t compute_num_thread_y;
	uint32_t compute_num_thread_z;
	uint32_t compute_pipelinestat_enable;
	uint32_t compute_perfcount_enable;
	uint32_t compute_pgm_lo;
	uint32_t compute_pgm_hi;
	uint32_t compute_tba_lo;
	uint32_t compute_tba_hi;
	uint32_t compute_tma_lo;
	uint32_t compute_tma_hi;
	uint32_t compute_pgm_rsrc1;
	uint32_t compute_pgm_rsrc2;
	uint32_t compute_vmid;
	uint32_t compute_resource_limits;
	uint32_t compute_static_thread_mgmt_se0;
	uint32_t compute_static_thread_mgmt_se1;
	uint32_t compute_tmpring_size;
	uint32_t compute_static_thread_mgmt_se2;
	uint32_t compute_static_thread_mgmt_se3;
	uint32_t compute_restart_x;
	uint32_t compute_restart_y;
	uint32_t compute_restart_z;
	uint32_t compute_thread_trace_enable;
	uint32_t compute_misc_reserved;
	uint32_t compute_dispatch_id;
	uint32_t compute_threadgroup_id;
	uint32_t compute_relaunch;
	uint32_t compute_wave_restore_addr_lo;
	uint32_t compute_wave_restore_addr_hi;
	uint32_t compute_wave_restore_control;
	union {
		struct {
			uint32_t compute_static_thread_mgmt_se4;
			uint32_t compute_static_thread_mgmt_se5;
			uint32_t compute_static_thread_mgmt_se6;
			uint32_t compute_static_thread_mgmt_se7;
		};
		struct {
			uint32_t compute_current_logic_xcc_id; // offset: 39  (0x27)
			uint32_t compute_restart_cg_tg_id; // offset: 40  (0x28)
			uint32_t compute_tg_chunk_size; // offset: 41  (0x29)
			uint32_t compute_restore_tg_chunk_size; // offset: 42  (0x2A)
		};
	};
	uint32_t reserved_43;
	uint32_t reserved_44;
	uint32_t reserved_45;
	uint32_t reserved_46;
	uint32_t reserved_47;
	uint32_t reserved_48;
	uint32_t reserved_49;
	uint32_t reserved_50;
	uint32_t reserved_51;
	uint32_t reserved_52;
	uint32_t reserved_53;
	uint32_t reserved_54;
	uint32_t reserved_55;
	uint32_t reserved_56;
	uint32_t reserved_57;
	uint32_t reserved_58;
	uint32_t reserved_59;
	uint32_t reserved_60;
	uint32_t reserved_61;
	uint32_t reserved_62;
	uint32_t reserved_63;
	uint32_t reserved_64;
	uint32_t compute_user_data_0;
	uint32_t compute_user_data_1;
	uint32_t compute_user_data_2;
	uint32_t compute_user_data_3;
	uint32_t compute_user_data_4;
	uint32_t compute_user_data_5;
	uint32_t compute_user_data_6;
	uint32_t compute_user_data_7;
	uint32_t compute_user_data_8;
	uint32_t compute_user_data_9;
	uint32_t compute_user_data_10;
	uint32_t compute_user_data_11;
	uint32_t compute_user_data_12;
	uint32_t compute_user_data_13;
	uint32_t compute_user_data_14;
	uint32_t compute_user_data_15;
	uint32_t cp_compute_csinvoc_count_lo;
	uint32_t cp_compute_csinvoc_count_hi;
	uint32_t reserved_83;
	uint32_t reserved_84;
	uint32_t reserved_85;
	uint32_t cp_mqd_query_time_lo;
	uint32_t cp_mqd_query_time_hi;
	uint32_t cp_mqd_connect_start_time_lo;
	uint32_t cp_mqd_connect_start_time_hi;
	uint32_t cp_mqd_connect_end_time_lo;
	uint32_t cp_mqd_connect_end_time_hi;
	uint32_t cp_mqd_connect_end_wf_count;
	uint32_t cp_mqd_connect_end_pq_rptr;
	uint32_t cp_mqd_connect_end_pq_wptr;
	uint32_t cp_mqd_connect_end_ib_rptr;
	uint32_t cp_mqd_readindex_lo;
	uint32_t cp_mqd_readindex_hi;
	uint32_t cp_mqd_save_start_time_lo;
	uint32_t cp_mqd_save_start_time_hi;
	uint32_t cp_mqd_save_end_time_lo;
	uint32_t cp_mqd_save_end_time_hi;
	uint32_t cp_mqd_restore_start_time_lo;
	uint32_t cp_mqd_restore_start_time_hi;
	uint32_t cp_mqd_restore_end_time_lo;
	uint32_t cp_mqd_restore_end_time_hi;
	uint32_t disable_queue;
	uint32_t reserved_107;
	uint32_t gds_cs_ctxsw_cnt0;
	uint32_t gds_cs_ctxsw_cnt1;
	uint32_t gds_cs_ctxsw_cnt2;
	uint32_t gds_cs_ctxsw_cnt3;
	uint32_t reserved_112;
	uint32_t reserved_113;
	uint32_t cp_pq_exe_status_lo;
	uint32_t cp_pq_exe_status_hi;
	uint32_t cp_packet_id_lo;
	uint32_t cp_packet_id_hi;
	uint32_t cp_packet_exe_status_lo;
	uint32_t cp_packet_exe_status_hi;
	uint32_t gds_save_base_addr_lo;
	uint32_t gds_save_base_addr_hi;
	uint32_t gds_save_mask_lo;
	uint32_t gds_save_mask_hi;
	uint32_t ctx_save_base_addr_lo;
	uint32_t ctx_save_base_addr_hi;
	uint32_t dynamic_cu_mask_addr_lo;
	uint32_t dynamic_cu_mask_addr_hi;
	uint32_t cp_mqd_base_addr_lo;
	uint32_t cp_mqd_base_addr_hi;
	uint32_t cp_hqd_active;
	uint32_t cp_hqd_vmid;
	uint32_t cp_hqd_persistent_state;
	uint32_t cp_hqd_pipe_priority;
	uint32_t cp_hqd_queue_priority;
	uint32_t cp_hqd_quantum;
	uint32_t cp_hqd_pq_base_lo;
	uint32_t cp_hqd_pq_base_hi;
	uint32_t cp_hqd_pq_rptr;
	uint32_t cp_hqd_pq_rptr_report_addr_lo;
	uint32_t cp_hqd_pq_rptr_report_addr_hi;
	uint32_t cp_hqd_pq_wptr_poll_addr_lo;
	uint32_t cp_hqd_pq_wptr_poll_addr_hi;
	uint32_t cp_hqd_pq_doorbell_control;
	uint32_t reserved_144;
	uint32_t cp_hqd_pq_control;
	uint32_t cp_hqd_ib_base_addr_lo;
	uint32_t cp_hqd_ib_base_addr_hi;
	uint32_t cp_hqd_ib_rptr;
	uint32_t cp_hqd_ib_control;
	uint32_t cp_hqd_iq_timer;
	uint32_t cp_hqd_iq_rptr;
	uint32_t cp_hqd_dequeue_request;
	uint32_t cp_hqd_dma_offload;
	uint32_t cp_hqd_sema_cmd;
	uint32_t cp_hqd_msg_type;
	uint32_t cp_hqd_atomic0_preop_lo;
	uint32_t cp_hqd_atomic0_preop_hi;
	uint32_t cp_hqd_atomic1_preop_lo;
	uint32_t cp_hqd_atomic1_preop_hi;
	uint32_t cp_hqd_hq_status0;
	uint32_t cp_hqd_hq_control0;
	uint32_t cp_mqd_control;
	uint32_t cp_hqd_hq_status1;
	uint32_t cp_hqd_hq_control1;
	uint32_t cp_hqd_eop_base_addr_lo;
	uint32_t cp_hqd_eop_base_addr_hi;
	uint32_t cp_hqd_eop_control;
	uint32_t cp_hqd_eop_rptr;
	uint32_t cp_hqd_eop_wptr;
	uint32_t cp_hqd_eop_done_events;
	uint32_t cp_hqd_ctx_save_base_addr_lo;
	uint32_t cp_hqd_ctx_save_base_addr_hi;
	uint32_t cp_hqd_ctx_save_control;
	uint32_t cp_hqd_cntl_stack_offset;
	uint32_t cp_hqd_cntl_stack_size;
	uint32_t cp_hqd_wg_state_offset;
	uint32_t cp_hqd_ctx_save_size;
	uint32_t cp_hqd_gds_resource_state;
	uint32_t cp_hqd_error;
	uint32_t cp_hqd_eop_wptr_mem;
	uint32_t cp_hqd_aql_control;
	uint32_t cp_hqd_pq_wptr_lo;
	uint32_t cp_hqd_pq_wptr_hi;
	uint32_t reserved_184;
	uint32_t reserved_185;
	uint32_t reserved_186;
	uint32_t reserved_187;
	uint32_t reserved_188;
	uint32_t reserved_189;
	uint32_t reserved_190;
	uint32_t reserved_191;
	uint32_t iqtimer_pkt_header;
	uint32_t iqtimer_pkt_dw0;
	uint32_t iqtimer_pkt_dw1;
	uint32_t iqtimer_pkt_dw2;
	uint32_t iqtimer_pkt_dw3;
	uint32_t iqtimer_pkt_dw4;
	uint32_t iqtimer_pkt_dw5;
	uint32_t iqtimer_pkt_dw6;
	uint32_t iqtimer_pkt_dw7;
	uint32_t iqtimer_pkt_dw8;
	uint32_t iqtimer_pkt_dw9;
	uint32_t iqtimer_pkt_dw10;
	uint32_t iqtimer_pkt_dw11;
	uint32_t iqtimer_pkt_dw12;
	uint32_t iqtimer_pkt_dw13;
	uint32_t iqtimer_pkt_dw14;
	uint32_t iqtimer_pkt_dw15;
	uint32_t iqtimer_pkt_dw16;
	uint32_t iqtimer_pkt_dw17;
	uint32_t iqtimer_pkt_dw18;
	uint32_t iqtimer_pkt_dw19;
	uint32_t iqtimer_pkt_dw20;
	uint32_t iqtimer_pkt_dw21;
	uint32_t iqtimer_pkt_dw22;
	uint32_t iqtimer_pkt_dw23;
	uint32_t iqtimer_pkt_dw24;
	uint32_t iqtimer_pkt_dw25;
	uint32_t iqtimer_pkt_dw26;
	uint32_t iqtimer_pkt_dw27;
	uint32_t iqtimer_pkt_dw28;
	uint32_t iqtimer_pkt_dw29;
	uint32_t iqtimer_pkt_dw30;
	uint32_t iqtimer_pkt_dw31;
	union {
		struct {
			uint32_t reserved_225;
			uint32_t reserved_226;
		};
		struct {
			uint32_t pm4_target_xcc_in_xcp; // offset: 225  (0xE1)
			uint32_t cp_mqd_stride_size; // offset: 226  (0xE2)
		};
	};
	uint32_t reserved_227;
	uint32_t set_resources_header;
	uint32_t set_resources_dw1;
	uint32_t set_resources_dw2;
	uint32_t set_resources_dw3;
	uint32_t set_resources_dw4;
	uint32_t set_resources_dw5;
	uint32_t set_resources_dw6;
	uint32_t set_resources_dw7;
	uint32_t reserved_236;
	uint32_t reserved_237;
	uint32_t reserved_238;
	uint32_t reserved_239;
	uint32_t queue_doorbell_id0;
	uint32_t queue_doorbell_id1;
	uint32_t queue_doorbell_id2;
	uint32_t queue_doorbell_id3;
	uint32_t queue_doorbell_id4;
	uint32_t queue_doorbell_id5;
	uint32_t queue_doorbell_id6;
	uint32_t queue_doorbell_id7;
	uint32_t queue_doorbell_id8;
	uint32_t queue_doorbell_id9;
	uint32_t queue_doorbell_id10;
	uint32_t queue_doorbell_id11;
	uint32_t queue_doorbell_id12;
	uint32_t queue_doorbell_id13;
	uint32_t queue_doorbell_id14;
	uint32_t queue_doorbell_id15;
	uint32_t reserved_256;
	uint32_t reserved_257;
	uint32_t reserved_258;
	uint32_t reserved_259;
	uint32_t reserved_260;
	uint32_t reserved_261;
	uint32_t reserved_262;
	uint32_t reserved_263;
	uint32_t reserved_264;
	uint32_t reserved_265;
	uint32_t reserved_266;
	uint32_t reserved_267;
	uint32_t reserved_268;
	uint32_t reserved_269;
	uint32_t reserved_270;
	uint32_t reserved_271;
	uint32_t reserved_272;
	uint32_t reserved_273;
	uint32_t reserved_274;
	uint32_t reserved_275;
	uint32_t reserved_276;
	uint32_t reserved_277;
	uint32_t reserved_278;
	uint32_t reserved_279;
	uint32_t reserved_280;
	uint32_t reserved_281;
	uint32_t reserved_282;
	uint32_t reserved_283;
	uint32_t reserved_284;
	uint32_t reserved_285;
	uint32_t reserved_286;
	uint32_t reserved_287;
	uint32_t reserved_288;
	uint32_t reserved_289;
	uint32_t reserved_290;
	uint32_t reserved_291;
	uint32_t reserved_292;
	uint32_t reserved_293;
	uint32_t reserved_294;
	uint32_t reserved_295;
	uint32_t reserved_296;
	uint32_t reserved_297;
	uint32_t reserved_298;
	uint32_t reserved_299;
	uint32_t reserved_300;
	uint32_t reserved_301;
	uint32_t reserved_302;
	uint32_t reserved_303;
	uint32_t reserved_304;
	uint32_t reserved_305;
	uint32_t reserved_306;
	uint32_t reserved_307;
	uint32_t reserved_308;
	uint32_t reserved_309;
	uint32_t reserved_310;
	uint32_t reserved_311;
	uint32_t reserved_312;
	uint32_t reserved_313;
	uint32_t reserved_314;
	uint32_t reserved_315;
	uint32_t reserved_316;
	uint32_t reserved_317;
	uint32_t reserved_318;
	uint32_t reserved_319;
	uint32_t reserved_320;
	uint32_t reserved_321;
	uint32_t reserved_322;
	uint32_t reserved_323;
	uint32_t reserved_324;
	uint32_t reserved_325;
	uint32_t reserved_326;
	uint32_t reserved_327;
	uint32_t reserved_328;
	uint32_t reserved_329;
	uint32_t reserved_330;
	uint32_t reserved_331;
	uint32_t reserved_332;
	uint32_t reserved_333;
	uint32_t reserved_334;
	uint32_t reserved_335;
	uint32_t reserved_336;
	uint32_t reserved_337;
	uint32_t reserved_338;
	uint32_t reserved_339;
	uint32_t reserved_340;
	uint32_t reserved_341;
	uint32_t reserved_342;
	uint32_t reserved_343;
	uint32_t reserved_344;
	uint32_t reserved_345;
	uint32_t reserved_346;
	uint32_t reserved_347;
	uint32_t reserved_348;
	uint32_t reserved_349;
	uint32_t reserved_350;
	uint32_t reserved_351;
	uint32_t reserved_352;
	uint32_t reserved_353;
	uint32_t reserved_354;
	uint32_t reserved_355;
	uint32_t reserved_356;
	uint32_t reserved_357;
	uint32_t reserved_358;
	uint32_t reserved_359;
	uint32_t reserved_360;
	uint32_t reserved_361;
	uint32_t reserved_362;
	uint32_t reserved_363;
	uint32_t reserved_364;
	uint32_t reserved_365;
	uint32_t reserved_366;
	uint32_t reserved_367;
	uint32_t reserved_368;
	uint32_t reserved_369;
	uint32_t reserved_370;
	uint32_t reserved_371;
	uint32_t reserved_372;
	uint32_t reserved_373;
	uint32_t reserved_374;
	uint32_t reserved_375;
	uint32_t reserved_376;
	uint32_t reserved_377;
	uint32_t reserved_378;
	uint32_t reserved_379;
	uint32_t reserved_380;
	uint32_t reserved_381;
	uint32_t reserved_382;
	uint32_t reserved_383;
	uint32_t reserved_384;
	uint32_t reserved_385;
	uint32_t reserved_386;
	uint32_t reserved_387;
	uint32_t reserved_388;
	uint32_t reserved_389;
	uint32_t reserved_390;
	uint32_t reserved_391;
	uint32_t reserved_392;
	uint32_t reserved_393;
	uint32_t reserved_394;
	uint32_t reserved_395;
	uint32_t reserved_396;
	uint32_t reserved_397;
	uint32_t reserved_398;
	uint32_t reserved_399;
	uint32_t reserved_400;
	uint32_t reserved_401;
	uint32_t reserved_402;
	uint32_t reserved_403;
	uint32_t reserved_404;
	uint32_t reserved_405;
	uint32_t reserved_406;
	uint32_t reserved_407;
	uint32_t reserved_408;
	uint32_t reserved_409;
	uint32_t reserved_410;
	uint32_t reserved_411;
	uint32_t reserved_412;
	uint32_t reserved_413;
	uint32_t reserved_414;
	uint32_t reserved_415;
	uint32_t reserved_416;
	uint32_t reserved_417;
	uint32_t reserved_418;
	uint32_t reserved_419;
	uint32_t reserved_420;
	uint32_t reserved_421;
	uint32_t reserved_422;
	uint32_t reserved_423;
	uint32_t reserved_424;
	uint32_t reserved_425;
	uint32_t reserved_426;
	uint32_t reserved_427;
	uint32_t reserved_428;
	uint32_t reserved_429;
	uint32_t reserved_430;
	uint32_t reserved_431;
	uint32_t reserved_432;
	uint32_t reserved_433;
	uint32_t reserved_434;
	uint32_t reserved_435;
	uint32_t reserved_436;
	uint32_t reserved_437;
	uint32_t reserved_438;
	uint32_t reserved_439;
	uint32_t reserved_440;
	uint32_t reserved_441;
	uint32_t reserved_442;
	uint32_t reserved_443;
	uint32_t reserved_444;
	uint32_t reserved_445;
	uint32_t reserved_446;
	uint32_t reserved_447;
	uint32_t reserved_448;
	uint32_t reserved_449;
	uint32_t reserved_450;
	uint32_t reserved_451;
	uint32_t reserved_452;
	uint32_t reserved_453;
	uint32_t reserved_454;
	uint32_t reserved_455;
	uint32_t reserved_456;
	uint32_t reserved_457;
	uint32_t reserved_458;
	uint32_t reserved_459;
	uint32_t reserved_460;
	uint32_t reserved_461;
	uint32_t reserved_462;
	uint32_t reserved_463;
	uint32_t reserved_464;
	uint32_t reserved_465;
	uint32_t reserved_466;
	uint32_t reserved_467;
	uint32_t reserved_468;
	uint32_t reserved_469;
	uint32_t reserved_470;
	uint32_t reserved_471;
	uint32_t reserved_472;
	uint32_t reserved_473;
	uint32_t reserved_474;
	uint32_t reserved_475;
	uint32_t reserved_476;
	uint32_t reserved_477;
	uint32_t reserved_478;
	uint32_t reserved_479;
	uint32_t reserved_480;
	uint32_t reserved_481;
	uint32_t reserved_482;
	uint32_t reserved_483;
	uint32_t reserved_484;
	uint32_t reserved_485;
	uint32_t reserved_486;
	uint32_t reserved_487;
	uint32_t reserved_488;
	uint32_t reserved_489;
	uint32_t reserved_490;
	uint32_t reserved_491;
	uint32_t reserved_492;
	uint32_t reserved_493;
	uint32_t reserved_494;
	uint32_t reserved_495;
	uint32_t reserved_496;
	uint32_t reserved_497;
	uint32_t reserved_498;
	uint32_t reserved_499;
	uint32_t reserved_500;
	uint32_t reserved_501;
	uint32_t reserved_502;
	uint32_t reserved_503;
	uint32_t reserved_504;
	uint32_t reserved_505;
	uint32_t reserved_506;
	uint32_t reserved_507;
	uint32_t reserved_508;
	uint32_t reserved_509;
	uint32_t reserved_510;
	uint32_t reserved_511;
};

struct v9_mqd_allocation {
	struct v9_mqd mqd;
	uint32_t wptr_poll_mem;
	uint32_t rptr_report_mem;
	uint32_t dynamic_cu_mask;
	uint32_t dynamic_rb_mask;
};

/* from vega10 all CSA format is shifted to chain ib compatible mode */
struct v9_ce_ib_state {
    /* section of non chained ib part */
    uint32_t ce_ib_completion_status;
    uint32_t ce_constegnine_count;
    uint32_t ce_ibOffset_ib1;
    uint32_t ce_ibOffset_ib2;

    /* section of chained ib */
    uint32_t ce_chainib_addrlo_ib1;
    uint32_t ce_chainib_addrlo_ib2;
    uint32_t ce_chainib_addrhi_ib1;
    uint32_t ce_chainib_addrhi_ib2;
    uint32_t ce_chainib_size_ib1;
    uint32_t ce_chainib_size_ib2;
}; /* total 10 DWORD */

struct v9_de_ib_state {
    /* section of non chained ib part */
    uint32_t ib_completion_status;
    uint32_t de_constEngine_count;
    uint32_t ib_offset_ib1;
    uint32_t ib_offset_ib2;

    /* section of chained ib */
    uint32_t chain_ib_addrlo_ib1;
    uint32_t chain_ib_addrlo_ib2;
    uint32_t chain_ib_addrhi_ib1;
    uint32_t chain_ib_addrhi_ib2;
    uint32_t chain_ib_size_ib1;
    uint32_t chain_ib_size_ib2;

    /* section of non chained ib part */
    uint32_t preamble_begin_ib1;
    uint32_t preamble_begin_ib2;
    uint32_t preamble_end_ib1;
    uint32_t preamble_end_ib2;

    /* section of chained ib */
    uint32_t chain_ib_pream_addrlo_ib1;
    uint32_t chain_ib_pream_addrlo_ib2;
    uint32_t chain_ib_pream_addrhi_ib1;
    uint32_t chain_ib_pream_addrhi_ib2;

    /* section of non chained ib part */
    uint32_t draw_indirect_baseLo;
    uint32_t draw_indirect_baseHi;
    uint32_t disp_indirect_baseLo;
    uint32_t disp_indirect_baseHi;
    uint32_t gds_backup_addrlo;
    uint32_t gds_backup_addrhi;
    uint32_t index_base_addrlo;
    uint32_t index_base_addrhi;
    uint32_t sample_cntl;
}; /* Total of 27 DWORD */

struct v9_gfx_meta_data {
    /* 10 DWORD, address must be 4KB aligned */
    struct v9_ce_ib_state ce_payload;
    uint32_t reserved1[54];
    /* 27 DWORD, address must be 64B aligned */
    struct v9_de_ib_state de_payload;
    /* PFP IB base address which get pre-empted */
    uint32_t DeIbBaseAddrLo;
    uint32_t DeIbBaseAddrHi;
    uint32_t reserved2[931];
}; /* Total of 4K Bytes */

#endif /* V9_STRUCTS_H_ */
