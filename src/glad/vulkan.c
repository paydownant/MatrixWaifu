/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkan.h>

#ifndef GLAD_IMPL_UTIL_C_
#define GLAD_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLAD_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLAD_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLAD_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLAD_VK_VERSION_1_0 = 0;
int GLAD_VK_VERSION_1_1 = 0;
int GLAD_VK_VERSION_1_2 = 0;
int GLAD_VK_VERSION_1_3 = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLAD_VK_AMDX_shader_enqueue = 0;

#endif
int GLAD_VK_AMD_anti_lag = 0;
int GLAD_VK_AMD_buffer_marker = 0;
int GLAD_VK_AMD_device_coherent_memory = 0;
int GLAD_VK_AMD_display_native_hdr = 0;
int GLAD_VK_AMD_draw_indirect_count = 0;
int GLAD_VK_AMD_gcn_shader = 0;
int GLAD_VK_AMD_gpu_shader_half_float = 0;
int GLAD_VK_AMD_gpu_shader_int16 = 0;
int GLAD_VK_AMD_memory_overallocation_behavior = 0;
int GLAD_VK_AMD_mixed_attachment_samples = 0;
int GLAD_VK_AMD_negative_viewport_height = 0;
int GLAD_VK_AMD_pipeline_compiler_control = 0;
int GLAD_VK_AMD_rasterization_order = 0;
int GLAD_VK_AMD_shader_ballot = 0;
int GLAD_VK_AMD_shader_core_properties = 0;
int GLAD_VK_AMD_shader_core_properties2 = 0;
int GLAD_VK_AMD_shader_early_and_late_fragment_tests = 0;
int GLAD_VK_AMD_shader_explicit_vertex_parameter = 0;
int GLAD_VK_AMD_shader_fragment_mask = 0;
int GLAD_VK_AMD_shader_image_load_store_lod = 0;
int GLAD_VK_AMD_shader_info = 0;
int GLAD_VK_AMD_shader_trinary_minmax = 0;
int GLAD_VK_AMD_texture_gather_bias_lod = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_ANDROID_external_format_resolve = 0;

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_ANDROID_external_memory_android_hardware_buffer = 0;

#endif
int GLAD_VK_ARM_rasterization_order_attachment_access = 0;
int GLAD_VK_ARM_render_pass_striped = 0;
int GLAD_VK_ARM_scheduling_controls = 0;
int GLAD_VK_ARM_shader_core_builtins = 0;
int GLAD_VK_ARM_shader_core_properties = 0;
int GLAD_VK_EXT_4444_formats = 0;
int GLAD_VK_EXT_acquire_drm_display = 0;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
int GLAD_VK_EXT_acquire_xlib_display = 0;

#endif
int GLAD_VK_EXT_astc_decode_mode = 0;
int GLAD_VK_EXT_attachment_feedback_loop_dynamic_state = 0;
int GLAD_VK_EXT_attachment_feedback_loop_layout = 0;
int GLAD_VK_EXT_blend_operation_advanced = 0;
int GLAD_VK_EXT_border_color_swizzle = 0;
int GLAD_VK_EXT_buffer_device_address = 0;
int GLAD_VK_EXT_calibrated_timestamps = 0;
int GLAD_VK_EXT_color_write_enable = 0;
int GLAD_VK_EXT_conditional_rendering = 0;
int GLAD_VK_EXT_conservative_rasterization = 0;
int GLAD_VK_EXT_custom_border_color = 0;
int GLAD_VK_EXT_debug_marker = 0;
int GLAD_VK_EXT_debug_report = 0;
int GLAD_VK_EXT_debug_utils = 0;
int GLAD_VK_EXT_depth_bias_control = 0;
int GLAD_VK_EXT_depth_clamp_zero_one = 0;
int GLAD_VK_EXT_depth_clip_control = 0;
int GLAD_VK_EXT_depth_clip_enable = 0;
int GLAD_VK_EXT_depth_range_unrestricted = 0;
int GLAD_VK_EXT_descriptor_buffer = 0;
int GLAD_VK_EXT_descriptor_indexing = 0;
int GLAD_VK_EXT_device_address_binding_report = 0;
int GLAD_VK_EXT_device_fault = 0;
int GLAD_VK_EXT_device_memory_report = 0;
int GLAD_VK_EXT_direct_mode_display = 0;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
int GLAD_VK_EXT_directfb_surface = 0;

#endif
int GLAD_VK_EXT_discard_rectangles = 0;
int GLAD_VK_EXT_display_control = 0;
int GLAD_VK_EXT_display_surface_counter = 0;
int GLAD_VK_EXT_dynamic_rendering_unused_attachments = 0;
int GLAD_VK_EXT_extended_dynamic_state = 0;
int GLAD_VK_EXT_extended_dynamic_state2 = 0;
int GLAD_VK_EXT_extended_dynamic_state3 = 0;
int GLAD_VK_EXT_external_memory_acquire_unmodified = 0;
int GLAD_VK_EXT_external_memory_dma_buf = 0;
int GLAD_VK_EXT_external_memory_host = 0;
int GLAD_VK_EXT_filter_cubic = 0;
int GLAD_VK_EXT_fragment_density_map = 0;
int GLAD_VK_EXT_fragment_density_map2 = 0;
int GLAD_VK_EXT_fragment_shader_interlock = 0;
int GLAD_VK_EXT_frame_boundary = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_EXT_full_screen_exclusive = 0;

#endif
int GLAD_VK_EXT_global_priority = 0;
int GLAD_VK_EXT_global_priority_query = 0;
int GLAD_VK_EXT_graphics_pipeline_library = 0;
int GLAD_VK_EXT_hdr_metadata = 0;
int GLAD_VK_EXT_headless_surface = 0;
int GLAD_VK_EXT_host_image_copy = 0;
int GLAD_VK_EXT_host_query_reset = 0;
int GLAD_VK_EXT_image_2d_view_of_3d = 0;
int GLAD_VK_EXT_image_compression_control = 0;
int GLAD_VK_EXT_image_compression_control_swapchain = 0;
int GLAD_VK_EXT_image_drm_format_modifier = 0;
int GLAD_VK_EXT_image_robustness = 0;
int GLAD_VK_EXT_image_sliced_view_of_3d = 0;
int GLAD_VK_EXT_image_view_min_lod = 0;
int GLAD_VK_EXT_index_type_uint8 = 0;
int GLAD_VK_EXT_inline_uniform_block = 0;
int GLAD_VK_EXT_layer_settings = 0;
int GLAD_VK_EXT_legacy_dithering = 0;
int GLAD_VK_EXT_legacy_vertex_attributes = 0;
int GLAD_VK_EXT_line_rasterization = 0;
int GLAD_VK_EXT_load_store_op_none = 0;
int GLAD_VK_EXT_map_memory_placed = 0;
int GLAD_VK_EXT_memory_budget = 0;
int GLAD_VK_EXT_memory_priority = 0;
int GLAD_VK_EXT_mesh_shader = 0;
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLAD_VK_EXT_metal_objects = 0;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLAD_VK_EXT_metal_surface = 0;

#endif
int GLAD_VK_EXT_multi_draw = 0;
int GLAD_VK_EXT_multisampled_render_to_single_sampled = 0;
int GLAD_VK_EXT_mutable_descriptor_type = 0;
int GLAD_VK_EXT_nested_command_buffer = 0;
int GLAD_VK_EXT_non_seamless_cube_map = 0;
int GLAD_VK_EXT_opacity_micromap = 0;
int GLAD_VK_EXT_pageable_device_local_memory = 0;
int GLAD_VK_EXT_pci_bus_info = 0;
int GLAD_VK_EXT_physical_device_drm = 0;
int GLAD_VK_EXT_pipeline_creation_cache_control = 0;
int GLAD_VK_EXT_pipeline_creation_feedback = 0;
int GLAD_VK_EXT_pipeline_library_group_handles = 0;
int GLAD_VK_EXT_pipeline_properties = 0;
int GLAD_VK_EXT_pipeline_protected_access = 0;
int GLAD_VK_EXT_pipeline_robustness = 0;
int GLAD_VK_EXT_post_depth_coverage = 0;
int GLAD_VK_EXT_primitive_topology_list_restart = 0;
int GLAD_VK_EXT_primitives_generated_query = 0;
int GLAD_VK_EXT_private_data = 0;
int GLAD_VK_EXT_provoking_vertex = 0;
int GLAD_VK_EXT_queue_family_foreign = 0;
int GLAD_VK_EXT_rasterization_order_attachment_access = 0;
int GLAD_VK_EXT_rgba10x6_formats = 0;
int GLAD_VK_EXT_robustness2 = 0;
int GLAD_VK_EXT_sample_locations = 0;
int GLAD_VK_EXT_sampler_filter_minmax = 0;
int GLAD_VK_EXT_scalar_block_layout = 0;
int GLAD_VK_EXT_separate_stencil_usage = 0;
int GLAD_VK_EXT_shader_atomic_float = 0;
int GLAD_VK_EXT_shader_atomic_float2 = 0;
int GLAD_VK_EXT_shader_demote_to_helper_invocation = 0;
int GLAD_VK_EXT_shader_image_atomic_int64 = 0;
int GLAD_VK_EXT_shader_module_identifier = 0;
int GLAD_VK_EXT_shader_object = 0;
int GLAD_VK_EXT_shader_replicated_composites = 0;
int GLAD_VK_EXT_shader_stencil_export = 0;
int GLAD_VK_EXT_shader_subgroup_ballot = 0;
int GLAD_VK_EXT_shader_subgroup_vote = 0;
int GLAD_VK_EXT_shader_tile_image = 0;
int GLAD_VK_EXT_shader_viewport_index_layer = 0;
int GLAD_VK_EXT_subgroup_size_control = 0;
int GLAD_VK_EXT_subpass_merge_feedback = 0;
int GLAD_VK_EXT_surface_maintenance1 = 0;
int GLAD_VK_EXT_swapchain_colorspace = 0;
int GLAD_VK_EXT_swapchain_maintenance1 = 0;
int GLAD_VK_EXT_texel_buffer_alignment = 0;
int GLAD_VK_EXT_texture_compression_astc_hdr = 0;
int GLAD_VK_EXT_tooling_info = 0;
int GLAD_VK_EXT_transform_feedback = 0;
int GLAD_VK_EXT_validation_cache = 0;
int GLAD_VK_EXT_validation_features = 0;
int GLAD_VK_EXT_validation_flags = 0;
int GLAD_VK_EXT_vertex_attribute_divisor = 0;
int GLAD_VK_EXT_vertex_input_dynamic_state = 0;
int GLAD_VK_EXT_ycbcr_2plane_444_formats = 0;
int GLAD_VK_EXT_ycbcr_image_arrays = 0;
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLAD_VK_FUCHSIA_buffer_collection = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLAD_VK_FUCHSIA_external_memory = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLAD_VK_FUCHSIA_external_semaphore = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLAD_VK_FUCHSIA_imagepipe_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLAD_VK_GGP_frame_token = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLAD_VK_GGP_stream_descriptor_surface = 0;

#endif
int GLAD_VK_GOOGLE_decorate_string = 0;
int GLAD_VK_GOOGLE_display_timing = 0;
int GLAD_VK_GOOGLE_hlsl_functionality1 = 0;
int GLAD_VK_GOOGLE_surfaceless_query = 0;
int GLAD_VK_GOOGLE_user_type = 0;
int GLAD_VK_HUAWEI_cluster_culling_shader = 0;
int GLAD_VK_HUAWEI_invocation_mask = 0;
int GLAD_VK_HUAWEI_subpass_shading = 0;
int GLAD_VK_IMG_filter_cubic = 0;
int GLAD_VK_IMG_format_pvrtc = 0;
int GLAD_VK_IMG_relaxed_line_rasterization = 0;
int GLAD_VK_INTEL_performance_query = 0;
int GLAD_VK_INTEL_shader_integer_functions2 = 0;
int GLAD_VK_KHR_16bit_storage = 0;
int GLAD_VK_KHR_8bit_storage = 0;
int GLAD_VK_KHR_acceleration_structure = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLAD_VK_KHR_android_surface = 0;

#endif
int GLAD_VK_KHR_bind_memory2 = 0;
int GLAD_VK_KHR_buffer_device_address = 0;
int GLAD_VK_KHR_calibrated_timestamps = 0;
int GLAD_VK_KHR_cooperative_matrix = 0;
int GLAD_VK_KHR_copy_commands2 = 0;
int GLAD_VK_KHR_create_renderpass2 = 0;
int GLAD_VK_KHR_dedicated_allocation = 0;
int GLAD_VK_KHR_deferred_host_operations = 0;
int GLAD_VK_KHR_depth_stencil_resolve = 0;
int GLAD_VK_KHR_descriptor_update_template = 0;
int GLAD_VK_KHR_device_group = 0;
int GLAD_VK_KHR_device_group_creation = 0;
int GLAD_VK_KHR_display = 0;
int GLAD_VK_KHR_display_swapchain = 0;
int GLAD_VK_KHR_draw_indirect_count = 0;
int GLAD_VK_KHR_driver_properties = 0;
int GLAD_VK_KHR_dynamic_rendering = 0;
int GLAD_VK_KHR_dynamic_rendering_local_read = 0;
int GLAD_VK_KHR_external_fence = 0;
int GLAD_VK_KHR_external_fence_capabilities = 0;
int GLAD_VK_KHR_external_fence_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_fence_win32 = 0;

#endif
int GLAD_VK_KHR_external_memory = 0;
int GLAD_VK_KHR_external_memory_capabilities = 0;
int GLAD_VK_KHR_external_memory_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_memory_win32 = 0;

#endif
int GLAD_VK_KHR_external_semaphore = 0;
int GLAD_VK_KHR_external_semaphore_capabilities = 0;
int GLAD_VK_KHR_external_semaphore_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_external_semaphore_win32 = 0;

#endif
int GLAD_VK_KHR_format_feature_flags2 = 0;
int GLAD_VK_KHR_fragment_shader_barycentric = 0;
int GLAD_VK_KHR_fragment_shading_rate = 0;
int GLAD_VK_KHR_get_display_properties2 = 0;
int GLAD_VK_KHR_get_memory_requirements2 = 0;
int GLAD_VK_KHR_get_physical_device_properties2 = 0;
int GLAD_VK_KHR_get_surface_capabilities2 = 0;
int GLAD_VK_KHR_global_priority = 0;
int GLAD_VK_KHR_image_format_list = 0;
int GLAD_VK_KHR_imageless_framebuffer = 0;
int GLAD_VK_KHR_incremental_present = 0;
int GLAD_VK_KHR_index_type_uint8 = 0;
int GLAD_VK_KHR_line_rasterization = 0;
int GLAD_VK_KHR_load_store_op_none = 0;
int GLAD_VK_KHR_maintenance1 = 0;
int GLAD_VK_KHR_maintenance2 = 0;
int GLAD_VK_KHR_maintenance3 = 0;
int GLAD_VK_KHR_maintenance4 = 0;
int GLAD_VK_KHR_maintenance5 = 0;
int GLAD_VK_KHR_maintenance6 = 0;
int GLAD_VK_KHR_maintenance7 = 0;
int GLAD_VK_KHR_map_memory2 = 0;
int GLAD_VK_KHR_multiview = 0;
int GLAD_VK_KHR_performance_query = 0;
int GLAD_VK_KHR_pipeline_executable_properties = 0;
int GLAD_VK_KHR_pipeline_library = 0;
int GLAD_VK_KHR_portability_enumeration = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLAD_VK_KHR_portability_subset = 0;

#endif
int GLAD_VK_KHR_present_id = 0;
int GLAD_VK_KHR_present_wait = 0;
int GLAD_VK_KHR_push_descriptor = 0;
int GLAD_VK_KHR_ray_query = 0;
int GLAD_VK_KHR_ray_tracing_maintenance1 = 0;
int GLAD_VK_KHR_ray_tracing_pipeline = 0;
int GLAD_VK_KHR_ray_tracing_position_fetch = 0;
int GLAD_VK_KHR_relaxed_block_layout = 0;
int GLAD_VK_KHR_sampler_mirror_clamp_to_edge = 0;
int GLAD_VK_KHR_sampler_ycbcr_conversion = 0;
int GLAD_VK_KHR_separate_depth_stencil_layouts = 0;
int GLAD_VK_KHR_shader_atomic_int64 = 0;
int GLAD_VK_KHR_shader_clock = 0;
int GLAD_VK_KHR_shader_draw_parameters = 0;
int GLAD_VK_KHR_shader_expect_assume = 0;
int GLAD_VK_KHR_shader_float16_int8 = 0;
int GLAD_VK_KHR_shader_float_controls = 0;
int GLAD_VK_KHR_shader_float_controls2 = 0;
int GLAD_VK_KHR_shader_integer_dot_product = 0;
int GLAD_VK_KHR_shader_maximal_reconvergence = 0;
int GLAD_VK_KHR_shader_non_semantic_info = 0;
int GLAD_VK_KHR_shader_quad_control = 0;
int GLAD_VK_KHR_shader_relaxed_extended_instruction = 0;
int GLAD_VK_KHR_shader_subgroup_extended_types = 0;
int GLAD_VK_KHR_shader_subgroup_rotate = 0;
int GLAD_VK_KHR_shader_subgroup_uniform_control_flow = 0;
int GLAD_VK_KHR_shader_terminate_invocation = 0;
int GLAD_VK_KHR_shared_presentable_image = 0;
int GLAD_VK_KHR_spirv_1_4 = 0;
int GLAD_VK_KHR_storage_buffer_storage_class = 0;
int GLAD_VK_KHR_surface = 0;
int GLAD_VK_KHR_surface_protected_capabilities = 0;
int GLAD_VK_KHR_swapchain = 0;
int GLAD_VK_KHR_swapchain_mutable_format = 0;
int GLAD_VK_KHR_synchronization2 = 0;
int GLAD_VK_KHR_timeline_semaphore = 0;
int GLAD_VK_KHR_uniform_buffer_standard_layout = 0;
int GLAD_VK_KHR_variable_pointers = 0;
int GLAD_VK_KHR_vertex_attribute_divisor = 0;
int GLAD_VK_KHR_video_decode_av1 = 0;
int GLAD_VK_KHR_video_decode_h264 = 0;
int GLAD_VK_KHR_video_decode_h265 = 0;
int GLAD_VK_KHR_video_decode_queue = 0;
int GLAD_VK_KHR_video_encode_h264 = 0;
int GLAD_VK_KHR_video_encode_h265 = 0;
int GLAD_VK_KHR_video_encode_queue = 0;
int GLAD_VK_KHR_video_maintenance1 = 0;
int GLAD_VK_KHR_video_queue = 0;
int GLAD_VK_KHR_vulkan_memory_model = 0;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
int GLAD_VK_KHR_wayland_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_keyed_mutex = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_KHR_win32_surface = 0;

#endif
int GLAD_VK_KHR_workgroup_memory_explicit_layout = 0;
#if defined(VK_USE_PLATFORM_XCB_KHR)
int GLAD_VK_KHR_xcb_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
int GLAD_VK_KHR_xlib_surface = 0;

#endif
int GLAD_VK_KHR_zero_initialize_workgroup_memory = 0;
int GLAD_VK_LUNARG_direct_driver_loading = 0;
int GLAD_VK_MESA_image_alignment_control = 0;
int GLAD_VK_MSFT_layered_driver = 0;
#if defined(VK_USE_PLATFORM_IOS_MVK)
int GLAD_VK_MVK_ios_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
int GLAD_VK_MVK_macos_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
int GLAD_VK_NN_vi_surface = 0;

#endif
int GLAD_VK_NVX_binary_import = 0;
int GLAD_VK_NVX_image_view_handle = 0;
int GLAD_VK_NVX_multiview_per_view_attributes = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_acquire_winrt_display = 0;

#endif
int GLAD_VK_NV_clip_space_w_scaling = 0;
int GLAD_VK_NV_command_buffer_inheritance = 0;
int GLAD_VK_NV_compute_shader_derivatives = 0;
int GLAD_VK_NV_cooperative_matrix = 0;
int GLAD_VK_NV_copy_memory_indirect = 0;
int GLAD_VK_NV_corner_sampled_image = 0;
int GLAD_VK_NV_coverage_reduction_mode = 0;
int GLAD_VK_NV_cuda_kernel_launch = 0;
int GLAD_VK_NV_dedicated_allocation = 0;
int GLAD_VK_NV_dedicated_allocation_image_aliasing = 0;
int GLAD_VK_NV_descriptor_pool_overallocation = 0;
int GLAD_VK_NV_device_diagnostic_checkpoints = 0;
int GLAD_VK_NV_device_diagnostics_config = 0;
int GLAD_VK_NV_device_generated_commands = 0;
int GLAD_VK_NV_device_generated_commands_compute = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLAD_VK_NV_displacement_micromap = 0;

#endif
int GLAD_VK_NV_extended_sparse_address_space = 0;
int GLAD_VK_NV_external_memory = 0;
int GLAD_VK_NV_external_memory_capabilities = 0;
int GLAD_VK_NV_external_memory_rdma = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_external_memory_win32 = 0;

#endif
int GLAD_VK_NV_fill_rectangle = 0;
int GLAD_VK_NV_fragment_coverage_to_color = 0;
int GLAD_VK_NV_fragment_shader_barycentric = 0;
int GLAD_VK_NV_fragment_shading_rate_enums = 0;
int GLAD_VK_NV_framebuffer_mixed_samples = 0;
int GLAD_VK_NV_geometry_shader_passthrough = 0;
int GLAD_VK_NV_glsl_shader = 0;
int GLAD_VK_NV_inherited_viewport_scissor = 0;
int GLAD_VK_NV_linear_color_attachment = 0;
int GLAD_VK_NV_low_latency = 0;
int GLAD_VK_NV_low_latency2 = 0;
int GLAD_VK_NV_memory_decompression = 0;
int GLAD_VK_NV_mesh_shader = 0;
int GLAD_VK_NV_optical_flow = 0;
int GLAD_VK_NV_per_stage_descriptor_set = 0;
int GLAD_VK_NV_present_barrier = 0;
int GLAD_VK_NV_raw_access_chains = 0;
int GLAD_VK_NV_ray_tracing = 0;
int GLAD_VK_NV_ray_tracing_invocation_reorder = 0;
int GLAD_VK_NV_ray_tracing_motion_blur = 0;
int GLAD_VK_NV_ray_tracing_validation = 0;
int GLAD_VK_NV_representative_fragment_test = 0;
int GLAD_VK_NV_sample_mask_override_coverage = 0;
int GLAD_VK_NV_scissor_exclusive = 0;
int GLAD_VK_NV_shader_atomic_float16_vector = 0;
int GLAD_VK_NV_shader_image_footprint = 0;
int GLAD_VK_NV_shader_sm_builtins = 0;
int GLAD_VK_NV_shader_subgroup_partitioned = 0;
int GLAD_VK_NV_shading_rate_image = 0;
int GLAD_VK_NV_viewport_array2 = 0;
int GLAD_VK_NV_viewport_swizzle = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_win32_keyed_mutex = 0;

#endif
int GLAD_VK_QCOM_filter_cubic_clamp = 0;
int GLAD_VK_QCOM_filter_cubic_weights = 0;
int GLAD_VK_QCOM_fragment_density_map_offset = 0;
int GLAD_VK_QCOM_image_processing = 0;
int GLAD_VK_QCOM_image_processing2 = 0;
int GLAD_VK_QCOM_multiview_per_view_render_areas = 0;
int GLAD_VK_QCOM_multiview_per_view_viewports = 0;
int GLAD_VK_QCOM_render_pass_shader_resolve = 0;
int GLAD_VK_QCOM_render_pass_store_ops = 0;
int GLAD_VK_QCOM_render_pass_transform = 0;
int GLAD_VK_QCOM_rotated_copy_commands = 0;
int GLAD_VK_QCOM_tile_properties = 0;
int GLAD_VK_QCOM_ycbcr_degamma = 0;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
int GLAD_VK_QNX_external_memory_screen_buffer = 0;

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
int GLAD_VK_QNX_screen_surface = 0;

#endif
int GLAD_VK_SEC_amigo_profiling = 0;
int GLAD_VK_VALVE_descriptor_set_host_mapping = 0;
int GLAD_VK_VALVE_mutable_descriptor_type = 0;


static void _pre_call_vulkan_callback_default(const char *name, GLADapiproc apiproc, int len_args, ...) {
    GLAD_UNUSED(name);
    GLAD_UNUSED(apiproc);
    GLAD_UNUSED(len_args);
}
static void _post_call_vulkan_callback_default(void *ret, const char *name, GLADapiproc apiproc, int len_args, ...) {
    GLAD_UNUSED(ret);
    GLAD_UNUSED(name);
    GLAD_UNUSED(apiproc);
    GLAD_UNUSED(len_args);
}

static GLADprecallback _pre_call_vulkan_callback = _pre_call_vulkan_callback_default;
void gladSetVulkanPreCallback(GLADprecallback cb) {
    _pre_call_vulkan_callback = cb;
}
static GLADpostcallback _post_call_vulkan_callback = _post_call_vulkan_callback_default;
void gladSetVulkanPostCallback(GLADpostcallback cb) {
    _post_call_vulkan_callback = cb;
}

PFN_vkAcquireDrmDisplayEXT glad_vkAcquireDrmDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireDrmDisplayEXT", (GLADapiproc) glad_vkAcquireDrmDisplayEXT, 3, physicalDevice, drmFd, display);
    ret = glad_vkAcquireDrmDisplayEXT(physicalDevice, drmFd, display);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireDrmDisplayEXT", (GLADapiproc) glad_vkAcquireDrmDisplayEXT, 3, physicalDevice, drmFd, display);
    return ret;
}
PFN_vkAcquireDrmDisplayEXT glad_debug_vkAcquireDrmDisplayEXT = glad_debug_impl_vkAcquireDrmDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireFullScreenExclusiveModeEXT glad_vkAcquireFullScreenExclusiveModeEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireFullScreenExclusiveModeEXT", (GLADapiproc) glad_vkAcquireFullScreenExclusiveModeEXT, 2, device, swapchain);
    ret = glad_vkAcquireFullScreenExclusiveModeEXT(device, swapchain);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireFullScreenExclusiveModeEXT", (GLADapiproc) glad_vkAcquireFullScreenExclusiveModeEXT, 2, device, swapchain);
    return ret;
}
PFN_vkAcquireFullScreenExclusiveModeEXT glad_debug_vkAcquireFullScreenExclusiveModeEXT = glad_debug_impl_vkAcquireFullScreenExclusiveModeEXT;

#endif
PFN_vkAcquireNextImage2KHR glad_vkAcquireNextImage2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireNextImage2KHR", (GLADapiproc) glad_vkAcquireNextImage2KHR, 3, device, pAcquireInfo, pImageIndex);
    ret = glad_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireNextImage2KHR", (GLADapiproc) glad_vkAcquireNextImage2KHR, 3, device, pAcquireInfo, pImageIndex);
    return ret;
}
PFN_vkAcquireNextImage2KHR glad_debug_vkAcquireNextImage2KHR = glad_debug_impl_vkAcquireNextImage2KHR;
PFN_vkAcquireNextImageKHR glad_vkAcquireNextImageKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireNextImageKHR", (GLADapiproc) glad_vkAcquireNextImageKHR, 6, device, swapchain, timeout, semaphore, fence, pImageIndex);
    ret = glad_vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireNextImageKHR", (GLADapiproc) glad_vkAcquireNextImageKHR, 6, device, swapchain, timeout, semaphore, fence, pImageIndex);
    return ret;
}
PFN_vkAcquireNextImageKHR glad_debug_vkAcquireNextImageKHR = glad_debug_impl_vkAcquireNextImageKHR;
PFN_vkAcquirePerformanceConfigurationINTEL glad_vkAcquirePerformanceConfigurationINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquirePerformanceConfigurationINTEL(VkDevice device, const VkPerformanceConfigurationAcquireInfoINTEL * pAcquireInfo, VkPerformanceConfigurationINTEL * pConfiguration) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquirePerformanceConfigurationINTEL", (GLADapiproc) glad_vkAcquirePerformanceConfigurationINTEL, 3, device, pAcquireInfo, pConfiguration);
    ret = glad_vkAcquirePerformanceConfigurationINTEL(device, pAcquireInfo, pConfiguration);
    _post_call_vulkan_callback((void*) &ret, "vkAcquirePerformanceConfigurationINTEL", (GLADapiproc) glad_vkAcquirePerformanceConfigurationINTEL, 3, device, pAcquireInfo, pConfiguration);
    return ret;
}
PFN_vkAcquirePerformanceConfigurationINTEL glad_debug_vkAcquirePerformanceConfigurationINTEL = glad_debug_impl_vkAcquirePerformanceConfigurationINTEL;
PFN_vkAcquireProfilingLockKHR glad_vkAcquireProfilingLockKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireProfilingLockKHR", (GLADapiproc) glad_vkAcquireProfilingLockKHR, 2, device, pInfo);
    ret = glad_vkAcquireProfilingLockKHR(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireProfilingLockKHR", (GLADapiproc) glad_vkAcquireProfilingLockKHR, 2, device, pInfo);
    return ret;
}
PFN_vkAcquireProfilingLockKHR glad_debug_vkAcquireProfilingLockKHR = glad_debug_impl_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireWinrtDisplayNV glad_vkAcquireWinrtDisplayNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireWinrtDisplayNV", (GLADapiproc) glad_vkAcquireWinrtDisplayNV, 2, physicalDevice, display);
    ret = glad_vkAcquireWinrtDisplayNV(physicalDevice, display);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireWinrtDisplayNV", (GLADapiproc) glad_vkAcquireWinrtDisplayNV, 2, physicalDevice, display);
    return ret;
}
PFN_vkAcquireWinrtDisplayNV glad_debug_vkAcquireWinrtDisplayNV = glad_debug_impl_vkAcquireWinrtDisplayNV;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkAcquireXlibDisplayEXT glad_vkAcquireXlibDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireXlibDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAcquireXlibDisplayEXT", (GLADapiproc) glad_vkAcquireXlibDisplayEXT, 3, physicalDevice, dpy, display);
    ret = glad_vkAcquireXlibDisplayEXT(physicalDevice, dpy, display);
    _post_call_vulkan_callback((void*) &ret, "vkAcquireXlibDisplayEXT", (GLADapiproc) glad_vkAcquireXlibDisplayEXT, 3, physicalDevice, dpy, display);
    return ret;
}
PFN_vkAcquireXlibDisplayEXT glad_debug_vkAcquireXlibDisplayEXT = glad_debug_impl_vkAcquireXlibDisplayEXT;

#endif
PFN_vkAllocateCommandBuffers glad_vkAllocateCommandBuffers = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAllocateCommandBuffers(VkDevice device, const VkCommandBufferAllocateInfo * pAllocateInfo, VkCommandBuffer * pCommandBuffers) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAllocateCommandBuffers", (GLADapiproc) glad_vkAllocateCommandBuffers, 3, device, pAllocateInfo, pCommandBuffers);
    ret = glad_vkAllocateCommandBuffers(device, pAllocateInfo, pCommandBuffers);
    _post_call_vulkan_callback((void*) &ret, "vkAllocateCommandBuffers", (GLADapiproc) glad_vkAllocateCommandBuffers, 3, device, pAllocateInfo, pCommandBuffers);
    return ret;
}
PFN_vkAllocateCommandBuffers glad_debug_vkAllocateCommandBuffers = glad_debug_impl_vkAllocateCommandBuffers;
PFN_vkAllocateDescriptorSets glad_vkAllocateDescriptorSets = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAllocateDescriptorSets(VkDevice device, const VkDescriptorSetAllocateInfo * pAllocateInfo, VkDescriptorSet * pDescriptorSets) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAllocateDescriptorSets", (GLADapiproc) glad_vkAllocateDescriptorSets, 3, device, pAllocateInfo, pDescriptorSets);
    ret = glad_vkAllocateDescriptorSets(device, pAllocateInfo, pDescriptorSets);
    _post_call_vulkan_callback((void*) &ret, "vkAllocateDescriptorSets", (GLADapiproc) glad_vkAllocateDescriptorSets, 3, device, pAllocateInfo, pDescriptorSets);
    return ret;
}
PFN_vkAllocateDescriptorSets glad_debug_vkAllocateDescriptorSets = glad_debug_impl_vkAllocateDescriptorSets;
PFN_vkAllocateMemory glad_vkAllocateMemory = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAllocateMemory(VkDevice device, const VkMemoryAllocateInfo * pAllocateInfo, const VkAllocationCallbacks * pAllocator, VkDeviceMemory * pMemory) {
    VkResult ret;
    _pre_call_vulkan_callback("vkAllocateMemory", (GLADapiproc) glad_vkAllocateMemory, 4, device, pAllocateInfo, pAllocator, pMemory);
    ret = glad_vkAllocateMemory(device, pAllocateInfo, pAllocator, pMemory);
    _post_call_vulkan_callback((void*) &ret, "vkAllocateMemory", (GLADapiproc) glad_vkAllocateMemory, 4, device, pAllocateInfo, pAllocator, pMemory);
    return ret;
}
PFN_vkAllocateMemory glad_debug_vkAllocateMemory = glad_debug_impl_vkAllocateMemory;
PFN_vkAntiLagUpdateAMD glad_vkAntiLagUpdateAMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkAntiLagUpdateAMD(VkDevice device, const VkAntiLagDataAMD * pData) {
    _pre_call_vulkan_callback("vkAntiLagUpdateAMD", (GLADapiproc) glad_vkAntiLagUpdateAMD, 2, device, pData);
    glad_vkAntiLagUpdateAMD(device, pData);
    _post_call_vulkan_callback(NULL, "vkAntiLagUpdateAMD", (GLADapiproc) glad_vkAntiLagUpdateAMD, 2, device, pData);
    
}
PFN_vkAntiLagUpdateAMD glad_debug_vkAntiLagUpdateAMD = glad_debug_impl_vkAntiLagUpdateAMD;
PFN_vkBeginCommandBuffer glad_vkBeginCommandBuffer = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBeginCommandBuffer(VkCommandBuffer commandBuffer, const VkCommandBufferBeginInfo * pBeginInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBeginCommandBuffer", (GLADapiproc) glad_vkBeginCommandBuffer, 2, commandBuffer, pBeginInfo);
    ret = glad_vkBeginCommandBuffer(commandBuffer, pBeginInfo);
    _post_call_vulkan_callback((void*) &ret, "vkBeginCommandBuffer", (GLADapiproc) glad_vkBeginCommandBuffer, 2, commandBuffer, pBeginInfo);
    return ret;
}
PFN_vkBeginCommandBuffer glad_debug_vkBeginCommandBuffer = glad_debug_impl_vkBeginCommandBuffer;
PFN_vkBindAccelerationStructureMemoryNV glad_vkBindAccelerationStructureMemoryNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindAccelerationStructureMemoryNV(VkDevice device, uint32_t bindInfoCount, const VkBindAccelerationStructureMemoryInfoNV * pBindInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindAccelerationStructureMemoryNV", (GLADapiproc) glad_vkBindAccelerationStructureMemoryNV, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindAccelerationStructureMemoryNV(device, bindInfoCount, pBindInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindAccelerationStructureMemoryNV", (GLADapiproc) glad_vkBindAccelerationStructureMemoryNV, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindAccelerationStructureMemoryNV glad_debug_vkBindAccelerationStructureMemoryNV = glad_debug_impl_vkBindAccelerationStructureMemoryNV;
PFN_vkBindBufferMemory glad_vkBindBufferMemory = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindBufferMemory(VkDevice device, VkBuffer buffer, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindBufferMemory", (GLADapiproc) glad_vkBindBufferMemory, 4, device, buffer, memory, memoryOffset);
    ret = glad_vkBindBufferMemory(device, buffer, memory, memoryOffset);
    _post_call_vulkan_callback((void*) &ret, "vkBindBufferMemory", (GLADapiproc) glad_vkBindBufferMemory, 4, device, buffer, memory, memoryOffset);
    return ret;
}
PFN_vkBindBufferMemory glad_debug_vkBindBufferMemory = glad_debug_impl_vkBindBufferMemory;
PFN_vkBindBufferMemory2 glad_vkBindBufferMemory2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindBufferMemory2", (GLADapiproc) glad_vkBindBufferMemory2, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindBufferMemory2", (GLADapiproc) glad_vkBindBufferMemory2, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindBufferMemory2 glad_debug_vkBindBufferMemory2 = glad_debug_impl_vkBindBufferMemory2;
PFN_vkBindBufferMemory2KHR glad_vkBindBufferMemory2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindBufferMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindBufferMemory2KHR", (GLADapiproc) glad_vkBindBufferMemory2KHR, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindBufferMemory2KHR(device, bindInfoCount, pBindInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindBufferMemory2KHR", (GLADapiproc) glad_vkBindBufferMemory2KHR, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindBufferMemory2KHR glad_debug_vkBindBufferMemory2KHR = glad_debug_impl_vkBindBufferMemory2KHR;
PFN_vkBindImageMemory glad_vkBindImageMemory = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindImageMemory(VkDevice device, VkImage image, VkDeviceMemory memory, VkDeviceSize memoryOffset) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindImageMemory", (GLADapiproc) glad_vkBindImageMemory, 4, device, image, memory, memoryOffset);
    ret = glad_vkBindImageMemory(device, image, memory, memoryOffset);
    _post_call_vulkan_callback((void*) &ret, "vkBindImageMemory", (GLADapiproc) glad_vkBindImageMemory, 4, device, image, memory, memoryOffset);
    return ret;
}
PFN_vkBindImageMemory glad_debug_vkBindImageMemory = glad_debug_impl_vkBindImageMemory;
PFN_vkBindImageMemory2 glad_vkBindImageMemory2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindImageMemory2", (GLADapiproc) glad_vkBindImageMemory2, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindImageMemory2(device, bindInfoCount, pBindInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindImageMemory2", (GLADapiproc) glad_vkBindImageMemory2, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindImageMemory2 glad_debug_vkBindImageMemory2 = glad_debug_impl_vkBindImageMemory2;
PFN_vkBindImageMemory2KHR glad_vkBindImageMemory2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindImageMemory2KHR(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindImageMemory2KHR", (GLADapiproc) glad_vkBindImageMemory2KHR, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindImageMemory2KHR(device, bindInfoCount, pBindInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindImageMemory2KHR", (GLADapiproc) glad_vkBindImageMemory2KHR, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindImageMemory2KHR glad_debug_vkBindImageMemory2KHR = glad_debug_impl_vkBindImageMemory2KHR;
PFN_vkBindOpticalFlowSessionImageNV glad_vkBindOpticalFlowSessionImageNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindOpticalFlowSessionImageNV(VkDevice device, VkOpticalFlowSessionNV session, VkOpticalFlowSessionBindingPointNV bindingPoint, VkImageView view, VkImageLayout layout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindOpticalFlowSessionImageNV", (GLADapiproc) glad_vkBindOpticalFlowSessionImageNV, 5, device, session, bindingPoint, view, layout);
    ret = glad_vkBindOpticalFlowSessionImageNV(device, session, bindingPoint, view, layout);
    _post_call_vulkan_callback((void*) &ret, "vkBindOpticalFlowSessionImageNV", (GLADapiproc) glad_vkBindOpticalFlowSessionImageNV, 5, device, session, bindingPoint, view, layout);
    return ret;
}
PFN_vkBindOpticalFlowSessionImageNV glad_debug_vkBindOpticalFlowSessionImageNV = glad_debug_impl_vkBindOpticalFlowSessionImageNV;
PFN_vkBindVideoSessionMemoryKHR glad_vkBindVideoSessionMemoryKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindVideoSessionMemoryKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t bindSessionMemoryInfoCount, const VkBindVideoSessionMemoryInfoKHR * pBindSessionMemoryInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBindVideoSessionMemoryKHR", (GLADapiproc) glad_vkBindVideoSessionMemoryKHR, 4, device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
    ret = glad_vkBindVideoSessionMemoryKHR(device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBindVideoSessionMemoryKHR", (GLADapiproc) glad_vkBindVideoSessionMemoryKHR, 4, device, videoSession, bindSessionMemoryInfoCount, pBindSessionMemoryInfos);
    return ret;
}
PFN_vkBindVideoSessionMemoryKHR glad_debug_vkBindVideoSessionMemoryKHR = glad_debug_impl_vkBindVideoSessionMemoryKHR;
PFN_vkBuildAccelerationStructuresKHR glad_vkBuildAccelerationStructuresKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBuildAccelerationStructuresKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildRangeInfoKHR * const* ppBuildRangeInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBuildAccelerationStructuresKHR", (GLADapiproc) glad_vkBuildAccelerationStructuresKHR, 5, device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
    ret = glad_vkBuildAccelerationStructuresKHR(device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBuildAccelerationStructuresKHR", (GLADapiproc) glad_vkBuildAccelerationStructuresKHR, 5, device, deferredOperation, infoCount, pInfos, ppBuildRangeInfos);
    return ret;
}
PFN_vkBuildAccelerationStructuresKHR glad_debug_vkBuildAccelerationStructuresKHR = glad_debug_impl_vkBuildAccelerationStructuresKHR;
PFN_vkBuildMicromapsEXT glad_vkBuildMicromapsEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBuildMicromapsEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, uint32_t infoCount, const VkMicromapBuildInfoEXT * pInfos) {
    VkResult ret;
    _pre_call_vulkan_callback("vkBuildMicromapsEXT", (GLADapiproc) glad_vkBuildMicromapsEXT, 4, device, deferredOperation, infoCount, pInfos);
    ret = glad_vkBuildMicromapsEXT(device, deferredOperation, infoCount, pInfos);
    _post_call_vulkan_callback((void*) &ret, "vkBuildMicromapsEXT", (GLADapiproc) glad_vkBuildMicromapsEXT, 4, device, deferredOperation, infoCount, pInfos);
    return ret;
}
PFN_vkBuildMicromapsEXT glad_debug_vkBuildMicromapsEXT = glad_debug_impl_vkBuildMicromapsEXT;
PFN_vkCmdBeginConditionalRenderingEXT glad_vkCmdBeginConditionalRenderingEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginConditionalRenderingEXT(VkCommandBuffer commandBuffer, const VkConditionalRenderingBeginInfoEXT * pConditionalRenderingBegin) {
    _pre_call_vulkan_callback("vkCmdBeginConditionalRenderingEXT", (GLADapiproc) glad_vkCmdBeginConditionalRenderingEXT, 2, commandBuffer, pConditionalRenderingBegin);
    glad_vkCmdBeginConditionalRenderingEXT(commandBuffer, pConditionalRenderingBegin);
    _post_call_vulkan_callback(NULL, "vkCmdBeginConditionalRenderingEXT", (GLADapiproc) glad_vkCmdBeginConditionalRenderingEXT, 2, commandBuffer, pConditionalRenderingBegin);
    
}
PFN_vkCmdBeginConditionalRenderingEXT glad_debug_vkCmdBeginConditionalRenderingEXT = glad_debug_impl_vkCmdBeginConditionalRenderingEXT;
PFN_vkCmdBeginDebugUtilsLabelEXT glad_vkCmdBeginDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkan_callback("vkCmdBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdBeginDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    glad_vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdBeginDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    
}
PFN_vkCmdBeginDebugUtilsLabelEXT glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT;
PFN_vkCmdBeginQuery glad_vkCmdBeginQuery = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags) {
    _pre_call_vulkan_callback("vkCmdBeginQuery", (GLADapiproc) glad_vkCmdBeginQuery, 4, commandBuffer, queryPool, query, flags);
    glad_vkCmdBeginQuery(commandBuffer, queryPool, query, flags);
    _post_call_vulkan_callback(NULL, "vkCmdBeginQuery", (GLADapiproc) glad_vkCmdBeginQuery, 4, commandBuffer, queryPool, query, flags);
    
}
PFN_vkCmdBeginQuery glad_debug_vkCmdBeginQuery = glad_debug_impl_vkCmdBeginQuery;
PFN_vkCmdBeginQueryIndexedEXT glad_vkCmdBeginQueryIndexedEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, VkQueryControlFlags flags, uint32_t index) {
    _pre_call_vulkan_callback("vkCmdBeginQueryIndexedEXT", (GLADapiproc) glad_vkCmdBeginQueryIndexedEXT, 5, commandBuffer, queryPool, query, flags, index);
    glad_vkCmdBeginQueryIndexedEXT(commandBuffer, queryPool, query, flags, index);
    _post_call_vulkan_callback(NULL, "vkCmdBeginQueryIndexedEXT", (GLADapiproc) glad_vkCmdBeginQueryIndexedEXT, 5, commandBuffer, queryPool, query, flags, index);
    
}
PFN_vkCmdBeginQueryIndexedEXT glad_debug_vkCmdBeginQueryIndexedEXT = glad_debug_impl_vkCmdBeginQueryIndexedEXT;
PFN_vkCmdBeginRenderPass glad_vkCmdBeginRenderPass = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRenderPass(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, VkSubpassContents contents) {
    _pre_call_vulkan_callback("vkCmdBeginRenderPass", (GLADapiproc) glad_vkCmdBeginRenderPass, 3, commandBuffer, pRenderPassBegin, contents);
    glad_vkCmdBeginRenderPass(commandBuffer, pRenderPassBegin, contents);
    _post_call_vulkan_callback(NULL, "vkCmdBeginRenderPass", (GLADapiproc) glad_vkCmdBeginRenderPass, 3, commandBuffer, pRenderPassBegin, contents);
    
}
PFN_vkCmdBeginRenderPass glad_debug_vkCmdBeginRenderPass = glad_debug_impl_vkCmdBeginRenderPass;
PFN_vkCmdBeginRenderPass2 glad_vkCmdBeginRenderPass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfo * pSubpassBeginInfo) {
    _pre_call_vulkan_callback("vkCmdBeginRenderPass2", (GLADapiproc) glad_vkCmdBeginRenderPass2, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    glad_vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginRenderPass2", (GLADapiproc) glad_vkCmdBeginRenderPass2, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    
}
PFN_vkCmdBeginRenderPass2 glad_debug_vkCmdBeginRenderPass2 = glad_debug_impl_vkCmdBeginRenderPass2;
PFN_vkCmdBeginRenderPass2KHR glad_vkCmdBeginRenderPass2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRenderPass2KHR(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfo * pSubpassBeginInfo) {
    _pre_call_vulkan_callback("vkCmdBeginRenderPass2KHR", (GLADapiproc) glad_vkCmdBeginRenderPass2KHR, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    glad_vkCmdBeginRenderPass2KHR(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginRenderPass2KHR", (GLADapiproc) glad_vkCmdBeginRenderPass2KHR, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    
}
PFN_vkCmdBeginRenderPass2KHR glad_debug_vkCmdBeginRenderPass2KHR = glad_debug_impl_vkCmdBeginRenderPass2KHR;
PFN_vkCmdBeginRendering glad_vkCmdBeginRendering = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRendering(VkCommandBuffer commandBuffer, const VkRenderingInfo * pRenderingInfo) {
    _pre_call_vulkan_callback("vkCmdBeginRendering", (GLADapiproc) glad_vkCmdBeginRendering, 2, commandBuffer, pRenderingInfo);
    glad_vkCmdBeginRendering(commandBuffer, pRenderingInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginRendering", (GLADapiproc) glad_vkCmdBeginRendering, 2, commandBuffer, pRenderingInfo);
    
}
PFN_vkCmdBeginRendering glad_debug_vkCmdBeginRendering = glad_debug_impl_vkCmdBeginRendering;
PFN_vkCmdBeginRenderingKHR glad_vkCmdBeginRenderingKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRenderingKHR(VkCommandBuffer commandBuffer, const VkRenderingInfo * pRenderingInfo) {
    _pre_call_vulkan_callback("vkCmdBeginRenderingKHR", (GLADapiproc) glad_vkCmdBeginRenderingKHR, 2, commandBuffer, pRenderingInfo);
    glad_vkCmdBeginRenderingKHR(commandBuffer, pRenderingInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginRenderingKHR", (GLADapiproc) glad_vkCmdBeginRenderingKHR, 2, commandBuffer, pRenderingInfo);
    
}
PFN_vkCmdBeginRenderingKHR glad_debug_vkCmdBeginRenderingKHR = glad_debug_impl_vkCmdBeginRenderingKHR;
PFN_vkCmdBeginTransformFeedbackEXT glad_vkCmdBeginTransformFeedbackEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets) {
    _pre_call_vulkan_callback("vkCmdBeginTransformFeedbackEXT", (GLADapiproc) glad_vkCmdBeginTransformFeedbackEXT, 5, commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    glad_vkCmdBeginTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    _post_call_vulkan_callback(NULL, "vkCmdBeginTransformFeedbackEXT", (GLADapiproc) glad_vkCmdBeginTransformFeedbackEXT, 5, commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    
}
PFN_vkCmdBeginTransformFeedbackEXT glad_debug_vkCmdBeginTransformFeedbackEXT = glad_debug_impl_vkCmdBeginTransformFeedbackEXT;
PFN_vkCmdBeginVideoCodingKHR glad_vkCmdBeginVideoCodingKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoBeginCodingInfoKHR * pBeginInfo) {
    _pre_call_vulkan_callback("vkCmdBeginVideoCodingKHR", (GLADapiproc) glad_vkCmdBeginVideoCodingKHR, 2, commandBuffer, pBeginInfo);
    glad_vkCmdBeginVideoCodingKHR(commandBuffer, pBeginInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBeginVideoCodingKHR", (GLADapiproc) glad_vkCmdBeginVideoCodingKHR, 2, commandBuffer, pBeginInfo);
    
}
PFN_vkCmdBeginVideoCodingKHR glad_debug_vkCmdBeginVideoCodingKHR = glad_debug_impl_vkCmdBeginVideoCodingKHR;
PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(VkCommandBuffer commandBuffer, const VkBindDescriptorBufferEmbeddedSamplersInfoEXT * pBindDescriptorBufferEmbeddedSamplersInfo) {
    _pre_call_vulkan_callback("vkCmdBindDescriptorBufferEmbeddedSamplers2EXT", (GLADapiproc) glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT, 2, commandBuffer, pBindDescriptorBufferEmbeddedSamplersInfo);
    glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT(commandBuffer, pBindDescriptorBufferEmbeddedSamplersInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT", (GLADapiproc) glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT, 2, commandBuffer, pBindDescriptorBufferEmbeddedSamplersInfo);
    
}
PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT;
PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplersEXT(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set) {
    _pre_call_vulkan_callback("vkCmdBindDescriptorBufferEmbeddedSamplersEXT", (GLADapiproc) glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT, 4, commandBuffer, pipelineBindPoint, layout, set);
    glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT(commandBuffer, pipelineBindPoint, layout, set);
    _post_call_vulkan_callback(NULL, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT", (GLADapiproc) glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT, 4, commandBuffer, pipelineBindPoint, layout, set);
    
}
PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplersEXT;
PFN_vkCmdBindDescriptorBuffersEXT glad_vkCmdBindDescriptorBuffersEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindDescriptorBuffersEXT(VkCommandBuffer commandBuffer, uint32_t bufferCount, const VkDescriptorBufferBindingInfoEXT * pBindingInfos) {
    _pre_call_vulkan_callback("vkCmdBindDescriptorBuffersEXT", (GLADapiproc) glad_vkCmdBindDescriptorBuffersEXT, 3, commandBuffer, bufferCount, pBindingInfos);
    glad_vkCmdBindDescriptorBuffersEXT(commandBuffer, bufferCount, pBindingInfos);
    _post_call_vulkan_callback(NULL, "vkCmdBindDescriptorBuffersEXT", (GLADapiproc) glad_vkCmdBindDescriptorBuffersEXT, 3, commandBuffer, bufferCount, pBindingInfos);
    
}
PFN_vkCmdBindDescriptorBuffersEXT glad_debug_vkCmdBindDescriptorBuffersEXT = glad_debug_impl_vkCmdBindDescriptorBuffersEXT;
PFN_vkCmdBindDescriptorSets glad_vkCmdBindDescriptorSets = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindDescriptorSets(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets, uint32_t dynamicOffsetCount, const uint32_t * pDynamicOffsets) {
    _pre_call_vulkan_callback("vkCmdBindDescriptorSets", (GLADapiproc) glad_vkCmdBindDescriptorSets, 8, commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    glad_vkCmdBindDescriptorSets(commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    _post_call_vulkan_callback(NULL, "vkCmdBindDescriptorSets", (GLADapiproc) glad_vkCmdBindDescriptorSets, 8, commandBuffer, pipelineBindPoint, layout, firstSet, descriptorSetCount, pDescriptorSets, dynamicOffsetCount, pDynamicOffsets);
    
}
PFN_vkCmdBindDescriptorSets glad_debug_vkCmdBindDescriptorSets = glad_debug_impl_vkCmdBindDescriptorSets;
PFN_vkCmdBindDescriptorSets2KHR glad_vkCmdBindDescriptorSets2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindDescriptorSets2KHR(VkCommandBuffer commandBuffer, const VkBindDescriptorSetsInfoKHR * pBindDescriptorSetsInfo) {
    _pre_call_vulkan_callback("vkCmdBindDescriptorSets2KHR", (GLADapiproc) glad_vkCmdBindDescriptorSets2KHR, 2, commandBuffer, pBindDescriptorSetsInfo);
    glad_vkCmdBindDescriptorSets2KHR(commandBuffer, pBindDescriptorSetsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBindDescriptorSets2KHR", (GLADapiproc) glad_vkCmdBindDescriptorSets2KHR, 2, commandBuffer, pBindDescriptorSetsInfo);
    
}
PFN_vkCmdBindDescriptorSets2KHR glad_debug_vkCmdBindDescriptorSets2KHR = glad_debug_impl_vkCmdBindDescriptorSets2KHR;
PFN_vkCmdBindIndexBuffer glad_vkCmdBindIndexBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindIndexBuffer(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) {
    _pre_call_vulkan_callback("vkCmdBindIndexBuffer", (GLADapiproc) glad_vkCmdBindIndexBuffer, 4, commandBuffer, buffer, offset, indexType);
    glad_vkCmdBindIndexBuffer(commandBuffer, buffer, offset, indexType);
    _post_call_vulkan_callback(NULL, "vkCmdBindIndexBuffer", (GLADapiproc) glad_vkCmdBindIndexBuffer, 4, commandBuffer, buffer, offset, indexType);
    
}
PFN_vkCmdBindIndexBuffer glad_debug_vkCmdBindIndexBuffer = glad_debug_impl_vkCmdBindIndexBuffer;
PFN_vkCmdBindIndexBuffer2KHR glad_vkCmdBindIndexBuffer2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindIndexBuffer2KHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkDeviceSize size, VkIndexType indexType) {
    _pre_call_vulkan_callback("vkCmdBindIndexBuffer2KHR", (GLADapiproc) glad_vkCmdBindIndexBuffer2KHR, 5, commandBuffer, buffer, offset, size, indexType);
    glad_vkCmdBindIndexBuffer2KHR(commandBuffer, buffer, offset, size, indexType);
    _post_call_vulkan_callback(NULL, "vkCmdBindIndexBuffer2KHR", (GLADapiproc) glad_vkCmdBindIndexBuffer2KHR, 5, commandBuffer, buffer, offset, size, indexType);
    
}
PFN_vkCmdBindIndexBuffer2KHR glad_debug_vkCmdBindIndexBuffer2KHR = glad_debug_impl_vkCmdBindIndexBuffer2KHR;
PFN_vkCmdBindInvocationMaskHUAWEI glad_vkCmdBindInvocationMaskHUAWEI = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindInvocationMaskHUAWEI(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
    _pre_call_vulkan_callback("vkCmdBindInvocationMaskHUAWEI", (GLADapiproc) glad_vkCmdBindInvocationMaskHUAWEI, 3, commandBuffer, imageView, imageLayout);
    glad_vkCmdBindInvocationMaskHUAWEI(commandBuffer, imageView, imageLayout);
    _post_call_vulkan_callback(NULL, "vkCmdBindInvocationMaskHUAWEI", (GLADapiproc) glad_vkCmdBindInvocationMaskHUAWEI, 3, commandBuffer, imageView, imageLayout);
    
}
PFN_vkCmdBindInvocationMaskHUAWEI glad_debug_vkCmdBindInvocationMaskHUAWEI = glad_debug_impl_vkCmdBindInvocationMaskHUAWEI;
PFN_vkCmdBindPipeline glad_vkCmdBindPipeline = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindPipeline(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
    _pre_call_vulkan_callback("vkCmdBindPipeline", (GLADapiproc) glad_vkCmdBindPipeline, 3, commandBuffer, pipelineBindPoint, pipeline);
    glad_vkCmdBindPipeline(commandBuffer, pipelineBindPoint, pipeline);
    _post_call_vulkan_callback(NULL, "vkCmdBindPipeline", (GLADapiproc) glad_vkCmdBindPipeline, 3, commandBuffer, pipelineBindPoint, pipeline);
    
}
PFN_vkCmdBindPipeline glad_debug_vkCmdBindPipeline = glad_debug_impl_vkCmdBindPipeline;
PFN_vkCmdBindPipelineShaderGroupNV glad_vkCmdBindPipelineShaderGroupNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindPipelineShaderGroupNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline, uint32_t groupIndex) {
    _pre_call_vulkan_callback("vkCmdBindPipelineShaderGroupNV", (GLADapiproc) glad_vkCmdBindPipelineShaderGroupNV, 4, commandBuffer, pipelineBindPoint, pipeline, groupIndex);
    glad_vkCmdBindPipelineShaderGroupNV(commandBuffer, pipelineBindPoint, pipeline, groupIndex);
    _post_call_vulkan_callback(NULL, "vkCmdBindPipelineShaderGroupNV", (GLADapiproc) glad_vkCmdBindPipelineShaderGroupNV, 4, commandBuffer, pipelineBindPoint, pipeline, groupIndex);
    
}
PFN_vkCmdBindPipelineShaderGroupNV glad_debug_vkCmdBindPipelineShaderGroupNV = glad_debug_impl_vkCmdBindPipelineShaderGroupNV;
PFN_vkCmdBindShadersEXT glad_vkCmdBindShadersEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindShadersEXT(VkCommandBuffer commandBuffer, uint32_t stageCount, const VkShaderStageFlagBits * pStages, const VkShaderEXT * pShaders) {
    _pre_call_vulkan_callback("vkCmdBindShadersEXT", (GLADapiproc) glad_vkCmdBindShadersEXT, 4, commandBuffer, stageCount, pStages, pShaders);
    glad_vkCmdBindShadersEXT(commandBuffer, stageCount, pStages, pShaders);
    _post_call_vulkan_callback(NULL, "vkCmdBindShadersEXT", (GLADapiproc) glad_vkCmdBindShadersEXT, 4, commandBuffer, stageCount, pStages, pShaders);
    
}
PFN_vkCmdBindShadersEXT glad_debug_vkCmdBindShadersEXT = glad_debug_impl_vkCmdBindShadersEXT;
PFN_vkCmdBindShadingRateImageNV glad_vkCmdBindShadingRateImageNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindShadingRateImageNV(VkCommandBuffer commandBuffer, VkImageView imageView, VkImageLayout imageLayout) {
    _pre_call_vulkan_callback("vkCmdBindShadingRateImageNV", (GLADapiproc) glad_vkCmdBindShadingRateImageNV, 3, commandBuffer, imageView, imageLayout);
    glad_vkCmdBindShadingRateImageNV(commandBuffer, imageView, imageLayout);
    _post_call_vulkan_callback(NULL, "vkCmdBindShadingRateImageNV", (GLADapiproc) glad_vkCmdBindShadingRateImageNV, 3, commandBuffer, imageView, imageLayout);
    
}
PFN_vkCmdBindShadingRateImageNV glad_debug_vkCmdBindShadingRateImageNV = glad_debug_impl_vkCmdBindShadingRateImageNV;
PFN_vkCmdBindTransformFeedbackBuffersEXT glad_vkCmdBindTransformFeedbackBuffersEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindTransformFeedbackBuffersEXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes) {
    _pre_call_vulkan_callback("vkCmdBindTransformFeedbackBuffersEXT", (GLADapiproc) glad_vkCmdBindTransformFeedbackBuffersEXT, 6, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
    glad_vkCmdBindTransformFeedbackBuffersEXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
    _post_call_vulkan_callback(NULL, "vkCmdBindTransformFeedbackBuffersEXT", (GLADapiproc) glad_vkCmdBindTransformFeedbackBuffersEXT, 6, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes);
    
}
PFN_vkCmdBindTransformFeedbackBuffersEXT glad_debug_vkCmdBindTransformFeedbackBuffersEXT = glad_debug_impl_vkCmdBindTransformFeedbackBuffersEXT;
PFN_vkCmdBindVertexBuffers glad_vkCmdBindVertexBuffers = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindVertexBuffers(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets) {
    _pre_call_vulkan_callback("vkCmdBindVertexBuffers", (GLADapiproc) glad_vkCmdBindVertexBuffers, 5, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
    glad_vkCmdBindVertexBuffers(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
    _post_call_vulkan_callback(NULL, "vkCmdBindVertexBuffers", (GLADapiproc) glad_vkCmdBindVertexBuffers, 5, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets);
    
}
PFN_vkCmdBindVertexBuffers glad_debug_vkCmdBindVertexBuffers = glad_debug_impl_vkCmdBindVertexBuffers;
PFN_vkCmdBindVertexBuffers2 glad_vkCmdBindVertexBuffers2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides) {
    _pre_call_vulkan_callback("vkCmdBindVertexBuffers2", (GLADapiproc) glad_vkCmdBindVertexBuffers2, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    glad_vkCmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    _post_call_vulkan_callback(NULL, "vkCmdBindVertexBuffers2", (GLADapiproc) glad_vkCmdBindVertexBuffers2, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    
}
PFN_vkCmdBindVertexBuffers2 glad_debug_vkCmdBindVertexBuffers2 = glad_debug_impl_vkCmdBindVertexBuffers2;
PFN_vkCmdBindVertexBuffers2EXT glad_vkCmdBindVertexBuffers2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides) {
    _pre_call_vulkan_callback("vkCmdBindVertexBuffers2EXT", (GLADapiproc) glad_vkCmdBindVertexBuffers2EXT, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    glad_vkCmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    _post_call_vulkan_callback(NULL, "vkCmdBindVertexBuffers2EXT", (GLADapiproc) glad_vkCmdBindVertexBuffers2EXT, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    
}
PFN_vkCmdBindVertexBuffers2EXT glad_debug_vkCmdBindVertexBuffers2EXT = glad_debug_impl_vkCmdBindVertexBuffers2EXT;
PFN_vkCmdBlitImage glad_vkCmdBlitImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBlitImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageBlit * pRegions, VkFilter filter) {
    _pre_call_vulkan_callback("vkCmdBlitImage", (GLADapiproc) glad_vkCmdBlitImage, 8, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    glad_vkCmdBlitImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    _post_call_vulkan_callback(NULL, "vkCmdBlitImage", (GLADapiproc) glad_vkCmdBlitImage, 8, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions, filter);
    
}
PFN_vkCmdBlitImage glad_debug_vkCmdBlitImage = glad_debug_impl_vkCmdBlitImage;
PFN_vkCmdBlitImage2 glad_vkCmdBlitImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBlitImage2(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo) {
    _pre_call_vulkan_callback("vkCmdBlitImage2", (GLADapiproc) glad_vkCmdBlitImage2, 2, commandBuffer, pBlitImageInfo);
    glad_vkCmdBlitImage2(commandBuffer, pBlitImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBlitImage2", (GLADapiproc) glad_vkCmdBlitImage2, 2, commandBuffer, pBlitImageInfo);
    
}
PFN_vkCmdBlitImage2 glad_debug_vkCmdBlitImage2 = glad_debug_impl_vkCmdBlitImage2;
PFN_vkCmdBlitImage2KHR glad_vkCmdBlitImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo) {
    _pre_call_vulkan_callback("vkCmdBlitImage2KHR", (GLADapiproc) glad_vkCmdBlitImage2KHR, 2, commandBuffer, pBlitImageInfo);
    glad_vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdBlitImage2KHR", (GLADapiproc) glad_vkCmdBlitImage2KHR, 2, commandBuffer, pBlitImageInfo);
    
}
PFN_vkCmdBlitImage2KHR glad_debug_vkCmdBlitImage2KHR = glad_debug_impl_vkCmdBlitImage2KHR;
PFN_vkCmdBuildAccelerationStructureNV glad_vkCmdBuildAccelerationStructureNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBuildAccelerationStructureNV(VkCommandBuffer commandBuffer, const VkAccelerationStructureInfoNV * pInfo, VkBuffer instanceData, VkDeviceSize instanceOffset, VkBool32 update, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkBuffer scratch, VkDeviceSize scratchOffset) {
    _pre_call_vulkan_callback("vkCmdBuildAccelerationStructureNV", (GLADapiproc) glad_vkCmdBuildAccelerationStructureNV, 9, commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
    glad_vkCmdBuildAccelerationStructureNV(commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
    _post_call_vulkan_callback(NULL, "vkCmdBuildAccelerationStructureNV", (GLADapiproc) glad_vkCmdBuildAccelerationStructureNV, 9, commandBuffer, pInfo, instanceData, instanceOffset, update, dst, src, scratch, scratchOffset);
    
}
PFN_vkCmdBuildAccelerationStructureNV glad_debug_vkCmdBuildAccelerationStructureNV = glad_debug_impl_vkCmdBuildAccelerationStructureNV;
PFN_vkCmdBuildAccelerationStructuresIndirectKHR glad_vkCmdBuildAccelerationStructuresIndirectKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBuildAccelerationStructuresIndirectKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkDeviceAddress * pIndirectDeviceAddresses, const uint32_t * pIndirectStrides, const uint32_t * const* ppMaxPrimitiveCounts) {
    _pre_call_vulkan_callback("vkCmdBuildAccelerationStructuresIndirectKHR", (GLADapiproc) glad_vkCmdBuildAccelerationStructuresIndirectKHR, 6, commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
    glad_vkCmdBuildAccelerationStructuresIndirectKHR(commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
    _post_call_vulkan_callback(NULL, "vkCmdBuildAccelerationStructuresIndirectKHR", (GLADapiproc) glad_vkCmdBuildAccelerationStructuresIndirectKHR, 6, commandBuffer, infoCount, pInfos, pIndirectDeviceAddresses, pIndirectStrides, ppMaxPrimitiveCounts);
    
}
PFN_vkCmdBuildAccelerationStructuresIndirectKHR glad_debug_vkCmdBuildAccelerationStructuresIndirectKHR = glad_debug_impl_vkCmdBuildAccelerationStructuresIndirectKHR;
PFN_vkCmdBuildAccelerationStructuresKHR glad_vkCmdBuildAccelerationStructuresKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBuildAccelerationStructuresKHR(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkAccelerationStructureBuildGeometryInfoKHR * pInfos, const VkAccelerationStructureBuildRangeInfoKHR * const* ppBuildRangeInfos) {
    _pre_call_vulkan_callback("vkCmdBuildAccelerationStructuresKHR", (GLADapiproc) glad_vkCmdBuildAccelerationStructuresKHR, 4, commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
    glad_vkCmdBuildAccelerationStructuresKHR(commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
    _post_call_vulkan_callback(NULL, "vkCmdBuildAccelerationStructuresKHR", (GLADapiproc) glad_vkCmdBuildAccelerationStructuresKHR, 4, commandBuffer, infoCount, pInfos, ppBuildRangeInfos);
    
}
PFN_vkCmdBuildAccelerationStructuresKHR glad_debug_vkCmdBuildAccelerationStructuresKHR = glad_debug_impl_vkCmdBuildAccelerationStructuresKHR;
PFN_vkCmdBuildMicromapsEXT glad_vkCmdBuildMicromapsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBuildMicromapsEXT(VkCommandBuffer commandBuffer, uint32_t infoCount, const VkMicromapBuildInfoEXT * pInfos) {
    _pre_call_vulkan_callback("vkCmdBuildMicromapsEXT", (GLADapiproc) glad_vkCmdBuildMicromapsEXT, 3, commandBuffer, infoCount, pInfos);
    glad_vkCmdBuildMicromapsEXT(commandBuffer, infoCount, pInfos);
    _post_call_vulkan_callback(NULL, "vkCmdBuildMicromapsEXT", (GLADapiproc) glad_vkCmdBuildMicromapsEXT, 3, commandBuffer, infoCount, pInfos);
    
}
PFN_vkCmdBuildMicromapsEXT glad_debug_vkCmdBuildMicromapsEXT = glad_debug_impl_vkCmdBuildMicromapsEXT;
PFN_vkCmdClearAttachments glad_vkCmdClearAttachments = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdClearAttachments(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkClearAttachment * pAttachments, uint32_t rectCount, const VkClearRect * pRects) {
    _pre_call_vulkan_callback("vkCmdClearAttachments", (GLADapiproc) glad_vkCmdClearAttachments, 5, commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
    glad_vkCmdClearAttachments(commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
    _post_call_vulkan_callback(NULL, "vkCmdClearAttachments", (GLADapiproc) glad_vkCmdClearAttachments, 5, commandBuffer, attachmentCount, pAttachments, rectCount, pRects);
    
}
PFN_vkCmdClearAttachments glad_debug_vkCmdClearAttachments = glad_debug_impl_vkCmdClearAttachments;
PFN_vkCmdClearColorImage glad_vkCmdClearColorImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdClearColorImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue * pColor, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) {
    _pre_call_vulkan_callback("vkCmdClearColorImage", (GLADapiproc) glad_vkCmdClearColorImage, 6, commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
    glad_vkCmdClearColorImage(commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
    _post_call_vulkan_callback(NULL, "vkCmdClearColorImage", (GLADapiproc) glad_vkCmdClearColorImage, 6, commandBuffer, image, imageLayout, pColor, rangeCount, pRanges);
    
}
PFN_vkCmdClearColorImage glad_debug_vkCmdClearColorImage = glad_debug_impl_vkCmdClearColorImage;
PFN_vkCmdClearDepthStencilImage glad_vkCmdClearDepthStencilImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdClearDepthStencilImage(VkCommandBuffer commandBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue * pDepthStencil, uint32_t rangeCount, const VkImageSubresourceRange * pRanges) {
    _pre_call_vulkan_callback("vkCmdClearDepthStencilImage", (GLADapiproc) glad_vkCmdClearDepthStencilImage, 6, commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
    glad_vkCmdClearDepthStencilImage(commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
    _post_call_vulkan_callback(NULL, "vkCmdClearDepthStencilImage", (GLADapiproc) glad_vkCmdClearDepthStencilImage, 6, commandBuffer, image, imageLayout, pDepthStencil, rangeCount, pRanges);
    
}
PFN_vkCmdClearDepthStencilImage glad_debug_vkCmdClearDepthStencilImage = glad_debug_impl_vkCmdClearDepthStencilImage;
PFN_vkCmdControlVideoCodingKHR glad_vkCmdControlVideoCodingKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdControlVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoCodingControlInfoKHR * pCodingControlInfo) {
    _pre_call_vulkan_callback("vkCmdControlVideoCodingKHR", (GLADapiproc) glad_vkCmdControlVideoCodingKHR, 2, commandBuffer, pCodingControlInfo);
    glad_vkCmdControlVideoCodingKHR(commandBuffer, pCodingControlInfo);
    _post_call_vulkan_callback(NULL, "vkCmdControlVideoCodingKHR", (GLADapiproc) glad_vkCmdControlVideoCodingKHR, 2, commandBuffer, pCodingControlInfo);
    
}
PFN_vkCmdControlVideoCodingKHR glad_debug_vkCmdControlVideoCodingKHR = glad_debug_impl_vkCmdControlVideoCodingKHR;
PFN_vkCmdCopyAccelerationStructureKHR glad_vkCmdCopyAccelerationStructureKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureInfoKHR * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyAccelerationStructureKHR", (GLADapiproc) glad_vkCmdCopyAccelerationStructureKHR, 2, commandBuffer, pInfo);
    glad_vkCmdCopyAccelerationStructureKHR(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyAccelerationStructureKHR", (GLADapiproc) glad_vkCmdCopyAccelerationStructureKHR, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyAccelerationStructureKHR glad_debug_vkCmdCopyAccelerationStructureKHR = glad_debug_impl_vkCmdCopyAccelerationStructureKHR;
PFN_vkCmdCopyAccelerationStructureNV glad_vkCmdCopyAccelerationStructureNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyAccelerationStructureNV(VkCommandBuffer commandBuffer, VkAccelerationStructureNV dst, VkAccelerationStructureNV src, VkCopyAccelerationStructureModeKHR mode) {
    _pre_call_vulkan_callback("vkCmdCopyAccelerationStructureNV", (GLADapiproc) glad_vkCmdCopyAccelerationStructureNV, 4, commandBuffer, dst, src, mode);
    glad_vkCmdCopyAccelerationStructureNV(commandBuffer, dst, src, mode);
    _post_call_vulkan_callback(NULL, "vkCmdCopyAccelerationStructureNV", (GLADapiproc) glad_vkCmdCopyAccelerationStructureNV, 4, commandBuffer, dst, src, mode);
    
}
PFN_vkCmdCopyAccelerationStructureNV glad_debug_vkCmdCopyAccelerationStructureNV = glad_debug_impl_vkCmdCopyAccelerationStructureNV;
PFN_vkCmdCopyAccelerationStructureToMemoryKHR glad_vkCmdCopyAccelerationStructureToMemoryKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyAccelerationStructureToMemoryKHR(VkCommandBuffer commandBuffer, const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyAccelerationStructureToMemoryKHR", (GLADapiproc) glad_vkCmdCopyAccelerationStructureToMemoryKHR, 2, commandBuffer, pInfo);
    glad_vkCmdCopyAccelerationStructureToMemoryKHR(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyAccelerationStructureToMemoryKHR", (GLADapiproc) glad_vkCmdCopyAccelerationStructureToMemoryKHR, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyAccelerationStructureToMemoryKHR glad_debug_vkCmdCopyAccelerationStructureToMemoryKHR = glad_debug_impl_vkCmdCopyAccelerationStructureToMemoryKHR;
PFN_vkCmdCopyBuffer glad_vkCmdCopyBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBuffer(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferCopy * pRegions) {
    _pre_call_vulkan_callback("vkCmdCopyBuffer", (GLADapiproc) glad_vkCmdCopyBuffer, 5, commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
    glad_vkCmdCopyBuffer(commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBuffer", (GLADapiproc) glad_vkCmdCopyBuffer, 5, commandBuffer, srcBuffer, dstBuffer, regionCount, pRegions);
    
}
PFN_vkCmdCopyBuffer glad_debug_vkCmdCopyBuffer = glad_debug_impl_vkCmdCopyBuffer;
PFN_vkCmdCopyBuffer2 glad_vkCmdCopyBuffer2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBuffer2(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo) {
    _pre_call_vulkan_callback("vkCmdCopyBuffer2", (GLADapiproc) glad_vkCmdCopyBuffer2, 2, commandBuffer, pCopyBufferInfo);
    glad_vkCmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBuffer2", (GLADapiproc) glad_vkCmdCopyBuffer2, 2, commandBuffer, pCopyBufferInfo);
    
}
PFN_vkCmdCopyBuffer2 glad_debug_vkCmdCopyBuffer2 = glad_debug_impl_vkCmdCopyBuffer2;
PFN_vkCmdCopyBuffer2KHR glad_vkCmdCopyBuffer2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo) {
    _pre_call_vulkan_callback("vkCmdCopyBuffer2KHR", (GLADapiproc) glad_vkCmdCopyBuffer2KHR, 2, commandBuffer, pCopyBufferInfo);
    glad_vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBuffer2KHR", (GLADapiproc) glad_vkCmdCopyBuffer2KHR, 2, commandBuffer, pCopyBufferInfo);
    
}
PFN_vkCmdCopyBuffer2KHR glad_debug_vkCmdCopyBuffer2KHR = glad_debug_impl_vkCmdCopyBuffer2KHR;
PFN_vkCmdCopyBufferToImage glad_vkCmdCopyBufferToImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBufferToImage(VkCommandBuffer commandBuffer, VkBuffer srcBuffer, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkBufferImageCopy * pRegions) {
    _pre_call_vulkan_callback("vkCmdCopyBufferToImage", (GLADapiproc) glad_vkCmdCopyBufferToImage, 6, commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    glad_vkCmdCopyBufferToImage(commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBufferToImage", (GLADapiproc) glad_vkCmdCopyBufferToImage, 6, commandBuffer, srcBuffer, dstImage, dstImageLayout, regionCount, pRegions);
    
}
PFN_vkCmdCopyBufferToImage glad_debug_vkCmdCopyBufferToImage = glad_debug_impl_vkCmdCopyBufferToImage;
PFN_vkCmdCopyBufferToImage2 glad_vkCmdCopyBufferToImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBufferToImage2(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
    _pre_call_vulkan_callback("vkCmdCopyBufferToImage2", (GLADapiproc) glad_vkCmdCopyBufferToImage2, 2, commandBuffer, pCopyBufferToImageInfo);
    glad_vkCmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBufferToImage2", (GLADapiproc) glad_vkCmdCopyBufferToImage2, 2, commandBuffer, pCopyBufferToImageInfo);
    
}
PFN_vkCmdCopyBufferToImage2 glad_debug_vkCmdCopyBufferToImage2 = glad_debug_impl_vkCmdCopyBufferToImage2;
PFN_vkCmdCopyBufferToImage2KHR glad_vkCmdCopyBufferToImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
    _pre_call_vulkan_callback("vkCmdCopyBufferToImage2KHR", (GLADapiproc) glad_vkCmdCopyBufferToImage2KHR, 2, commandBuffer, pCopyBufferToImageInfo);
    glad_vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyBufferToImage2KHR", (GLADapiproc) glad_vkCmdCopyBufferToImage2KHR, 2, commandBuffer, pCopyBufferToImageInfo);
    
}
PFN_vkCmdCopyBufferToImage2KHR glad_debug_vkCmdCopyBufferToImage2KHR = glad_debug_impl_vkCmdCopyBufferToImage2KHR;
PFN_vkCmdCopyImage glad_vkCmdCopyImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageCopy * pRegions) {
    _pre_call_vulkan_callback("vkCmdCopyImage", (GLADapiproc) glad_vkCmdCopyImage, 7, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    glad_vkCmdCopyImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImage", (GLADapiproc) glad_vkCmdCopyImage, 7, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    
}
PFN_vkCmdCopyImage glad_debug_vkCmdCopyImage = glad_debug_impl_vkCmdCopyImage;
PFN_vkCmdCopyImage2 glad_vkCmdCopyImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImage2(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo) {
    _pre_call_vulkan_callback("vkCmdCopyImage2", (GLADapiproc) glad_vkCmdCopyImage2, 2, commandBuffer, pCopyImageInfo);
    glad_vkCmdCopyImage2(commandBuffer, pCopyImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImage2", (GLADapiproc) glad_vkCmdCopyImage2, 2, commandBuffer, pCopyImageInfo);
    
}
PFN_vkCmdCopyImage2 glad_debug_vkCmdCopyImage2 = glad_debug_impl_vkCmdCopyImage2;
PFN_vkCmdCopyImage2KHR glad_vkCmdCopyImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo) {
    _pre_call_vulkan_callback("vkCmdCopyImage2KHR", (GLADapiproc) glad_vkCmdCopyImage2KHR, 2, commandBuffer, pCopyImageInfo);
    glad_vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImage2KHR", (GLADapiproc) glad_vkCmdCopyImage2KHR, 2, commandBuffer, pCopyImageInfo);
    
}
PFN_vkCmdCopyImage2KHR glad_debug_vkCmdCopyImage2KHR = glad_debug_impl_vkCmdCopyImage2KHR;
PFN_vkCmdCopyImageToBuffer glad_vkCmdCopyImageToBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImageToBuffer(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer dstBuffer, uint32_t regionCount, const VkBufferImageCopy * pRegions) {
    _pre_call_vulkan_callback("vkCmdCopyImageToBuffer", (GLADapiproc) glad_vkCmdCopyImageToBuffer, 6, commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    glad_vkCmdCopyImageToBuffer(commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImageToBuffer", (GLADapiproc) glad_vkCmdCopyImageToBuffer, 6, commandBuffer, srcImage, srcImageLayout, dstBuffer, regionCount, pRegions);
    
}
PFN_vkCmdCopyImageToBuffer glad_debug_vkCmdCopyImageToBuffer = glad_debug_impl_vkCmdCopyImageToBuffer;
PFN_vkCmdCopyImageToBuffer2 glad_vkCmdCopyImageToBuffer2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImageToBuffer2(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
    _pre_call_vulkan_callback("vkCmdCopyImageToBuffer2", (GLADapiproc) glad_vkCmdCopyImageToBuffer2, 2, commandBuffer, pCopyImageToBufferInfo);
    glad_vkCmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImageToBuffer2", (GLADapiproc) glad_vkCmdCopyImageToBuffer2, 2, commandBuffer, pCopyImageToBufferInfo);
    
}
PFN_vkCmdCopyImageToBuffer2 glad_debug_vkCmdCopyImageToBuffer2 = glad_debug_impl_vkCmdCopyImageToBuffer2;
PFN_vkCmdCopyImageToBuffer2KHR glad_vkCmdCopyImageToBuffer2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
    _pre_call_vulkan_callback("vkCmdCopyImageToBuffer2KHR", (GLADapiproc) glad_vkCmdCopyImageToBuffer2KHR, 2, commandBuffer, pCopyImageToBufferInfo);
    glad_vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyImageToBuffer2KHR", (GLADapiproc) glad_vkCmdCopyImageToBuffer2KHR, 2, commandBuffer, pCopyImageToBufferInfo);
    
}
PFN_vkCmdCopyImageToBuffer2KHR glad_debug_vkCmdCopyImageToBuffer2KHR = glad_debug_impl_vkCmdCopyImageToBuffer2KHR;
PFN_vkCmdCopyMemoryIndirectNV glad_vkCmdCopyMemoryIndirectNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMemoryIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdCopyMemoryIndirectNV", (GLADapiproc) glad_vkCmdCopyMemoryIndirectNV, 4, commandBuffer, copyBufferAddress, copyCount, stride);
    glad_vkCmdCopyMemoryIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMemoryIndirectNV", (GLADapiproc) glad_vkCmdCopyMemoryIndirectNV, 4, commandBuffer, copyBufferAddress, copyCount, stride);
    
}
PFN_vkCmdCopyMemoryIndirectNV glad_debug_vkCmdCopyMemoryIndirectNV = glad_debug_impl_vkCmdCopyMemoryIndirectNV;
PFN_vkCmdCopyMemoryToAccelerationStructureKHR glad_vkCmdCopyMemoryToAccelerationStructureKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMemoryToAccelerationStructureKHR(VkCommandBuffer commandBuffer, const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyMemoryToAccelerationStructureKHR", (GLADapiproc) glad_vkCmdCopyMemoryToAccelerationStructureKHR, 2, commandBuffer, pInfo);
    glad_vkCmdCopyMemoryToAccelerationStructureKHR(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMemoryToAccelerationStructureKHR", (GLADapiproc) glad_vkCmdCopyMemoryToAccelerationStructureKHR, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyMemoryToAccelerationStructureKHR glad_debug_vkCmdCopyMemoryToAccelerationStructureKHR = glad_debug_impl_vkCmdCopyMemoryToAccelerationStructureKHR;
PFN_vkCmdCopyMemoryToImageIndirectNV glad_vkCmdCopyMemoryToImageIndirectNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMemoryToImageIndirectNV(VkCommandBuffer commandBuffer, VkDeviceAddress copyBufferAddress, uint32_t copyCount, uint32_t stride, VkImage dstImage, VkImageLayout dstImageLayout, const VkImageSubresourceLayers * pImageSubresources) {
    _pre_call_vulkan_callback("vkCmdCopyMemoryToImageIndirectNV", (GLADapiproc) glad_vkCmdCopyMemoryToImageIndirectNV, 7, commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
    glad_vkCmdCopyMemoryToImageIndirectNV(commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMemoryToImageIndirectNV", (GLADapiproc) glad_vkCmdCopyMemoryToImageIndirectNV, 7, commandBuffer, copyBufferAddress, copyCount, stride, dstImage, dstImageLayout, pImageSubresources);
    
}
PFN_vkCmdCopyMemoryToImageIndirectNV glad_debug_vkCmdCopyMemoryToImageIndirectNV = glad_debug_impl_vkCmdCopyMemoryToImageIndirectNV;
PFN_vkCmdCopyMemoryToMicromapEXT glad_vkCmdCopyMemoryToMicromapEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMemoryToMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMemoryToMicromapInfoEXT * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyMemoryToMicromapEXT", (GLADapiproc) glad_vkCmdCopyMemoryToMicromapEXT, 2, commandBuffer, pInfo);
    glad_vkCmdCopyMemoryToMicromapEXT(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMemoryToMicromapEXT", (GLADapiproc) glad_vkCmdCopyMemoryToMicromapEXT, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyMemoryToMicromapEXT glad_debug_vkCmdCopyMemoryToMicromapEXT = glad_debug_impl_vkCmdCopyMemoryToMicromapEXT;
PFN_vkCmdCopyMicromapEXT glad_vkCmdCopyMicromapEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMicromapEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapInfoEXT * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyMicromapEXT", (GLADapiproc) glad_vkCmdCopyMicromapEXT, 2, commandBuffer, pInfo);
    glad_vkCmdCopyMicromapEXT(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMicromapEXT", (GLADapiproc) glad_vkCmdCopyMicromapEXT, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyMicromapEXT glad_debug_vkCmdCopyMicromapEXT = glad_debug_impl_vkCmdCopyMicromapEXT;
PFN_vkCmdCopyMicromapToMemoryEXT glad_vkCmdCopyMicromapToMemoryEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyMicromapToMemoryEXT(VkCommandBuffer commandBuffer, const VkCopyMicromapToMemoryInfoEXT * pInfo) {
    _pre_call_vulkan_callback("vkCmdCopyMicromapToMemoryEXT", (GLADapiproc) glad_vkCmdCopyMicromapToMemoryEXT, 2, commandBuffer, pInfo);
    glad_vkCmdCopyMicromapToMemoryEXT(commandBuffer, pInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCopyMicromapToMemoryEXT", (GLADapiproc) glad_vkCmdCopyMicromapToMemoryEXT, 2, commandBuffer, pInfo);
    
}
PFN_vkCmdCopyMicromapToMemoryEXT glad_debug_vkCmdCopyMicromapToMemoryEXT = glad_debug_impl_vkCmdCopyMicromapToMemoryEXT;
PFN_vkCmdCopyQueryPoolResults glad_vkCmdCopyQueryPoolResults = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyQueryPoolResults(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize stride, VkQueryResultFlags flags) {
    _pre_call_vulkan_callback("vkCmdCopyQueryPoolResults", (GLADapiproc) glad_vkCmdCopyQueryPoolResults, 8, commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    glad_vkCmdCopyQueryPoolResults(commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    _post_call_vulkan_callback(NULL, "vkCmdCopyQueryPoolResults", (GLADapiproc) glad_vkCmdCopyQueryPoolResults, 8, commandBuffer, queryPool, firstQuery, queryCount, dstBuffer, dstOffset, stride, flags);
    
}
PFN_vkCmdCopyQueryPoolResults glad_debug_vkCmdCopyQueryPoolResults = glad_debug_impl_vkCmdCopyQueryPoolResults;
PFN_vkCmdCuLaunchKernelNVX glad_vkCmdCuLaunchKernelNVX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCuLaunchKernelNVX(VkCommandBuffer commandBuffer, const VkCuLaunchInfoNVX * pLaunchInfo) {
    _pre_call_vulkan_callback("vkCmdCuLaunchKernelNVX", (GLADapiproc) glad_vkCmdCuLaunchKernelNVX, 2, commandBuffer, pLaunchInfo);
    glad_vkCmdCuLaunchKernelNVX(commandBuffer, pLaunchInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCuLaunchKernelNVX", (GLADapiproc) glad_vkCmdCuLaunchKernelNVX, 2, commandBuffer, pLaunchInfo);
    
}
PFN_vkCmdCuLaunchKernelNVX glad_debug_vkCmdCuLaunchKernelNVX = glad_debug_impl_vkCmdCuLaunchKernelNVX;
PFN_vkCmdCudaLaunchKernelNV glad_vkCmdCudaLaunchKernelNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCudaLaunchKernelNV(VkCommandBuffer commandBuffer, const VkCudaLaunchInfoNV * pLaunchInfo) {
    _pre_call_vulkan_callback("vkCmdCudaLaunchKernelNV", (GLADapiproc) glad_vkCmdCudaLaunchKernelNV, 2, commandBuffer, pLaunchInfo);
    glad_vkCmdCudaLaunchKernelNV(commandBuffer, pLaunchInfo);
    _post_call_vulkan_callback(NULL, "vkCmdCudaLaunchKernelNV", (GLADapiproc) glad_vkCmdCudaLaunchKernelNV, 2, commandBuffer, pLaunchInfo);
    
}
PFN_vkCmdCudaLaunchKernelNV glad_debug_vkCmdCudaLaunchKernelNV = glad_debug_impl_vkCmdCudaLaunchKernelNV;
PFN_vkCmdDebugMarkerBeginEXT glad_vkCmdDebugMarkerBeginEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDebugMarkerBeginEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
    _pre_call_vulkan_callback("vkCmdDebugMarkerBeginEXT", (GLADapiproc) glad_vkCmdDebugMarkerBeginEXT, 2, commandBuffer, pMarkerInfo);
    glad_vkCmdDebugMarkerBeginEXT(commandBuffer, pMarkerInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDebugMarkerBeginEXT", (GLADapiproc) glad_vkCmdDebugMarkerBeginEXT, 2, commandBuffer, pMarkerInfo);
    
}
PFN_vkCmdDebugMarkerBeginEXT glad_debug_vkCmdDebugMarkerBeginEXT = glad_debug_impl_vkCmdDebugMarkerBeginEXT;
PFN_vkCmdDebugMarkerEndEXT glad_vkCmdDebugMarkerEndEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDebugMarkerEndEXT(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdDebugMarkerEndEXT", (GLADapiproc) glad_vkCmdDebugMarkerEndEXT, 1, commandBuffer);
    glad_vkCmdDebugMarkerEndEXT(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdDebugMarkerEndEXT", (GLADapiproc) glad_vkCmdDebugMarkerEndEXT, 1, commandBuffer);
    
}
PFN_vkCmdDebugMarkerEndEXT glad_debug_vkCmdDebugMarkerEndEXT = glad_debug_impl_vkCmdDebugMarkerEndEXT;
PFN_vkCmdDebugMarkerInsertEXT glad_vkCmdDebugMarkerInsertEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDebugMarkerInsertEXT(VkCommandBuffer commandBuffer, const VkDebugMarkerMarkerInfoEXT * pMarkerInfo) {
    _pre_call_vulkan_callback("vkCmdDebugMarkerInsertEXT", (GLADapiproc) glad_vkCmdDebugMarkerInsertEXT, 2, commandBuffer, pMarkerInfo);
    glad_vkCmdDebugMarkerInsertEXT(commandBuffer, pMarkerInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDebugMarkerInsertEXT", (GLADapiproc) glad_vkCmdDebugMarkerInsertEXT, 2, commandBuffer, pMarkerInfo);
    
}
PFN_vkCmdDebugMarkerInsertEXT glad_debug_vkCmdDebugMarkerInsertEXT = glad_debug_impl_vkCmdDebugMarkerInsertEXT;
PFN_vkCmdDecodeVideoKHR glad_vkCmdDecodeVideoKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDecodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoDecodeInfoKHR * pDecodeInfo) {
    _pre_call_vulkan_callback("vkCmdDecodeVideoKHR", (GLADapiproc) glad_vkCmdDecodeVideoKHR, 2, commandBuffer, pDecodeInfo);
    glad_vkCmdDecodeVideoKHR(commandBuffer, pDecodeInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDecodeVideoKHR", (GLADapiproc) glad_vkCmdDecodeVideoKHR, 2, commandBuffer, pDecodeInfo);
    
}
PFN_vkCmdDecodeVideoKHR glad_debug_vkCmdDecodeVideoKHR = glad_debug_impl_vkCmdDecodeVideoKHR;
PFN_vkCmdDecompressMemoryIndirectCountNV glad_vkCmdDecompressMemoryIndirectCountNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDecompressMemoryIndirectCountNV(VkCommandBuffer commandBuffer, VkDeviceAddress indirectCommandsAddress, VkDeviceAddress indirectCommandsCountAddress, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDecompressMemoryIndirectCountNV", (GLADapiproc) glad_vkCmdDecompressMemoryIndirectCountNV, 4, commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
    glad_vkCmdDecompressMemoryIndirectCountNV(commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDecompressMemoryIndirectCountNV", (GLADapiproc) glad_vkCmdDecompressMemoryIndirectCountNV, 4, commandBuffer, indirectCommandsAddress, indirectCommandsCountAddress, stride);
    
}
PFN_vkCmdDecompressMemoryIndirectCountNV glad_debug_vkCmdDecompressMemoryIndirectCountNV = glad_debug_impl_vkCmdDecompressMemoryIndirectCountNV;
PFN_vkCmdDecompressMemoryNV glad_vkCmdDecompressMemoryNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDecompressMemoryNV(VkCommandBuffer commandBuffer, uint32_t decompressRegionCount, const VkDecompressMemoryRegionNV * pDecompressMemoryRegions) {
    _pre_call_vulkan_callback("vkCmdDecompressMemoryNV", (GLADapiproc) glad_vkCmdDecompressMemoryNV, 3, commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
    glad_vkCmdDecompressMemoryNV(commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
    _post_call_vulkan_callback(NULL, "vkCmdDecompressMemoryNV", (GLADapiproc) glad_vkCmdDecompressMemoryNV, 3, commandBuffer, decompressRegionCount, pDecompressMemoryRegions);
    
}
PFN_vkCmdDecompressMemoryNV glad_debug_vkCmdDecompressMemoryNV = glad_debug_impl_vkCmdDecompressMemoryNV;
PFN_vkCmdDispatch glad_vkCmdDispatch = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatch(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkan_callback("vkCmdDispatch", (GLADapiproc) glad_vkCmdDispatch, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDispatch(commandBuffer, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkan_callback(NULL, "vkCmdDispatch", (GLADapiproc) glad_vkCmdDispatch, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDispatch glad_debug_vkCmdDispatch = glad_debug_impl_vkCmdDispatch;
PFN_vkCmdDispatchBase glad_vkCmdDispatchBase = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkan_callback("vkCmdDispatchBase", (GLADapiproc) glad_vkCmdDispatchBase, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchBase", (GLADapiproc) glad_vkCmdDispatchBase, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDispatchBase glad_debug_vkCmdDispatchBase = glad_debug_impl_vkCmdDispatchBase;
PFN_vkCmdDispatchBaseKHR glad_vkCmdDispatchBaseKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchBaseKHR(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkan_callback("vkCmdDispatchBaseKHR", (GLADapiproc) glad_vkCmdDispatchBaseKHR, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDispatchBaseKHR(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchBaseKHR", (GLADapiproc) glad_vkCmdDispatchBaseKHR, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDispatchBaseKHR glad_debug_vkCmdDispatchBaseKHR = glad_debug_impl_vkCmdDispatchBaseKHR;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphAMDX glad_vkCmdDispatchGraphAMDX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchGraphAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX * pCountInfo) {
    _pre_call_vulkan_callback("vkCmdDispatchGraphAMDX", (GLADapiproc) glad_vkCmdDispatchGraphAMDX, 3, commandBuffer, scratch, pCountInfo);
    glad_vkCmdDispatchGraphAMDX(commandBuffer, scratch, pCountInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchGraphAMDX", (GLADapiproc) glad_vkCmdDispatchGraphAMDX, 3, commandBuffer, scratch, pCountInfo);
    
}
PFN_vkCmdDispatchGraphAMDX glad_debug_vkCmdDispatchGraphAMDX = glad_debug_impl_vkCmdDispatchGraphAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphIndirectAMDX glad_vkCmdDispatchGraphIndirectAMDX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchGraphIndirectAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, const VkDispatchGraphCountInfoAMDX * pCountInfo) {
    _pre_call_vulkan_callback("vkCmdDispatchGraphIndirectAMDX", (GLADapiproc) glad_vkCmdDispatchGraphIndirectAMDX, 3, commandBuffer, scratch, pCountInfo);
    glad_vkCmdDispatchGraphIndirectAMDX(commandBuffer, scratch, pCountInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchGraphIndirectAMDX", (GLADapiproc) glad_vkCmdDispatchGraphIndirectAMDX, 3, commandBuffer, scratch, pCountInfo);
    
}
PFN_vkCmdDispatchGraphIndirectAMDX glad_debug_vkCmdDispatchGraphIndirectAMDX = glad_debug_impl_vkCmdDispatchGraphIndirectAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphIndirectCountAMDX glad_vkCmdDispatchGraphIndirectCountAMDX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchGraphIndirectCountAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch, VkDeviceAddress countInfo) {
    _pre_call_vulkan_callback("vkCmdDispatchGraphIndirectCountAMDX", (GLADapiproc) glad_vkCmdDispatchGraphIndirectCountAMDX, 3, commandBuffer, scratch, countInfo);
    glad_vkCmdDispatchGraphIndirectCountAMDX(commandBuffer, scratch, countInfo);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchGraphIndirectCountAMDX", (GLADapiproc) glad_vkCmdDispatchGraphIndirectCountAMDX, 3, commandBuffer, scratch, countInfo);
    
}
PFN_vkCmdDispatchGraphIndirectCountAMDX glad_debug_vkCmdDispatchGraphIndirectCountAMDX = glad_debug_impl_vkCmdDispatchGraphIndirectCountAMDX;

#endif
PFN_vkCmdDispatchIndirect glad_vkCmdDispatchIndirect = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
    _pre_call_vulkan_callback("vkCmdDispatchIndirect", (GLADapiproc) glad_vkCmdDispatchIndirect, 3, commandBuffer, buffer, offset);
    glad_vkCmdDispatchIndirect(commandBuffer, buffer, offset);
    _post_call_vulkan_callback(NULL, "vkCmdDispatchIndirect", (GLADapiproc) glad_vkCmdDispatchIndirect, 3, commandBuffer, buffer, offset);
    
}
PFN_vkCmdDispatchIndirect glad_debug_vkCmdDispatchIndirect = glad_debug_impl_vkCmdDispatchIndirect;
PFN_vkCmdDraw glad_vkCmdDraw = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDraw(VkCommandBuffer commandBuffer, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
    _pre_call_vulkan_callback("vkCmdDraw", (GLADapiproc) glad_vkCmdDraw, 5, commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
    glad_vkCmdDraw(commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
    _post_call_vulkan_callback(NULL, "vkCmdDraw", (GLADapiproc) glad_vkCmdDraw, 5, commandBuffer, vertexCount, instanceCount, firstVertex, firstInstance);
    
}
PFN_vkCmdDraw glad_debug_vkCmdDraw = glad_debug_impl_vkCmdDraw;
PFN_vkCmdDrawClusterHUAWEI glad_vkCmdDrawClusterHUAWEI = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawClusterHUAWEI(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkan_callback("vkCmdDrawClusterHUAWEI", (GLADapiproc) glad_vkCmdDrawClusterHUAWEI, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDrawClusterHUAWEI(commandBuffer, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkan_callback(NULL, "vkCmdDrawClusterHUAWEI", (GLADapiproc) glad_vkCmdDrawClusterHUAWEI, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDrawClusterHUAWEI glad_debug_vkCmdDrawClusterHUAWEI = glad_debug_impl_vkCmdDrawClusterHUAWEI;
PFN_vkCmdDrawClusterIndirectHUAWEI glad_vkCmdDrawClusterIndirectHUAWEI = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawClusterIndirectHUAWEI(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset) {
    _pre_call_vulkan_callback("vkCmdDrawClusterIndirectHUAWEI", (GLADapiproc) glad_vkCmdDrawClusterIndirectHUAWEI, 3, commandBuffer, buffer, offset);
    glad_vkCmdDrawClusterIndirectHUAWEI(commandBuffer, buffer, offset);
    _post_call_vulkan_callback(NULL, "vkCmdDrawClusterIndirectHUAWEI", (GLADapiproc) glad_vkCmdDrawClusterIndirectHUAWEI, 3, commandBuffer, buffer, offset);
    
}
PFN_vkCmdDrawClusterIndirectHUAWEI glad_debug_vkCmdDrawClusterIndirectHUAWEI = glad_debug_impl_vkCmdDrawClusterIndirectHUAWEI;
PFN_vkCmdDrawIndexed glad_vkCmdDrawIndexed = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexed(VkCommandBuffer commandBuffer, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t vertexOffset, uint32_t firstInstance) {
    _pre_call_vulkan_callback("vkCmdDrawIndexed", (GLADapiproc) glad_vkCmdDrawIndexed, 6, commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    glad_vkCmdDrawIndexed(commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndexed", (GLADapiproc) glad_vkCmdDrawIndexed, 6, commandBuffer, indexCount, instanceCount, firstIndex, vertexOffset, firstInstance);
    
}
PFN_vkCmdDrawIndexed glad_debug_vkCmdDrawIndexed = glad_debug_impl_vkCmdDrawIndexed;
PFN_vkCmdDrawIndexedIndirect glad_vkCmdDrawIndexedIndirect = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexedIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndexedIndirect", (GLADapiproc) glad_vkCmdDrawIndexedIndirect, 5, commandBuffer, buffer, offset, drawCount, stride);
    glad_vkCmdDrawIndexedIndirect(commandBuffer, buffer, offset, drawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndexedIndirect", (GLADapiproc) glad_vkCmdDrawIndexedIndirect, 5, commandBuffer, buffer, offset, drawCount, stride);
    
}
PFN_vkCmdDrawIndexedIndirect glad_debug_vkCmdDrawIndexedIndirect = glad_debug_impl_vkCmdDrawIndexedIndirect;
PFN_vkCmdDrawIndexedIndirectCount glad_vkCmdDrawIndexedIndirectCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndexedIndirectCount", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndexedIndirectCount", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndexedIndirectCount glad_debug_vkCmdDrawIndexedIndirectCount = glad_debug_impl_vkCmdDrawIndexedIndirectCount;
PFN_vkCmdDrawIndexedIndirectCountAMD glad_vkCmdDrawIndexedIndirectCountAMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexedIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndexedIndirectCountAMD", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCountAMD, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndexedIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndexedIndirectCountAMD", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCountAMD, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndexedIndirectCountAMD glad_debug_vkCmdDrawIndexedIndirectCountAMD = glad_debug_impl_vkCmdDrawIndexedIndirectCountAMD;
PFN_vkCmdDrawIndexedIndirectCountKHR glad_vkCmdDrawIndexedIndirectCountKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexedIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndexedIndirectCountKHR", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCountKHR, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndexedIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndexedIndirectCountKHR", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCountKHR, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndexedIndirectCountKHR glad_debug_vkCmdDrawIndexedIndirectCountKHR = glad_debug_impl_vkCmdDrawIndexedIndirectCountKHR;
PFN_vkCmdDrawIndirect glad_vkCmdDrawIndirect = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirect(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndirect", (GLADapiproc) glad_vkCmdDrawIndirect, 5, commandBuffer, buffer, offset, drawCount, stride);
    glad_vkCmdDrawIndirect(commandBuffer, buffer, offset, drawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndirect", (GLADapiproc) glad_vkCmdDrawIndirect, 5, commandBuffer, buffer, offset, drawCount, stride);
    
}
PFN_vkCmdDrawIndirect glad_debug_vkCmdDrawIndirect = glad_debug_impl_vkCmdDrawIndirect;
PFN_vkCmdDrawIndirectByteCountEXT glad_vkCmdDrawIndirectByteCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirectByteCountEXT(VkCommandBuffer commandBuffer, uint32_t instanceCount, uint32_t firstInstance, VkBuffer counterBuffer, VkDeviceSize counterBufferOffset, uint32_t counterOffset, uint32_t vertexStride) {
    _pre_call_vulkan_callback("vkCmdDrawIndirectByteCountEXT", (GLADapiproc) glad_vkCmdDrawIndirectByteCountEXT, 7, commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
    glad_vkCmdDrawIndirectByteCountEXT(commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndirectByteCountEXT", (GLADapiproc) glad_vkCmdDrawIndirectByteCountEXT, 7, commandBuffer, instanceCount, firstInstance, counterBuffer, counterBufferOffset, counterOffset, vertexStride);
    
}
PFN_vkCmdDrawIndirectByteCountEXT glad_debug_vkCmdDrawIndirectByteCountEXT = glad_debug_impl_vkCmdDrawIndirectByteCountEXT;
PFN_vkCmdDrawIndirectCount glad_vkCmdDrawIndirectCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndirectCount", (GLADapiproc) glad_vkCmdDrawIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndirectCount", (GLADapiproc) glad_vkCmdDrawIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndirectCount glad_debug_vkCmdDrawIndirectCount = glad_debug_impl_vkCmdDrawIndirectCount;
PFN_vkCmdDrawIndirectCountAMD glad_vkCmdDrawIndirectCountAMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirectCountAMD(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndirectCountAMD", (GLADapiproc) glad_vkCmdDrawIndirectCountAMD, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndirectCountAMD(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndirectCountAMD", (GLADapiproc) glad_vkCmdDrawIndirectCountAMD, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndirectCountAMD glad_debug_vkCmdDrawIndirectCountAMD = glad_debug_impl_vkCmdDrawIndirectCountAMD;
PFN_vkCmdDrawIndirectCountKHR glad_vkCmdDrawIndirectCountKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirectCountKHR(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawIndirectCountKHR", (GLADapiproc) glad_vkCmdDrawIndirectCountKHR, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndirectCountKHR(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawIndirectCountKHR", (GLADapiproc) glad_vkCmdDrawIndirectCountKHR, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndirectCountKHR glad_debug_vkCmdDrawIndirectCountKHR = glad_debug_impl_vkCmdDrawIndirectCountKHR;
PFN_vkCmdDrawMeshTasksEXT glad_vkCmdDrawMeshTasksEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksEXT(VkCommandBuffer commandBuffer, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksEXT, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDrawMeshTasksEXT(commandBuffer, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksEXT, 4, commandBuffer, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDrawMeshTasksEXT glad_debug_vkCmdDrawMeshTasksEXT = glad_debug_impl_vkCmdDrawMeshTasksEXT;
PFN_vkCmdDrawMeshTasksIndirectCountEXT glad_vkCmdDrawMeshTasksIndirectCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksIndirectCountEXT(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksIndirectCountEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectCountEXT, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawMeshTasksIndirectCountEXT(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksIndirectCountEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectCountEXT, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawMeshTasksIndirectCountEXT glad_debug_vkCmdDrawMeshTasksIndirectCountEXT = glad_debug_impl_vkCmdDrawMeshTasksIndirectCountEXT;
PFN_vkCmdDrawMeshTasksIndirectCountNV glad_vkCmdDrawMeshTasksIndirectCountNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksIndirectCountNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksIndirectCountNV", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectCountNV, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksIndirectCountNV", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectCountNV, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawMeshTasksIndirectCountNV glad_debug_vkCmdDrawMeshTasksIndirectCountNV = glad_debug_impl_vkCmdDrawMeshTasksIndirectCountNV;
PFN_vkCmdDrawMeshTasksIndirectEXT glad_vkCmdDrawMeshTasksIndirectEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksIndirectEXT(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksIndirectEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectEXT, 5, commandBuffer, buffer, offset, drawCount, stride);
    glad_vkCmdDrawMeshTasksIndirectEXT(commandBuffer, buffer, offset, drawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksIndirectEXT", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectEXT, 5, commandBuffer, buffer, offset, drawCount, stride);
    
}
PFN_vkCmdDrawMeshTasksIndirectEXT glad_debug_vkCmdDrawMeshTasksIndirectEXT = glad_debug_impl_vkCmdDrawMeshTasksIndirectEXT;
PFN_vkCmdDrawMeshTasksIndirectNV glad_vkCmdDrawMeshTasksIndirectNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksIndirectNV(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, uint32_t drawCount, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksIndirectNV", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectNV, 5, commandBuffer, buffer, offset, drawCount, stride);
    glad_vkCmdDrawMeshTasksIndirectNV(commandBuffer, buffer, offset, drawCount, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksIndirectNV", (GLADapiproc) glad_vkCmdDrawMeshTasksIndirectNV, 5, commandBuffer, buffer, offset, drawCount, stride);
    
}
PFN_vkCmdDrawMeshTasksIndirectNV glad_debug_vkCmdDrawMeshTasksIndirectNV = glad_debug_impl_vkCmdDrawMeshTasksIndirectNV;
PFN_vkCmdDrawMeshTasksNV glad_vkCmdDrawMeshTasksNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMeshTasksNV(VkCommandBuffer commandBuffer, uint32_t taskCount, uint32_t firstTask) {
    _pre_call_vulkan_callback("vkCmdDrawMeshTasksNV", (GLADapiproc) glad_vkCmdDrawMeshTasksNV, 3, commandBuffer, taskCount, firstTask);
    glad_vkCmdDrawMeshTasksNV(commandBuffer, taskCount, firstTask);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMeshTasksNV", (GLADapiproc) glad_vkCmdDrawMeshTasksNV, 3, commandBuffer, taskCount, firstTask);
    
}
PFN_vkCmdDrawMeshTasksNV glad_debug_vkCmdDrawMeshTasksNV = glad_debug_impl_vkCmdDrawMeshTasksNV;
PFN_vkCmdDrawMultiEXT glad_vkCmdDrawMultiEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMultiEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawInfoEXT * pVertexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride) {
    _pre_call_vulkan_callback("vkCmdDrawMultiEXT", (GLADapiproc) glad_vkCmdDrawMultiEXT, 6, commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
    glad_vkCmdDrawMultiEXT(commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMultiEXT", (GLADapiproc) glad_vkCmdDrawMultiEXT, 6, commandBuffer, drawCount, pVertexInfo, instanceCount, firstInstance, stride);
    
}
PFN_vkCmdDrawMultiEXT glad_debug_vkCmdDrawMultiEXT = glad_debug_impl_vkCmdDrawMultiEXT;
PFN_vkCmdDrawMultiIndexedEXT glad_vkCmdDrawMultiIndexedEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawMultiIndexedEXT(VkCommandBuffer commandBuffer, uint32_t drawCount, const VkMultiDrawIndexedInfoEXT * pIndexInfo, uint32_t instanceCount, uint32_t firstInstance, uint32_t stride, const int32_t * pVertexOffset) {
    _pre_call_vulkan_callback("vkCmdDrawMultiIndexedEXT", (GLADapiproc) glad_vkCmdDrawMultiIndexedEXT, 7, commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
    glad_vkCmdDrawMultiIndexedEXT(commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
    _post_call_vulkan_callback(NULL, "vkCmdDrawMultiIndexedEXT", (GLADapiproc) glad_vkCmdDrawMultiIndexedEXT, 7, commandBuffer, drawCount, pIndexInfo, instanceCount, firstInstance, stride, pVertexOffset);
    
}
PFN_vkCmdDrawMultiIndexedEXT glad_debug_vkCmdDrawMultiIndexedEXT = glad_debug_impl_vkCmdDrawMultiIndexedEXT;
PFN_vkCmdEncodeVideoKHR glad_vkCmdEncodeVideoKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEncodeVideoKHR(VkCommandBuffer commandBuffer, const VkVideoEncodeInfoKHR * pEncodeInfo) {
    _pre_call_vulkan_callback("vkCmdEncodeVideoKHR", (GLADapiproc) glad_vkCmdEncodeVideoKHR, 2, commandBuffer, pEncodeInfo);
    glad_vkCmdEncodeVideoKHR(commandBuffer, pEncodeInfo);
    _post_call_vulkan_callback(NULL, "vkCmdEncodeVideoKHR", (GLADapiproc) glad_vkCmdEncodeVideoKHR, 2, commandBuffer, pEncodeInfo);
    
}
PFN_vkCmdEncodeVideoKHR glad_debug_vkCmdEncodeVideoKHR = glad_debug_impl_vkCmdEncodeVideoKHR;
PFN_vkCmdEndConditionalRenderingEXT glad_vkCmdEndConditionalRenderingEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndConditionalRenderingEXT(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdEndConditionalRenderingEXT", (GLADapiproc) glad_vkCmdEndConditionalRenderingEXT, 1, commandBuffer);
    glad_vkCmdEndConditionalRenderingEXT(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdEndConditionalRenderingEXT", (GLADapiproc) glad_vkCmdEndConditionalRenderingEXT, 1, commandBuffer);
    
}
PFN_vkCmdEndConditionalRenderingEXT glad_debug_vkCmdEndConditionalRenderingEXT = glad_debug_impl_vkCmdEndConditionalRenderingEXT;
PFN_vkCmdEndDebugUtilsLabelEXT glad_vkCmdEndDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdEndDebugUtilsLabelEXT, 1, commandBuffer);
    glad_vkCmdEndDebugUtilsLabelEXT(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdEndDebugUtilsLabelEXT, 1, commandBuffer);
    
}
PFN_vkCmdEndDebugUtilsLabelEXT glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_debug_impl_vkCmdEndDebugUtilsLabelEXT;
PFN_vkCmdEndQuery glad_vkCmdEndQuery = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndQuery(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkan_callback("vkCmdEndQuery", (GLADapiproc) glad_vkCmdEndQuery, 3, commandBuffer, queryPool, query);
    glad_vkCmdEndQuery(commandBuffer, queryPool, query);
    _post_call_vulkan_callback(NULL, "vkCmdEndQuery", (GLADapiproc) glad_vkCmdEndQuery, 3, commandBuffer, queryPool, query);
    
}
PFN_vkCmdEndQuery glad_debug_vkCmdEndQuery = glad_debug_impl_vkCmdEndQuery;
PFN_vkCmdEndQueryIndexedEXT glad_vkCmdEndQueryIndexedEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndQueryIndexedEXT(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t query, uint32_t index) {
    _pre_call_vulkan_callback("vkCmdEndQueryIndexedEXT", (GLADapiproc) glad_vkCmdEndQueryIndexedEXT, 4, commandBuffer, queryPool, query, index);
    glad_vkCmdEndQueryIndexedEXT(commandBuffer, queryPool, query, index);
    _post_call_vulkan_callback(NULL, "vkCmdEndQueryIndexedEXT", (GLADapiproc) glad_vkCmdEndQueryIndexedEXT, 4, commandBuffer, queryPool, query, index);
    
}
PFN_vkCmdEndQueryIndexedEXT glad_debug_vkCmdEndQueryIndexedEXT = glad_debug_impl_vkCmdEndQueryIndexedEXT;
PFN_vkCmdEndRenderPass glad_vkCmdEndRenderPass = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRenderPass(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdEndRenderPass", (GLADapiproc) glad_vkCmdEndRenderPass, 1, commandBuffer);
    glad_vkCmdEndRenderPass(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdEndRenderPass", (GLADapiproc) glad_vkCmdEndRenderPass, 1, commandBuffer);
    
}
PFN_vkCmdEndRenderPass glad_debug_vkCmdEndRenderPass = glad_debug_impl_vkCmdEndRenderPass;
PFN_vkCmdEndRenderPass2 glad_vkCmdEndRenderPass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkan_callback("vkCmdEndRenderPass2", (GLADapiproc) glad_vkCmdEndRenderPass2, 2, commandBuffer, pSubpassEndInfo);
    glad_vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
    _post_call_vulkan_callback(NULL, "vkCmdEndRenderPass2", (GLADapiproc) glad_vkCmdEndRenderPass2, 2, commandBuffer, pSubpassEndInfo);
    
}
PFN_vkCmdEndRenderPass2 glad_debug_vkCmdEndRenderPass2 = glad_debug_impl_vkCmdEndRenderPass2;
PFN_vkCmdEndRenderPass2KHR glad_vkCmdEndRenderPass2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRenderPass2KHR(VkCommandBuffer commandBuffer, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkan_callback("vkCmdEndRenderPass2KHR", (GLADapiproc) glad_vkCmdEndRenderPass2KHR, 2, commandBuffer, pSubpassEndInfo);
    glad_vkCmdEndRenderPass2KHR(commandBuffer, pSubpassEndInfo);
    _post_call_vulkan_callback(NULL, "vkCmdEndRenderPass2KHR", (GLADapiproc) glad_vkCmdEndRenderPass2KHR, 2, commandBuffer, pSubpassEndInfo);
    
}
PFN_vkCmdEndRenderPass2KHR glad_debug_vkCmdEndRenderPass2KHR = glad_debug_impl_vkCmdEndRenderPass2KHR;
PFN_vkCmdEndRendering glad_vkCmdEndRendering = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRendering(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdEndRendering", (GLADapiproc) glad_vkCmdEndRendering, 1, commandBuffer);
    glad_vkCmdEndRendering(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdEndRendering", (GLADapiproc) glad_vkCmdEndRendering, 1, commandBuffer);
    
}
PFN_vkCmdEndRendering glad_debug_vkCmdEndRendering = glad_debug_impl_vkCmdEndRendering;
PFN_vkCmdEndRenderingKHR glad_vkCmdEndRenderingKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRenderingKHR(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdEndRenderingKHR", (GLADapiproc) glad_vkCmdEndRenderingKHR, 1, commandBuffer);
    glad_vkCmdEndRenderingKHR(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdEndRenderingKHR", (GLADapiproc) glad_vkCmdEndRenderingKHR, 1, commandBuffer);
    
}
PFN_vkCmdEndRenderingKHR glad_debug_vkCmdEndRenderingKHR = glad_debug_impl_vkCmdEndRenderingKHR;
PFN_vkCmdEndTransformFeedbackEXT glad_vkCmdEndTransformFeedbackEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndTransformFeedbackEXT(VkCommandBuffer commandBuffer, uint32_t firstCounterBuffer, uint32_t counterBufferCount, const VkBuffer * pCounterBuffers, const VkDeviceSize * pCounterBufferOffsets) {
    _pre_call_vulkan_callback("vkCmdEndTransformFeedbackEXT", (GLADapiproc) glad_vkCmdEndTransformFeedbackEXT, 5, commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    glad_vkCmdEndTransformFeedbackEXT(commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    _post_call_vulkan_callback(NULL, "vkCmdEndTransformFeedbackEXT", (GLADapiproc) glad_vkCmdEndTransformFeedbackEXT, 5, commandBuffer, firstCounterBuffer, counterBufferCount, pCounterBuffers, pCounterBufferOffsets);
    
}
PFN_vkCmdEndTransformFeedbackEXT glad_debug_vkCmdEndTransformFeedbackEXT = glad_debug_impl_vkCmdEndTransformFeedbackEXT;
PFN_vkCmdEndVideoCodingKHR glad_vkCmdEndVideoCodingKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndVideoCodingKHR(VkCommandBuffer commandBuffer, const VkVideoEndCodingInfoKHR * pEndCodingInfo) {
    _pre_call_vulkan_callback("vkCmdEndVideoCodingKHR", (GLADapiproc) glad_vkCmdEndVideoCodingKHR, 2, commandBuffer, pEndCodingInfo);
    glad_vkCmdEndVideoCodingKHR(commandBuffer, pEndCodingInfo);
    _post_call_vulkan_callback(NULL, "vkCmdEndVideoCodingKHR", (GLADapiproc) glad_vkCmdEndVideoCodingKHR, 2, commandBuffer, pEndCodingInfo);
    
}
PFN_vkCmdEndVideoCodingKHR glad_debug_vkCmdEndVideoCodingKHR = glad_debug_impl_vkCmdEndVideoCodingKHR;
PFN_vkCmdExecuteCommands glad_vkCmdExecuteCommands = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdExecuteCommands(VkCommandBuffer commandBuffer, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers) {
    _pre_call_vulkan_callback("vkCmdExecuteCommands", (GLADapiproc) glad_vkCmdExecuteCommands, 3, commandBuffer, commandBufferCount, pCommandBuffers);
    glad_vkCmdExecuteCommands(commandBuffer, commandBufferCount, pCommandBuffers);
    _post_call_vulkan_callback(NULL, "vkCmdExecuteCommands", (GLADapiproc) glad_vkCmdExecuteCommands, 3, commandBuffer, commandBufferCount, pCommandBuffers);
    
}
PFN_vkCmdExecuteCommands glad_debug_vkCmdExecuteCommands = glad_debug_impl_vkCmdExecuteCommands;
PFN_vkCmdExecuteGeneratedCommandsNV glad_vkCmdExecuteGeneratedCommandsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdExecuteGeneratedCommandsNV(VkCommandBuffer commandBuffer, VkBool32 isPreprocessed, const VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
    _pre_call_vulkan_callback("vkCmdExecuteGeneratedCommandsNV", (GLADapiproc) glad_vkCmdExecuteGeneratedCommandsNV, 3, commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
    glad_vkCmdExecuteGeneratedCommandsNV(commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdExecuteGeneratedCommandsNV", (GLADapiproc) glad_vkCmdExecuteGeneratedCommandsNV, 3, commandBuffer, isPreprocessed, pGeneratedCommandsInfo);
    
}
PFN_vkCmdExecuteGeneratedCommandsNV glad_debug_vkCmdExecuteGeneratedCommandsNV = glad_debug_impl_vkCmdExecuteGeneratedCommandsNV;
PFN_vkCmdFillBuffer glad_vkCmdFillBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdFillBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize size, uint32_t data) {
    _pre_call_vulkan_callback("vkCmdFillBuffer", (GLADapiproc) glad_vkCmdFillBuffer, 5, commandBuffer, dstBuffer, dstOffset, size, data);
    glad_vkCmdFillBuffer(commandBuffer, dstBuffer, dstOffset, size, data);
    _post_call_vulkan_callback(NULL, "vkCmdFillBuffer", (GLADapiproc) glad_vkCmdFillBuffer, 5, commandBuffer, dstBuffer, dstOffset, size, data);
    
}
PFN_vkCmdFillBuffer glad_debug_vkCmdFillBuffer = glad_debug_impl_vkCmdFillBuffer;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdInitializeGraphScratchMemoryAMDX glad_vkCmdInitializeGraphScratchMemoryAMDX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdInitializeGraphScratchMemoryAMDX(VkCommandBuffer commandBuffer, VkDeviceAddress scratch) {
    _pre_call_vulkan_callback("vkCmdInitializeGraphScratchMemoryAMDX", (GLADapiproc) glad_vkCmdInitializeGraphScratchMemoryAMDX, 2, commandBuffer, scratch);
    glad_vkCmdInitializeGraphScratchMemoryAMDX(commandBuffer, scratch);
    _post_call_vulkan_callback(NULL, "vkCmdInitializeGraphScratchMemoryAMDX", (GLADapiproc) glad_vkCmdInitializeGraphScratchMemoryAMDX, 2, commandBuffer, scratch);
    
}
PFN_vkCmdInitializeGraphScratchMemoryAMDX glad_debug_vkCmdInitializeGraphScratchMemoryAMDX = glad_debug_impl_vkCmdInitializeGraphScratchMemoryAMDX;

#endif
PFN_vkCmdInsertDebugUtilsLabelEXT glad_vkCmdInsertDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkan_callback("vkCmdInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdInsertDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    glad_vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    _post_call_vulkan_callback(NULL, "vkCmdInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdInsertDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    
}
PFN_vkCmdInsertDebugUtilsLabelEXT glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT;
PFN_vkCmdNextSubpass glad_vkCmdNextSubpass = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdNextSubpass(VkCommandBuffer commandBuffer, VkSubpassContents contents) {
    _pre_call_vulkan_callback("vkCmdNextSubpass", (GLADapiproc) glad_vkCmdNextSubpass, 2, commandBuffer, contents);
    glad_vkCmdNextSubpass(commandBuffer, contents);
    _post_call_vulkan_callback(NULL, "vkCmdNextSubpass", (GLADapiproc) glad_vkCmdNextSubpass, 2, commandBuffer, contents);
    
}
PFN_vkCmdNextSubpass glad_debug_vkCmdNextSubpass = glad_debug_impl_vkCmdNextSubpass;
PFN_vkCmdNextSubpass2 glad_vkCmdNextSubpass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo * pSubpassBeginInfo, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkan_callback("vkCmdNextSubpass2", (GLADapiproc) glad_vkCmdNextSubpass2, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    glad_vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    _post_call_vulkan_callback(NULL, "vkCmdNextSubpass2", (GLADapiproc) glad_vkCmdNextSubpass2, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    
}
PFN_vkCmdNextSubpass2 glad_debug_vkCmdNextSubpass2 = glad_debug_impl_vkCmdNextSubpass2;
PFN_vkCmdNextSubpass2KHR glad_vkCmdNextSubpass2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdNextSubpass2KHR(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo * pSubpassBeginInfo, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkan_callback("vkCmdNextSubpass2KHR", (GLADapiproc) glad_vkCmdNextSubpass2KHR, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    glad_vkCmdNextSubpass2KHR(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    _post_call_vulkan_callback(NULL, "vkCmdNextSubpass2KHR", (GLADapiproc) glad_vkCmdNextSubpass2KHR, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    
}
PFN_vkCmdNextSubpass2KHR glad_debug_vkCmdNextSubpass2KHR = glad_debug_impl_vkCmdNextSubpass2KHR;
PFN_vkCmdOpticalFlowExecuteNV glad_vkCmdOpticalFlowExecuteNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdOpticalFlowExecuteNV(VkCommandBuffer commandBuffer, VkOpticalFlowSessionNV session, const VkOpticalFlowExecuteInfoNV * pExecuteInfo) {
    _pre_call_vulkan_callback("vkCmdOpticalFlowExecuteNV", (GLADapiproc) glad_vkCmdOpticalFlowExecuteNV, 3, commandBuffer, session, pExecuteInfo);
    glad_vkCmdOpticalFlowExecuteNV(commandBuffer, session, pExecuteInfo);
    _post_call_vulkan_callback(NULL, "vkCmdOpticalFlowExecuteNV", (GLADapiproc) glad_vkCmdOpticalFlowExecuteNV, 3, commandBuffer, session, pExecuteInfo);
    
}
PFN_vkCmdOpticalFlowExecuteNV glad_debug_vkCmdOpticalFlowExecuteNV = glad_debug_impl_vkCmdOpticalFlowExecuteNV;
PFN_vkCmdPipelineBarrier glad_vkCmdPipelineBarrier = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPipelineBarrier(VkCommandBuffer commandBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, VkDependencyFlags dependencyFlags, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) {
    _pre_call_vulkan_callback("vkCmdPipelineBarrier", (GLADapiproc) glad_vkCmdPipelineBarrier, 10, commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    glad_vkCmdPipelineBarrier(commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    _post_call_vulkan_callback(NULL, "vkCmdPipelineBarrier", (GLADapiproc) glad_vkCmdPipelineBarrier, 10, commandBuffer, srcStageMask, dstStageMask, dependencyFlags, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    
}
PFN_vkCmdPipelineBarrier glad_debug_vkCmdPipelineBarrier = glad_debug_impl_vkCmdPipelineBarrier;
PFN_vkCmdPipelineBarrier2 glad_vkCmdPipelineBarrier2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkan_callback("vkCmdPipelineBarrier2", (GLADapiproc) glad_vkCmdPipelineBarrier2, 2, commandBuffer, pDependencyInfo);
    glad_vkCmdPipelineBarrier2(commandBuffer, pDependencyInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPipelineBarrier2", (GLADapiproc) glad_vkCmdPipelineBarrier2, 2, commandBuffer, pDependencyInfo);
    
}
PFN_vkCmdPipelineBarrier2 glad_debug_vkCmdPipelineBarrier2 = glad_debug_impl_vkCmdPipelineBarrier2;
PFN_vkCmdPipelineBarrier2KHR glad_vkCmdPipelineBarrier2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkan_callback("vkCmdPipelineBarrier2KHR", (GLADapiproc) glad_vkCmdPipelineBarrier2KHR, 2, commandBuffer, pDependencyInfo);
    glad_vkCmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPipelineBarrier2KHR", (GLADapiproc) glad_vkCmdPipelineBarrier2KHR, 2, commandBuffer, pDependencyInfo);
    
}
PFN_vkCmdPipelineBarrier2KHR glad_debug_vkCmdPipelineBarrier2KHR = glad_debug_impl_vkCmdPipelineBarrier2KHR;
PFN_vkCmdPreprocessGeneratedCommandsNV glad_vkCmdPreprocessGeneratedCommandsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPreprocessGeneratedCommandsNV(VkCommandBuffer commandBuffer, const VkGeneratedCommandsInfoNV * pGeneratedCommandsInfo) {
    _pre_call_vulkan_callback("vkCmdPreprocessGeneratedCommandsNV", (GLADapiproc) glad_vkCmdPreprocessGeneratedCommandsNV, 2, commandBuffer, pGeneratedCommandsInfo);
    glad_vkCmdPreprocessGeneratedCommandsNV(commandBuffer, pGeneratedCommandsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPreprocessGeneratedCommandsNV", (GLADapiproc) glad_vkCmdPreprocessGeneratedCommandsNV, 2, commandBuffer, pGeneratedCommandsInfo);
    
}
PFN_vkCmdPreprocessGeneratedCommandsNV glad_debug_vkCmdPreprocessGeneratedCommandsNV = glad_debug_impl_vkCmdPreprocessGeneratedCommandsNV;
PFN_vkCmdPushConstants glad_vkCmdPushConstants = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushConstants(VkCommandBuffer commandBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, uint32_t offset, uint32_t size, const void * pValues) {
    _pre_call_vulkan_callback("vkCmdPushConstants", (GLADapiproc) glad_vkCmdPushConstants, 6, commandBuffer, layout, stageFlags, offset, size, pValues);
    glad_vkCmdPushConstants(commandBuffer, layout, stageFlags, offset, size, pValues);
    _post_call_vulkan_callback(NULL, "vkCmdPushConstants", (GLADapiproc) glad_vkCmdPushConstants, 6, commandBuffer, layout, stageFlags, offset, size, pValues);
    
}
PFN_vkCmdPushConstants glad_debug_vkCmdPushConstants = glad_debug_impl_vkCmdPushConstants;
PFN_vkCmdPushConstants2KHR glad_vkCmdPushConstants2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushConstants2KHR(VkCommandBuffer commandBuffer, const VkPushConstantsInfoKHR * pPushConstantsInfo) {
    _pre_call_vulkan_callback("vkCmdPushConstants2KHR", (GLADapiproc) glad_vkCmdPushConstants2KHR, 2, commandBuffer, pPushConstantsInfo);
    glad_vkCmdPushConstants2KHR(commandBuffer, pPushConstantsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPushConstants2KHR", (GLADapiproc) glad_vkCmdPushConstants2KHR, 2, commandBuffer, pPushConstantsInfo);
    
}
PFN_vkCmdPushConstants2KHR glad_debug_vkCmdPushConstants2KHR = glad_debug_impl_vkCmdPushConstants2KHR;
PFN_vkCmdPushDescriptorSet2KHR glad_vkCmdPushDescriptorSet2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushDescriptorSet2KHR(VkCommandBuffer commandBuffer, const VkPushDescriptorSetInfoKHR * pPushDescriptorSetInfo) {
    _pre_call_vulkan_callback("vkCmdPushDescriptorSet2KHR", (GLADapiproc) glad_vkCmdPushDescriptorSet2KHR, 2, commandBuffer, pPushDescriptorSetInfo);
    glad_vkCmdPushDescriptorSet2KHR(commandBuffer, pPushDescriptorSetInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPushDescriptorSet2KHR", (GLADapiproc) glad_vkCmdPushDescriptorSet2KHR, 2, commandBuffer, pPushDescriptorSetInfo);
    
}
PFN_vkCmdPushDescriptorSet2KHR glad_debug_vkCmdPushDescriptorSet2KHR = glad_debug_impl_vkCmdPushDescriptorSet2KHR;
PFN_vkCmdPushDescriptorSetKHR glad_vkCmdPushDescriptorSetKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushDescriptorSetKHR(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t set, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites) {
    _pre_call_vulkan_callback("vkCmdPushDescriptorSetKHR", (GLADapiproc) glad_vkCmdPushDescriptorSetKHR, 6, commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    glad_vkCmdPushDescriptorSetKHR(commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    _post_call_vulkan_callback(NULL, "vkCmdPushDescriptorSetKHR", (GLADapiproc) glad_vkCmdPushDescriptorSetKHR, 6, commandBuffer, pipelineBindPoint, layout, set, descriptorWriteCount, pDescriptorWrites);
    
}
PFN_vkCmdPushDescriptorSetKHR glad_debug_vkCmdPushDescriptorSetKHR = glad_debug_impl_vkCmdPushDescriptorSetKHR;
PFN_vkCmdPushDescriptorSetWithTemplate2KHR glad_vkCmdPushDescriptorSetWithTemplate2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushDescriptorSetWithTemplate2KHR(VkCommandBuffer commandBuffer, const VkPushDescriptorSetWithTemplateInfoKHR * pPushDescriptorSetWithTemplateInfo) {
    _pre_call_vulkan_callback("vkCmdPushDescriptorSetWithTemplate2KHR", (GLADapiproc) glad_vkCmdPushDescriptorSetWithTemplate2KHR, 2, commandBuffer, pPushDescriptorSetWithTemplateInfo);
    glad_vkCmdPushDescriptorSetWithTemplate2KHR(commandBuffer, pPushDescriptorSetWithTemplateInfo);
    _post_call_vulkan_callback(NULL, "vkCmdPushDescriptorSetWithTemplate2KHR", (GLADapiproc) glad_vkCmdPushDescriptorSetWithTemplate2KHR, 2, commandBuffer, pPushDescriptorSetWithTemplateInfo);
    
}
PFN_vkCmdPushDescriptorSetWithTemplate2KHR glad_debug_vkCmdPushDescriptorSetWithTemplate2KHR = glad_debug_impl_vkCmdPushDescriptorSetWithTemplate2KHR;
PFN_vkCmdPushDescriptorSetWithTemplateKHR glad_vkCmdPushDescriptorSetWithTemplateKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPushDescriptorSetWithTemplateKHR(VkCommandBuffer commandBuffer, VkDescriptorUpdateTemplate descriptorUpdateTemplate, VkPipelineLayout layout, uint32_t set, const void * pData) {
    _pre_call_vulkan_callback("vkCmdPushDescriptorSetWithTemplateKHR", (GLADapiproc) glad_vkCmdPushDescriptorSetWithTemplateKHR, 5, commandBuffer, descriptorUpdateTemplate, layout, set, pData);
    glad_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer, descriptorUpdateTemplate, layout, set, pData);
    _post_call_vulkan_callback(NULL, "vkCmdPushDescriptorSetWithTemplateKHR", (GLADapiproc) glad_vkCmdPushDescriptorSetWithTemplateKHR, 5, commandBuffer, descriptorUpdateTemplate, layout, set, pData);
    
}
PFN_vkCmdPushDescriptorSetWithTemplateKHR glad_debug_vkCmdPushDescriptorSetWithTemplateKHR = glad_debug_impl_vkCmdPushDescriptorSetWithTemplateKHR;
PFN_vkCmdResetEvent glad_vkCmdResetEvent = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    _pre_call_vulkan_callback("vkCmdResetEvent", (GLADapiproc) glad_vkCmdResetEvent, 3, commandBuffer, event, stageMask);
    glad_vkCmdResetEvent(commandBuffer, event, stageMask);
    _post_call_vulkan_callback(NULL, "vkCmdResetEvent", (GLADapiproc) glad_vkCmdResetEvent, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdResetEvent glad_debug_vkCmdResetEvent = glad_debug_impl_vkCmdResetEvent;
PFN_vkCmdResetEvent2 glad_vkCmdResetEvent2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
    _pre_call_vulkan_callback("vkCmdResetEvent2", (GLADapiproc) glad_vkCmdResetEvent2, 3, commandBuffer, event, stageMask);
    glad_vkCmdResetEvent2(commandBuffer, event, stageMask);
    _post_call_vulkan_callback(NULL, "vkCmdResetEvent2", (GLADapiproc) glad_vkCmdResetEvent2, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdResetEvent2 glad_debug_vkCmdResetEvent2 = glad_debug_impl_vkCmdResetEvent2;
PFN_vkCmdResetEvent2KHR glad_vkCmdResetEvent2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
    _pre_call_vulkan_callback("vkCmdResetEvent2KHR", (GLADapiproc) glad_vkCmdResetEvent2KHR, 3, commandBuffer, event, stageMask);
    glad_vkCmdResetEvent2KHR(commandBuffer, event, stageMask);
    _post_call_vulkan_callback(NULL, "vkCmdResetEvent2KHR", (GLADapiproc) glad_vkCmdResetEvent2KHR, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdResetEvent2KHR glad_debug_vkCmdResetEvent2KHR = glad_debug_impl_vkCmdResetEvent2KHR;
PFN_vkCmdResetQueryPool glad_vkCmdResetQueryPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetQueryPool(VkCommandBuffer commandBuffer, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    _pre_call_vulkan_callback("vkCmdResetQueryPool", (GLADapiproc) glad_vkCmdResetQueryPool, 4, commandBuffer, queryPool, firstQuery, queryCount);
    glad_vkCmdResetQueryPool(commandBuffer, queryPool, firstQuery, queryCount);
    _post_call_vulkan_callback(NULL, "vkCmdResetQueryPool", (GLADapiproc) glad_vkCmdResetQueryPool, 4, commandBuffer, queryPool, firstQuery, queryCount);
    
}
PFN_vkCmdResetQueryPool glad_debug_vkCmdResetQueryPool = glad_debug_impl_vkCmdResetQueryPool;
PFN_vkCmdResolveImage glad_vkCmdResolveImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResolveImage(VkCommandBuffer commandBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage dstImage, VkImageLayout dstImageLayout, uint32_t regionCount, const VkImageResolve * pRegions) {
    _pre_call_vulkan_callback("vkCmdResolveImage", (GLADapiproc) glad_vkCmdResolveImage, 7, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    glad_vkCmdResolveImage(commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    _post_call_vulkan_callback(NULL, "vkCmdResolveImage", (GLADapiproc) glad_vkCmdResolveImage, 7, commandBuffer, srcImage, srcImageLayout, dstImage, dstImageLayout, regionCount, pRegions);
    
}
PFN_vkCmdResolveImage glad_debug_vkCmdResolveImage = glad_debug_impl_vkCmdResolveImage;
PFN_vkCmdResolveImage2 glad_vkCmdResolveImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResolveImage2(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo) {
    _pre_call_vulkan_callback("vkCmdResolveImage2", (GLADapiproc) glad_vkCmdResolveImage2, 2, commandBuffer, pResolveImageInfo);
    glad_vkCmdResolveImage2(commandBuffer, pResolveImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdResolveImage2", (GLADapiproc) glad_vkCmdResolveImage2, 2, commandBuffer, pResolveImageInfo);
    
}
PFN_vkCmdResolveImage2 glad_debug_vkCmdResolveImage2 = glad_debug_impl_vkCmdResolveImage2;
PFN_vkCmdResolveImage2KHR glad_vkCmdResolveImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo) {
    _pre_call_vulkan_callback("vkCmdResolveImage2KHR", (GLADapiproc) glad_vkCmdResolveImage2KHR, 2, commandBuffer, pResolveImageInfo);
    glad_vkCmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
    _post_call_vulkan_callback(NULL, "vkCmdResolveImage2KHR", (GLADapiproc) glad_vkCmdResolveImage2KHR, 2, commandBuffer, pResolveImageInfo);
    
}
PFN_vkCmdResolveImage2KHR glad_debug_vkCmdResolveImage2KHR = glad_debug_impl_vkCmdResolveImage2KHR;
PFN_vkCmdSetAlphaToCoverageEnableEXT glad_vkCmdSetAlphaToCoverageEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetAlphaToCoverageEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToCoverageEnable) {
    _pre_call_vulkan_callback("vkCmdSetAlphaToCoverageEnableEXT", (GLADapiproc) glad_vkCmdSetAlphaToCoverageEnableEXT, 2, commandBuffer, alphaToCoverageEnable);
    glad_vkCmdSetAlphaToCoverageEnableEXT(commandBuffer, alphaToCoverageEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetAlphaToCoverageEnableEXT", (GLADapiproc) glad_vkCmdSetAlphaToCoverageEnableEXT, 2, commandBuffer, alphaToCoverageEnable);
    
}
PFN_vkCmdSetAlphaToCoverageEnableEXT glad_debug_vkCmdSetAlphaToCoverageEnableEXT = glad_debug_impl_vkCmdSetAlphaToCoverageEnableEXT;
PFN_vkCmdSetAlphaToOneEnableEXT glad_vkCmdSetAlphaToOneEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetAlphaToOneEnableEXT(VkCommandBuffer commandBuffer, VkBool32 alphaToOneEnable) {
    _pre_call_vulkan_callback("vkCmdSetAlphaToOneEnableEXT", (GLADapiproc) glad_vkCmdSetAlphaToOneEnableEXT, 2, commandBuffer, alphaToOneEnable);
    glad_vkCmdSetAlphaToOneEnableEXT(commandBuffer, alphaToOneEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetAlphaToOneEnableEXT", (GLADapiproc) glad_vkCmdSetAlphaToOneEnableEXT, 2, commandBuffer, alphaToOneEnable);
    
}
PFN_vkCmdSetAlphaToOneEnableEXT glad_debug_vkCmdSetAlphaToOneEnableEXT = glad_debug_impl_vkCmdSetAlphaToOneEnableEXT;
PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT glad_vkCmdSetAttachmentFeedbackLoopEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetAttachmentFeedbackLoopEnableEXT(VkCommandBuffer commandBuffer, VkImageAspectFlags aspectMask) {
    _pre_call_vulkan_callback("vkCmdSetAttachmentFeedbackLoopEnableEXT", (GLADapiproc) glad_vkCmdSetAttachmentFeedbackLoopEnableEXT, 2, commandBuffer, aspectMask);
    glad_vkCmdSetAttachmentFeedbackLoopEnableEXT(commandBuffer, aspectMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetAttachmentFeedbackLoopEnableEXT", (GLADapiproc) glad_vkCmdSetAttachmentFeedbackLoopEnableEXT, 2, commandBuffer, aspectMask);
    
}
PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT glad_debug_vkCmdSetAttachmentFeedbackLoopEnableEXT = glad_debug_impl_vkCmdSetAttachmentFeedbackLoopEnableEXT;
PFN_vkCmdSetBlendConstants glad_vkCmdSetBlendConstants = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetBlendConstants(VkCommandBuffer commandBuffer, const float blendConstants [4]) {
    _pre_call_vulkan_callback("vkCmdSetBlendConstants", (GLADapiproc) glad_vkCmdSetBlendConstants, 2, commandBuffer, blendConstants);
    glad_vkCmdSetBlendConstants(commandBuffer, blendConstants);
    _post_call_vulkan_callback(NULL, "vkCmdSetBlendConstants", (GLADapiproc) glad_vkCmdSetBlendConstants, 2, commandBuffer, blendConstants);
    
}
PFN_vkCmdSetBlendConstants glad_debug_vkCmdSetBlendConstants = glad_debug_impl_vkCmdSetBlendConstants;
PFN_vkCmdSetCheckpointNV glad_vkCmdSetCheckpointNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCheckpointNV(VkCommandBuffer commandBuffer, const void * pCheckpointMarker) {
    _pre_call_vulkan_callback("vkCmdSetCheckpointNV", (GLADapiproc) glad_vkCmdSetCheckpointNV, 2, commandBuffer, pCheckpointMarker);
    glad_vkCmdSetCheckpointNV(commandBuffer, pCheckpointMarker);
    _post_call_vulkan_callback(NULL, "vkCmdSetCheckpointNV", (GLADapiproc) glad_vkCmdSetCheckpointNV, 2, commandBuffer, pCheckpointMarker);
    
}
PFN_vkCmdSetCheckpointNV glad_debug_vkCmdSetCheckpointNV = glad_debug_impl_vkCmdSetCheckpointNV;
PFN_vkCmdSetCoarseSampleOrderNV glad_vkCmdSetCoarseSampleOrderNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoarseSampleOrderNV(VkCommandBuffer commandBuffer, VkCoarseSampleOrderTypeNV sampleOrderType, uint32_t customSampleOrderCount, const VkCoarseSampleOrderCustomNV * pCustomSampleOrders) {
    _pre_call_vulkan_callback("vkCmdSetCoarseSampleOrderNV", (GLADapiproc) glad_vkCmdSetCoarseSampleOrderNV, 4, commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
    glad_vkCmdSetCoarseSampleOrderNV(commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoarseSampleOrderNV", (GLADapiproc) glad_vkCmdSetCoarseSampleOrderNV, 4, commandBuffer, sampleOrderType, customSampleOrderCount, pCustomSampleOrders);
    
}
PFN_vkCmdSetCoarseSampleOrderNV glad_debug_vkCmdSetCoarseSampleOrderNV = glad_debug_impl_vkCmdSetCoarseSampleOrderNV;
PFN_vkCmdSetColorBlendAdvancedEXT glad_vkCmdSetColorBlendAdvancedEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorBlendAdvancedEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendAdvancedEXT * pColorBlendAdvanced) {
    _pre_call_vulkan_callback("vkCmdSetColorBlendAdvancedEXT", (GLADapiproc) glad_vkCmdSetColorBlendAdvancedEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
    glad_vkCmdSetColorBlendAdvancedEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
    _post_call_vulkan_callback(NULL, "vkCmdSetColorBlendAdvancedEXT", (GLADapiproc) glad_vkCmdSetColorBlendAdvancedEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendAdvanced);
    
}
PFN_vkCmdSetColorBlendAdvancedEXT glad_debug_vkCmdSetColorBlendAdvancedEXT = glad_debug_impl_vkCmdSetColorBlendAdvancedEXT;
PFN_vkCmdSetColorBlendEnableEXT glad_vkCmdSetColorBlendEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorBlendEnableEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkBool32 * pColorBlendEnables) {
    _pre_call_vulkan_callback("vkCmdSetColorBlendEnableEXT", (GLADapiproc) glad_vkCmdSetColorBlendEnableEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
    glad_vkCmdSetColorBlendEnableEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
    _post_call_vulkan_callback(NULL, "vkCmdSetColorBlendEnableEXT", (GLADapiproc) glad_vkCmdSetColorBlendEnableEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendEnables);
    
}
PFN_vkCmdSetColorBlendEnableEXT glad_debug_vkCmdSetColorBlendEnableEXT = glad_debug_impl_vkCmdSetColorBlendEnableEXT;
PFN_vkCmdSetColorBlendEquationEXT glad_vkCmdSetColorBlendEquationEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorBlendEquationEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorBlendEquationEXT * pColorBlendEquations) {
    _pre_call_vulkan_callback("vkCmdSetColorBlendEquationEXT", (GLADapiproc) glad_vkCmdSetColorBlendEquationEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
    glad_vkCmdSetColorBlendEquationEXT(commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
    _post_call_vulkan_callback(NULL, "vkCmdSetColorBlendEquationEXT", (GLADapiproc) glad_vkCmdSetColorBlendEquationEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorBlendEquations);
    
}
PFN_vkCmdSetColorBlendEquationEXT glad_debug_vkCmdSetColorBlendEquationEXT = glad_debug_impl_vkCmdSetColorBlendEquationEXT;
PFN_vkCmdSetColorWriteEnableEXT glad_vkCmdSetColorWriteEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32 * pColorWriteEnables) {
    _pre_call_vulkan_callback("vkCmdSetColorWriteEnableEXT", (GLADapiproc) glad_vkCmdSetColorWriteEnableEXT, 3, commandBuffer, attachmentCount, pColorWriteEnables);
    glad_vkCmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
    _post_call_vulkan_callback(NULL, "vkCmdSetColorWriteEnableEXT", (GLADapiproc) glad_vkCmdSetColorWriteEnableEXT, 3, commandBuffer, attachmentCount, pColorWriteEnables);
    
}
PFN_vkCmdSetColorWriteEnableEXT glad_debug_vkCmdSetColorWriteEnableEXT = glad_debug_impl_vkCmdSetColorWriteEnableEXT;
PFN_vkCmdSetColorWriteMaskEXT glad_vkCmdSetColorWriteMaskEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorWriteMaskEXT(VkCommandBuffer commandBuffer, uint32_t firstAttachment, uint32_t attachmentCount, const VkColorComponentFlags * pColorWriteMasks) {
    _pre_call_vulkan_callback("vkCmdSetColorWriteMaskEXT", (GLADapiproc) glad_vkCmdSetColorWriteMaskEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
    glad_vkCmdSetColorWriteMaskEXT(commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
    _post_call_vulkan_callback(NULL, "vkCmdSetColorWriteMaskEXT", (GLADapiproc) glad_vkCmdSetColorWriteMaskEXT, 4, commandBuffer, firstAttachment, attachmentCount, pColorWriteMasks);
    
}
PFN_vkCmdSetColorWriteMaskEXT glad_debug_vkCmdSetColorWriteMaskEXT = glad_debug_impl_vkCmdSetColorWriteMaskEXT;
PFN_vkCmdSetConservativeRasterizationModeEXT glad_vkCmdSetConservativeRasterizationModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetConservativeRasterizationModeEXT(VkCommandBuffer commandBuffer, VkConservativeRasterizationModeEXT conservativeRasterizationMode) {
    _pre_call_vulkan_callback("vkCmdSetConservativeRasterizationModeEXT", (GLADapiproc) glad_vkCmdSetConservativeRasterizationModeEXT, 2, commandBuffer, conservativeRasterizationMode);
    glad_vkCmdSetConservativeRasterizationModeEXT(commandBuffer, conservativeRasterizationMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetConservativeRasterizationModeEXT", (GLADapiproc) glad_vkCmdSetConservativeRasterizationModeEXT, 2, commandBuffer, conservativeRasterizationMode);
    
}
PFN_vkCmdSetConservativeRasterizationModeEXT glad_debug_vkCmdSetConservativeRasterizationModeEXT = glad_debug_impl_vkCmdSetConservativeRasterizationModeEXT;
PFN_vkCmdSetCoverageModulationModeNV glad_vkCmdSetCoverageModulationModeNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageModulationModeNV(VkCommandBuffer commandBuffer, VkCoverageModulationModeNV coverageModulationMode) {
    _pre_call_vulkan_callback("vkCmdSetCoverageModulationModeNV", (GLADapiproc) glad_vkCmdSetCoverageModulationModeNV, 2, commandBuffer, coverageModulationMode);
    glad_vkCmdSetCoverageModulationModeNV(commandBuffer, coverageModulationMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageModulationModeNV", (GLADapiproc) glad_vkCmdSetCoverageModulationModeNV, 2, commandBuffer, coverageModulationMode);
    
}
PFN_vkCmdSetCoverageModulationModeNV glad_debug_vkCmdSetCoverageModulationModeNV = glad_debug_impl_vkCmdSetCoverageModulationModeNV;
PFN_vkCmdSetCoverageModulationTableEnableNV glad_vkCmdSetCoverageModulationTableEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageModulationTableEnableNV(VkCommandBuffer commandBuffer, VkBool32 coverageModulationTableEnable) {
    _pre_call_vulkan_callback("vkCmdSetCoverageModulationTableEnableNV", (GLADapiproc) glad_vkCmdSetCoverageModulationTableEnableNV, 2, commandBuffer, coverageModulationTableEnable);
    glad_vkCmdSetCoverageModulationTableEnableNV(commandBuffer, coverageModulationTableEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageModulationTableEnableNV", (GLADapiproc) glad_vkCmdSetCoverageModulationTableEnableNV, 2, commandBuffer, coverageModulationTableEnable);
    
}
PFN_vkCmdSetCoverageModulationTableEnableNV glad_debug_vkCmdSetCoverageModulationTableEnableNV = glad_debug_impl_vkCmdSetCoverageModulationTableEnableNV;
PFN_vkCmdSetCoverageModulationTableNV glad_vkCmdSetCoverageModulationTableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageModulationTableNV(VkCommandBuffer commandBuffer, uint32_t coverageModulationTableCount, const float * pCoverageModulationTable) {
    _pre_call_vulkan_callback("vkCmdSetCoverageModulationTableNV", (GLADapiproc) glad_vkCmdSetCoverageModulationTableNV, 3, commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
    glad_vkCmdSetCoverageModulationTableNV(commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageModulationTableNV", (GLADapiproc) glad_vkCmdSetCoverageModulationTableNV, 3, commandBuffer, coverageModulationTableCount, pCoverageModulationTable);
    
}
PFN_vkCmdSetCoverageModulationTableNV glad_debug_vkCmdSetCoverageModulationTableNV = glad_debug_impl_vkCmdSetCoverageModulationTableNV;
PFN_vkCmdSetCoverageReductionModeNV glad_vkCmdSetCoverageReductionModeNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageReductionModeNV(VkCommandBuffer commandBuffer, VkCoverageReductionModeNV coverageReductionMode) {
    _pre_call_vulkan_callback("vkCmdSetCoverageReductionModeNV", (GLADapiproc) glad_vkCmdSetCoverageReductionModeNV, 2, commandBuffer, coverageReductionMode);
    glad_vkCmdSetCoverageReductionModeNV(commandBuffer, coverageReductionMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageReductionModeNV", (GLADapiproc) glad_vkCmdSetCoverageReductionModeNV, 2, commandBuffer, coverageReductionMode);
    
}
PFN_vkCmdSetCoverageReductionModeNV glad_debug_vkCmdSetCoverageReductionModeNV = glad_debug_impl_vkCmdSetCoverageReductionModeNV;
PFN_vkCmdSetCoverageToColorEnableNV glad_vkCmdSetCoverageToColorEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageToColorEnableNV(VkCommandBuffer commandBuffer, VkBool32 coverageToColorEnable) {
    _pre_call_vulkan_callback("vkCmdSetCoverageToColorEnableNV", (GLADapiproc) glad_vkCmdSetCoverageToColorEnableNV, 2, commandBuffer, coverageToColorEnable);
    glad_vkCmdSetCoverageToColorEnableNV(commandBuffer, coverageToColorEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageToColorEnableNV", (GLADapiproc) glad_vkCmdSetCoverageToColorEnableNV, 2, commandBuffer, coverageToColorEnable);
    
}
PFN_vkCmdSetCoverageToColorEnableNV glad_debug_vkCmdSetCoverageToColorEnableNV = glad_debug_impl_vkCmdSetCoverageToColorEnableNV;
PFN_vkCmdSetCoverageToColorLocationNV glad_vkCmdSetCoverageToColorLocationNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCoverageToColorLocationNV(VkCommandBuffer commandBuffer, uint32_t coverageToColorLocation) {
    _pre_call_vulkan_callback("vkCmdSetCoverageToColorLocationNV", (GLADapiproc) glad_vkCmdSetCoverageToColorLocationNV, 2, commandBuffer, coverageToColorLocation);
    glad_vkCmdSetCoverageToColorLocationNV(commandBuffer, coverageToColorLocation);
    _post_call_vulkan_callback(NULL, "vkCmdSetCoverageToColorLocationNV", (GLADapiproc) glad_vkCmdSetCoverageToColorLocationNV, 2, commandBuffer, coverageToColorLocation);
    
}
PFN_vkCmdSetCoverageToColorLocationNV glad_debug_vkCmdSetCoverageToColorLocationNV = glad_debug_impl_vkCmdSetCoverageToColorLocationNV;
PFN_vkCmdSetCullMode glad_vkCmdSetCullMode = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    _pre_call_vulkan_callback("vkCmdSetCullMode", (GLADapiproc) glad_vkCmdSetCullMode, 2, commandBuffer, cullMode);
    glad_vkCmdSetCullMode(commandBuffer, cullMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetCullMode", (GLADapiproc) glad_vkCmdSetCullMode, 2, commandBuffer, cullMode);
    
}
PFN_vkCmdSetCullMode glad_debug_vkCmdSetCullMode = glad_debug_impl_vkCmdSetCullMode;
PFN_vkCmdSetCullModeEXT glad_vkCmdSetCullModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    _pre_call_vulkan_callback("vkCmdSetCullModeEXT", (GLADapiproc) glad_vkCmdSetCullModeEXT, 2, commandBuffer, cullMode);
    glad_vkCmdSetCullModeEXT(commandBuffer, cullMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetCullModeEXT", (GLADapiproc) glad_vkCmdSetCullModeEXT, 2, commandBuffer, cullMode);
    
}
PFN_vkCmdSetCullModeEXT glad_debug_vkCmdSetCullModeEXT = glad_debug_impl_vkCmdSetCullModeEXT;
PFN_vkCmdSetDepthBias glad_vkCmdSetDepthBias = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBias(VkCommandBuffer commandBuffer, float depthBiasConstantFactor, float depthBiasClamp, float depthBiasSlopeFactor) {
    _pre_call_vulkan_callback("vkCmdSetDepthBias", (GLADapiproc) glad_vkCmdSetDepthBias, 4, commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    glad_vkCmdSetDepthBias(commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBias", (GLADapiproc) glad_vkCmdSetDepthBias, 4, commandBuffer, depthBiasConstantFactor, depthBiasClamp, depthBiasSlopeFactor);
    
}
PFN_vkCmdSetDepthBias glad_debug_vkCmdSetDepthBias = glad_debug_impl_vkCmdSetDepthBias;
PFN_vkCmdSetDepthBias2EXT glad_vkCmdSetDepthBias2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBias2EXT(VkCommandBuffer commandBuffer, const VkDepthBiasInfoEXT * pDepthBiasInfo) {
    _pre_call_vulkan_callback("vkCmdSetDepthBias2EXT", (GLADapiproc) glad_vkCmdSetDepthBias2EXT, 2, commandBuffer, pDepthBiasInfo);
    glad_vkCmdSetDepthBias2EXT(commandBuffer, pDepthBiasInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBias2EXT", (GLADapiproc) glad_vkCmdSetDepthBias2EXT, 2, commandBuffer, pDepthBiasInfo);
    
}
PFN_vkCmdSetDepthBias2EXT glad_debug_vkCmdSetDepthBias2EXT = glad_debug_impl_vkCmdSetDepthBias2EXT;
PFN_vkCmdSetDepthBiasEnable glad_vkCmdSetDepthBiasEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthBiasEnable", (GLADapiproc) glad_vkCmdSetDepthBiasEnable, 2, commandBuffer, depthBiasEnable);
    glad_vkCmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBiasEnable", (GLADapiproc) glad_vkCmdSetDepthBiasEnable, 2, commandBuffer, depthBiasEnable);
    
}
PFN_vkCmdSetDepthBiasEnable glad_debug_vkCmdSetDepthBiasEnable = glad_debug_impl_vkCmdSetDepthBiasEnable;
PFN_vkCmdSetDepthBiasEnableEXT glad_vkCmdSetDepthBiasEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthBiasEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBiasEnableEXT, 2, commandBuffer, depthBiasEnable);
    glad_vkCmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBiasEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBiasEnableEXT, 2, commandBuffer, depthBiasEnable);
    
}
PFN_vkCmdSetDepthBiasEnableEXT glad_debug_vkCmdSetDepthBiasEnableEXT = glad_debug_impl_vkCmdSetDepthBiasEnableEXT;
PFN_vkCmdSetDepthBounds glad_vkCmdSetDepthBounds = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBounds(VkCommandBuffer commandBuffer, float minDepthBounds, float maxDepthBounds) {
    _pre_call_vulkan_callback("vkCmdSetDepthBounds", (GLADapiproc) glad_vkCmdSetDepthBounds, 3, commandBuffer, minDepthBounds, maxDepthBounds);
    glad_vkCmdSetDepthBounds(commandBuffer, minDepthBounds, maxDepthBounds);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBounds", (GLADapiproc) glad_vkCmdSetDepthBounds, 3, commandBuffer, minDepthBounds, maxDepthBounds);
    
}
PFN_vkCmdSetDepthBounds glad_debug_vkCmdSetDepthBounds = glad_debug_impl_vkCmdSetDepthBounds;
PFN_vkCmdSetDepthBoundsTestEnable glad_vkCmdSetDepthBoundsTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthBoundsTestEnable", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnable, 2, commandBuffer, depthBoundsTestEnable);
    glad_vkCmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBoundsTestEnable", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnable, 2, commandBuffer, depthBoundsTestEnable);
    
}
PFN_vkCmdSetDepthBoundsTestEnable glad_debug_vkCmdSetDepthBoundsTestEnable = glad_debug_impl_vkCmdSetDepthBoundsTestEnable;
PFN_vkCmdSetDepthBoundsTestEnableEXT glad_vkCmdSetDepthBoundsTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthBoundsTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnableEXT, 2, commandBuffer, depthBoundsTestEnable);
    glad_vkCmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthBoundsTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnableEXT, 2, commandBuffer, depthBoundsTestEnable);
    
}
PFN_vkCmdSetDepthBoundsTestEnableEXT glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT;
PFN_vkCmdSetDepthClampEnableEXT glad_vkCmdSetDepthClampEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthClampEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClampEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthClampEnableEXT", (GLADapiproc) glad_vkCmdSetDepthClampEnableEXT, 2, commandBuffer, depthClampEnable);
    glad_vkCmdSetDepthClampEnableEXT(commandBuffer, depthClampEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthClampEnableEXT", (GLADapiproc) glad_vkCmdSetDepthClampEnableEXT, 2, commandBuffer, depthClampEnable);
    
}
PFN_vkCmdSetDepthClampEnableEXT glad_debug_vkCmdSetDepthClampEnableEXT = glad_debug_impl_vkCmdSetDepthClampEnableEXT;
PFN_vkCmdSetDepthClipEnableEXT glad_vkCmdSetDepthClipEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthClipEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthClipEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthClipEnableEXT", (GLADapiproc) glad_vkCmdSetDepthClipEnableEXT, 2, commandBuffer, depthClipEnable);
    glad_vkCmdSetDepthClipEnableEXT(commandBuffer, depthClipEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthClipEnableEXT", (GLADapiproc) glad_vkCmdSetDepthClipEnableEXT, 2, commandBuffer, depthClipEnable);
    
}
PFN_vkCmdSetDepthClipEnableEXT glad_debug_vkCmdSetDepthClipEnableEXT = glad_debug_impl_vkCmdSetDepthClipEnableEXT;
PFN_vkCmdSetDepthClipNegativeOneToOneEXT glad_vkCmdSetDepthClipNegativeOneToOneEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthClipNegativeOneToOneEXT(VkCommandBuffer commandBuffer, VkBool32 negativeOneToOne) {
    _pre_call_vulkan_callback("vkCmdSetDepthClipNegativeOneToOneEXT", (GLADapiproc) glad_vkCmdSetDepthClipNegativeOneToOneEXT, 2, commandBuffer, negativeOneToOne);
    glad_vkCmdSetDepthClipNegativeOneToOneEXT(commandBuffer, negativeOneToOne);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthClipNegativeOneToOneEXT", (GLADapiproc) glad_vkCmdSetDepthClipNegativeOneToOneEXT, 2, commandBuffer, negativeOneToOne);
    
}
PFN_vkCmdSetDepthClipNegativeOneToOneEXT glad_debug_vkCmdSetDepthClipNegativeOneToOneEXT = glad_debug_impl_vkCmdSetDepthClipNegativeOneToOneEXT;
PFN_vkCmdSetDepthCompareOp glad_vkCmdSetDepthCompareOp = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    _pre_call_vulkan_callback("vkCmdSetDepthCompareOp", (GLADapiproc) glad_vkCmdSetDepthCompareOp, 2, commandBuffer, depthCompareOp);
    glad_vkCmdSetDepthCompareOp(commandBuffer, depthCompareOp);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthCompareOp", (GLADapiproc) glad_vkCmdSetDepthCompareOp, 2, commandBuffer, depthCompareOp);
    
}
PFN_vkCmdSetDepthCompareOp glad_debug_vkCmdSetDepthCompareOp = glad_debug_impl_vkCmdSetDepthCompareOp;
PFN_vkCmdSetDepthCompareOpEXT glad_vkCmdSetDepthCompareOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    _pre_call_vulkan_callback("vkCmdSetDepthCompareOpEXT", (GLADapiproc) glad_vkCmdSetDepthCompareOpEXT, 2, commandBuffer, depthCompareOp);
    glad_vkCmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthCompareOpEXT", (GLADapiproc) glad_vkCmdSetDepthCompareOpEXT, 2, commandBuffer, depthCompareOp);
    
}
PFN_vkCmdSetDepthCompareOpEXT glad_debug_vkCmdSetDepthCompareOpEXT = glad_debug_impl_vkCmdSetDepthCompareOpEXT;
PFN_vkCmdSetDepthTestEnable glad_vkCmdSetDepthTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthTestEnable", (GLADapiproc) glad_vkCmdSetDepthTestEnable, 2, commandBuffer, depthTestEnable);
    glad_vkCmdSetDepthTestEnable(commandBuffer, depthTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthTestEnable", (GLADapiproc) glad_vkCmdSetDepthTestEnable, 2, commandBuffer, depthTestEnable);
    
}
PFN_vkCmdSetDepthTestEnable glad_debug_vkCmdSetDepthTestEnable = glad_debug_impl_vkCmdSetDepthTestEnable;
PFN_vkCmdSetDepthTestEnableEXT glad_vkCmdSetDepthTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthTestEnableEXT, 2, commandBuffer, depthTestEnable);
    glad_vkCmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthTestEnableEXT, 2, commandBuffer, depthTestEnable);
    
}
PFN_vkCmdSetDepthTestEnableEXT glad_debug_vkCmdSetDepthTestEnableEXT = glad_debug_impl_vkCmdSetDepthTestEnableEXT;
PFN_vkCmdSetDepthWriteEnable glad_vkCmdSetDepthWriteEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthWriteEnable", (GLADapiproc) glad_vkCmdSetDepthWriteEnable, 2, commandBuffer, depthWriteEnable);
    glad_vkCmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthWriteEnable", (GLADapiproc) glad_vkCmdSetDepthWriteEnable, 2, commandBuffer, depthWriteEnable);
    
}
PFN_vkCmdSetDepthWriteEnable glad_debug_vkCmdSetDepthWriteEnable = glad_debug_impl_vkCmdSetDepthWriteEnable;
PFN_vkCmdSetDepthWriteEnableEXT glad_vkCmdSetDepthWriteEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    _pre_call_vulkan_callback("vkCmdSetDepthWriteEnableEXT", (GLADapiproc) glad_vkCmdSetDepthWriteEnableEXT, 2, commandBuffer, depthWriteEnable);
    glad_vkCmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDepthWriteEnableEXT", (GLADapiproc) glad_vkCmdSetDepthWriteEnableEXT, 2, commandBuffer, depthWriteEnable);
    
}
PFN_vkCmdSetDepthWriteEnableEXT glad_debug_vkCmdSetDepthWriteEnableEXT = glad_debug_impl_vkCmdSetDepthWriteEnableEXT;
PFN_vkCmdSetDescriptorBufferOffsets2EXT glad_vkCmdSetDescriptorBufferOffsets2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDescriptorBufferOffsets2EXT(VkCommandBuffer commandBuffer, const VkSetDescriptorBufferOffsetsInfoEXT * pSetDescriptorBufferOffsetsInfo) {
    _pre_call_vulkan_callback("vkCmdSetDescriptorBufferOffsets2EXT", (GLADapiproc) glad_vkCmdSetDescriptorBufferOffsets2EXT, 2, commandBuffer, pSetDescriptorBufferOffsetsInfo);
    glad_vkCmdSetDescriptorBufferOffsets2EXT(commandBuffer, pSetDescriptorBufferOffsetsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetDescriptorBufferOffsets2EXT", (GLADapiproc) glad_vkCmdSetDescriptorBufferOffsets2EXT, 2, commandBuffer, pSetDescriptorBufferOffsetsInfo);
    
}
PFN_vkCmdSetDescriptorBufferOffsets2EXT glad_debug_vkCmdSetDescriptorBufferOffsets2EXT = glad_debug_impl_vkCmdSetDescriptorBufferOffsets2EXT;
PFN_vkCmdSetDescriptorBufferOffsetsEXT glad_vkCmdSetDescriptorBufferOffsetsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDescriptorBufferOffsetsEXT(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, uint32_t firstSet, uint32_t setCount, const uint32_t * pBufferIndices, const VkDeviceSize * pOffsets) {
    _pre_call_vulkan_callback("vkCmdSetDescriptorBufferOffsetsEXT", (GLADapiproc) glad_vkCmdSetDescriptorBufferOffsetsEXT, 7, commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
    glad_vkCmdSetDescriptorBufferOffsetsEXT(commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
    _post_call_vulkan_callback(NULL, "vkCmdSetDescriptorBufferOffsetsEXT", (GLADapiproc) glad_vkCmdSetDescriptorBufferOffsetsEXT, 7, commandBuffer, pipelineBindPoint, layout, firstSet, setCount, pBufferIndices, pOffsets);
    
}
PFN_vkCmdSetDescriptorBufferOffsetsEXT glad_debug_vkCmdSetDescriptorBufferOffsetsEXT = glad_debug_impl_vkCmdSetDescriptorBufferOffsetsEXT;
PFN_vkCmdSetDeviceMask glad_vkCmdSetDeviceMask = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    _pre_call_vulkan_callback("vkCmdSetDeviceMask", (GLADapiproc) glad_vkCmdSetDeviceMask, 2, commandBuffer, deviceMask);
    glad_vkCmdSetDeviceMask(commandBuffer, deviceMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetDeviceMask", (GLADapiproc) glad_vkCmdSetDeviceMask, 2, commandBuffer, deviceMask);
    
}
PFN_vkCmdSetDeviceMask glad_debug_vkCmdSetDeviceMask = glad_debug_impl_vkCmdSetDeviceMask;
PFN_vkCmdSetDeviceMaskKHR glad_vkCmdSetDeviceMaskKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDeviceMaskKHR(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    _pre_call_vulkan_callback("vkCmdSetDeviceMaskKHR", (GLADapiproc) glad_vkCmdSetDeviceMaskKHR, 2, commandBuffer, deviceMask);
    glad_vkCmdSetDeviceMaskKHR(commandBuffer, deviceMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetDeviceMaskKHR", (GLADapiproc) glad_vkCmdSetDeviceMaskKHR, 2, commandBuffer, deviceMask);
    
}
PFN_vkCmdSetDeviceMaskKHR glad_debug_vkCmdSetDeviceMaskKHR = glad_debug_impl_vkCmdSetDeviceMaskKHR;
PFN_vkCmdSetDiscardRectangleEXT glad_vkCmdSetDiscardRectangleEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles) {
    _pre_call_vulkan_callback("vkCmdSetDiscardRectangleEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEXT, 4, commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    glad_vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    _post_call_vulkan_callback(NULL, "vkCmdSetDiscardRectangleEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEXT, 4, commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    
}
PFN_vkCmdSetDiscardRectangleEXT glad_debug_vkCmdSetDiscardRectangleEXT = glad_debug_impl_vkCmdSetDiscardRectangleEXT;
PFN_vkCmdSetDiscardRectangleEnableEXT glad_vkCmdSetDiscardRectangleEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable) {
    _pre_call_vulkan_callback("vkCmdSetDiscardRectangleEnableEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEnableEXT, 2, commandBuffer, discardRectangleEnable);
    glad_vkCmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetDiscardRectangleEnableEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEnableEXT, 2, commandBuffer, discardRectangleEnable);
    
}
PFN_vkCmdSetDiscardRectangleEnableEXT glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT;
PFN_vkCmdSetDiscardRectangleModeEXT glad_vkCmdSetDiscardRectangleModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode) {
    _pre_call_vulkan_callback("vkCmdSetDiscardRectangleModeEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleModeEXT, 2, commandBuffer, discardRectangleMode);
    glad_vkCmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetDiscardRectangleModeEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleModeEXT, 2, commandBuffer, discardRectangleMode);
    
}
PFN_vkCmdSetDiscardRectangleModeEXT glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_debug_impl_vkCmdSetDiscardRectangleModeEXT;
PFN_vkCmdSetEvent glad_vkCmdSetEvent = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetEvent(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags stageMask) {
    _pre_call_vulkan_callback("vkCmdSetEvent", (GLADapiproc) glad_vkCmdSetEvent, 3, commandBuffer, event, stageMask);
    glad_vkCmdSetEvent(commandBuffer, event, stageMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetEvent", (GLADapiproc) glad_vkCmdSetEvent, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdSetEvent glad_debug_vkCmdSetEvent = glad_debug_impl_vkCmdSetEvent;
PFN_vkCmdSetEvent2 glad_vkCmdSetEvent2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkan_callback("vkCmdSetEvent2", (GLADapiproc) glad_vkCmdSetEvent2, 3, commandBuffer, event, pDependencyInfo);
    glad_vkCmdSetEvent2(commandBuffer, event, pDependencyInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetEvent2", (GLADapiproc) glad_vkCmdSetEvent2, 3, commandBuffer, event, pDependencyInfo);
    
}
PFN_vkCmdSetEvent2 glad_debug_vkCmdSetEvent2 = glad_debug_impl_vkCmdSetEvent2;
PFN_vkCmdSetEvent2KHR glad_vkCmdSetEvent2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkan_callback("vkCmdSetEvent2KHR", (GLADapiproc) glad_vkCmdSetEvent2KHR, 3, commandBuffer, event, pDependencyInfo);
    glad_vkCmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetEvent2KHR", (GLADapiproc) glad_vkCmdSetEvent2KHR, 3, commandBuffer, event, pDependencyInfo);
    
}
PFN_vkCmdSetEvent2KHR glad_debug_vkCmdSetEvent2KHR = glad_debug_impl_vkCmdSetEvent2KHR;
PFN_vkCmdSetExclusiveScissorEnableNV glad_vkCmdSetExclusiveScissorEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetExclusiveScissorEnableNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkBool32 * pExclusiveScissorEnables) {
    _pre_call_vulkan_callback("vkCmdSetExclusiveScissorEnableNV", (GLADapiproc) glad_vkCmdSetExclusiveScissorEnableNV, 4, commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
    glad_vkCmdSetExclusiveScissorEnableNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
    _post_call_vulkan_callback(NULL, "vkCmdSetExclusiveScissorEnableNV", (GLADapiproc) glad_vkCmdSetExclusiveScissorEnableNV, 4, commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissorEnables);
    
}
PFN_vkCmdSetExclusiveScissorEnableNV glad_debug_vkCmdSetExclusiveScissorEnableNV = glad_debug_impl_vkCmdSetExclusiveScissorEnableNV;
PFN_vkCmdSetExclusiveScissorNV glad_vkCmdSetExclusiveScissorNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetExclusiveScissorNV(VkCommandBuffer commandBuffer, uint32_t firstExclusiveScissor, uint32_t exclusiveScissorCount, const VkRect2D * pExclusiveScissors) {
    _pre_call_vulkan_callback("vkCmdSetExclusiveScissorNV", (GLADapiproc) glad_vkCmdSetExclusiveScissorNV, 4, commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
    glad_vkCmdSetExclusiveScissorNV(commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
    _post_call_vulkan_callback(NULL, "vkCmdSetExclusiveScissorNV", (GLADapiproc) glad_vkCmdSetExclusiveScissorNV, 4, commandBuffer, firstExclusiveScissor, exclusiveScissorCount, pExclusiveScissors);
    
}
PFN_vkCmdSetExclusiveScissorNV glad_debug_vkCmdSetExclusiveScissorNV = glad_debug_impl_vkCmdSetExclusiveScissorNV;
PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetExtraPrimitiveOverestimationSizeEXT(VkCommandBuffer commandBuffer, float extraPrimitiveOverestimationSize) {
    _pre_call_vulkan_callback("vkCmdSetExtraPrimitiveOverestimationSizeEXT", (GLADapiproc) glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT, 2, commandBuffer, extraPrimitiveOverestimationSize);
    glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT(commandBuffer, extraPrimitiveOverestimationSize);
    _post_call_vulkan_callback(NULL, "vkCmdSetExtraPrimitiveOverestimationSizeEXT", (GLADapiproc) glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT, 2, commandBuffer, extraPrimitiveOverestimationSize);
    
}
PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT glad_debug_vkCmdSetExtraPrimitiveOverestimationSizeEXT = glad_debug_impl_vkCmdSetExtraPrimitiveOverestimationSizeEXT;
PFN_vkCmdSetFragmentShadingRateEnumNV glad_vkCmdSetFragmentShadingRateEnumNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFragmentShadingRateEnumNV(VkCommandBuffer commandBuffer, VkFragmentShadingRateNV shadingRate, const VkFragmentShadingRateCombinerOpKHR combinerOps [2]) {
    _pre_call_vulkan_callback("vkCmdSetFragmentShadingRateEnumNV", (GLADapiproc) glad_vkCmdSetFragmentShadingRateEnumNV, 3, commandBuffer, shadingRate, combinerOps);
    glad_vkCmdSetFragmentShadingRateEnumNV(commandBuffer, shadingRate, combinerOps);
    _post_call_vulkan_callback(NULL, "vkCmdSetFragmentShadingRateEnumNV", (GLADapiproc) glad_vkCmdSetFragmentShadingRateEnumNV, 3, commandBuffer, shadingRate, combinerOps);
    
}
PFN_vkCmdSetFragmentShadingRateEnumNV glad_debug_vkCmdSetFragmentShadingRateEnumNV = glad_debug_impl_vkCmdSetFragmentShadingRateEnumNV;
PFN_vkCmdSetFragmentShadingRateKHR glad_vkCmdSetFragmentShadingRateKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D * pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps [2]) {
    _pre_call_vulkan_callback("vkCmdSetFragmentShadingRateKHR", (GLADapiproc) glad_vkCmdSetFragmentShadingRateKHR, 3, commandBuffer, pFragmentSize, combinerOps);
    glad_vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
    _post_call_vulkan_callback(NULL, "vkCmdSetFragmentShadingRateKHR", (GLADapiproc) glad_vkCmdSetFragmentShadingRateKHR, 3, commandBuffer, pFragmentSize, combinerOps);
    
}
PFN_vkCmdSetFragmentShadingRateKHR glad_debug_vkCmdSetFragmentShadingRateKHR = glad_debug_impl_vkCmdSetFragmentShadingRateKHR;
PFN_vkCmdSetFrontFace glad_vkCmdSetFrontFace = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    _pre_call_vulkan_callback("vkCmdSetFrontFace", (GLADapiproc) glad_vkCmdSetFrontFace, 2, commandBuffer, frontFace);
    glad_vkCmdSetFrontFace(commandBuffer, frontFace);
    _post_call_vulkan_callback(NULL, "vkCmdSetFrontFace", (GLADapiproc) glad_vkCmdSetFrontFace, 2, commandBuffer, frontFace);
    
}
PFN_vkCmdSetFrontFace glad_debug_vkCmdSetFrontFace = glad_debug_impl_vkCmdSetFrontFace;
PFN_vkCmdSetFrontFaceEXT glad_vkCmdSetFrontFaceEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    _pre_call_vulkan_callback("vkCmdSetFrontFaceEXT", (GLADapiproc) glad_vkCmdSetFrontFaceEXT, 2, commandBuffer, frontFace);
    glad_vkCmdSetFrontFaceEXT(commandBuffer, frontFace);
    _post_call_vulkan_callback(NULL, "vkCmdSetFrontFaceEXT", (GLADapiproc) glad_vkCmdSetFrontFaceEXT, 2, commandBuffer, frontFace);
    
}
PFN_vkCmdSetFrontFaceEXT glad_debug_vkCmdSetFrontFaceEXT = glad_debug_impl_vkCmdSetFrontFaceEXT;
PFN_vkCmdSetLineRasterizationModeEXT glad_vkCmdSetLineRasterizationModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineRasterizationModeEXT(VkCommandBuffer commandBuffer, VkLineRasterizationModeEXT lineRasterizationMode) {
    _pre_call_vulkan_callback("vkCmdSetLineRasterizationModeEXT", (GLADapiproc) glad_vkCmdSetLineRasterizationModeEXT, 2, commandBuffer, lineRasterizationMode);
    glad_vkCmdSetLineRasterizationModeEXT(commandBuffer, lineRasterizationMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetLineRasterizationModeEXT", (GLADapiproc) glad_vkCmdSetLineRasterizationModeEXT, 2, commandBuffer, lineRasterizationMode);
    
}
PFN_vkCmdSetLineRasterizationModeEXT glad_debug_vkCmdSetLineRasterizationModeEXT = glad_debug_impl_vkCmdSetLineRasterizationModeEXT;
PFN_vkCmdSetLineStippleEXT glad_vkCmdSetLineStippleEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    _pre_call_vulkan_callback("vkCmdSetLineStippleEXT", (GLADapiproc) glad_vkCmdSetLineStippleEXT, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    glad_vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
    _post_call_vulkan_callback(NULL, "vkCmdSetLineStippleEXT", (GLADapiproc) glad_vkCmdSetLineStippleEXT, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    
}
PFN_vkCmdSetLineStippleEXT glad_debug_vkCmdSetLineStippleEXT = glad_debug_impl_vkCmdSetLineStippleEXT;
PFN_vkCmdSetLineStippleEnableEXT glad_vkCmdSetLineStippleEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineStippleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stippledLineEnable) {
    _pre_call_vulkan_callback("vkCmdSetLineStippleEnableEXT", (GLADapiproc) glad_vkCmdSetLineStippleEnableEXT, 2, commandBuffer, stippledLineEnable);
    glad_vkCmdSetLineStippleEnableEXT(commandBuffer, stippledLineEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetLineStippleEnableEXT", (GLADapiproc) glad_vkCmdSetLineStippleEnableEXT, 2, commandBuffer, stippledLineEnable);
    
}
PFN_vkCmdSetLineStippleEnableEXT glad_debug_vkCmdSetLineStippleEnableEXT = glad_debug_impl_vkCmdSetLineStippleEnableEXT;
PFN_vkCmdSetLineStippleKHR glad_vkCmdSetLineStippleKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineStippleKHR(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    _pre_call_vulkan_callback("vkCmdSetLineStippleKHR", (GLADapiproc) glad_vkCmdSetLineStippleKHR, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    glad_vkCmdSetLineStippleKHR(commandBuffer, lineStippleFactor, lineStipplePattern);
    _post_call_vulkan_callback(NULL, "vkCmdSetLineStippleKHR", (GLADapiproc) glad_vkCmdSetLineStippleKHR, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    
}
PFN_vkCmdSetLineStippleKHR glad_debug_vkCmdSetLineStippleKHR = glad_debug_impl_vkCmdSetLineStippleKHR;
PFN_vkCmdSetLineWidth glad_vkCmdSetLineWidth = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineWidth(VkCommandBuffer commandBuffer, float lineWidth) {
    _pre_call_vulkan_callback("vkCmdSetLineWidth", (GLADapiproc) glad_vkCmdSetLineWidth, 2, commandBuffer, lineWidth);
    glad_vkCmdSetLineWidth(commandBuffer, lineWidth);
    _post_call_vulkan_callback(NULL, "vkCmdSetLineWidth", (GLADapiproc) glad_vkCmdSetLineWidth, 2, commandBuffer, lineWidth);
    
}
PFN_vkCmdSetLineWidth glad_debug_vkCmdSetLineWidth = glad_debug_impl_vkCmdSetLineWidth;
PFN_vkCmdSetLogicOpEXT glad_vkCmdSetLogicOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
    _pre_call_vulkan_callback("vkCmdSetLogicOpEXT", (GLADapiproc) glad_vkCmdSetLogicOpEXT, 2, commandBuffer, logicOp);
    glad_vkCmdSetLogicOpEXT(commandBuffer, logicOp);
    _post_call_vulkan_callback(NULL, "vkCmdSetLogicOpEXT", (GLADapiproc) glad_vkCmdSetLogicOpEXT, 2, commandBuffer, logicOp);
    
}
PFN_vkCmdSetLogicOpEXT glad_debug_vkCmdSetLogicOpEXT = glad_debug_impl_vkCmdSetLogicOpEXT;
PFN_vkCmdSetLogicOpEnableEXT glad_vkCmdSetLogicOpEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLogicOpEnableEXT(VkCommandBuffer commandBuffer, VkBool32 logicOpEnable) {
    _pre_call_vulkan_callback("vkCmdSetLogicOpEnableEXT", (GLADapiproc) glad_vkCmdSetLogicOpEnableEXT, 2, commandBuffer, logicOpEnable);
    glad_vkCmdSetLogicOpEnableEXT(commandBuffer, logicOpEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetLogicOpEnableEXT", (GLADapiproc) glad_vkCmdSetLogicOpEnableEXT, 2, commandBuffer, logicOpEnable);
    
}
PFN_vkCmdSetLogicOpEnableEXT glad_debug_vkCmdSetLogicOpEnableEXT = glad_debug_impl_vkCmdSetLogicOpEnableEXT;
PFN_vkCmdSetPatchControlPointsEXT glad_vkCmdSetPatchControlPointsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
    _pre_call_vulkan_callback("vkCmdSetPatchControlPointsEXT", (GLADapiproc) glad_vkCmdSetPatchControlPointsEXT, 2, commandBuffer, patchControlPoints);
    glad_vkCmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
    _post_call_vulkan_callback(NULL, "vkCmdSetPatchControlPointsEXT", (GLADapiproc) glad_vkCmdSetPatchControlPointsEXT, 2, commandBuffer, patchControlPoints);
    
}
PFN_vkCmdSetPatchControlPointsEXT glad_debug_vkCmdSetPatchControlPointsEXT = glad_debug_impl_vkCmdSetPatchControlPointsEXT;
PFN_vkCmdSetPerformanceMarkerINTEL glad_vkCmdSetPerformanceMarkerINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCmdSetPerformanceMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceMarkerInfoINTEL * pMarkerInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCmdSetPerformanceMarkerINTEL", (GLADapiproc) glad_vkCmdSetPerformanceMarkerINTEL, 2, commandBuffer, pMarkerInfo);
    ret = glad_vkCmdSetPerformanceMarkerINTEL(commandBuffer, pMarkerInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCmdSetPerformanceMarkerINTEL", (GLADapiproc) glad_vkCmdSetPerformanceMarkerINTEL, 2, commandBuffer, pMarkerInfo);
    return ret;
}
PFN_vkCmdSetPerformanceMarkerINTEL glad_debug_vkCmdSetPerformanceMarkerINTEL = glad_debug_impl_vkCmdSetPerformanceMarkerINTEL;
PFN_vkCmdSetPerformanceOverrideINTEL glad_vkCmdSetPerformanceOverrideINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCmdSetPerformanceOverrideINTEL(VkCommandBuffer commandBuffer, const VkPerformanceOverrideInfoINTEL * pOverrideInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCmdSetPerformanceOverrideINTEL", (GLADapiproc) glad_vkCmdSetPerformanceOverrideINTEL, 2, commandBuffer, pOverrideInfo);
    ret = glad_vkCmdSetPerformanceOverrideINTEL(commandBuffer, pOverrideInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCmdSetPerformanceOverrideINTEL", (GLADapiproc) glad_vkCmdSetPerformanceOverrideINTEL, 2, commandBuffer, pOverrideInfo);
    return ret;
}
PFN_vkCmdSetPerformanceOverrideINTEL glad_debug_vkCmdSetPerformanceOverrideINTEL = glad_debug_impl_vkCmdSetPerformanceOverrideINTEL;
PFN_vkCmdSetPerformanceStreamMarkerINTEL glad_vkCmdSetPerformanceStreamMarkerINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCmdSetPerformanceStreamMarkerINTEL(VkCommandBuffer commandBuffer, const VkPerformanceStreamMarkerInfoINTEL * pMarkerInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCmdSetPerformanceStreamMarkerINTEL", (GLADapiproc) glad_vkCmdSetPerformanceStreamMarkerINTEL, 2, commandBuffer, pMarkerInfo);
    ret = glad_vkCmdSetPerformanceStreamMarkerINTEL(commandBuffer, pMarkerInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCmdSetPerformanceStreamMarkerINTEL", (GLADapiproc) glad_vkCmdSetPerformanceStreamMarkerINTEL, 2, commandBuffer, pMarkerInfo);
    return ret;
}
PFN_vkCmdSetPerformanceStreamMarkerINTEL glad_debug_vkCmdSetPerformanceStreamMarkerINTEL = glad_debug_impl_vkCmdSetPerformanceStreamMarkerINTEL;
PFN_vkCmdSetPolygonModeEXT glad_vkCmdSetPolygonModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPolygonModeEXT(VkCommandBuffer commandBuffer, VkPolygonMode polygonMode) {
    _pre_call_vulkan_callback("vkCmdSetPolygonModeEXT", (GLADapiproc) glad_vkCmdSetPolygonModeEXT, 2, commandBuffer, polygonMode);
    glad_vkCmdSetPolygonModeEXT(commandBuffer, polygonMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetPolygonModeEXT", (GLADapiproc) glad_vkCmdSetPolygonModeEXT, 2, commandBuffer, polygonMode);
    
}
PFN_vkCmdSetPolygonModeEXT glad_debug_vkCmdSetPolygonModeEXT = glad_debug_impl_vkCmdSetPolygonModeEXT;
PFN_vkCmdSetPrimitiveRestartEnable glad_vkCmdSetPrimitiveRestartEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
    _pre_call_vulkan_callback("vkCmdSetPrimitiveRestartEnable", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnable, 2, commandBuffer, primitiveRestartEnable);
    glad_vkCmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetPrimitiveRestartEnable", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnable, 2, commandBuffer, primitiveRestartEnable);
    
}
PFN_vkCmdSetPrimitiveRestartEnable glad_debug_vkCmdSetPrimitiveRestartEnable = glad_debug_impl_vkCmdSetPrimitiveRestartEnable;
PFN_vkCmdSetPrimitiveRestartEnableEXT glad_vkCmdSetPrimitiveRestartEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
    _pre_call_vulkan_callback("vkCmdSetPrimitiveRestartEnableEXT", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnableEXT, 2, commandBuffer, primitiveRestartEnable);
    glad_vkCmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetPrimitiveRestartEnableEXT", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnableEXT, 2, commandBuffer, primitiveRestartEnable);
    
}
PFN_vkCmdSetPrimitiveRestartEnableEXT glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT;
PFN_vkCmdSetPrimitiveTopology glad_vkCmdSetPrimitiveTopology = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveTopology(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
    _pre_call_vulkan_callback("vkCmdSetPrimitiveTopology", (GLADapiproc) glad_vkCmdSetPrimitiveTopology, 2, commandBuffer, primitiveTopology);
    glad_vkCmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
    _post_call_vulkan_callback(NULL, "vkCmdSetPrimitiveTopology", (GLADapiproc) glad_vkCmdSetPrimitiveTopology, 2, commandBuffer, primitiveTopology);
    
}
PFN_vkCmdSetPrimitiveTopology glad_debug_vkCmdSetPrimitiveTopology = glad_debug_impl_vkCmdSetPrimitiveTopology;
PFN_vkCmdSetPrimitiveTopologyEXT glad_vkCmdSetPrimitiveTopologyEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
    _pre_call_vulkan_callback("vkCmdSetPrimitiveTopologyEXT", (GLADapiproc) glad_vkCmdSetPrimitiveTopologyEXT, 2, commandBuffer, primitiveTopology);
    glad_vkCmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
    _post_call_vulkan_callback(NULL, "vkCmdSetPrimitiveTopologyEXT", (GLADapiproc) glad_vkCmdSetPrimitiveTopologyEXT, 2, commandBuffer, primitiveTopology);
    
}
PFN_vkCmdSetPrimitiveTopologyEXT glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_debug_impl_vkCmdSetPrimitiveTopologyEXT;
PFN_vkCmdSetProvokingVertexModeEXT glad_vkCmdSetProvokingVertexModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetProvokingVertexModeEXT(VkCommandBuffer commandBuffer, VkProvokingVertexModeEXT provokingVertexMode) {
    _pre_call_vulkan_callback("vkCmdSetProvokingVertexModeEXT", (GLADapiproc) glad_vkCmdSetProvokingVertexModeEXT, 2, commandBuffer, provokingVertexMode);
    glad_vkCmdSetProvokingVertexModeEXT(commandBuffer, provokingVertexMode);
    _post_call_vulkan_callback(NULL, "vkCmdSetProvokingVertexModeEXT", (GLADapiproc) glad_vkCmdSetProvokingVertexModeEXT, 2, commandBuffer, provokingVertexMode);
    
}
PFN_vkCmdSetProvokingVertexModeEXT glad_debug_vkCmdSetProvokingVertexModeEXT = glad_debug_impl_vkCmdSetProvokingVertexModeEXT;
PFN_vkCmdSetRasterizationSamplesEXT glad_vkCmdSetRasterizationSamplesEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizationSamplesEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits rasterizationSamples) {
    _pre_call_vulkan_callback("vkCmdSetRasterizationSamplesEXT", (GLADapiproc) glad_vkCmdSetRasterizationSamplesEXT, 2, commandBuffer, rasterizationSamples);
    glad_vkCmdSetRasterizationSamplesEXT(commandBuffer, rasterizationSamples);
    _post_call_vulkan_callback(NULL, "vkCmdSetRasterizationSamplesEXT", (GLADapiproc) glad_vkCmdSetRasterizationSamplesEXT, 2, commandBuffer, rasterizationSamples);
    
}
PFN_vkCmdSetRasterizationSamplesEXT glad_debug_vkCmdSetRasterizationSamplesEXT = glad_debug_impl_vkCmdSetRasterizationSamplesEXT;
PFN_vkCmdSetRasterizationStreamEXT glad_vkCmdSetRasterizationStreamEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizationStreamEXT(VkCommandBuffer commandBuffer, uint32_t rasterizationStream) {
    _pre_call_vulkan_callback("vkCmdSetRasterizationStreamEXT", (GLADapiproc) glad_vkCmdSetRasterizationStreamEXT, 2, commandBuffer, rasterizationStream);
    glad_vkCmdSetRasterizationStreamEXT(commandBuffer, rasterizationStream);
    _post_call_vulkan_callback(NULL, "vkCmdSetRasterizationStreamEXT", (GLADapiproc) glad_vkCmdSetRasterizationStreamEXT, 2, commandBuffer, rasterizationStream);
    
}
PFN_vkCmdSetRasterizationStreamEXT glad_debug_vkCmdSetRasterizationStreamEXT = glad_debug_impl_vkCmdSetRasterizationStreamEXT;
PFN_vkCmdSetRasterizerDiscardEnable glad_vkCmdSetRasterizerDiscardEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
    _pre_call_vulkan_callback("vkCmdSetRasterizerDiscardEnable", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnable, 2, commandBuffer, rasterizerDiscardEnable);
    glad_vkCmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetRasterizerDiscardEnable", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnable, 2, commandBuffer, rasterizerDiscardEnable);
    
}
PFN_vkCmdSetRasterizerDiscardEnable glad_debug_vkCmdSetRasterizerDiscardEnable = glad_debug_impl_vkCmdSetRasterizerDiscardEnable;
PFN_vkCmdSetRasterizerDiscardEnableEXT glad_vkCmdSetRasterizerDiscardEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
    _pre_call_vulkan_callback("vkCmdSetRasterizerDiscardEnableEXT", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnableEXT, 2, commandBuffer, rasterizerDiscardEnable);
    glad_vkCmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetRasterizerDiscardEnableEXT", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnableEXT, 2, commandBuffer, rasterizerDiscardEnable);
    
}
PFN_vkCmdSetRasterizerDiscardEnableEXT glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT;
PFN_vkCmdSetRayTracingPipelineStackSizeKHR glad_vkCmdSetRayTracingPipelineStackSizeKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRayTracingPipelineStackSizeKHR(VkCommandBuffer commandBuffer, uint32_t pipelineStackSize) {
    _pre_call_vulkan_callback("vkCmdSetRayTracingPipelineStackSizeKHR", (GLADapiproc) glad_vkCmdSetRayTracingPipelineStackSizeKHR, 2, commandBuffer, pipelineStackSize);
    glad_vkCmdSetRayTracingPipelineStackSizeKHR(commandBuffer, pipelineStackSize);
    _post_call_vulkan_callback(NULL, "vkCmdSetRayTracingPipelineStackSizeKHR", (GLADapiproc) glad_vkCmdSetRayTracingPipelineStackSizeKHR, 2, commandBuffer, pipelineStackSize);
    
}
PFN_vkCmdSetRayTracingPipelineStackSizeKHR glad_debug_vkCmdSetRayTracingPipelineStackSizeKHR = glad_debug_impl_vkCmdSetRayTracingPipelineStackSizeKHR;
PFN_vkCmdSetRenderingAttachmentLocationsKHR glad_vkCmdSetRenderingAttachmentLocationsKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRenderingAttachmentLocationsKHR(VkCommandBuffer commandBuffer, const VkRenderingAttachmentLocationInfoKHR * pLocationInfo) {
    _pre_call_vulkan_callback("vkCmdSetRenderingAttachmentLocationsKHR", (GLADapiproc) glad_vkCmdSetRenderingAttachmentLocationsKHR, 2, commandBuffer, pLocationInfo);
    glad_vkCmdSetRenderingAttachmentLocationsKHR(commandBuffer, pLocationInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetRenderingAttachmentLocationsKHR", (GLADapiproc) glad_vkCmdSetRenderingAttachmentLocationsKHR, 2, commandBuffer, pLocationInfo);
    
}
PFN_vkCmdSetRenderingAttachmentLocationsKHR glad_debug_vkCmdSetRenderingAttachmentLocationsKHR = glad_debug_impl_vkCmdSetRenderingAttachmentLocationsKHR;
PFN_vkCmdSetRenderingInputAttachmentIndicesKHR glad_vkCmdSetRenderingInputAttachmentIndicesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRenderingInputAttachmentIndicesKHR(VkCommandBuffer commandBuffer, const VkRenderingInputAttachmentIndexInfoKHR * pInputAttachmentIndexInfo) {
    _pre_call_vulkan_callback("vkCmdSetRenderingInputAttachmentIndicesKHR", (GLADapiproc) glad_vkCmdSetRenderingInputAttachmentIndicesKHR, 2, commandBuffer, pInputAttachmentIndexInfo);
    glad_vkCmdSetRenderingInputAttachmentIndicesKHR(commandBuffer, pInputAttachmentIndexInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetRenderingInputAttachmentIndicesKHR", (GLADapiproc) glad_vkCmdSetRenderingInputAttachmentIndicesKHR, 2, commandBuffer, pInputAttachmentIndexInfo);
    
}
PFN_vkCmdSetRenderingInputAttachmentIndicesKHR glad_debug_vkCmdSetRenderingInputAttachmentIndicesKHR = glad_debug_impl_vkCmdSetRenderingInputAttachmentIndicesKHR;
PFN_vkCmdSetRepresentativeFragmentTestEnableNV glad_vkCmdSetRepresentativeFragmentTestEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRepresentativeFragmentTestEnableNV(VkCommandBuffer commandBuffer, VkBool32 representativeFragmentTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetRepresentativeFragmentTestEnableNV", (GLADapiproc) glad_vkCmdSetRepresentativeFragmentTestEnableNV, 2, commandBuffer, representativeFragmentTestEnable);
    glad_vkCmdSetRepresentativeFragmentTestEnableNV(commandBuffer, representativeFragmentTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetRepresentativeFragmentTestEnableNV", (GLADapiproc) glad_vkCmdSetRepresentativeFragmentTestEnableNV, 2, commandBuffer, representativeFragmentTestEnable);
    
}
PFN_vkCmdSetRepresentativeFragmentTestEnableNV glad_debug_vkCmdSetRepresentativeFragmentTestEnableNV = glad_debug_impl_vkCmdSetRepresentativeFragmentTestEnableNV;
PFN_vkCmdSetSampleLocationsEXT glad_vkCmdSetSampleLocationsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo) {
    _pre_call_vulkan_callback("vkCmdSetSampleLocationsEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEXT, 2, commandBuffer, pSampleLocationsInfo);
    glad_vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
    _post_call_vulkan_callback(NULL, "vkCmdSetSampleLocationsEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEXT, 2, commandBuffer, pSampleLocationsInfo);
    
}
PFN_vkCmdSetSampleLocationsEXT glad_debug_vkCmdSetSampleLocationsEXT = glad_debug_impl_vkCmdSetSampleLocationsEXT;
PFN_vkCmdSetSampleLocationsEnableEXT glad_vkCmdSetSampleLocationsEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetSampleLocationsEnableEXT(VkCommandBuffer commandBuffer, VkBool32 sampleLocationsEnable) {
    _pre_call_vulkan_callback("vkCmdSetSampleLocationsEnableEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEnableEXT, 2, commandBuffer, sampleLocationsEnable);
    glad_vkCmdSetSampleLocationsEnableEXT(commandBuffer, sampleLocationsEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetSampleLocationsEnableEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEnableEXT, 2, commandBuffer, sampleLocationsEnable);
    
}
PFN_vkCmdSetSampleLocationsEnableEXT glad_debug_vkCmdSetSampleLocationsEnableEXT = glad_debug_impl_vkCmdSetSampleLocationsEnableEXT;
PFN_vkCmdSetSampleMaskEXT glad_vkCmdSetSampleMaskEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetSampleMaskEXT(VkCommandBuffer commandBuffer, VkSampleCountFlagBits samples, const VkSampleMask * pSampleMask) {
    _pre_call_vulkan_callback("vkCmdSetSampleMaskEXT", (GLADapiproc) glad_vkCmdSetSampleMaskEXT, 3, commandBuffer, samples, pSampleMask);
    glad_vkCmdSetSampleMaskEXT(commandBuffer, samples, pSampleMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetSampleMaskEXT", (GLADapiproc) glad_vkCmdSetSampleMaskEXT, 3, commandBuffer, samples, pSampleMask);
    
}
PFN_vkCmdSetSampleMaskEXT glad_debug_vkCmdSetSampleMaskEXT = glad_debug_impl_vkCmdSetSampleMaskEXT;
PFN_vkCmdSetScissor glad_vkCmdSetScissor = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetScissor(VkCommandBuffer commandBuffer, uint32_t firstScissor, uint32_t scissorCount, const VkRect2D * pScissors) {
    _pre_call_vulkan_callback("vkCmdSetScissor", (GLADapiproc) glad_vkCmdSetScissor, 4, commandBuffer, firstScissor, scissorCount, pScissors);
    glad_vkCmdSetScissor(commandBuffer, firstScissor, scissorCount, pScissors);
    _post_call_vulkan_callback(NULL, "vkCmdSetScissor", (GLADapiproc) glad_vkCmdSetScissor, 4, commandBuffer, firstScissor, scissorCount, pScissors);
    
}
PFN_vkCmdSetScissor glad_debug_vkCmdSetScissor = glad_debug_impl_vkCmdSetScissor;
PFN_vkCmdSetScissorWithCount glad_vkCmdSetScissorWithCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors) {
    _pre_call_vulkan_callback("vkCmdSetScissorWithCount", (GLADapiproc) glad_vkCmdSetScissorWithCount, 3, commandBuffer, scissorCount, pScissors);
    glad_vkCmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
    _post_call_vulkan_callback(NULL, "vkCmdSetScissorWithCount", (GLADapiproc) glad_vkCmdSetScissorWithCount, 3, commandBuffer, scissorCount, pScissors);
    
}
PFN_vkCmdSetScissorWithCount glad_debug_vkCmdSetScissorWithCount = glad_debug_impl_vkCmdSetScissorWithCount;
PFN_vkCmdSetScissorWithCountEXT glad_vkCmdSetScissorWithCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors) {
    _pre_call_vulkan_callback("vkCmdSetScissorWithCountEXT", (GLADapiproc) glad_vkCmdSetScissorWithCountEXT, 3, commandBuffer, scissorCount, pScissors);
    glad_vkCmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
    _post_call_vulkan_callback(NULL, "vkCmdSetScissorWithCountEXT", (GLADapiproc) glad_vkCmdSetScissorWithCountEXT, 3, commandBuffer, scissorCount, pScissors);
    
}
PFN_vkCmdSetScissorWithCountEXT glad_debug_vkCmdSetScissorWithCountEXT = glad_debug_impl_vkCmdSetScissorWithCountEXT;
PFN_vkCmdSetShadingRateImageEnableNV glad_vkCmdSetShadingRateImageEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetShadingRateImageEnableNV(VkCommandBuffer commandBuffer, VkBool32 shadingRateImageEnable) {
    _pre_call_vulkan_callback("vkCmdSetShadingRateImageEnableNV", (GLADapiproc) glad_vkCmdSetShadingRateImageEnableNV, 2, commandBuffer, shadingRateImageEnable);
    glad_vkCmdSetShadingRateImageEnableNV(commandBuffer, shadingRateImageEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetShadingRateImageEnableNV", (GLADapiproc) glad_vkCmdSetShadingRateImageEnableNV, 2, commandBuffer, shadingRateImageEnable);
    
}
PFN_vkCmdSetShadingRateImageEnableNV glad_debug_vkCmdSetShadingRateImageEnableNV = glad_debug_impl_vkCmdSetShadingRateImageEnableNV;
PFN_vkCmdSetStencilCompareMask glad_vkCmdSetStencilCompareMask = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilCompareMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t compareMask) {
    _pre_call_vulkan_callback("vkCmdSetStencilCompareMask", (GLADapiproc) glad_vkCmdSetStencilCompareMask, 3, commandBuffer, faceMask, compareMask);
    glad_vkCmdSetStencilCompareMask(commandBuffer, faceMask, compareMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilCompareMask", (GLADapiproc) glad_vkCmdSetStencilCompareMask, 3, commandBuffer, faceMask, compareMask);
    
}
PFN_vkCmdSetStencilCompareMask glad_debug_vkCmdSetStencilCompareMask = glad_debug_impl_vkCmdSetStencilCompareMask;
PFN_vkCmdSetStencilOp glad_vkCmdSetStencilOp = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
    _pre_call_vulkan_callback("vkCmdSetStencilOp", (GLADapiproc) glad_vkCmdSetStencilOp, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    glad_vkCmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilOp", (GLADapiproc) glad_vkCmdSetStencilOp, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    
}
PFN_vkCmdSetStencilOp glad_debug_vkCmdSetStencilOp = glad_debug_impl_vkCmdSetStencilOp;
PFN_vkCmdSetStencilOpEXT glad_vkCmdSetStencilOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
    _pre_call_vulkan_callback("vkCmdSetStencilOpEXT", (GLADapiproc) glad_vkCmdSetStencilOpEXT, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    glad_vkCmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilOpEXT", (GLADapiproc) glad_vkCmdSetStencilOpEXT, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    
}
PFN_vkCmdSetStencilOpEXT glad_debug_vkCmdSetStencilOpEXT = glad_debug_impl_vkCmdSetStencilOpEXT;
PFN_vkCmdSetStencilReference glad_vkCmdSetStencilReference = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilReference(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t reference) {
    _pre_call_vulkan_callback("vkCmdSetStencilReference", (GLADapiproc) glad_vkCmdSetStencilReference, 3, commandBuffer, faceMask, reference);
    glad_vkCmdSetStencilReference(commandBuffer, faceMask, reference);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilReference", (GLADapiproc) glad_vkCmdSetStencilReference, 3, commandBuffer, faceMask, reference);
    
}
PFN_vkCmdSetStencilReference glad_debug_vkCmdSetStencilReference = glad_debug_impl_vkCmdSetStencilReference;
PFN_vkCmdSetStencilTestEnable glad_vkCmdSetStencilTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetStencilTestEnable", (GLADapiproc) glad_vkCmdSetStencilTestEnable, 2, commandBuffer, stencilTestEnable);
    glad_vkCmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilTestEnable", (GLADapiproc) glad_vkCmdSetStencilTestEnable, 2, commandBuffer, stencilTestEnable);
    
}
PFN_vkCmdSetStencilTestEnable glad_debug_vkCmdSetStencilTestEnable = glad_debug_impl_vkCmdSetStencilTestEnable;
PFN_vkCmdSetStencilTestEnableEXT glad_vkCmdSetStencilTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    _pre_call_vulkan_callback("vkCmdSetStencilTestEnableEXT", (GLADapiproc) glad_vkCmdSetStencilTestEnableEXT, 2, commandBuffer, stencilTestEnable);
    glad_vkCmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilTestEnableEXT", (GLADapiproc) glad_vkCmdSetStencilTestEnableEXT, 2, commandBuffer, stencilTestEnable);
    
}
PFN_vkCmdSetStencilTestEnableEXT glad_debug_vkCmdSetStencilTestEnableEXT = glad_debug_impl_vkCmdSetStencilTestEnableEXT;
PFN_vkCmdSetStencilWriteMask glad_vkCmdSetStencilWriteMask = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilWriteMask(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, uint32_t writeMask) {
    _pre_call_vulkan_callback("vkCmdSetStencilWriteMask", (GLADapiproc) glad_vkCmdSetStencilWriteMask, 3, commandBuffer, faceMask, writeMask);
    glad_vkCmdSetStencilWriteMask(commandBuffer, faceMask, writeMask);
    _post_call_vulkan_callback(NULL, "vkCmdSetStencilWriteMask", (GLADapiproc) glad_vkCmdSetStencilWriteMask, 3, commandBuffer, faceMask, writeMask);
    
}
PFN_vkCmdSetStencilWriteMask glad_debug_vkCmdSetStencilWriteMask = glad_debug_impl_vkCmdSetStencilWriteMask;
PFN_vkCmdSetTessellationDomainOriginEXT glad_vkCmdSetTessellationDomainOriginEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetTessellationDomainOriginEXT(VkCommandBuffer commandBuffer, VkTessellationDomainOrigin domainOrigin) {
    _pre_call_vulkan_callback("vkCmdSetTessellationDomainOriginEXT", (GLADapiproc) glad_vkCmdSetTessellationDomainOriginEXT, 2, commandBuffer, domainOrigin);
    glad_vkCmdSetTessellationDomainOriginEXT(commandBuffer, domainOrigin);
    _post_call_vulkan_callback(NULL, "vkCmdSetTessellationDomainOriginEXT", (GLADapiproc) glad_vkCmdSetTessellationDomainOriginEXT, 2, commandBuffer, domainOrigin);
    
}
PFN_vkCmdSetTessellationDomainOriginEXT glad_debug_vkCmdSetTessellationDomainOriginEXT = glad_debug_impl_vkCmdSetTessellationDomainOriginEXT;
PFN_vkCmdSetVertexInputEXT glad_vkCmdSetVertexInputEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT * pVertexAttributeDescriptions) {
    _pre_call_vulkan_callback("vkCmdSetVertexInputEXT", (GLADapiproc) glad_vkCmdSetVertexInputEXT, 5, commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    glad_vkCmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    _post_call_vulkan_callback(NULL, "vkCmdSetVertexInputEXT", (GLADapiproc) glad_vkCmdSetVertexInputEXT, 5, commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    
}
PFN_vkCmdSetVertexInputEXT glad_debug_vkCmdSetVertexInputEXT = glad_debug_impl_vkCmdSetVertexInputEXT;
PFN_vkCmdSetViewport glad_vkCmdSetViewport = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewport(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewport * pViewports) {
    _pre_call_vulkan_callback("vkCmdSetViewport", (GLADapiproc) glad_vkCmdSetViewport, 4, commandBuffer, firstViewport, viewportCount, pViewports);
    glad_vkCmdSetViewport(commandBuffer, firstViewport, viewportCount, pViewports);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewport", (GLADapiproc) glad_vkCmdSetViewport, 4, commandBuffer, firstViewport, viewportCount, pViewports);
    
}
PFN_vkCmdSetViewport glad_debug_vkCmdSetViewport = glad_debug_impl_vkCmdSetViewport;
PFN_vkCmdSetViewportShadingRatePaletteNV glad_vkCmdSetViewportShadingRatePaletteNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportShadingRatePaletteNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkShadingRatePaletteNV * pShadingRatePalettes) {
    _pre_call_vulkan_callback("vkCmdSetViewportShadingRatePaletteNV", (GLADapiproc) glad_vkCmdSetViewportShadingRatePaletteNV, 4, commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
    glad_vkCmdSetViewportShadingRatePaletteNV(commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportShadingRatePaletteNV", (GLADapiproc) glad_vkCmdSetViewportShadingRatePaletteNV, 4, commandBuffer, firstViewport, viewportCount, pShadingRatePalettes);
    
}
PFN_vkCmdSetViewportShadingRatePaletteNV glad_debug_vkCmdSetViewportShadingRatePaletteNV = glad_debug_impl_vkCmdSetViewportShadingRatePaletteNV;
PFN_vkCmdSetViewportSwizzleNV glad_vkCmdSetViewportSwizzleNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportSwizzleNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportSwizzleNV * pViewportSwizzles) {
    _pre_call_vulkan_callback("vkCmdSetViewportSwizzleNV", (GLADapiproc) glad_vkCmdSetViewportSwizzleNV, 4, commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
    glad_vkCmdSetViewportSwizzleNV(commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportSwizzleNV", (GLADapiproc) glad_vkCmdSetViewportSwizzleNV, 4, commandBuffer, firstViewport, viewportCount, pViewportSwizzles);
    
}
PFN_vkCmdSetViewportSwizzleNV glad_debug_vkCmdSetViewportSwizzleNV = glad_debug_impl_vkCmdSetViewportSwizzleNV;
PFN_vkCmdSetViewportWScalingEnableNV glad_vkCmdSetViewportWScalingEnableNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWScalingEnableNV(VkCommandBuffer commandBuffer, VkBool32 viewportWScalingEnable) {
    _pre_call_vulkan_callback("vkCmdSetViewportWScalingEnableNV", (GLADapiproc) glad_vkCmdSetViewportWScalingEnableNV, 2, commandBuffer, viewportWScalingEnable);
    glad_vkCmdSetViewportWScalingEnableNV(commandBuffer, viewportWScalingEnable);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportWScalingEnableNV", (GLADapiproc) glad_vkCmdSetViewportWScalingEnableNV, 2, commandBuffer, viewportWScalingEnable);
    
}
PFN_vkCmdSetViewportWScalingEnableNV glad_debug_vkCmdSetViewportWScalingEnableNV = glad_debug_impl_vkCmdSetViewportWScalingEnableNV;
PFN_vkCmdSetViewportWScalingNV glad_vkCmdSetViewportWScalingNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWScalingNV(VkCommandBuffer commandBuffer, uint32_t firstViewport, uint32_t viewportCount, const VkViewportWScalingNV * pViewportWScalings) {
    _pre_call_vulkan_callback("vkCmdSetViewportWScalingNV", (GLADapiproc) glad_vkCmdSetViewportWScalingNV, 4, commandBuffer, firstViewport, viewportCount, pViewportWScalings);
    glad_vkCmdSetViewportWScalingNV(commandBuffer, firstViewport, viewportCount, pViewportWScalings);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportWScalingNV", (GLADapiproc) glad_vkCmdSetViewportWScalingNV, 4, commandBuffer, firstViewport, viewportCount, pViewportWScalings);
    
}
PFN_vkCmdSetViewportWScalingNV glad_debug_vkCmdSetViewportWScalingNV = glad_debug_impl_vkCmdSetViewportWScalingNV;
PFN_vkCmdSetViewportWithCount glad_vkCmdSetViewportWithCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports) {
    _pre_call_vulkan_callback("vkCmdSetViewportWithCount", (GLADapiproc) glad_vkCmdSetViewportWithCount, 3, commandBuffer, viewportCount, pViewports);
    glad_vkCmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportWithCount", (GLADapiproc) glad_vkCmdSetViewportWithCount, 3, commandBuffer, viewportCount, pViewports);
    
}
PFN_vkCmdSetViewportWithCount glad_debug_vkCmdSetViewportWithCount = glad_debug_impl_vkCmdSetViewportWithCount;
PFN_vkCmdSetViewportWithCountEXT glad_vkCmdSetViewportWithCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports) {
    _pre_call_vulkan_callback("vkCmdSetViewportWithCountEXT", (GLADapiproc) glad_vkCmdSetViewportWithCountEXT, 3, commandBuffer, viewportCount, pViewports);
    glad_vkCmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
    _post_call_vulkan_callback(NULL, "vkCmdSetViewportWithCountEXT", (GLADapiproc) glad_vkCmdSetViewportWithCountEXT, 3, commandBuffer, viewportCount, pViewports);
    
}
PFN_vkCmdSetViewportWithCountEXT glad_debug_vkCmdSetViewportWithCountEXT = glad_debug_impl_vkCmdSetViewportWithCountEXT;
PFN_vkCmdSubpassShadingHUAWEI glad_vkCmdSubpassShadingHUAWEI = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSubpassShadingHUAWEI(VkCommandBuffer commandBuffer) {
    _pre_call_vulkan_callback("vkCmdSubpassShadingHUAWEI", (GLADapiproc) glad_vkCmdSubpassShadingHUAWEI, 1, commandBuffer);
    glad_vkCmdSubpassShadingHUAWEI(commandBuffer);
    _post_call_vulkan_callback(NULL, "vkCmdSubpassShadingHUAWEI", (GLADapiproc) glad_vkCmdSubpassShadingHUAWEI, 1, commandBuffer);
    
}
PFN_vkCmdSubpassShadingHUAWEI glad_debug_vkCmdSubpassShadingHUAWEI = glad_debug_impl_vkCmdSubpassShadingHUAWEI;
PFN_vkCmdTraceRaysIndirect2KHR glad_vkCmdTraceRaysIndirect2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdTraceRaysIndirect2KHR(VkCommandBuffer commandBuffer, VkDeviceAddress indirectDeviceAddress) {
    _pre_call_vulkan_callback("vkCmdTraceRaysIndirect2KHR", (GLADapiproc) glad_vkCmdTraceRaysIndirect2KHR, 2, commandBuffer, indirectDeviceAddress);
    glad_vkCmdTraceRaysIndirect2KHR(commandBuffer, indirectDeviceAddress);
    _post_call_vulkan_callback(NULL, "vkCmdTraceRaysIndirect2KHR", (GLADapiproc) glad_vkCmdTraceRaysIndirect2KHR, 2, commandBuffer, indirectDeviceAddress);
    
}
PFN_vkCmdTraceRaysIndirect2KHR glad_debug_vkCmdTraceRaysIndirect2KHR = glad_debug_impl_vkCmdTraceRaysIndirect2KHR;
PFN_vkCmdTraceRaysIndirectKHR glad_vkCmdTraceRaysIndirectKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdTraceRaysIndirectKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, VkDeviceAddress indirectDeviceAddress) {
    _pre_call_vulkan_callback("vkCmdTraceRaysIndirectKHR", (GLADapiproc) glad_vkCmdTraceRaysIndirectKHR, 6, commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
    glad_vkCmdTraceRaysIndirectKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
    _post_call_vulkan_callback(NULL, "vkCmdTraceRaysIndirectKHR", (GLADapiproc) glad_vkCmdTraceRaysIndirectKHR, 6, commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, indirectDeviceAddress);
    
}
PFN_vkCmdTraceRaysIndirectKHR glad_debug_vkCmdTraceRaysIndirectKHR = glad_debug_impl_vkCmdTraceRaysIndirectKHR;
PFN_vkCmdTraceRaysKHR glad_vkCmdTraceRaysKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdTraceRaysKHR(VkCommandBuffer commandBuffer, const VkStridedDeviceAddressRegionKHR * pRaygenShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pMissShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pHitShaderBindingTable, const VkStridedDeviceAddressRegionKHR * pCallableShaderBindingTable, uint32_t width, uint32_t height, uint32_t depth) {
    _pre_call_vulkan_callback("vkCmdTraceRaysKHR", (GLADapiproc) glad_vkCmdTraceRaysKHR, 8, commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
    glad_vkCmdTraceRaysKHR(commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
    _post_call_vulkan_callback(NULL, "vkCmdTraceRaysKHR", (GLADapiproc) glad_vkCmdTraceRaysKHR, 8, commandBuffer, pRaygenShaderBindingTable, pMissShaderBindingTable, pHitShaderBindingTable, pCallableShaderBindingTable, width, height, depth);
    
}
PFN_vkCmdTraceRaysKHR glad_debug_vkCmdTraceRaysKHR = glad_debug_impl_vkCmdTraceRaysKHR;
PFN_vkCmdTraceRaysNV glad_vkCmdTraceRaysNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdTraceRaysNV(VkCommandBuffer commandBuffer, VkBuffer raygenShaderBindingTableBuffer, VkDeviceSize raygenShaderBindingOffset, VkBuffer missShaderBindingTableBuffer, VkDeviceSize missShaderBindingOffset, VkDeviceSize missShaderBindingStride, VkBuffer hitShaderBindingTableBuffer, VkDeviceSize hitShaderBindingOffset, VkDeviceSize hitShaderBindingStride, VkBuffer callableShaderBindingTableBuffer, VkDeviceSize callableShaderBindingOffset, VkDeviceSize callableShaderBindingStride, uint32_t width, uint32_t height, uint32_t depth) {
    _pre_call_vulkan_callback("vkCmdTraceRaysNV", (GLADapiproc) glad_vkCmdTraceRaysNV, 15, commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
    glad_vkCmdTraceRaysNV(commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
    _post_call_vulkan_callback(NULL, "vkCmdTraceRaysNV", (GLADapiproc) glad_vkCmdTraceRaysNV, 15, commandBuffer, raygenShaderBindingTableBuffer, raygenShaderBindingOffset, missShaderBindingTableBuffer, missShaderBindingOffset, missShaderBindingStride, hitShaderBindingTableBuffer, hitShaderBindingOffset, hitShaderBindingStride, callableShaderBindingTableBuffer, callableShaderBindingOffset, callableShaderBindingStride, width, height, depth);
    
}
PFN_vkCmdTraceRaysNV glad_debug_vkCmdTraceRaysNV = glad_debug_impl_vkCmdTraceRaysNV;
PFN_vkCmdUpdateBuffer glad_vkCmdUpdateBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdUpdateBuffer(VkCommandBuffer commandBuffer, VkBuffer dstBuffer, VkDeviceSize dstOffset, VkDeviceSize dataSize, const void * pData) {
    _pre_call_vulkan_callback("vkCmdUpdateBuffer", (GLADapiproc) glad_vkCmdUpdateBuffer, 5, commandBuffer, dstBuffer, dstOffset, dataSize, pData);
    glad_vkCmdUpdateBuffer(commandBuffer, dstBuffer, dstOffset, dataSize, pData);
    _post_call_vulkan_callback(NULL, "vkCmdUpdateBuffer", (GLADapiproc) glad_vkCmdUpdateBuffer, 5, commandBuffer, dstBuffer, dstOffset, dataSize, pData);
    
}
PFN_vkCmdUpdateBuffer glad_debug_vkCmdUpdateBuffer = glad_debug_impl_vkCmdUpdateBuffer;
PFN_vkCmdUpdatePipelineIndirectBufferNV glad_vkCmdUpdatePipelineIndirectBufferNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdUpdatePipelineIndirectBufferNV(VkCommandBuffer commandBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) {
    _pre_call_vulkan_callback("vkCmdUpdatePipelineIndirectBufferNV", (GLADapiproc) glad_vkCmdUpdatePipelineIndirectBufferNV, 3, commandBuffer, pipelineBindPoint, pipeline);
    glad_vkCmdUpdatePipelineIndirectBufferNV(commandBuffer, pipelineBindPoint, pipeline);
    _post_call_vulkan_callback(NULL, "vkCmdUpdatePipelineIndirectBufferNV", (GLADapiproc) glad_vkCmdUpdatePipelineIndirectBufferNV, 3, commandBuffer, pipelineBindPoint, pipeline);
    
}
PFN_vkCmdUpdatePipelineIndirectBufferNV glad_debug_vkCmdUpdatePipelineIndirectBufferNV = glad_debug_impl_vkCmdUpdatePipelineIndirectBufferNV;
PFN_vkCmdWaitEvents glad_vkCmdWaitEvents = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWaitEvents(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags dstStageMask, uint32_t memoryBarrierCount, const VkMemoryBarrier * pMemoryBarriers, uint32_t bufferMemoryBarrierCount, const VkBufferMemoryBarrier * pBufferMemoryBarriers, uint32_t imageMemoryBarrierCount, const VkImageMemoryBarrier * pImageMemoryBarriers) {
    _pre_call_vulkan_callback("vkCmdWaitEvents", (GLADapiproc) glad_vkCmdWaitEvents, 11, commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    glad_vkCmdWaitEvents(commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    _post_call_vulkan_callback(NULL, "vkCmdWaitEvents", (GLADapiproc) glad_vkCmdWaitEvents, 11, commandBuffer, eventCount, pEvents, srcStageMask, dstStageMask, memoryBarrierCount, pMemoryBarriers, bufferMemoryBarrierCount, pBufferMemoryBarriers, imageMemoryBarrierCount, pImageMemoryBarriers);
    
}
PFN_vkCmdWaitEvents glad_debug_vkCmdWaitEvents = glad_debug_impl_vkCmdWaitEvents;
PFN_vkCmdWaitEvents2 glad_vkCmdWaitEvents2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos) {
    _pre_call_vulkan_callback("vkCmdWaitEvents2", (GLADapiproc) glad_vkCmdWaitEvents2, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    glad_vkCmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
    _post_call_vulkan_callback(NULL, "vkCmdWaitEvents2", (GLADapiproc) glad_vkCmdWaitEvents2, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    
}
PFN_vkCmdWaitEvents2 glad_debug_vkCmdWaitEvents2 = glad_debug_impl_vkCmdWaitEvents2;
PFN_vkCmdWaitEvents2KHR glad_vkCmdWaitEvents2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos) {
    _pre_call_vulkan_callback("vkCmdWaitEvents2KHR", (GLADapiproc) glad_vkCmdWaitEvents2KHR, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    glad_vkCmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
    _post_call_vulkan_callback(NULL, "vkCmdWaitEvents2KHR", (GLADapiproc) glad_vkCmdWaitEvents2KHR, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    
}
PFN_vkCmdWaitEvents2KHR glad_debug_vkCmdWaitEvents2KHR = glad_debug_impl_vkCmdWaitEvents2KHR;
PFN_vkCmdWriteAccelerationStructuresPropertiesKHR glad_vkCmdWriteAccelerationStructuresPropertiesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesKHR(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    _pre_call_vulkan_callback("vkCmdWriteAccelerationStructuresPropertiesKHR", (GLADapiproc) glad_vkCmdWriteAccelerationStructuresPropertiesKHR, 6, commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    glad_vkCmdWriteAccelerationStructuresPropertiesKHR(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    _post_call_vulkan_callback(NULL, "vkCmdWriteAccelerationStructuresPropertiesKHR", (GLADapiproc) glad_vkCmdWriteAccelerationStructuresPropertiesKHR, 6, commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    
}
PFN_vkCmdWriteAccelerationStructuresPropertiesKHR glad_debug_vkCmdWriteAccelerationStructuresPropertiesKHR = glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesKHR;
PFN_vkCmdWriteAccelerationStructuresPropertiesNV glad_vkCmdWriteAccelerationStructuresPropertiesNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesNV(VkCommandBuffer commandBuffer, uint32_t accelerationStructureCount, const VkAccelerationStructureNV * pAccelerationStructures, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    _pre_call_vulkan_callback("vkCmdWriteAccelerationStructuresPropertiesNV", (GLADapiproc) glad_vkCmdWriteAccelerationStructuresPropertiesNV, 6, commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    glad_vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    _post_call_vulkan_callback(NULL, "vkCmdWriteAccelerationStructuresPropertiesNV", (GLADapiproc) glad_vkCmdWriteAccelerationStructuresPropertiesNV, 6, commandBuffer, accelerationStructureCount, pAccelerationStructures, queryType, queryPool, firstQuery);
    
}
PFN_vkCmdWriteAccelerationStructuresPropertiesNV glad_debug_vkCmdWriteAccelerationStructuresPropertiesNV = glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesNV;
PFN_vkCmdWriteBufferMarker2AMD glad_vkCmdWriteBufferMarker2AMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
    _pre_call_vulkan_callback("vkCmdWriteBufferMarker2AMD", (GLADapiproc) glad_vkCmdWriteBufferMarker2AMD, 5, commandBuffer, stage, dstBuffer, dstOffset, marker);
    glad_vkCmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
    _post_call_vulkan_callback(NULL, "vkCmdWriteBufferMarker2AMD", (GLADapiproc) glad_vkCmdWriteBufferMarker2AMD, 5, commandBuffer, stage, dstBuffer, dstOffset, marker);
    
}
PFN_vkCmdWriteBufferMarker2AMD glad_debug_vkCmdWriteBufferMarker2AMD = glad_debug_impl_vkCmdWriteBufferMarker2AMD;
PFN_vkCmdWriteBufferMarkerAMD glad_vkCmdWriteBufferMarkerAMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteBufferMarkerAMD(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
    _pre_call_vulkan_callback("vkCmdWriteBufferMarkerAMD", (GLADapiproc) glad_vkCmdWriteBufferMarkerAMD, 5, commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
    glad_vkCmdWriteBufferMarkerAMD(commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
    _post_call_vulkan_callback(NULL, "vkCmdWriteBufferMarkerAMD", (GLADapiproc) glad_vkCmdWriteBufferMarkerAMD, 5, commandBuffer, pipelineStage, dstBuffer, dstOffset, marker);
    
}
PFN_vkCmdWriteBufferMarkerAMD glad_debug_vkCmdWriteBufferMarkerAMD = glad_debug_impl_vkCmdWriteBufferMarkerAMD;
PFN_vkCmdWriteMicromapsPropertiesEXT glad_vkCmdWriteMicromapsPropertiesEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteMicromapsPropertiesEXT(VkCommandBuffer commandBuffer, uint32_t micromapCount, const VkMicromapEXT * pMicromaps, VkQueryType queryType, VkQueryPool queryPool, uint32_t firstQuery) {
    _pre_call_vulkan_callback("vkCmdWriteMicromapsPropertiesEXT", (GLADapiproc) glad_vkCmdWriteMicromapsPropertiesEXT, 6, commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
    glad_vkCmdWriteMicromapsPropertiesEXT(commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
    _post_call_vulkan_callback(NULL, "vkCmdWriteMicromapsPropertiesEXT", (GLADapiproc) glad_vkCmdWriteMicromapsPropertiesEXT, 6, commandBuffer, micromapCount, pMicromaps, queryType, queryPool, firstQuery);
    
}
PFN_vkCmdWriteMicromapsPropertiesEXT glad_debug_vkCmdWriteMicromapsPropertiesEXT = glad_debug_impl_vkCmdWriteMicromapsPropertiesEXT;
PFN_vkCmdWriteTimestamp glad_vkCmdWriteTimestamp = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteTimestamp(VkCommandBuffer commandBuffer, VkPipelineStageFlagBits pipelineStage, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkan_callback("vkCmdWriteTimestamp", (GLADapiproc) glad_vkCmdWriteTimestamp, 4, commandBuffer, pipelineStage, queryPool, query);
    glad_vkCmdWriteTimestamp(commandBuffer, pipelineStage, queryPool, query);
    _post_call_vulkan_callback(NULL, "vkCmdWriteTimestamp", (GLADapiproc) glad_vkCmdWriteTimestamp, 4, commandBuffer, pipelineStage, queryPool, query);
    
}
PFN_vkCmdWriteTimestamp glad_debug_vkCmdWriteTimestamp = glad_debug_impl_vkCmdWriteTimestamp;
PFN_vkCmdWriteTimestamp2 glad_vkCmdWriteTimestamp2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkan_callback("vkCmdWriteTimestamp2", (GLADapiproc) glad_vkCmdWriteTimestamp2, 4, commandBuffer, stage, queryPool, query);
    glad_vkCmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
    _post_call_vulkan_callback(NULL, "vkCmdWriteTimestamp2", (GLADapiproc) glad_vkCmdWriteTimestamp2, 4, commandBuffer, stage, queryPool, query);
    
}
PFN_vkCmdWriteTimestamp2 glad_debug_vkCmdWriteTimestamp2 = glad_debug_impl_vkCmdWriteTimestamp2;
PFN_vkCmdWriteTimestamp2KHR glad_vkCmdWriteTimestamp2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkan_callback("vkCmdWriteTimestamp2KHR", (GLADapiproc) glad_vkCmdWriteTimestamp2KHR, 4, commandBuffer, stage, queryPool, query);
    glad_vkCmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
    _post_call_vulkan_callback(NULL, "vkCmdWriteTimestamp2KHR", (GLADapiproc) glad_vkCmdWriteTimestamp2KHR, 4, commandBuffer, stage, queryPool, query);
    
}
PFN_vkCmdWriteTimestamp2KHR glad_debug_vkCmdWriteTimestamp2KHR = glad_debug_impl_vkCmdWriteTimestamp2KHR;
PFN_vkCompileDeferredNV glad_vkCompileDeferredNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCompileDeferredNV(VkDevice device, VkPipeline pipeline, uint32_t shader) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCompileDeferredNV", (GLADapiproc) glad_vkCompileDeferredNV, 3, device, pipeline, shader);
    ret = glad_vkCompileDeferredNV(device, pipeline, shader);
    _post_call_vulkan_callback((void*) &ret, "vkCompileDeferredNV", (GLADapiproc) glad_vkCompileDeferredNV, 3, device, pipeline, shader);
    return ret;
}
PFN_vkCompileDeferredNV glad_debug_vkCompileDeferredNV = glad_debug_impl_vkCompileDeferredNV;
PFN_vkCopyAccelerationStructureKHR glad_vkCopyAccelerationStructureKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureInfoKHR * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyAccelerationStructureKHR", (GLADapiproc) glad_vkCopyAccelerationStructureKHR, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyAccelerationStructureKHR(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyAccelerationStructureKHR", (GLADapiproc) glad_vkCopyAccelerationStructureKHR, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyAccelerationStructureKHR glad_debug_vkCopyAccelerationStructureKHR = glad_debug_impl_vkCopyAccelerationStructureKHR;
PFN_vkCopyAccelerationStructureToMemoryKHR glad_vkCopyAccelerationStructureToMemoryKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyAccelerationStructureToMemoryKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyAccelerationStructureToMemoryInfoKHR * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyAccelerationStructureToMemoryKHR", (GLADapiproc) glad_vkCopyAccelerationStructureToMemoryKHR, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyAccelerationStructureToMemoryKHR(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyAccelerationStructureToMemoryKHR", (GLADapiproc) glad_vkCopyAccelerationStructureToMemoryKHR, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyAccelerationStructureToMemoryKHR glad_debug_vkCopyAccelerationStructureToMemoryKHR = glad_debug_impl_vkCopyAccelerationStructureToMemoryKHR;
PFN_vkCopyImageToImageEXT glad_vkCopyImageToImageEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyImageToImageEXT(VkDevice device, const VkCopyImageToImageInfoEXT * pCopyImageToImageInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyImageToImageEXT", (GLADapiproc) glad_vkCopyImageToImageEXT, 2, device, pCopyImageToImageInfo);
    ret = glad_vkCopyImageToImageEXT(device, pCopyImageToImageInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyImageToImageEXT", (GLADapiproc) glad_vkCopyImageToImageEXT, 2, device, pCopyImageToImageInfo);
    return ret;
}
PFN_vkCopyImageToImageEXT glad_debug_vkCopyImageToImageEXT = glad_debug_impl_vkCopyImageToImageEXT;
PFN_vkCopyImageToMemoryEXT glad_vkCopyImageToMemoryEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyImageToMemoryEXT(VkDevice device, const VkCopyImageToMemoryInfoEXT * pCopyImageToMemoryInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyImageToMemoryEXT", (GLADapiproc) glad_vkCopyImageToMemoryEXT, 2, device, pCopyImageToMemoryInfo);
    ret = glad_vkCopyImageToMemoryEXT(device, pCopyImageToMemoryInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyImageToMemoryEXT", (GLADapiproc) glad_vkCopyImageToMemoryEXT, 2, device, pCopyImageToMemoryInfo);
    return ret;
}
PFN_vkCopyImageToMemoryEXT glad_debug_vkCopyImageToMemoryEXT = glad_debug_impl_vkCopyImageToMemoryEXT;
PFN_vkCopyMemoryToAccelerationStructureKHR glad_vkCopyMemoryToAccelerationStructureKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyMemoryToAccelerationStructureKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToAccelerationStructureInfoKHR * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyMemoryToAccelerationStructureKHR", (GLADapiproc) glad_vkCopyMemoryToAccelerationStructureKHR, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyMemoryToAccelerationStructureKHR(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyMemoryToAccelerationStructureKHR", (GLADapiproc) glad_vkCopyMemoryToAccelerationStructureKHR, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyMemoryToAccelerationStructureKHR glad_debug_vkCopyMemoryToAccelerationStructureKHR = glad_debug_impl_vkCopyMemoryToAccelerationStructureKHR;
PFN_vkCopyMemoryToImageEXT glad_vkCopyMemoryToImageEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyMemoryToImageEXT(VkDevice device, const VkCopyMemoryToImageInfoEXT * pCopyMemoryToImageInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyMemoryToImageEXT", (GLADapiproc) glad_vkCopyMemoryToImageEXT, 2, device, pCopyMemoryToImageInfo);
    ret = glad_vkCopyMemoryToImageEXT(device, pCopyMemoryToImageInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyMemoryToImageEXT", (GLADapiproc) glad_vkCopyMemoryToImageEXT, 2, device, pCopyMemoryToImageInfo);
    return ret;
}
PFN_vkCopyMemoryToImageEXT glad_debug_vkCopyMemoryToImageEXT = glad_debug_impl_vkCopyMemoryToImageEXT;
PFN_vkCopyMemoryToMicromapEXT glad_vkCopyMemoryToMicromapEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyMemoryToMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMemoryToMicromapInfoEXT * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyMemoryToMicromapEXT", (GLADapiproc) glad_vkCopyMemoryToMicromapEXT, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyMemoryToMicromapEXT(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyMemoryToMicromapEXT", (GLADapiproc) glad_vkCopyMemoryToMicromapEXT, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyMemoryToMicromapEXT glad_debug_vkCopyMemoryToMicromapEXT = glad_debug_impl_vkCopyMemoryToMicromapEXT;
PFN_vkCopyMicromapEXT glad_vkCopyMicromapEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyMicromapEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMicromapInfoEXT * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyMicromapEXT", (GLADapiproc) glad_vkCopyMicromapEXT, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyMicromapEXT(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyMicromapEXT", (GLADapiproc) glad_vkCopyMicromapEXT, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyMicromapEXT glad_debug_vkCopyMicromapEXT = glad_debug_impl_vkCopyMicromapEXT;
PFN_vkCopyMicromapToMemoryEXT glad_vkCopyMicromapToMemoryEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCopyMicromapToMemoryEXT(VkDevice device, VkDeferredOperationKHR deferredOperation, const VkCopyMicromapToMemoryInfoEXT * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCopyMicromapToMemoryEXT", (GLADapiproc) glad_vkCopyMicromapToMemoryEXT, 3, device, deferredOperation, pInfo);
    ret = glad_vkCopyMicromapToMemoryEXT(device, deferredOperation, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkCopyMicromapToMemoryEXT", (GLADapiproc) glad_vkCopyMicromapToMemoryEXT, 3, device, deferredOperation, pInfo);
    return ret;
}
PFN_vkCopyMicromapToMemoryEXT glad_debug_vkCopyMicromapToMemoryEXT = glad_debug_impl_vkCopyMicromapToMemoryEXT;
PFN_vkCreateAccelerationStructureKHR glad_vkCreateAccelerationStructureKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateAccelerationStructureKHR(VkDevice device, const VkAccelerationStructureCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureKHR * pAccelerationStructure) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateAccelerationStructureKHR", (GLADapiproc) glad_vkCreateAccelerationStructureKHR, 4, device, pCreateInfo, pAllocator, pAccelerationStructure);
    ret = glad_vkCreateAccelerationStructureKHR(device, pCreateInfo, pAllocator, pAccelerationStructure);
    _post_call_vulkan_callback((void*) &ret, "vkCreateAccelerationStructureKHR", (GLADapiproc) glad_vkCreateAccelerationStructureKHR, 4, device, pCreateInfo, pAllocator, pAccelerationStructure);
    return ret;
}
PFN_vkCreateAccelerationStructureKHR glad_debug_vkCreateAccelerationStructureKHR = glad_debug_impl_vkCreateAccelerationStructureKHR;
PFN_vkCreateAccelerationStructureNV glad_vkCreateAccelerationStructureNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateAccelerationStructureNV(VkDevice device, const VkAccelerationStructureCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkAccelerationStructureNV * pAccelerationStructure) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateAccelerationStructureNV", (GLADapiproc) glad_vkCreateAccelerationStructureNV, 4, device, pCreateInfo, pAllocator, pAccelerationStructure);
    ret = glad_vkCreateAccelerationStructureNV(device, pCreateInfo, pAllocator, pAccelerationStructure);
    _post_call_vulkan_callback((void*) &ret, "vkCreateAccelerationStructureNV", (GLADapiproc) glad_vkCreateAccelerationStructureNV, 4, device, pCreateInfo, pAllocator, pAccelerationStructure);
    return ret;
}
PFN_vkCreateAccelerationStructureNV glad_debug_vkCreateAccelerationStructureNV = glad_debug_impl_vkCreateAccelerationStructureNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkCreateAndroidSurfaceKHR glad_vkCreateAndroidSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateAndroidSurfaceKHR(VkInstance instance, const VkAndroidSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateAndroidSurfaceKHR", (GLADapiproc) glad_vkCreateAndroidSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateAndroidSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateAndroidSurfaceKHR", (GLADapiproc) glad_vkCreateAndroidSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateAndroidSurfaceKHR glad_debug_vkCreateAndroidSurfaceKHR = glad_debug_impl_vkCreateAndroidSurfaceKHR;

#endif
PFN_vkCreateBuffer glad_vkCreateBuffer = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateBuffer(VkDevice device, const VkBufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBuffer * pBuffer) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateBuffer", (GLADapiproc) glad_vkCreateBuffer, 4, device, pCreateInfo, pAllocator, pBuffer);
    ret = glad_vkCreateBuffer(device, pCreateInfo, pAllocator, pBuffer);
    _post_call_vulkan_callback((void*) &ret, "vkCreateBuffer", (GLADapiproc) glad_vkCreateBuffer, 4, device, pCreateInfo, pAllocator, pBuffer);
    return ret;
}
PFN_vkCreateBuffer glad_debug_vkCreateBuffer = glad_debug_impl_vkCreateBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkCreateBufferCollectionFUCHSIA glad_vkCreateBufferCollectionFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateBufferCollectionFUCHSIA(VkDevice device, const VkBufferCollectionCreateInfoFUCHSIA * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferCollectionFUCHSIA * pCollection) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateBufferCollectionFUCHSIA", (GLADapiproc) glad_vkCreateBufferCollectionFUCHSIA, 4, device, pCreateInfo, pAllocator, pCollection);
    ret = glad_vkCreateBufferCollectionFUCHSIA(device, pCreateInfo, pAllocator, pCollection);
    _post_call_vulkan_callback((void*) &ret, "vkCreateBufferCollectionFUCHSIA", (GLADapiproc) glad_vkCreateBufferCollectionFUCHSIA, 4, device, pCreateInfo, pAllocator, pCollection);
    return ret;
}
PFN_vkCreateBufferCollectionFUCHSIA glad_debug_vkCreateBufferCollectionFUCHSIA = glad_debug_impl_vkCreateBufferCollectionFUCHSIA;

#endif
PFN_vkCreateBufferView glad_vkCreateBufferView = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateBufferView(VkDevice device, const VkBufferViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkBufferView * pView) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateBufferView", (GLADapiproc) glad_vkCreateBufferView, 4, device, pCreateInfo, pAllocator, pView);
    ret = glad_vkCreateBufferView(device, pCreateInfo, pAllocator, pView);
    _post_call_vulkan_callback((void*) &ret, "vkCreateBufferView", (GLADapiproc) glad_vkCreateBufferView, 4, device, pCreateInfo, pAllocator, pView);
    return ret;
}
PFN_vkCreateBufferView glad_debug_vkCreateBufferView = glad_debug_impl_vkCreateBufferView;
PFN_vkCreateCommandPool glad_vkCreateCommandPool = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateCommandPool(VkDevice device, const VkCommandPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCommandPool * pCommandPool) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateCommandPool", (GLADapiproc) glad_vkCreateCommandPool, 4, device, pCreateInfo, pAllocator, pCommandPool);
    ret = glad_vkCreateCommandPool(device, pCreateInfo, pAllocator, pCommandPool);
    _post_call_vulkan_callback((void*) &ret, "vkCreateCommandPool", (GLADapiproc) glad_vkCreateCommandPool, 4, device, pCreateInfo, pAllocator, pCommandPool);
    return ret;
}
PFN_vkCreateCommandPool glad_debug_vkCreateCommandPool = glad_debug_impl_vkCreateCommandPool;
PFN_vkCreateComputePipelines glad_vkCreateComputePipelines = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateComputePipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkComputePipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateComputePipelines", (GLADapiproc) glad_vkCreateComputePipelines, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    ret = glad_vkCreateComputePipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    _post_call_vulkan_callback((void*) &ret, "vkCreateComputePipelines", (GLADapiproc) glad_vkCreateComputePipelines, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    return ret;
}
PFN_vkCreateComputePipelines glad_debug_vkCreateComputePipelines = glad_debug_impl_vkCreateComputePipelines;
PFN_vkCreateCuFunctionNVX glad_vkCreateCuFunctionNVX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateCuFunctionNVX(VkDevice device, const VkCuFunctionCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCuFunctionNVX * pFunction) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateCuFunctionNVX", (GLADapiproc) glad_vkCreateCuFunctionNVX, 4, device, pCreateInfo, pAllocator, pFunction);
    ret = glad_vkCreateCuFunctionNVX(device, pCreateInfo, pAllocator, pFunction);
    _post_call_vulkan_callback((void*) &ret, "vkCreateCuFunctionNVX", (GLADapiproc) glad_vkCreateCuFunctionNVX, 4, device, pCreateInfo, pAllocator, pFunction);
    return ret;
}
PFN_vkCreateCuFunctionNVX glad_debug_vkCreateCuFunctionNVX = glad_debug_impl_vkCreateCuFunctionNVX;
PFN_vkCreateCuModuleNVX glad_vkCreateCuModuleNVX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateCuModuleNVX(VkDevice device, const VkCuModuleCreateInfoNVX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCuModuleNVX * pModule) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateCuModuleNVX", (GLADapiproc) glad_vkCreateCuModuleNVX, 4, device, pCreateInfo, pAllocator, pModule);
    ret = glad_vkCreateCuModuleNVX(device, pCreateInfo, pAllocator, pModule);
    _post_call_vulkan_callback((void*) &ret, "vkCreateCuModuleNVX", (GLADapiproc) glad_vkCreateCuModuleNVX, 4, device, pCreateInfo, pAllocator, pModule);
    return ret;
}
PFN_vkCreateCuModuleNVX glad_debug_vkCreateCuModuleNVX = glad_debug_impl_vkCreateCuModuleNVX;
PFN_vkCreateCudaFunctionNV glad_vkCreateCudaFunctionNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateCudaFunctionNV(VkDevice device, const VkCudaFunctionCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCudaFunctionNV * pFunction) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateCudaFunctionNV", (GLADapiproc) glad_vkCreateCudaFunctionNV, 4, device, pCreateInfo, pAllocator, pFunction);
    ret = glad_vkCreateCudaFunctionNV(device, pCreateInfo, pAllocator, pFunction);
    _post_call_vulkan_callback((void*) &ret, "vkCreateCudaFunctionNV", (GLADapiproc) glad_vkCreateCudaFunctionNV, 4, device, pCreateInfo, pAllocator, pFunction);
    return ret;
}
PFN_vkCreateCudaFunctionNV glad_debug_vkCreateCudaFunctionNV = glad_debug_impl_vkCreateCudaFunctionNV;
PFN_vkCreateCudaModuleNV glad_vkCreateCudaModuleNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateCudaModuleNV(VkDevice device, const VkCudaModuleCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkCudaModuleNV * pModule) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateCudaModuleNV", (GLADapiproc) glad_vkCreateCudaModuleNV, 4, device, pCreateInfo, pAllocator, pModule);
    ret = glad_vkCreateCudaModuleNV(device, pCreateInfo, pAllocator, pModule);
    _post_call_vulkan_callback((void*) &ret, "vkCreateCudaModuleNV", (GLADapiproc) glad_vkCreateCudaModuleNV, 4, device, pCreateInfo, pAllocator, pModule);
    return ret;
}
PFN_vkCreateCudaModuleNV glad_debug_vkCreateCudaModuleNV = glad_debug_impl_vkCreateCudaModuleNV;
PFN_vkCreateDebugReportCallbackEXT glad_vkCreateDebugReportCallbackEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDebugReportCallbackEXT(VkInstance instance, const VkDebugReportCallbackCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugReportCallbackEXT * pCallback) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDebugReportCallbackEXT", (GLADapiproc) glad_vkCreateDebugReportCallbackEXT, 4, instance, pCreateInfo, pAllocator, pCallback);
    ret = glad_vkCreateDebugReportCallbackEXT(instance, pCreateInfo, pAllocator, pCallback);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDebugReportCallbackEXT", (GLADapiproc) glad_vkCreateDebugReportCallbackEXT, 4, instance, pCreateInfo, pAllocator, pCallback);
    return ret;
}
PFN_vkCreateDebugReportCallbackEXT glad_debug_vkCreateDebugReportCallbackEXT = glad_debug_impl_vkCreateDebugReportCallbackEXT;
PFN_vkCreateDebugUtilsMessengerEXT glad_vkCreateDebugUtilsMessengerEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDebugUtilsMessengerEXT", (GLADapiproc) glad_vkCreateDebugUtilsMessengerEXT, 4, instance, pCreateInfo, pAllocator, pMessenger);
    ret = glad_vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDebugUtilsMessengerEXT", (GLADapiproc) glad_vkCreateDebugUtilsMessengerEXT, 4, instance, pCreateInfo, pAllocator, pMessenger);
    return ret;
}
PFN_vkCreateDebugUtilsMessengerEXT glad_debug_vkCreateDebugUtilsMessengerEXT = glad_debug_impl_vkCreateDebugUtilsMessengerEXT;
PFN_vkCreateDeferredOperationKHR glad_vkCreateDeferredOperationKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDeferredOperationKHR(VkDevice device, const VkAllocationCallbacks * pAllocator, VkDeferredOperationKHR * pDeferredOperation) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDeferredOperationKHR", (GLADapiproc) glad_vkCreateDeferredOperationKHR, 3, device, pAllocator, pDeferredOperation);
    ret = glad_vkCreateDeferredOperationKHR(device, pAllocator, pDeferredOperation);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDeferredOperationKHR", (GLADapiproc) glad_vkCreateDeferredOperationKHR, 3, device, pAllocator, pDeferredOperation);
    return ret;
}
PFN_vkCreateDeferredOperationKHR glad_debug_vkCreateDeferredOperationKHR = glad_debug_impl_vkCreateDeferredOperationKHR;
PFN_vkCreateDescriptorPool glad_vkCreateDescriptorPool = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDescriptorPool(VkDevice device, const VkDescriptorPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorPool * pDescriptorPool) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDescriptorPool", (GLADapiproc) glad_vkCreateDescriptorPool, 4, device, pCreateInfo, pAllocator, pDescriptorPool);
    ret = glad_vkCreateDescriptorPool(device, pCreateInfo, pAllocator, pDescriptorPool);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDescriptorPool", (GLADapiproc) glad_vkCreateDescriptorPool, 4, device, pCreateInfo, pAllocator, pDescriptorPool);
    return ret;
}
PFN_vkCreateDescriptorPool glad_debug_vkCreateDescriptorPool = glad_debug_impl_vkCreateDescriptorPool;
PFN_vkCreateDescriptorSetLayout glad_vkCreateDescriptorSetLayout = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDescriptorSetLayout(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorSetLayout * pSetLayout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDescriptorSetLayout", (GLADapiproc) glad_vkCreateDescriptorSetLayout, 4, device, pCreateInfo, pAllocator, pSetLayout);
    ret = glad_vkCreateDescriptorSetLayout(device, pCreateInfo, pAllocator, pSetLayout);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDescriptorSetLayout", (GLADapiproc) glad_vkCreateDescriptorSetLayout, 4, device, pCreateInfo, pAllocator, pSetLayout);
    return ret;
}
PFN_vkCreateDescriptorSetLayout glad_debug_vkCreateDescriptorSetLayout = glad_debug_impl_vkCreateDescriptorSetLayout;
PFN_vkCreateDescriptorUpdateTemplate glad_vkCreateDescriptorUpdateTemplate = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDescriptorUpdateTemplate", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplate, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    ret = glad_vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDescriptorUpdateTemplate", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplate, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    return ret;
}
PFN_vkCreateDescriptorUpdateTemplate glad_debug_vkCreateDescriptorUpdateTemplate = glad_debug_impl_vkCreateDescriptorUpdateTemplate;
PFN_vkCreateDescriptorUpdateTemplateKHR glad_vkCreateDescriptorUpdateTemplateKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDescriptorUpdateTemplateKHR(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDescriptorUpdateTemplateKHR", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplateKHR, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    ret = glad_vkCreateDescriptorUpdateTemplateKHR(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDescriptorUpdateTemplateKHR", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplateKHR, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    return ret;
}
PFN_vkCreateDescriptorUpdateTemplateKHR glad_debug_vkCreateDescriptorUpdateTemplateKHR = glad_debug_impl_vkCreateDescriptorUpdateTemplateKHR;
PFN_vkCreateDevice glad_vkCreateDevice = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDevice(VkPhysicalDevice physicalDevice, const VkDeviceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDevice * pDevice) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDevice", (GLADapiproc) glad_vkCreateDevice, 4, physicalDevice, pCreateInfo, pAllocator, pDevice);
    ret = glad_vkCreateDevice(physicalDevice, pCreateInfo, pAllocator, pDevice);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDevice", (GLADapiproc) glad_vkCreateDevice, 4, physicalDevice, pCreateInfo, pAllocator, pDevice);
    return ret;
}
PFN_vkCreateDevice glad_debug_vkCreateDevice = glad_debug_impl_vkCreateDevice;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
PFN_vkCreateDirectFBSurfaceEXT glad_vkCreateDirectFBSurfaceEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDirectFBSurfaceEXT(VkInstance instance, const VkDirectFBSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDirectFBSurfaceEXT", (GLADapiproc) glad_vkCreateDirectFBSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateDirectFBSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDirectFBSurfaceEXT", (GLADapiproc) glad_vkCreateDirectFBSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateDirectFBSurfaceEXT glad_debug_vkCreateDirectFBSurfaceEXT = glad_debug_impl_vkCreateDirectFBSurfaceEXT;

#endif
PFN_vkCreateDisplayModeKHR glad_vkCreateDisplayModeKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDisplayModeKHR", (GLADapiproc) glad_vkCreateDisplayModeKHR, 5, physicalDevice, display, pCreateInfo, pAllocator, pMode);
    ret = glad_vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDisplayModeKHR", (GLADapiproc) glad_vkCreateDisplayModeKHR, 5, physicalDevice, display, pCreateInfo, pAllocator, pMode);
    return ret;
}
PFN_vkCreateDisplayModeKHR glad_debug_vkCreateDisplayModeKHR = glad_debug_impl_vkCreateDisplayModeKHR;
PFN_vkCreateDisplayPlaneSurfaceKHR glad_vkCreateDisplayPlaneSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateDisplayPlaneSurfaceKHR", (GLADapiproc) glad_vkCreateDisplayPlaneSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateDisplayPlaneSurfaceKHR", (GLADapiproc) glad_vkCreateDisplayPlaneSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateDisplayPlaneSurfaceKHR glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR;
PFN_vkCreateEvent glad_vkCreateEvent = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateEvent(VkDevice device, const VkEventCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkEvent * pEvent) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateEvent", (GLADapiproc) glad_vkCreateEvent, 4, device, pCreateInfo, pAllocator, pEvent);
    ret = glad_vkCreateEvent(device, pCreateInfo, pAllocator, pEvent);
    _post_call_vulkan_callback((void*) &ret, "vkCreateEvent", (GLADapiproc) glad_vkCreateEvent, 4, device, pCreateInfo, pAllocator, pEvent);
    return ret;
}
PFN_vkCreateEvent glad_debug_vkCreateEvent = glad_debug_impl_vkCreateEvent;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCreateExecutionGraphPipelinesAMDX glad_vkCreateExecutionGraphPipelinesAMDX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateExecutionGraphPipelinesAMDX(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkExecutionGraphPipelineCreateInfoAMDX * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateExecutionGraphPipelinesAMDX", (GLADapiproc) glad_vkCreateExecutionGraphPipelinesAMDX, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    ret = glad_vkCreateExecutionGraphPipelinesAMDX(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    _post_call_vulkan_callback((void*) &ret, "vkCreateExecutionGraphPipelinesAMDX", (GLADapiproc) glad_vkCreateExecutionGraphPipelinesAMDX, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    return ret;
}
PFN_vkCreateExecutionGraphPipelinesAMDX glad_debug_vkCreateExecutionGraphPipelinesAMDX = glad_debug_impl_vkCreateExecutionGraphPipelinesAMDX;

#endif
PFN_vkCreateFence glad_vkCreateFence = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateFence(VkDevice device, const VkFenceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateFence", (GLADapiproc) glad_vkCreateFence, 4, device, pCreateInfo, pAllocator, pFence);
    ret = glad_vkCreateFence(device, pCreateInfo, pAllocator, pFence);
    _post_call_vulkan_callback((void*) &ret, "vkCreateFence", (GLADapiproc) glad_vkCreateFence, 4, device, pCreateInfo, pAllocator, pFence);
    return ret;
}
PFN_vkCreateFence glad_debug_vkCreateFence = glad_debug_impl_vkCreateFence;
PFN_vkCreateFramebuffer glad_vkCreateFramebuffer = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateFramebuffer(VkDevice device, const VkFramebufferCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkFramebuffer * pFramebuffer) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateFramebuffer", (GLADapiproc) glad_vkCreateFramebuffer, 4, device, pCreateInfo, pAllocator, pFramebuffer);
    ret = glad_vkCreateFramebuffer(device, pCreateInfo, pAllocator, pFramebuffer);
    _post_call_vulkan_callback((void*) &ret, "vkCreateFramebuffer", (GLADapiproc) glad_vkCreateFramebuffer, 4, device, pCreateInfo, pAllocator, pFramebuffer);
    return ret;
}
PFN_vkCreateFramebuffer glad_debug_vkCreateFramebuffer = glad_debug_impl_vkCreateFramebuffer;
PFN_vkCreateGraphicsPipelines glad_vkCreateGraphicsPipelines = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateGraphicsPipelines(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkGraphicsPipelineCreateInfo * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateGraphicsPipelines", (GLADapiproc) glad_vkCreateGraphicsPipelines, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    ret = glad_vkCreateGraphicsPipelines(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    _post_call_vulkan_callback((void*) &ret, "vkCreateGraphicsPipelines", (GLADapiproc) glad_vkCreateGraphicsPipelines, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    return ret;
}
PFN_vkCreateGraphicsPipelines glad_debug_vkCreateGraphicsPipelines = glad_debug_impl_vkCreateGraphicsPipelines;
PFN_vkCreateHeadlessSurfaceEXT glad_vkCreateHeadlessSurfaceEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateHeadlessSurfaceEXT", (GLADapiproc) glad_vkCreateHeadlessSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateHeadlessSurfaceEXT", (GLADapiproc) glad_vkCreateHeadlessSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateHeadlessSurfaceEXT glad_debug_vkCreateHeadlessSurfaceEXT = glad_debug_impl_vkCreateHeadlessSurfaceEXT;
#if defined(VK_USE_PLATFORM_IOS_MVK)
PFN_vkCreateIOSSurfaceMVK glad_vkCreateIOSSurfaceMVK = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateIOSSurfaceMVK(VkInstance instance, const VkIOSSurfaceCreateInfoMVK * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateIOSSurfaceMVK", (GLADapiproc) glad_vkCreateIOSSurfaceMVK, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateIOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateIOSSurfaceMVK", (GLADapiproc) glad_vkCreateIOSSurfaceMVK, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateIOSSurfaceMVK glad_debug_vkCreateIOSSurfaceMVK = glad_debug_impl_vkCreateIOSSurfaceMVK;

#endif
PFN_vkCreateImage glad_vkCreateImage = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateImage(VkDevice device, const VkImageCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImage * pImage) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateImage", (GLADapiproc) glad_vkCreateImage, 4, device, pCreateInfo, pAllocator, pImage);
    ret = glad_vkCreateImage(device, pCreateInfo, pAllocator, pImage);
    _post_call_vulkan_callback((void*) &ret, "vkCreateImage", (GLADapiproc) glad_vkCreateImage, 4, device, pCreateInfo, pAllocator, pImage);
    return ret;
}
PFN_vkCreateImage glad_debug_vkCreateImage = glad_debug_impl_vkCreateImage;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkCreateImagePipeSurfaceFUCHSIA glad_vkCreateImagePipeSurfaceFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateImagePipeSurfaceFUCHSIA(VkInstance instance, const VkImagePipeSurfaceCreateInfoFUCHSIA * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateImagePipeSurfaceFUCHSIA", (GLADapiproc) glad_vkCreateImagePipeSurfaceFUCHSIA, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateImagePipeSurfaceFUCHSIA(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateImagePipeSurfaceFUCHSIA", (GLADapiproc) glad_vkCreateImagePipeSurfaceFUCHSIA, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateImagePipeSurfaceFUCHSIA glad_debug_vkCreateImagePipeSurfaceFUCHSIA = glad_debug_impl_vkCreateImagePipeSurfaceFUCHSIA;

#endif
PFN_vkCreateImageView glad_vkCreateImageView = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateImageView(VkDevice device, const VkImageViewCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkImageView * pView) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateImageView", (GLADapiproc) glad_vkCreateImageView, 4, device, pCreateInfo, pAllocator, pView);
    ret = glad_vkCreateImageView(device, pCreateInfo, pAllocator, pView);
    _post_call_vulkan_callback((void*) &ret, "vkCreateImageView", (GLADapiproc) glad_vkCreateImageView, 4, device, pCreateInfo, pAllocator, pView);
    return ret;
}
PFN_vkCreateImageView glad_debug_vkCreateImageView = glad_debug_impl_vkCreateImageView;
PFN_vkCreateIndirectCommandsLayoutNV glad_vkCreateIndirectCommandsLayoutNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateIndirectCommandsLayoutNV(VkDevice device, const VkIndirectCommandsLayoutCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkIndirectCommandsLayoutNV * pIndirectCommandsLayout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateIndirectCommandsLayoutNV", (GLADapiproc) glad_vkCreateIndirectCommandsLayoutNV, 4, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    ret = glad_vkCreateIndirectCommandsLayoutNV(device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    _post_call_vulkan_callback((void*) &ret, "vkCreateIndirectCommandsLayoutNV", (GLADapiproc) glad_vkCreateIndirectCommandsLayoutNV, 4, device, pCreateInfo, pAllocator, pIndirectCommandsLayout);
    return ret;
}
PFN_vkCreateIndirectCommandsLayoutNV glad_debug_vkCreateIndirectCommandsLayoutNV = glad_debug_impl_vkCreateIndirectCommandsLayoutNV;
PFN_vkCreateInstance glad_vkCreateInstance = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateInstance(const VkInstanceCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkInstance * pInstance) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateInstance", (GLADapiproc) glad_vkCreateInstance, 3, pCreateInfo, pAllocator, pInstance);
    ret = glad_vkCreateInstance(pCreateInfo, pAllocator, pInstance);
    _post_call_vulkan_callback((void*) &ret, "vkCreateInstance", (GLADapiproc) glad_vkCreateInstance, 3, pCreateInfo, pAllocator, pInstance);
    return ret;
}
PFN_vkCreateInstance glad_debug_vkCreateInstance = glad_debug_impl_vkCreateInstance;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
PFN_vkCreateMacOSSurfaceMVK glad_vkCreateMacOSSurfaceMVK = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateMacOSSurfaceMVK(VkInstance instance, const VkMacOSSurfaceCreateInfoMVK * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateMacOSSurfaceMVK", (GLADapiproc) glad_vkCreateMacOSSurfaceMVK, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateMacOSSurfaceMVK(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateMacOSSurfaceMVK", (GLADapiproc) glad_vkCreateMacOSSurfaceMVK, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateMacOSSurfaceMVK glad_debug_vkCreateMacOSSurfaceMVK = glad_debug_impl_vkCreateMacOSSurfaceMVK;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkCreateMetalSurfaceEXT glad_vkCreateMetalSurfaceEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateMetalSurfaceEXT(VkInstance instance, const VkMetalSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateMetalSurfaceEXT", (GLADapiproc) glad_vkCreateMetalSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateMetalSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateMetalSurfaceEXT", (GLADapiproc) glad_vkCreateMetalSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateMetalSurfaceEXT glad_debug_vkCreateMetalSurfaceEXT = glad_debug_impl_vkCreateMetalSurfaceEXT;

#endif
PFN_vkCreateMicromapEXT glad_vkCreateMicromapEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateMicromapEXT(VkDevice device, const VkMicromapCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkMicromapEXT * pMicromap) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateMicromapEXT", (GLADapiproc) glad_vkCreateMicromapEXT, 4, device, pCreateInfo, pAllocator, pMicromap);
    ret = glad_vkCreateMicromapEXT(device, pCreateInfo, pAllocator, pMicromap);
    _post_call_vulkan_callback((void*) &ret, "vkCreateMicromapEXT", (GLADapiproc) glad_vkCreateMicromapEXT, 4, device, pCreateInfo, pAllocator, pMicromap);
    return ret;
}
PFN_vkCreateMicromapEXT glad_debug_vkCreateMicromapEXT = glad_debug_impl_vkCreateMicromapEXT;
PFN_vkCreateOpticalFlowSessionNV glad_vkCreateOpticalFlowSessionNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateOpticalFlowSessionNV(VkDevice device, const VkOpticalFlowSessionCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkOpticalFlowSessionNV * pSession) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateOpticalFlowSessionNV", (GLADapiproc) glad_vkCreateOpticalFlowSessionNV, 4, device, pCreateInfo, pAllocator, pSession);
    ret = glad_vkCreateOpticalFlowSessionNV(device, pCreateInfo, pAllocator, pSession);
    _post_call_vulkan_callback((void*) &ret, "vkCreateOpticalFlowSessionNV", (GLADapiproc) glad_vkCreateOpticalFlowSessionNV, 4, device, pCreateInfo, pAllocator, pSession);
    return ret;
}
PFN_vkCreateOpticalFlowSessionNV glad_debug_vkCreateOpticalFlowSessionNV = glad_debug_impl_vkCreateOpticalFlowSessionNV;
PFN_vkCreatePipelineCache glad_vkCreatePipelineCache = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreatePipelineCache(VkDevice device, const VkPipelineCacheCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineCache * pPipelineCache) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreatePipelineCache", (GLADapiproc) glad_vkCreatePipelineCache, 4, device, pCreateInfo, pAllocator, pPipelineCache);
    ret = glad_vkCreatePipelineCache(device, pCreateInfo, pAllocator, pPipelineCache);
    _post_call_vulkan_callback((void*) &ret, "vkCreatePipelineCache", (GLADapiproc) glad_vkCreatePipelineCache, 4, device, pCreateInfo, pAllocator, pPipelineCache);
    return ret;
}
PFN_vkCreatePipelineCache glad_debug_vkCreatePipelineCache = glad_debug_impl_vkCreatePipelineCache;
PFN_vkCreatePipelineLayout glad_vkCreatePipelineLayout = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreatePipelineLayout(VkDevice device, const VkPipelineLayoutCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPipelineLayout * pPipelineLayout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreatePipelineLayout", (GLADapiproc) glad_vkCreatePipelineLayout, 4, device, pCreateInfo, pAllocator, pPipelineLayout);
    ret = glad_vkCreatePipelineLayout(device, pCreateInfo, pAllocator, pPipelineLayout);
    _post_call_vulkan_callback((void*) &ret, "vkCreatePipelineLayout", (GLADapiproc) glad_vkCreatePipelineLayout, 4, device, pCreateInfo, pAllocator, pPipelineLayout);
    return ret;
}
PFN_vkCreatePipelineLayout glad_debug_vkCreatePipelineLayout = glad_debug_impl_vkCreatePipelineLayout;
PFN_vkCreatePrivateDataSlot glad_vkCreatePrivateDataSlot = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreatePrivateDataSlot(VkDevice device, const VkPrivateDataSlotCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreatePrivateDataSlot", (GLADapiproc) glad_vkCreatePrivateDataSlot, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    ret = glad_vkCreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
    _post_call_vulkan_callback((void*) &ret, "vkCreatePrivateDataSlot", (GLADapiproc) glad_vkCreatePrivateDataSlot, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    return ret;
}
PFN_vkCreatePrivateDataSlot glad_debug_vkCreatePrivateDataSlot = glad_debug_impl_vkCreatePrivateDataSlot;
PFN_vkCreatePrivateDataSlotEXT glad_vkCreatePrivateDataSlotEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreatePrivateDataSlotEXT(VkDevice device, const VkPrivateDataSlotCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreatePrivateDataSlotEXT", (GLADapiproc) glad_vkCreatePrivateDataSlotEXT, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    ret = glad_vkCreatePrivateDataSlotEXT(device, pCreateInfo, pAllocator, pPrivateDataSlot);
    _post_call_vulkan_callback((void*) &ret, "vkCreatePrivateDataSlotEXT", (GLADapiproc) glad_vkCreatePrivateDataSlotEXT, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    return ret;
}
PFN_vkCreatePrivateDataSlotEXT glad_debug_vkCreatePrivateDataSlotEXT = glad_debug_impl_vkCreatePrivateDataSlotEXT;
PFN_vkCreateQueryPool glad_vkCreateQueryPool = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateQueryPool(VkDevice device, const VkQueryPoolCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkQueryPool * pQueryPool) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateQueryPool", (GLADapiproc) glad_vkCreateQueryPool, 4, device, pCreateInfo, pAllocator, pQueryPool);
    ret = glad_vkCreateQueryPool(device, pCreateInfo, pAllocator, pQueryPool);
    _post_call_vulkan_callback((void*) &ret, "vkCreateQueryPool", (GLADapiproc) glad_vkCreateQueryPool, 4, device, pCreateInfo, pAllocator, pQueryPool);
    return ret;
}
PFN_vkCreateQueryPool glad_debug_vkCreateQueryPool = glad_debug_impl_vkCreateQueryPool;
PFN_vkCreateRayTracingPipelinesKHR glad_vkCreateRayTracingPipelinesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRayTracingPipelinesKHR(VkDevice device, VkDeferredOperationKHR deferredOperation, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateRayTracingPipelinesKHR", (GLADapiproc) glad_vkCreateRayTracingPipelinesKHR, 7, device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    ret = glad_vkCreateRayTracingPipelinesKHR(device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    _post_call_vulkan_callback((void*) &ret, "vkCreateRayTracingPipelinesKHR", (GLADapiproc) glad_vkCreateRayTracingPipelinesKHR, 7, device, deferredOperation, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    return ret;
}
PFN_vkCreateRayTracingPipelinesKHR glad_debug_vkCreateRayTracingPipelinesKHR = glad_debug_impl_vkCreateRayTracingPipelinesKHR;
PFN_vkCreateRayTracingPipelinesNV glad_vkCreateRayTracingPipelinesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRayTracingPipelinesNV(VkDevice device, VkPipelineCache pipelineCache, uint32_t createInfoCount, const VkRayTracingPipelineCreateInfoNV * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkPipeline * pPipelines) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateRayTracingPipelinesNV", (GLADapiproc) glad_vkCreateRayTracingPipelinesNV, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    ret = glad_vkCreateRayTracingPipelinesNV(device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    _post_call_vulkan_callback((void*) &ret, "vkCreateRayTracingPipelinesNV", (GLADapiproc) glad_vkCreateRayTracingPipelinesNV, 6, device, pipelineCache, createInfoCount, pCreateInfos, pAllocator, pPipelines);
    return ret;
}
PFN_vkCreateRayTracingPipelinesNV glad_debug_vkCreateRayTracingPipelinesNV = glad_debug_impl_vkCreateRayTracingPipelinesNV;
PFN_vkCreateRenderPass glad_vkCreateRenderPass = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRenderPass(VkDevice device, const VkRenderPassCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateRenderPass", (GLADapiproc) glad_vkCreateRenderPass, 4, device, pCreateInfo, pAllocator, pRenderPass);
    ret = glad_vkCreateRenderPass(device, pCreateInfo, pAllocator, pRenderPass);
    _post_call_vulkan_callback((void*) &ret, "vkCreateRenderPass", (GLADapiproc) glad_vkCreateRenderPass, 4, device, pCreateInfo, pAllocator, pRenderPass);
    return ret;
}
PFN_vkCreateRenderPass glad_debug_vkCreateRenderPass = glad_debug_impl_vkCreateRenderPass;
PFN_vkCreateRenderPass2 glad_vkCreateRenderPass2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2 * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateRenderPass2", (GLADapiproc) glad_vkCreateRenderPass2, 4, device, pCreateInfo, pAllocator, pRenderPass);
    ret = glad_vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
    _post_call_vulkan_callback((void*) &ret, "vkCreateRenderPass2", (GLADapiproc) glad_vkCreateRenderPass2, 4, device, pCreateInfo, pAllocator, pRenderPass);
    return ret;
}
PFN_vkCreateRenderPass2 glad_debug_vkCreateRenderPass2 = glad_debug_impl_vkCreateRenderPass2;
PFN_vkCreateRenderPass2KHR glad_vkCreateRenderPass2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRenderPass2KHR(VkDevice device, const VkRenderPassCreateInfo2 * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateRenderPass2KHR", (GLADapiproc) glad_vkCreateRenderPass2KHR, 4, device, pCreateInfo, pAllocator, pRenderPass);
    ret = glad_vkCreateRenderPass2KHR(device, pCreateInfo, pAllocator, pRenderPass);
    _post_call_vulkan_callback((void*) &ret, "vkCreateRenderPass2KHR", (GLADapiproc) glad_vkCreateRenderPass2KHR, 4, device, pCreateInfo, pAllocator, pRenderPass);
    return ret;
}
PFN_vkCreateRenderPass2KHR glad_debug_vkCreateRenderPass2KHR = glad_debug_impl_vkCreateRenderPass2KHR;
PFN_vkCreateSampler glad_vkCreateSampler = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSampler(VkDevice device, const VkSamplerCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSampler * pSampler) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSampler", (GLADapiproc) glad_vkCreateSampler, 4, device, pCreateInfo, pAllocator, pSampler);
    ret = glad_vkCreateSampler(device, pCreateInfo, pAllocator, pSampler);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSampler", (GLADapiproc) glad_vkCreateSampler, 4, device, pCreateInfo, pAllocator, pSampler);
    return ret;
}
PFN_vkCreateSampler glad_debug_vkCreateSampler = glad_debug_impl_vkCreateSampler;
PFN_vkCreateSamplerYcbcrConversion glad_vkCreateSamplerYcbcrConversion = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSamplerYcbcrConversion", (GLADapiproc) glad_vkCreateSamplerYcbcrConversion, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    ret = glad_vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSamplerYcbcrConversion", (GLADapiproc) glad_vkCreateSamplerYcbcrConversion, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    return ret;
}
PFN_vkCreateSamplerYcbcrConversion glad_debug_vkCreateSamplerYcbcrConversion = glad_debug_impl_vkCreateSamplerYcbcrConversion;
PFN_vkCreateSamplerYcbcrConversionKHR glad_vkCreateSamplerYcbcrConversionKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSamplerYcbcrConversionKHR(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSamplerYcbcrConversionKHR", (GLADapiproc) glad_vkCreateSamplerYcbcrConversionKHR, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    ret = glad_vkCreateSamplerYcbcrConversionKHR(device, pCreateInfo, pAllocator, pYcbcrConversion);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSamplerYcbcrConversionKHR", (GLADapiproc) glad_vkCreateSamplerYcbcrConversionKHR, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    return ret;
}
PFN_vkCreateSamplerYcbcrConversionKHR glad_debug_vkCreateSamplerYcbcrConversionKHR = glad_debug_impl_vkCreateSamplerYcbcrConversionKHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkCreateScreenSurfaceQNX glad_vkCreateScreenSurfaceQNX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateScreenSurfaceQNX(VkInstance instance, const VkScreenSurfaceCreateInfoQNX * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateScreenSurfaceQNX", (GLADapiproc) glad_vkCreateScreenSurfaceQNX, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateScreenSurfaceQNX(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateScreenSurfaceQNX", (GLADapiproc) glad_vkCreateScreenSurfaceQNX, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateScreenSurfaceQNX glad_debug_vkCreateScreenSurfaceQNX = glad_debug_impl_vkCreateScreenSurfaceQNX;

#endif
PFN_vkCreateSemaphore glad_vkCreateSemaphore = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSemaphore(VkDevice device, const VkSemaphoreCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphore * pSemaphore) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSemaphore", (GLADapiproc) glad_vkCreateSemaphore, 4, device, pCreateInfo, pAllocator, pSemaphore);
    ret = glad_vkCreateSemaphore(device, pCreateInfo, pAllocator, pSemaphore);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSemaphore", (GLADapiproc) glad_vkCreateSemaphore, 4, device, pCreateInfo, pAllocator, pSemaphore);
    return ret;
}
PFN_vkCreateSemaphore glad_debug_vkCreateSemaphore = glad_debug_impl_vkCreateSemaphore;
PFN_vkCreateShaderModule glad_vkCreateShaderModule = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateShaderModule(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkShaderModule * pShaderModule) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateShaderModule", (GLADapiproc) glad_vkCreateShaderModule, 4, device, pCreateInfo, pAllocator, pShaderModule);
    ret = glad_vkCreateShaderModule(device, pCreateInfo, pAllocator, pShaderModule);
    _post_call_vulkan_callback((void*) &ret, "vkCreateShaderModule", (GLADapiproc) glad_vkCreateShaderModule, 4, device, pCreateInfo, pAllocator, pShaderModule);
    return ret;
}
PFN_vkCreateShaderModule glad_debug_vkCreateShaderModule = glad_debug_impl_vkCreateShaderModule;
PFN_vkCreateShadersEXT glad_vkCreateShadersEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateShadersEXT(VkDevice device, uint32_t createInfoCount, const VkShaderCreateInfoEXT * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkShaderEXT * pShaders) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateShadersEXT", (GLADapiproc) glad_vkCreateShadersEXT, 5, device, createInfoCount, pCreateInfos, pAllocator, pShaders);
    ret = glad_vkCreateShadersEXT(device, createInfoCount, pCreateInfos, pAllocator, pShaders);
    _post_call_vulkan_callback((void*) &ret, "vkCreateShadersEXT", (GLADapiproc) glad_vkCreateShadersEXT, 5, device, createInfoCount, pCreateInfos, pAllocator, pShaders);
    return ret;
}
PFN_vkCreateShadersEXT glad_debug_vkCreateShadersEXT = glad_debug_impl_vkCreateShadersEXT;
PFN_vkCreateSharedSwapchainsKHR glad_vkCreateSharedSwapchainsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSharedSwapchainsKHR", (GLADapiproc) glad_vkCreateSharedSwapchainsKHR, 5, device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    ret = glad_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSharedSwapchainsKHR", (GLADapiproc) glad_vkCreateSharedSwapchainsKHR, 5, device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    return ret;
}
PFN_vkCreateSharedSwapchainsKHR glad_debug_vkCreateSharedSwapchainsKHR = glad_debug_impl_vkCreateSharedSwapchainsKHR;
#if defined(VK_USE_PLATFORM_GGP)
PFN_vkCreateStreamDescriptorSurfaceGGP glad_vkCreateStreamDescriptorSurfaceGGP = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateStreamDescriptorSurfaceGGP(VkInstance instance, const VkStreamDescriptorSurfaceCreateInfoGGP * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateStreamDescriptorSurfaceGGP", (GLADapiproc) glad_vkCreateStreamDescriptorSurfaceGGP, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateStreamDescriptorSurfaceGGP(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateStreamDescriptorSurfaceGGP", (GLADapiproc) glad_vkCreateStreamDescriptorSurfaceGGP, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateStreamDescriptorSurfaceGGP glad_debug_vkCreateStreamDescriptorSurfaceGGP = glad_debug_impl_vkCreateStreamDescriptorSurfaceGGP;

#endif
PFN_vkCreateSwapchainKHR glad_vkCreateSwapchainKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateSwapchainKHR", (GLADapiproc) glad_vkCreateSwapchainKHR, 4, device, pCreateInfo, pAllocator, pSwapchain);
    ret = glad_vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
    _post_call_vulkan_callback((void*) &ret, "vkCreateSwapchainKHR", (GLADapiproc) glad_vkCreateSwapchainKHR, 4, device, pCreateInfo, pAllocator, pSwapchain);
    return ret;
}
PFN_vkCreateSwapchainKHR glad_debug_vkCreateSwapchainKHR = glad_debug_impl_vkCreateSwapchainKHR;
PFN_vkCreateValidationCacheEXT glad_vkCreateValidationCacheEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateValidationCacheEXT(VkDevice device, const VkValidationCacheCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkValidationCacheEXT * pValidationCache) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateValidationCacheEXT", (GLADapiproc) glad_vkCreateValidationCacheEXT, 4, device, pCreateInfo, pAllocator, pValidationCache);
    ret = glad_vkCreateValidationCacheEXT(device, pCreateInfo, pAllocator, pValidationCache);
    _post_call_vulkan_callback((void*) &ret, "vkCreateValidationCacheEXT", (GLADapiproc) glad_vkCreateValidationCacheEXT, 4, device, pCreateInfo, pAllocator, pValidationCache);
    return ret;
}
PFN_vkCreateValidationCacheEXT glad_debug_vkCreateValidationCacheEXT = glad_debug_impl_vkCreateValidationCacheEXT;
#if defined(VK_USE_PLATFORM_VI_NN)
PFN_vkCreateViSurfaceNN glad_vkCreateViSurfaceNN = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateViSurfaceNN(VkInstance instance, const VkViSurfaceCreateInfoNN * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateViSurfaceNN", (GLADapiproc) glad_vkCreateViSurfaceNN, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateViSurfaceNN(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateViSurfaceNN", (GLADapiproc) glad_vkCreateViSurfaceNN, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateViSurfaceNN glad_debug_vkCreateViSurfaceNN = glad_debug_impl_vkCreateViSurfaceNN;

#endif
PFN_vkCreateVideoSessionKHR glad_vkCreateVideoSessionKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateVideoSessionKHR(VkDevice device, const VkVideoSessionCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkVideoSessionKHR * pVideoSession) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateVideoSessionKHR", (GLADapiproc) glad_vkCreateVideoSessionKHR, 4, device, pCreateInfo, pAllocator, pVideoSession);
    ret = glad_vkCreateVideoSessionKHR(device, pCreateInfo, pAllocator, pVideoSession);
    _post_call_vulkan_callback((void*) &ret, "vkCreateVideoSessionKHR", (GLADapiproc) glad_vkCreateVideoSessionKHR, 4, device, pCreateInfo, pAllocator, pVideoSession);
    return ret;
}
PFN_vkCreateVideoSessionKHR glad_debug_vkCreateVideoSessionKHR = glad_debug_impl_vkCreateVideoSessionKHR;
PFN_vkCreateVideoSessionParametersKHR glad_vkCreateVideoSessionParametersKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateVideoSessionParametersKHR(VkDevice device, const VkVideoSessionParametersCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkVideoSessionParametersKHR * pVideoSessionParameters) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateVideoSessionParametersKHR", (GLADapiproc) glad_vkCreateVideoSessionParametersKHR, 4, device, pCreateInfo, pAllocator, pVideoSessionParameters);
    ret = glad_vkCreateVideoSessionParametersKHR(device, pCreateInfo, pAllocator, pVideoSessionParameters);
    _post_call_vulkan_callback((void*) &ret, "vkCreateVideoSessionParametersKHR", (GLADapiproc) glad_vkCreateVideoSessionParametersKHR, 4, device, pCreateInfo, pAllocator, pVideoSessionParameters);
    return ret;
}
PFN_vkCreateVideoSessionParametersKHR glad_debug_vkCreateVideoSessionParametersKHR = glad_debug_impl_vkCreateVideoSessionParametersKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkCreateWaylandSurfaceKHR glad_vkCreateWaylandSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateWaylandSurfaceKHR(VkInstance instance, const VkWaylandSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateWaylandSurfaceKHR", (GLADapiproc) glad_vkCreateWaylandSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateWaylandSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateWaylandSurfaceKHR", (GLADapiproc) glad_vkCreateWaylandSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateWaylandSurfaceKHR glad_debug_vkCreateWaylandSurfaceKHR = glad_debug_impl_vkCreateWaylandSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkCreateWin32SurfaceKHR glad_vkCreateWin32SurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateWin32SurfaceKHR(VkInstance instance, const VkWin32SurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateWin32SurfaceKHR", (GLADapiproc) glad_vkCreateWin32SurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateWin32SurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateWin32SurfaceKHR", (GLADapiproc) glad_vkCreateWin32SurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateWin32SurfaceKHR glad_debug_vkCreateWin32SurfaceKHR = glad_debug_impl_vkCreateWin32SurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkCreateXcbSurfaceKHR glad_vkCreateXcbSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateXcbSurfaceKHR(VkInstance instance, const VkXcbSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateXcbSurfaceKHR", (GLADapiproc) glad_vkCreateXcbSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateXcbSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateXcbSurfaceKHR", (GLADapiproc) glad_vkCreateXcbSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateXcbSurfaceKHR glad_debug_vkCreateXcbSurfaceKHR = glad_debug_impl_vkCreateXcbSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkCreateXlibSurfaceKHR glad_vkCreateXlibSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateXlibSurfaceKHR(VkInstance instance, const VkXlibSurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkan_callback("vkCreateXlibSurfaceKHR", (GLADapiproc) glad_vkCreateXlibSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateXlibSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkan_callback((void*) &ret, "vkCreateXlibSurfaceKHR", (GLADapiproc) glad_vkCreateXlibSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateXlibSurfaceKHR glad_debug_vkCreateXlibSurfaceKHR = glad_debug_impl_vkCreateXlibSurfaceKHR;

#endif
PFN_vkDebugMarkerSetObjectNameEXT glad_vkDebugMarkerSetObjectNameEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDebugMarkerSetObjectNameEXT(VkDevice device, const VkDebugMarkerObjectNameInfoEXT * pNameInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkDebugMarkerSetObjectNameEXT", (GLADapiproc) glad_vkDebugMarkerSetObjectNameEXT, 2, device, pNameInfo);
    ret = glad_vkDebugMarkerSetObjectNameEXT(device, pNameInfo);
    _post_call_vulkan_callback((void*) &ret, "vkDebugMarkerSetObjectNameEXT", (GLADapiproc) glad_vkDebugMarkerSetObjectNameEXT, 2, device, pNameInfo);
    return ret;
}
PFN_vkDebugMarkerSetObjectNameEXT glad_debug_vkDebugMarkerSetObjectNameEXT = glad_debug_impl_vkDebugMarkerSetObjectNameEXT;
PFN_vkDebugMarkerSetObjectTagEXT glad_vkDebugMarkerSetObjectTagEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDebugMarkerSetObjectTagEXT(VkDevice device, const VkDebugMarkerObjectTagInfoEXT * pTagInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkDebugMarkerSetObjectTagEXT", (GLADapiproc) glad_vkDebugMarkerSetObjectTagEXT, 2, device, pTagInfo);
    ret = glad_vkDebugMarkerSetObjectTagEXT(device, pTagInfo);
    _post_call_vulkan_callback((void*) &ret, "vkDebugMarkerSetObjectTagEXT", (GLADapiproc) glad_vkDebugMarkerSetObjectTagEXT, 2, device, pTagInfo);
    return ret;
}
PFN_vkDebugMarkerSetObjectTagEXT glad_debug_vkDebugMarkerSetObjectTagEXT = glad_debug_impl_vkDebugMarkerSetObjectTagEXT;
PFN_vkDebugReportMessageEXT glad_vkDebugReportMessageEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDebugReportMessageEXT(VkInstance instance, VkDebugReportFlagsEXT flags, VkDebugReportObjectTypeEXT objectType, uint64_t object, size_t location, int32_t messageCode, const char * pLayerPrefix, const char * pMessage) {
    _pre_call_vulkan_callback("vkDebugReportMessageEXT", (GLADapiproc) glad_vkDebugReportMessageEXT, 8, instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
    glad_vkDebugReportMessageEXT(instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
    _post_call_vulkan_callback(NULL, "vkDebugReportMessageEXT", (GLADapiproc) glad_vkDebugReportMessageEXT, 8, instance, flags, objectType, object, location, messageCode, pLayerPrefix, pMessage);
    
}
PFN_vkDebugReportMessageEXT glad_debug_vkDebugReportMessageEXT = glad_debug_impl_vkDebugReportMessageEXT;
PFN_vkDeferredOperationJoinKHR glad_vkDeferredOperationJoinKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDeferredOperationJoinKHR(VkDevice device, VkDeferredOperationKHR operation) {
    VkResult ret;
    _pre_call_vulkan_callback("vkDeferredOperationJoinKHR", (GLADapiproc) glad_vkDeferredOperationJoinKHR, 2, device, operation);
    ret = glad_vkDeferredOperationJoinKHR(device, operation);
    _post_call_vulkan_callback((void*) &ret, "vkDeferredOperationJoinKHR", (GLADapiproc) glad_vkDeferredOperationJoinKHR, 2, device, operation);
    return ret;
}
PFN_vkDeferredOperationJoinKHR glad_debug_vkDeferredOperationJoinKHR = glad_debug_impl_vkDeferredOperationJoinKHR;
PFN_vkDestroyAccelerationStructureKHR glad_vkDestroyAccelerationStructureKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyAccelerationStructureKHR(VkDevice device, VkAccelerationStructureKHR accelerationStructure, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyAccelerationStructureKHR", (GLADapiproc) glad_vkDestroyAccelerationStructureKHR, 3, device, accelerationStructure, pAllocator);
    glad_vkDestroyAccelerationStructureKHR(device, accelerationStructure, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyAccelerationStructureKHR", (GLADapiproc) glad_vkDestroyAccelerationStructureKHR, 3, device, accelerationStructure, pAllocator);
    
}
PFN_vkDestroyAccelerationStructureKHR glad_debug_vkDestroyAccelerationStructureKHR = glad_debug_impl_vkDestroyAccelerationStructureKHR;
PFN_vkDestroyAccelerationStructureNV glad_vkDestroyAccelerationStructureNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyAccelerationStructureNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyAccelerationStructureNV", (GLADapiproc) glad_vkDestroyAccelerationStructureNV, 3, device, accelerationStructure, pAllocator);
    glad_vkDestroyAccelerationStructureNV(device, accelerationStructure, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyAccelerationStructureNV", (GLADapiproc) glad_vkDestroyAccelerationStructureNV, 3, device, accelerationStructure, pAllocator);
    
}
PFN_vkDestroyAccelerationStructureNV glad_debug_vkDestroyAccelerationStructureNV = glad_debug_impl_vkDestroyAccelerationStructureNV;
PFN_vkDestroyBuffer glad_vkDestroyBuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyBuffer(VkDevice device, VkBuffer buffer, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyBuffer", (GLADapiproc) glad_vkDestroyBuffer, 3, device, buffer, pAllocator);
    glad_vkDestroyBuffer(device, buffer, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyBuffer", (GLADapiproc) glad_vkDestroyBuffer, 3, device, buffer, pAllocator);
    
}
PFN_vkDestroyBuffer glad_debug_vkDestroyBuffer = glad_debug_impl_vkDestroyBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkDestroyBufferCollectionFUCHSIA glad_vkDestroyBufferCollectionFUCHSIA = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyBufferCollectionFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyBufferCollectionFUCHSIA", (GLADapiproc) glad_vkDestroyBufferCollectionFUCHSIA, 3, device, collection, pAllocator);
    glad_vkDestroyBufferCollectionFUCHSIA(device, collection, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyBufferCollectionFUCHSIA", (GLADapiproc) glad_vkDestroyBufferCollectionFUCHSIA, 3, device, collection, pAllocator);
    
}
PFN_vkDestroyBufferCollectionFUCHSIA glad_debug_vkDestroyBufferCollectionFUCHSIA = glad_debug_impl_vkDestroyBufferCollectionFUCHSIA;

#endif
PFN_vkDestroyBufferView glad_vkDestroyBufferView = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyBufferView(VkDevice device, VkBufferView bufferView, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyBufferView", (GLADapiproc) glad_vkDestroyBufferView, 3, device, bufferView, pAllocator);
    glad_vkDestroyBufferView(device, bufferView, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyBufferView", (GLADapiproc) glad_vkDestroyBufferView, 3, device, bufferView, pAllocator);
    
}
PFN_vkDestroyBufferView glad_debug_vkDestroyBufferView = glad_debug_impl_vkDestroyBufferView;
PFN_vkDestroyCommandPool glad_vkDestroyCommandPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyCommandPool(VkDevice device, VkCommandPool commandPool, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyCommandPool", (GLADapiproc) glad_vkDestroyCommandPool, 3, device, commandPool, pAllocator);
    glad_vkDestroyCommandPool(device, commandPool, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyCommandPool", (GLADapiproc) glad_vkDestroyCommandPool, 3, device, commandPool, pAllocator);
    
}
PFN_vkDestroyCommandPool glad_debug_vkDestroyCommandPool = glad_debug_impl_vkDestroyCommandPool;
PFN_vkDestroyCuFunctionNVX glad_vkDestroyCuFunctionNVX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyCuFunctionNVX(VkDevice device, VkCuFunctionNVX function, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyCuFunctionNVX", (GLADapiproc) glad_vkDestroyCuFunctionNVX, 3, device, function, pAllocator);
    glad_vkDestroyCuFunctionNVX(device, function, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyCuFunctionNVX", (GLADapiproc) glad_vkDestroyCuFunctionNVX, 3, device, function, pAllocator);
    
}
PFN_vkDestroyCuFunctionNVX glad_debug_vkDestroyCuFunctionNVX = glad_debug_impl_vkDestroyCuFunctionNVX;
PFN_vkDestroyCuModuleNVX glad_vkDestroyCuModuleNVX = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyCuModuleNVX(VkDevice device, VkCuModuleNVX module, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyCuModuleNVX", (GLADapiproc) glad_vkDestroyCuModuleNVX, 3, device, module, pAllocator);
    glad_vkDestroyCuModuleNVX(device, module, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyCuModuleNVX", (GLADapiproc) glad_vkDestroyCuModuleNVX, 3, device, module, pAllocator);
    
}
PFN_vkDestroyCuModuleNVX glad_debug_vkDestroyCuModuleNVX = glad_debug_impl_vkDestroyCuModuleNVX;
PFN_vkDestroyCudaFunctionNV glad_vkDestroyCudaFunctionNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyCudaFunctionNV(VkDevice device, VkCudaFunctionNV function, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyCudaFunctionNV", (GLADapiproc) glad_vkDestroyCudaFunctionNV, 3, device, function, pAllocator);
    glad_vkDestroyCudaFunctionNV(device, function, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyCudaFunctionNV", (GLADapiproc) glad_vkDestroyCudaFunctionNV, 3, device, function, pAllocator);
    
}
PFN_vkDestroyCudaFunctionNV glad_debug_vkDestroyCudaFunctionNV = glad_debug_impl_vkDestroyCudaFunctionNV;
PFN_vkDestroyCudaModuleNV glad_vkDestroyCudaModuleNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyCudaModuleNV(VkDevice device, VkCudaModuleNV module, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyCudaModuleNV", (GLADapiproc) glad_vkDestroyCudaModuleNV, 3, device, module, pAllocator);
    glad_vkDestroyCudaModuleNV(device, module, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyCudaModuleNV", (GLADapiproc) glad_vkDestroyCudaModuleNV, 3, device, module, pAllocator);
    
}
PFN_vkDestroyCudaModuleNV glad_debug_vkDestroyCudaModuleNV = glad_debug_impl_vkDestroyCudaModuleNV;
PFN_vkDestroyDebugReportCallbackEXT glad_vkDestroyDebugReportCallbackEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDebugReportCallbackEXT(VkInstance instance, VkDebugReportCallbackEXT callback, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDebugReportCallbackEXT", (GLADapiproc) glad_vkDestroyDebugReportCallbackEXT, 3, instance, callback, pAllocator);
    glad_vkDestroyDebugReportCallbackEXT(instance, callback, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDebugReportCallbackEXT", (GLADapiproc) glad_vkDestroyDebugReportCallbackEXT, 3, instance, callback, pAllocator);
    
}
PFN_vkDestroyDebugReportCallbackEXT glad_debug_vkDestroyDebugReportCallbackEXT = glad_debug_impl_vkDestroyDebugReportCallbackEXT;
PFN_vkDestroyDebugUtilsMessengerEXT glad_vkDestroyDebugUtilsMessengerEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDebugUtilsMessengerEXT", (GLADapiproc) glad_vkDestroyDebugUtilsMessengerEXT, 3, instance, messenger, pAllocator);
    glad_vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDebugUtilsMessengerEXT", (GLADapiproc) glad_vkDestroyDebugUtilsMessengerEXT, 3, instance, messenger, pAllocator);
    
}
PFN_vkDestroyDebugUtilsMessengerEXT glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_debug_impl_vkDestroyDebugUtilsMessengerEXT;
PFN_vkDestroyDeferredOperationKHR glad_vkDestroyDeferredOperationKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDeferredOperationKHR(VkDevice device, VkDeferredOperationKHR operation, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDeferredOperationKHR", (GLADapiproc) glad_vkDestroyDeferredOperationKHR, 3, device, operation, pAllocator);
    glad_vkDestroyDeferredOperationKHR(device, operation, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDeferredOperationKHR", (GLADapiproc) glad_vkDestroyDeferredOperationKHR, 3, device, operation, pAllocator);
    
}
PFN_vkDestroyDeferredOperationKHR glad_debug_vkDestroyDeferredOperationKHR = glad_debug_impl_vkDestroyDeferredOperationKHR;
PFN_vkDestroyDescriptorPool glad_vkDestroyDescriptorPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDescriptorPool", (GLADapiproc) glad_vkDestroyDescriptorPool, 3, device, descriptorPool, pAllocator);
    glad_vkDestroyDescriptorPool(device, descriptorPool, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDescriptorPool", (GLADapiproc) glad_vkDestroyDescriptorPool, 3, device, descriptorPool, pAllocator);
    
}
PFN_vkDestroyDescriptorPool glad_debug_vkDestroyDescriptorPool = glad_debug_impl_vkDestroyDescriptorPool;
PFN_vkDestroyDescriptorSetLayout glad_vkDestroyDescriptorSetLayout = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDescriptorSetLayout", (GLADapiproc) glad_vkDestroyDescriptorSetLayout, 3, device, descriptorSetLayout, pAllocator);
    glad_vkDestroyDescriptorSetLayout(device, descriptorSetLayout, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDescriptorSetLayout", (GLADapiproc) glad_vkDestroyDescriptorSetLayout, 3, device, descriptorSetLayout, pAllocator);
    
}
PFN_vkDestroyDescriptorSetLayout glad_debug_vkDestroyDescriptorSetLayout = glad_debug_impl_vkDestroyDescriptorSetLayout;
PFN_vkDestroyDescriptorUpdateTemplate glad_vkDestroyDescriptorUpdateTemplate = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDescriptorUpdateTemplate", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplate, 3, device, descriptorUpdateTemplate, pAllocator);
    glad_vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDescriptorUpdateTemplate", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplate, 3, device, descriptorUpdateTemplate, pAllocator);
    
}
PFN_vkDestroyDescriptorUpdateTemplate glad_debug_vkDestroyDescriptorUpdateTemplate = glad_debug_impl_vkDestroyDescriptorUpdateTemplate;
PFN_vkDestroyDescriptorUpdateTemplateKHR glad_vkDestroyDescriptorUpdateTemplateKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDescriptorUpdateTemplateKHR(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDescriptorUpdateTemplateKHR", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplateKHR, 3, device, descriptorUpdateTemplate, pAllocator);
    glad_vkDestroyDescriptorUpdateTemplateKHR(device, descriptorUpdateTemplate, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDescriptorUpdateTemplateKHR", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplateKHR, 3, device, descriptorUpdateTemplate, pAllocator);
    
}
PFN_vkDestroyDescriptorUpdateTemplateKHR glad_debug_vkDestroyDescriptorUpdateTemplateKHR = glad_debug_impl_vkDestroyDescriptorUpdateTemplateKHR;
PFN_vkDestroyDevice glad_vkDestroyDevice = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDevice(VkDevice device, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyDevice", (GLADapiproc) glad_vkDestroyDevice, 2, device, pAllocator);
    glad_vkDestroyDevice(device, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyDevice", (GLADapiproc) glad_vkDestroyDevice, 2, device, pAllocator);
    
}
PFN_vkDestroyDevice glad_debug_vkDestroyDevice = glad_debug_impl_vkDestroyDevice;
PFN_vkDestroyEvent glad_vkDestroyEvent = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyEvent(VkDevice device, VkEvent event, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyEvent", (GLADapiproc) glad_vkDestroyEvent, 3, device, event, pAllocator);
    glad_vkDestroyEvent(device, event, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyEvent", (GLADapiproc) glad_vkDestroyEvent, 3, device, event, pAllocator);
    
}
PFN_vkDestroyEvent glad_debug_vkDestroyEvent = glad_debug_impl_vkDestroyEvent;
PFN_vkDestroyFence glad_vkDestroyFence = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyFence(VkDevice device, VkFence fence, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyFence", (GLADapiproc) glad_vkDestroyFence, 3, device, fence, pAllocator);
    glad_vkDestroyFence(device, fence, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyFence", (GLADapiproc) glad_vkDestroyFence, 3, device, fence, pAllocator);
    
}
PFN_vkDestroyFence glad_debug_vkDestroyFence = glad_debug_impl_vkDestroyFence;
PFN_vkDestroyFramebuffer glad_vkDestroyFramebuffer = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyFramebuffer(VkDevice device, VkFramebuffer framebuffer, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyFramebuffer", (GLADapiproc) glad_vkDestroyFramebuffer, 3, device, framebuffer, pAllocator);
    glad_vkDestroyFramebuffer(device, framebuffer, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyFramebuffer", (GLADapiproc) glad_vkDestroyFramebuffer, 3, device, framebuffer, pAllocator);
    
}
PFN_vkDestroyFramebuffer glad_debug_vkDestroyFramebuffer = glad_debug_impl_vkDestroyFramebuffer;
PFN_vkDestroyImage glad_vkDestroyImage = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyImage(VkDevice device, VkImage image, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyImage", (GLADapiproc) glad_vkDestroyImage, 3, device, image, pAllocator);
    glad_vkDestroyImage(device, image, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyImage", (GLADapiproc) glad_vkDestroyImage, 3, device, image, pAllocator);
    
}
PFN_vkDestroyImage glad_debug_vkDestroyImage = glad_debug_impl_vkDestroyImage;
PFN_vkDestroyImageView glad_vkDestroyImageView = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyImageView", (GLADapiproc) glad_vkDestroyImageView, 3, device, imageView, pAllocator);
    glad_vkDestroyImageView(device, imageView, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyImageView", (GLADapiproc) glad_vkDestroyImageView, 3, device, imageView, pAllocator);
    
}
PFN_vkDestroyImageView glad_debug_vkDestroyImageView = glad_debug_impl_vkDestroyImageView;
PFN_vkDestroyIndirectCommandsLayoutNV glad_vkDestroyIndirectCommandsLayoutNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyIndirectCommandsLayoutNV(VkDevice device, VkIndirectCommandsLayoutNV indirectCommandsLayout, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyIndirectCommandsLayoutNV", (GLADapiproc) glad_vkDestroyIndirectCommandsLayoutNV, 3, device, indirectCommandsLayout, pAllocator);
    glad_vkDestroyIndirectCommandsLayoutNV(device, indirectCommandsLayout, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyIndirectCommandsLayoutNV", (GLADapiproc) glad_vkDestroyIndirectCommandsLayoutNV, 3, device, indirectCommandsLayout, pAllocator);
    
}
PFN_vkDestroyIndirectCommandsLayoutNV glad_debug_vkDestroyIndirectCommandsLayoutNV = glad_debug_impl_vkDestroyIndirectCommandsLayoutNV;
PFN_vkDestroyInstance glad_vkDestroyInstance = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyInstance(VkInstance instance, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyInstance", (GLADapiproc) glad_vkDestroyInstance, 2, instance, pAllocator);
    glad_vkDestroyInstance(instance, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyInstance", (GLADapiproc) glad_vkDestroyInstance, 2, instance, pAllocator);
    
}
PFN_vkDestroyInstance glad_debug_vkDestroyInstance = glad_debug_impl_vkDestroyInstance;
PFN_vkDestroyMicromapEXT glad_vkDestroyMicromapEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyMicromapEXT(VkDevice device, VkMicromapEXT micromap, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyMicromapEXT", (GLADapiproc) glad_vkDestroyMicromapEXT, 3, device, micromap, pAllocator);
    glad_vkDestroyMicromapEXT(device, micromap, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyMicromapEXT", (GLADapiproc) glad_vkDestroyMicromapEXT, 3, device, micromap, pAllocator);
    
}
PFN_vkDestroyMicromapEXT glad_debug_vkDestroyMicromapEXT = glad_debug_impl_vkDestroyMicromapEXT;
PFN_vkDestroyOpticalFlowSessionNV glad_vkDestroyOpticalFlowSessionNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyOpticalFlowSessionNV(VkDevice device, VkOpticalFlowSessionNV session, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyOpticalFlowSessionNV", (GLADapiproc) glad_vkDestroyOpticalFlowSessionNV, 3, device, session, pAllocator);
    glad_vkDestroyOpticalFlowSessionNV(device, session, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyOpticalFlowSessionNV", (GLADapiproc) glad_vkDestroyOpticalFlowSessionNV, 3, device, session, pAllocator);
    
}
PFN_vkDestroyOpticalFlowSessionNV glad_debug_vkDestroyOpticalFlowSessionNV = glad_debug_impl_vkDestroyOpticalFlowSessionNV;
PFN_vkDestroyPipeline glad_vkDestroyPipeline = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPipeline(VkDevice device, VkPipeline pipeline, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyPipeline", (GLADapiproc) glad_vkDestroyPipeline, 3, device, pipeline, pAllocator);
    glad_vkDestroyPipeline(device, pipeline, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyPipeline", (GLADapiproc) glad_vkDestroyPipeline, 3, device, pipeline, pAllocator);
    
}
PFN_vkDestroyPipeline glad_debug_vkDestroyPipeline = glad_debug_impl_vkDestroyPipeline;
PFN_vkDestroyPipelineCache glad_vkDestroyPipelineCache = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPipelineCache(VkDevice device, VkPipelineCache pipelineCache, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyPipelineCache", (GLADapiproc) glad_vkDestroyPipelineCache, 3, device, pipelineCache, pAllocator);
    glad_vkDestroyPipelineCache(device, pipelineCache, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyPipelineCache", (GLADapiproc) glad_vkDestroyPipelineCache, 3, device, pipelineCache, pAllocator);
    
}
PFN_vkDestroyPipelineCache glad_debug_vkDestroyPipelineCache = glad_debug_impl_vkDestroyPipelineCache;
PFN_vkDestroyPipelineLayout glad_vkDestroyPipelineLayout = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPipelineLayout(VkDevice device, VkPipelineLayout pipelineLayout, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyPipelineLayout", (GLADapiproc) glad_vkDestroyPipelineLayout, 3, device, pipelineLayout, pAllocator);
    glad_vkDestroyPipelineLayout(device, pipelineLayout, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyPipelineLayout", (GLADapiproc) glad_vkDestroyPipelineLayout, 3, device, pipelineLayout, pAllocator);
    
}
PFN_vkDestroyPipelineLayout glad_debug_vkDestroyPipelineLayout = glad_debug_impl_vkDestroyPipelineLayout;
PFN_vkDestroyPrivateDataSlot glad_vkDestroyPrivateDataSlot = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyPrivateDataSlot", (GLADapiproc) glad_vkDestroyPrivateDataSlot, 3, device, privateDataSlot, pAllocator);
    glad_vkDestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyPrivateDataSlot", (GLADapiproc) glad_vkDestroyPrivateDataSlot, 3, device, privateDataSlot, pAllocator);
    
}
PFN_vkDestroyPrivateDataSlot glad_debug_vkDestroyPrivateDataSlot = glad_debug_impl_vkDestroyPrivateDataSlot;
PFN_vkDestroyPrivateDataSlotEXT glad_vkDestroyPrivateDataSlotEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPrivateDataSlotEXT(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyPrivateDataSlotEXT", (GLADapiproc) glad_vkDestroyPrivateDataSlotEXT, 3, device, privateDataSlot, pAllocator);
    glad_vkDestroyPrivateDataSlotEXT(device, privateDataSlot, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyPrivateDataSlotEXT", (GLADapiproc) glad_vkDestroyPrivateDataSlotEXT, 3, device, privateDataSlot, pAllocator);
    
}
PFN_vkDestroyPrivateDataSlotEXT glad_debug_vkDestroyPrivateDataSlotEXT = glad_debug_impl_vkDestroyPrivateDataSlotEXT;
PFN_vkDestroyQueryPool glad_vkDestroyQueryPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyQueryPool(VkDevice device, VkQueryPool queryPool, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyQueryPool", (GLADapiproc) glad_vkDestroyQueryPool, 3, device, queryPool, pAllocator);
    glad_vkDestroyQueryPool(device, queryPool, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyQueryPool", (GLADapiproc) glad_vkDestroyQueryPool, 3, device, queryPool, pAllocator);
    
}
PFN_vkDestroyQueryPool glad_debug_vkDestroyQueryPool = glad_debug_impl_vkDestroyQueryPool;
PFN_vkDestroyRenderPass glad_vkDestroyRenderPass = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyRenderPass(VkDevice device, VkRenderPass renderPass, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyRenderPass", (GLADapiproc) glad_vkDestroyRenderPass, 3, device, renderPass, pAllocator);
    glad_vkDestroyRenderPass(device, renderPass, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyRenderPass", (GLADapiproc) glad_vkDestroyRenderPass, 3, device, renderPass, pAllocator);
    
}
PFN_vkDestroyRenderPass glad_debug_vkDestroyRenderPass = glad_debug_impl_vkDestroyRenderPass;
PFN_vkDestroySampler glad_vkDestroySampler = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySampler(VkDevice device, VkSampler sampler, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySampler", (GLADapiproc) glad_vkDestroySampler, 3, device, sampler, pAllocator);
    glad_vkDestroySampler(device, sampler, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySampler", (GLADapiproc) glad_vkDestroySampler, 3, device, sampler, pAllocator);
    
}
PFN_vkDestroySampler glad_debug_vkDestroySampler = glad_debug_impl_vkDestroySampler;
PFN_vkDestroySamplerYcbcrConversion glad_vkDestroySamplerYcbcrConversion = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySamplerYcbcrConversion", (GLADapiproc) glad_vkDestroySamplerYcbcrConversion, 3, device, ycbcrConversion, pAllocator);
    glad_vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySamplerYcbcrConversion", (GLADapiproc) glad_vkDestroySamplerYcbcrConversion, 3, device, ycbcrConversion, pAllocator);
    
}
PFN_vkDestroySamplerYcbcrConversion glad_debug_vkDestroySamplerYcbcrConversion = glad_debug_impl_vkDestroySamplerYcbcrConversion;
PFN_vkDestroySamplerYcbcrConversionKHR glad_vkDestroySamplerYcbcrConversionKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySamplerYcbcrConversionKHR(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySamplerYcbcrConversionKHR", (GLADapiproc) glad_vkDestroySamplerYcbcrConversionKHR, 3, device, ycbcrConversion, pAllocator);
    glad_vkDestroySamplerYcbcrConversionKHR(device, ycbcrConversion, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySamplerYcbcrConversionKHR", (GLADapiproc) glad_vkDestroySamplerYcbcrConversionKHR, 3, device, ycbcrConversion, pAllocator);
    
}
PFN_vkDestroySamplerYcbcrConversionKHR glad_debug_vkDestroySamplerYcbcrConversionKHR = glad_debug_impl_vkDestroySamplerYcbcrConversionKHR;
PFN_vkDestroySemaphore glad_vkDestroySemaphore = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySemaphore(VkDevice device, VkSemaphore semaphore, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySemaphore", (GLADapiproc) glad_vkDestroySemaphore, 3, device, semaphore, pAllocator);
    glad_vkDestroySemaphore(device, semaphore, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySemaphore", (GLADapiproc) glad_vkDestroySemaphore, 3, device, semaphore, pAllocator);
    
}
PFN_vkDestroySemaphore glad_debug_vkDestroySemaphore = glad_debug_impl_vkDestroySemaphore;
PFN_vkDestroyShaderEXT glad_vkDestroyShaderEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyShaderEXT(VkDevice device, VkShaderEXT shader, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyShaderEXT", (GLADapiproc) glad_vkDestroyShaderEXT, 3, device, shader, pAllocator);
    glad_vkDestroyShaderEXT(device, shader, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyShaderEXT", (GLADapiproc) glad_vkDestroyShaderEXT, 3, device, shader, pAllocator);
    
}
PFN_vkDestroyShaderEXT glad_debug_vkDestroyShaderEXT = glad_debug_impl_vkDestroyShaderEXT;
PFN_vkDestroyShaderModule glad_vkDestroyShaderModule = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyShaderModule(VkDevice device, VkShaderModule shaderModule, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyShaderModule", (GLADapiproc) glad_vkDestroyShaderModule, 3, device, shaderModule, pAllocator);
    glad_vkDestroyShaderModule(device, shaderModule, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyShaderModule", (GLADapiproc) glad_vkDestroyShaderModule, 3, device, shaderModule, pAllocator);
    
}
PFN_vkDestroyShaderModule glad_debug_vkDestroyShaderModule = glad_debug_impl_vkDestroyShaderModule;
PFN_vkDestroySurfaceKHR glad_vkDestroySurfaceKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySurfaceKHR", (GLADapiproc) glad_vkDestroySurfaceKHR, 3, instance, surface, pAllocator);
    glad_vkDestroySurfaceKHR(instance, surface, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySurfaceKHR", (GLADapiproc) glad_vkDestroySurfaceKHR, 3, instance, surface, pAllocator);
    
}
PFN_vkDestroySurfaceKHR glad_debug_vkDestroySurfaceKHR = glad_debug_impl_vkDestroySurfaceKHR;
PFN_vkDestroySwapchainKHR glad_vkDestroySwapchainKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroySwapchainKHR", (GLADapiproc) glad_vkDestroySwapchainKHR, 3, device, swapchain, pAllocator);
    glad_vkDestroySwapchainKHR(device, swapchain, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroySwapchainKHR", (GLADapiproc) glad_vkDestroySwapchainKHR, 3, device, swapchain, pAllocator);
    
}
PFN_vkDestroySwapchainKHR glad_debug_vkDestroySwapchainKHR = glad_debug_impl_vkDestroySwapchainKHR;
PFN_vkDestroyValidationCacheEXT glad_vkDestroyValidationCacheEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyValidationCacheEXT(VkDevice device, VkValidationCacheEXT validationCache, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyValidationCacheEXT", (GLADapiproc) glad_vkDestroyValidationCacheEXT, 3, device, validationCache, pAllocator);
    glad_vkDestroyValidationCacheEXT(device, validationCache, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyValidationCacheEXT", (GLADapiproc) glad_vkDestroyValidationCacheEXT, 3, device, validationCache, pAllocator);
    
}
PFN_vkDestroyValidationCacheEXT glad_debug_vkDestroyValidationCacheEXT = glad_debug_impl_vkDestroyValidationCacheEXT;
PFN_vkDestroyVideoSessionKHR glad_vkDestroyVideoSessionKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyVideoSessionKHR(VkDevice device, VkVideoSessionKHR videoSession, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyVideoSessionKHR", (GLADapiproc) glad_vkDestroyVideoSessionKHR, 3, device, videoSession, pAllocator);
    glad_vkDestroyVideoSessionKHR(device, videoSession, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyVideoSessionKHR", (GLADapiproc) glad_vkDestroyVideoSessionKHR, 3, device, videoSession, pAllocator);
    
}
PFN_vkDestroyVideoSessionKHR glad_debug_vkDestroyVideoSessionKHR = glad_debug_impl_vkDestroyVideoSessionKHR;
PFN_vkDestroyVideoSessionParametersKHR glad_vkDestroyVideoSessionParametersKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkDestroyVideoSessionParametersKHR", (GLADapiproc) glad_vkDestroyVideoSessionParametersKHR, 3, device, videoSessionParameters, pAllocator);
    glad_vkDestroyVideoSessionParametersKHR(device, videoSessionParameters, pAllocator);
    _post_call_vulkan_callback(NULL, "vkDestroyVideoSessionParametersKHR", (GLADapiproc) glad_vkDestroyVideoSessionParametersKHR, 3, device, videoSessionParameters, pAllocator);
    
}
PFN_vkDestroyVideoSessionParametersKHR glad_debug_vkDestroyVideoSessionParametersKHR = glad_debug_impl_vkDestroyVideoSessionParametersKHR;
PFN_vkDeviceWaitIdle glad_vkDeviceWaitIdle = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDeviceWaitIdle(VkDevice device) {
    VkResult ret;
    _pre_call_vulkan_callback("vkDeviceWaitIdle", (GLADapiproc) glad_vkDeviceWaitIdle, 1, device);
    ret = glad_vkDeviceWaitIdle(device);
    _post_call_vulkan_callback((void*) &ret, "vkDeviceWaitIdle", (GLADapiproc) glad_vkDeviceWaitIdle, 1, device);
    return ret;
}
PFN_vkDeviceWaitIdle glad_debug_vkDeviceWaitIdle = glad_debug_impl_vkDeviceWaitIdle;
PFN_vkDisplayPowerControlEXT glad_vkDisplayPowerControlEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkDisplayPowerControlEXT", (GLADapiproc) glad_vkDisplayPowerControlEXT, 3, device, display, pDisplayPowerInfo);
    ret = glad_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
    _post_call_vulkan_callback((void*) &ret, "vkDisplayPowerControlEXT", (GLADapiproc) glad_vkDisplayPowerControlEXT, 3, device, display, pDisplayPowerInfo);
    return ret;
}
PFN_vkDisplayPowerControlEXT glad_debug_vkDisplayPowerControlEXT = glad_debug_impl_vkDisplayPowerControlEXT;
PFN_vkEndCommandBuffer glad_vkEndCommandBuffer = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEndCommandBuffer(VkCommandBuffer commandBuffer) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEndCommandBuffer", (GLADapiproc) glad_vkEndCommandBuffer, 1, commandBuffer);
    ret = glad_vkEndCommandBuffer(commandBuffer);
    _post_call_vulkan_callback((void*) &ret, "vkEndCommandBuffer", (GLADapiproc) glad_vkEndCommandBuffer, 1, commandBuffer);
    return ret;
}
PFN_vkEndCommandBuffer glad_debug_vkEndCommandBuffer = glad_debug_impl_vkEndCommandBuffer;
PFN_vkEnumerateDeviceExtensionProperties glad_vkEnumerateDeviceExtensionProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateDeviceExtensionProperties(VkPhysicalDevice physicalDevice, const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumerateDeviceExtensionProperties", (GLADapiproc) glad_vkEnumerateDeviceExtensionProperties, 4, physicalDevice, pLayerName, pPropertyCount, pProperties);
    ret = glad_vkEnumerateDeviceExtensionProperties(physicalDevice, pLayerName, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumerateDeviceExtensionProperties", (GLADapiproc) glad_vkEnumerateDeviceExtensionProperties, 4, physicalDevice, pLayerName, pPropertyCount, pProperties);
    return ret;
}
PFN_vkEnumerateDeviceExtensionProperties glad_debug_vkEnumerateDeviceExtensionProperties = glad_debug_impl_vkEnumerateDeviceExtensionProperties;
PFN_vkEnumerateDeviceLayerProperties glad_vkEnumerateDeviceLayerProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateDeviceLayerProperties(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkLayerProperties * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumerateDeviceLayerProperties", (GLADapiproc) glad_vkEnumerateDeviceLayerProperties, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkEnumerateDeviceLayerProperties(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumerateDeviceLayerProperties", (GLADapiproc) glad_vkEnumerateDeviceLayerProperties, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkEnumerateDeviceLayerProperties glad_debug_vkEnumerateDeviceLayerProperties = glad_debug_impl_vkEnumerateDeviceLayerProperties;
PFN_vkEnumerateInstanceExtensionProperties glad_vkEnumerateInstanceExtensionProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateInstanceExtensionProperties(const char * pLayerName, uint32_t * pPropertyCount, VkExtensionProperties * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumerateInstanceExtensionProperties", (GLADapiproc) glad_vkEnumerateInstanceExtensionProperties, 3, pLayerName, pPropertyCount, pProperties);
    ret = glad_vkEnumerateInstanceExtensionProperties(pLayerName, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumerateInstanceExtensionProperties", (GLADapiproc) glad_vkEnumerateInstanceExtensionProperties, 3, pLayerName, pPropertyCount, pProperties);
    return ret;
}
PFN_vkEnumerateInstanceExtensionProperties glad_debug_vkEnumerateInstanceExtensionProperties = glad_debug_impl_vkEnumerateInstanceExtensionProperties;
PFN_vkEnumerateInstanceLayerProperties glad_vkEnumerateInstanceLayerProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateInstanceLayerProperties(uint32_t * pPropertyCount, VkLayerProperties * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumerateInstanceLayerProperties", (GLADapiproc) glad_vkEnumerateInstanceLayerProperties, 2, pPropertyCount, pProperties);
    ret = glad_vkEnumerateInstanceLayerProperties(pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumerateInstanceLayerProperties", (GLADapiproc) glad_vkEnumerateInstanceLayerProperties, 2, pPropertyCount, pProperties);
    return ret;
}
PFN_vkEnumerateInstanceLayerProperties glad_debug_vkEnumerateInstanceLayerProperties = glad_debug_impl_vkEnumerateInstanceLayerProperties;
PFN_vkEnumerateInstanceVersion glad_vkEnumerateInstanceVersion = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateInstanceVersion(uint32_t * pApiVersion) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumerateInstanceVersion", (GLADapiproc) glad_vkEnumerateInstanceVersion, 1, pApiVersion);
    ret = glad_vkEnumerateInstanceVersion(pApiVersion);
    _post_call_vulkan_callback((void*) &ret, "vkEnumerateInstanceVersion", (GLADapiproc) glad_vkEnumerateInstanceVersion, 1, pApiVersion);
    return ret;
}
PFN_vkEnumerateInstanceVersion glad_debug_vkEnumerateInstanceVersion = glad_debug_impl_vkEnumerateInstanceVersion;
PFN_vkEnumeratePhysicalDeviceGroups glad_vkEnumeratePhysicalDeviceGroups = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumeratePhysicalDeviceGroups", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroups, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    ret = glad_vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumeratePhysicalDeviceGroups", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroups, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    return ret;
}
PFN_vkEnumeratePhysicalDeviceGroups glad_debug_vkEnumeratePhysicalDeviceGroups = glad_debug_impl_vkEnumeratePhysicalDeviceGroups;
PFN_vkEnumeratePhysicalDeviceGroupsKHR glad_vkEnumeratePhysicalDeviceGroupsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDeviceGroupsKHR(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumeratePhysicalDeviceGroupsKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroupsKHR, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    ret = glad_vkEnumeratePhysicalDeviceGroupsKHR(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    _post_call_vulkan_callback((void*) &ret, "vkEnumeratePhysicalDeviceGroupsKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroupsKHR, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    return ret;
}
PFN_vkEnumeratePhysicalDeviceGroupsKHR glad_debug_vkEnumeratePhysicalDeviceGroupsKHR = glad_debug_impl_vkEnumeratePhysicalDeviceGroupsKHR;
PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t * pCounterCount, VkPerformanceCounterKHR * pCounters, VkPerformanceCounterDescriptionKHR * pCounterDescriptions) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, 5, physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    ret = glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    _post_call_vulkan_callback((void*) &ret, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, 5, physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    return ret;
}
PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
PFN_vkEnumeratePhysicalDevices glad_vkEnumeratePhysicalDevices = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDevices(VkInstance instance, uint32_t * pPhysicalDeviceCount, VkPhysicalDevice * pPhysicalDevices) {
    VkResult ret;
    _pre_call_vulkan_callback("vkEnumeratePhysicalDevices", (GLADapiproc) glad_vkEnumeratePhysicalDevices, 3, instance, pPhysicalDeviceCount, pPhysicalDevices);
    ret = glad_vkEnumeratePhysicalDevices(instance, pPhysicalDeviceCount, pPhysicalDevices);
    _post_call_vulkan_callback((void*) &ret, "vkEnumeratePhysicalDevices", (GLADapiproc) glad_vkEnumeratePhysicalDevices, 3, instance, pPhysicalDeviceCount, pPhysicalDevices);
    return ret;
}
PFN_vkEnumeratePhysicalDevices glad_debug_vkEnumeratePhysicalDevices = glad_debug_impl_vkEnumeratePhysicalDevices;
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkExportMetalObjectsEXT glad_vkExportMetalObjectsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkExportMetalObjectsEXT(VkDevice device, VkExportMetalObjectsInfoEXT * pMetalObjectsInfo) {
    _pre_call_vulkan_callback("vkExportMetalObjectsEXT", (GLADapiproc) glad_vkExportMetalObjectsEXT, 2, device, pMetalObjectsInfo);
    glad_vkExportMetalObjectsEXT(device, pMetalObjectsInfo);
    _post_call_vulkan_callback(NULL, "vkExportMetalObjectsEXT", (GLADapiproc) glad_vkExportMetalObjectsEXT, 2, device, pMetalObjectsInfo);
    
}
PFN_vkExportMetalObjectsEXT glad_debug_vkExportMetalObjectsEXT = glad_debug_impl_vkExportMetalObjectsEXT;

#endif
PFN_vkFlushMappedMemoryRanges glad_vkFlushMappedMemoryRanges = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkFlushMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges) {
    VkResult ret;
    _pre_call_vulkan_callback("vkFlushMappedMemoryRanges", (GLADapiproc) glad_vkFlushMappedMemoryRanges, 3, device, memoryRangeCount, pMemoryRanges);
    ret = glad_vkFlushMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
    _post_call_vulkan_callback((void*) &ret, "vkFlushMappedMemoryRanges", (GLADapiproc) glad_vkFlushMappedMemoryRanges, 3, device, memoryRangeCount, pMemoryRanges);
    return ret;
}
PFN_vkFlushMappedMemoryRanges glad_debug_vkFlushMappedMemoryRanges = glad_debug_impl_vkFlushMappedMemoryRanges;
PFN_vkFreeCommandBuffers glad_vkFreeCommandBuffers = NULL;
static void GLAD_API_PTR glad_debug_impl_vkFreeCommandBuffers(VkDevice device, VkCommandPool commandPool, uint32_t commandBufferCount, const VkCommandBuffer * pCommandBuffers) {
    _pre_call_vulkan_callback("vkFreeCommandBuffers", (GLADapiproc) glad_vkFreeCommandBuffers, 4, device, commandPool, commandBufferCount, pCommandBuffers);
    glad_vkFreeCommandBuffers(device, commandPool, commandBufferCount, pCommandBuffers);
    _post_call_vulkan_callback(NULL, "vkFreeCommandBuffers", (GLADapiproc) glad_vkFreeCommandBuffers, 4, device, commandPool, commandBufferCount, pCommandBuffers);
    
}
PFN_vkFreeCommandBuffers glad_debug_vkFreeCommandBuffers = glad_debug_impl_vkFreeCommandBuffers;
PFN_vkFreeDescriptorSets glad_vkFreeDescriptorSets = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkFreeDescriptorSets(VkDevice device, VkDescriptorPool descriptorPool, uint32_t descriptorSetCount, const VkDescriptorSet * pDescriptorSets) {
    VkResult ret;
    _pre_call_vulkan_callback("vkFreeDescriptorSets", (GLADapiproc) glad_vkFreeDescriptorSets, 4, device, descriptorPool, descriptorSetCount, pDescriptorSets);
    ret = glad_vkFreeDescriptorSets(device, descriptorPool, descriptorSetCount, pDescriptorSets);
    _post_call_vulkan_callback((void*) &ret, "vkFreeDescriptorSets", (GLADapiproc) glad_vkFreeDescriptorSets, 4, device, descriptorPool, descriptorSetCount, pDescriptorSets);
    return ret;
}
PFN_vkFreeDescriptorSets glad_debug_vkFreeDescriptorSets = glad_debug_impl_vkFreeDescriptorSets;
PFN_vkFreeMemory glad_vkFreeMemory = NULL;
static void GLAD_API_PTR glad_debug_impl_vkFreeMemory(VkDevice device, VkDeviceMemory memory, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkan_callback("vkFreeMemory", (GLADapiproc) glad_vkFreeMemory, 3, device, memory, pAllocator);
    glad_vkFreeMemory(device, memory, pAllocator);
    _post_call_vulkan_callback(NULL, "vkFreeMemory", (GLADapiproc) glad_vkFreeMemory, 3, device, memory, pAllocator);
    
}
PFN_vkFreeMemory glad_debug_vkFreeMemory = glad_debug_impl_vkFreeMemory;
PFN_vkGetAccelerationStructureBuildSizesKHR glad_vkGetAccelerationStructureBuildSizesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetAccelerationStructureBuildSizesKHR(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkAccelerationStructureBuildGeometryInfoKHR * pBuildInfo, const uint32_t * pMaxPrimitiveCounts, VkAccelerationStructureBuildSizesInfoKHR * pSizeInfo) {
    _pre_call_vulkan_callback("vkGetAccelerationStructureBuildSizesKHR", (GLADapiproc) glad_vkGetAccelerationStructureBuildSizesKHR, 5, device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
    glad_vkGetAccelerationStructureBuildSizesKHR(device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
    _post_call_vulkan_callback(NULL, "vkGetAccelerationStructureBuildSizesKHR", (GLADapiproc) glad_vkGetAccelerationStructureBuildSizesKHR, 5, device, buildType, pBuildInfo, pMaxPrimitiveCounts, pSizeInfo);
    
}
PFN_vkGetAccelerationStructureBuildSizesKHR glad_debug_vkGetAccelerationStructureBuildSizesKHR = glad_debug_impl_vkGetAccelerationStructureBuildSizesKHR;
PFN_vkGetAccelerationStructureDeviceAddressKHR glad_vkGetAccelerationStructureDeviceAddressKHR = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetAccelerationStructureDeviceAddressKHR(VkDevice device, const VkAccelerationStructureDeviceAddressInfoKHR * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkan_callback("vkGetAccelerationStructureDeviceAddressKHR", (GLADapiproc) glad_vkGetAccelerationStructureDeviceAddressKHR, 2, device, pInfo);
    ret = glad_vkGetAccelerationStructureDeviceAddressKHR(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetAccelerationStructureDeviceAddressKHR", (GLADapiproc) glad_vkGetAccelerationStructureDeviceAddressKHR, 2, device, pInfo);
    return ret;
}
PFN_vkGetAccelerationStructureDeviceAddressKHR glad_debug_vkGetAccelerationStructureDeviceAddressKHR = glad_debug_impl_vkGetAccelerationStructureDeviceAddressKHR;
PFN_vkGetAccelerationStructureHandleNV glad_vkGetAccelerationStructureHandleNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetAccelerationStructureHandleNV(VkDevice device, VkAccelerationStructureNV accelerationStructure, size_t dataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetAccelerationStructureHandleNV", (GLADapiproc) glad_vkGetAccelerationStructureHandleNV, 4, device, accelerationStructure, dataSize, pData);
    ret = glad_vkGetAccelerationStructureHandleNV(device, accelerationStructure, dataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetAccelerationStructureHandleNV", (GLADapiproc) glad_vkGetAccelerationStructureHandleNV, 4, device, accelerationStructure, dataSize, pData);
    return ret;
}
PFN_vkGetAccelerationStructureHandleNV glad_debug_vkGetAccelerationStructureHandleNV = glad_debug_impl_vkGetAccelerationStructureHandleNV;
PFN_vkGetAccelerationStructureMemoryRequirementsNV glad_vkGetAccelerationStructureMemoryRequirementsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetAccelerationStructureMemoryRequirementsNV(VkDevice device, const VkAccelerationStructureMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2KHR * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetAccelerationStructureMemoryRequirementsNV", (GLADapiproc) glad_vkGetAccelerationStructureMemoryRequirementsNV, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetAccelerationStructureMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetAccelerationStructureMemoryRequirementsNV", (GLADapiproc) glad_vkGetAccelerationStructureMemoryRequirementsNV, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetAccelerationStructureMemoryRequirementsNV glad_debug_vkGetAccelerationStructureMemoryRequirementsNV = glad_debug_impl_vkGetAccelerationStructureMemoryRequirementsNV;
PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkAccelerationStructureCaptureDescriptorDataInfoEXT * pInfo, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    ret = glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    return ret;
}
PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT glad_debug_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetAndroidHardwareBufferPropertiesANDROID glad_vkGetAndroidHardwareBufferPropertiesANDROID = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetAndroidHardwareBufferPropertiesANDROID(VkDevice device, const struct AHardwareBuffer * buffer, VkAndroidHardwareBufferPropertiesANDROID * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetAndroidHardwareBufferPropertiesANDROID", (GLADapiproc) glad_vkGetAndroidHardwareBufferPropertiesANDROID, 3, device, buffer, pProperties);
    ret = glad_vkGetAndroidHardwareBufferPropertiesANDROID(device, buffer, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetAndroidHardwareBufferPropertiesANDROID", (GLADapiproc) glad_vkGetAndroidHardwareBufferPropertiesANDROID, 3, device, buffer, pProperties);
    return ret;
}
PFN_vkGetAndroidHardwareBufferPropertiesANDROID glad_debug_vkGetAndroidHardwareBufferPropertiesANDROID = glad_debug_impl_vkGetAndroidHardwareBufferPropertiesANDROID;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetBufferCollectionPropertiesFUCHSIA glad_vkGetBufferCollectionPropertiesFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetBufferCollectionPropertiesFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, VkBufferCollectionPropertiesFUCHSIA * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetBufferCollectionPropertiesFUCHSIA", (GLADapiproc) glad_vkGetBufferCollectionPropertiesFUCHSIA, 3, device, collection, pProperties);
    ret = glad_vkGetBufferCollectionPropertiesFUCHSIA(device, collection, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferCollectionPropertiesFUCHSIA", (GLADapiproc) glad_vkGetBufferCollectionPropertiesFUCHSIA, 3, device, collection, pProperties);
    return ret;
}
PFN_vkGetBufferCollectionPropertiesFUCHSIA glad_debug_vkGetBufferCollectionPropertiesFUCHSIA = glad_debug_impl_vkGetBufferCollectionPropertiesFUCHSIA;

#endif
PFN_vkGetBufferDeviceAddress glad_vkGetBufferDeviceAddress = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkan_callback("vkGetBufferDeviceAddress", (GLADapiproc) glad_vkGetBufferDeviceAddress, 2, device, pInfo);
    ret = glad_vkGetBufferDeviceAddress(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferDeviceAddress", (GLADapiproc) glad_vkGetBufferDeviceAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferDeviceAddress glad_debug_vkGetBufferDeviceAddress = glad_debug_impl_vkGetBufferDeviceAddress;
PFN_vkGetBufferDeviceAddressEXT glad_vkGetBufferDeviceAddressEXT = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetBufferDeviceAddressEXT(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkan_callback("vkGetBufferDeviceAddressEXT", (GLADapiproc) glad_vkGetBufferDeviceAddressEXT, 2, device, pInfo);
    ret = glad_vkGetBufferDeviceAddressEXT(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferDeviceAddressEXT", (GLADapiproc) glad_vkGetBufferDeviceAddressEXT, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferDeviceAddressEXT glad_debug_vkGetBufferDeviceAddressEXT = glad_debug_impl_vkGetBufferDeviceAddressEXT;
PFN_vkGetBufferDeviceAddressKHR glad_vkGetBufferDeviceAddressKHR = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetBufferDeviceAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkan_callback("vkGetBufferDeviceAddressKHR", (GLADapiproc) glad_vkGetBufferDeviceAddressKHR, 2, device, pInfo);
    ret = glad_vkGetBufferDeviceAddressKHR(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferDeviceAddressKHR", (GLADapiproc) glad_vkGetBufferDeviceAddressKHR, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferDeviceAddressKHR glad_debug_vkGetBufferDeviceAddressKHR = glad_debug_impl_vkGetBufferDeviceAddressKHR;
PFN_vkGetBufferMemoryRequirements glad_vkGetBufferMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetBufferMemoryRequirements(VkDevice device, VkBuffer buffer, VkMemoryRequirements * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetBufferMemoryRequirements", (GLADapiproc) glad_vkGetBufferMemoryRequirements, 3, device, buffer, pMemoryRequirements);
    glad_vkGetBufferMemoryRequirements(device, buffer, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetBufferMemoryRequirements", (GLADapiproc) glad_vkGetBufferMemoryRequirements, 3, device, buffer, pMemoryRequirements);
    
}
PFN_vkGetBufferMemoryRequirements glad_debug_vkGetBufferMemoryRequirements = glad_debug_impl_vkGetBufferMemoryRequirements;
PFN_vkGetBufferMemoryRequirements2 glad_vkGetBufferMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetBufferMemoryRequirements2", (GLADapiproc) glad_vkGetBufferMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetBufferMemoryRequirements2", (GLADapiproc) glad_vkGetBufferMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetBufferMemoryRequirements2 glad_debug_vkGetBufferMemoryRequirements2 = glad_debug_impl_vkGetBufferMemoryRequirements2;
PFN_vkGetBufferMemoryRequirements2KHR glad_vkGetBufferMemoryRequirements2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetBufferMemoryRequirements2KHR(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetBufferMemoryRequirements2KHR", (GLADapiproc) glad_vkGetBufferMemoryRequirements2KHR, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetBufferMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetBufferMemoryRequirements2KHR", (GLADapiproc) glad_vkGetBufferMemoryRequirements2KHR, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetBufferMemoryRequirements2KHR glad_debug_vkGetBufferMemoryRequirements2KHR = glad_debug_impl_vkGetBufferMemoryRequirements2KHR;
PFN_vkGetBufferOpaqueCaptureAddress glad_vkGetBufferOpaqueCaptureAddress = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkan_callback("vkGetBufferOpaqueCaptureAddress", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddress, 2, device, pInfo);
    ret = glad_vkGetBufferOpaqueCaptureAddress(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferOpaqueCaptureAddress", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferOpaqueCaptureAddress glad_debug_vkGetBufferOpaqueCaptureAddress = glad_debug_impl_vkGetBufferOpaqueCaptureAddress;
PFN_vkGetBufferOpaqueCaptureAddressKHR glad_vkGetBufferOpaqueCaptureAddressKHR = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetBufferOpaqueCaptureAddressKHR(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkan_callback("vkGetBufferOpaqueCaptureAddressKHR", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddressKHR, 2, device, pInfo);
    ret = glad_vkGetBufferOpaqueCaptureAddressKHR(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferOpaqueCaptureAddressKHR", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddressKHR, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferOpaqueCaptureAddressKHR glad_debug_vkGetBufferOpaqueCaptureAddressKHR = glad_debug_impl_vkGetBufferOpaqueCaptureAddressKHR;
PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT glad_vkGetBufferOpaqueCaptureDescriptorDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetBufferOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkBufferCaptureDescriptorDataInfoEXT * pInfo, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetBufferOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetBufferOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    ret = glad_vkGetBufferOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetBufferOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetBufferOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    return ret;
}
PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT glad_debug_vkGetBufferOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetBufferOpaqueCaptureDescriptorDataEXT;
PFN_vkGetCalibratedTimestampsEXT glad_vkGetCalibratedTimestampsEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetCalibratedTimestampsEXT(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetCalibratedTimestampsEXT", (GLADapiproc) glad_vkGetCalibratedTimestampsEXT, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    ret = glad_vkGetCalibratedTimestampsEXT(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    _post_call_vulkan_callback((void*) &ret, "vkGetCalibratedTimestampsEXT", (GLADapiproc) glad_vkGetCalibratedTimestampsEXT, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    return ret;
}
PFN_vkGetCalibratedTimestampsEXT glad_debug_vkGetCalibratedTimestampsEXT = glad_debug_impl_vkGetCalibratedTimestampsEXT;
PFN_vkGetCalibratedTimestampsKHR glad_vkGetCalibratedTimestampsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetCalibratedTimestampsKHR(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetCalibratedTimestampsKHR", (GLADapiproc) glad_vkGetCalibratedTimestampsKHR, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    ret = glad_vkGetCalibratedTimestampsKHR(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    _post_call_vulkan_callback((void*) &ret, "vkGetCalibratedTimestampsKHR", (GLADapiproc) glad_vkGetCalibratedTimestampsKHR, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    return ret;
}
PFN_vkGetCalibratedTimestampsKHR glad_debug_vkGetCalibratedTimestampsKHR = glad_debug_impl_vkGetCalibratedTimestampsKHR;
PFN_vkGetCudaModuleCacheNV glad_vkGetCudaModuleCacheNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetCudaModuleCacheNV(VkDevice device, VkCudaModuleNV module, size_t * pCacheSize, void * pCacheData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetCudaModuleCacheNV", (GLADapiproc) glad_vkGetCudaModuleCacheNV, 4, device, module, pCacheSize, pCacheData);
    ret = glad_vkGetCudaModuleCacheNV(device, module, pCacheSize, pCacheData);
    _post_call_vulkan_callback((void*) &ret, "vkGetCudaModuleCacheNV", (GLADapiproc) glad_vkGetCudaModuleCacheNV, 4, device, module, pCacheSize, pCacheData);
    return ret;
}
PFN_vkGetCudaModuleCacheNV glad_debug_vkGetCudaModuleCacheNV = glad_debug_impl_vkGetCudaModuleCacheNV;
PFN_vkGetDeferredOperationMaxConcurrencyKHR glad_vkGetDeferredOperationMaxConcurrencyKHR = NULL;
static uint32_t GLAD_API_PTR glad_debug_impl_vkGetDeferredOperationMaxConcurrencyKHR(VkDevice device, VkDeferredOperationKHR operation) {
    uint32_t ret;
    _pre_call_vulkan_callback("vkGetDeferredOperationMaxConcurrencyKHR", (GLADapiproc) glad_vkGetDeferredOperationMaxConcurrencyKHR, 2, device, operation);
    ret = glad_vkGetDeferredOperationMaxConcurrencyKHR(device, operation);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeferredOperationMaxConcurrencyKHR", (GLADapiproc) glad_vkGetDeferredOperationMaxConcurrencyKHR, 2, device, operation);
    return ret;
}
PFN_vkGetDeferredOperationMaxConcurrencyKHR glad_debug_vkGetDeferredOperationMaxConcurrencyKHR = glad_debug_impl_vkGetDeferredOperationMaxConcurrencyKHR;
PFN_vkGetDeferredOperationResultKHR glad_vkGetDeferredOperationResultKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeferredOperationResultKHR(VkDevice device, VkDeferredOperationKHR operation) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeferredOperationResultKHR", (GLADapiproc) glad_vkGetDeferredOperationResultKHR, 2, device, operation);
    ret = glad_vkGetDeferredOperationResultKHR(device, operation);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeferredOperationResultKHR", (GLADapiproc) glad_vkGetDeferredOperationResultKHR, 2, device, operation);
    return ret;
}
PFN_vkGetDeferredOperationResultKHR glad_debug_vkGetDeferredOperationResultKHR = glad_debug_impl_vkGetDeferredOperationResultKHR;
PFN_vkGetDescriptorEXT glad_vkGetDescriptorEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorEXT(VkDevice device, const VkDescriptorGetInfoEXT * pDescriptorInfo, size_t dataSize, void * pDescriptor) {
    _pre_call_vulkan_callback("vkGetDescriptorEXT", (GLADapiproc) glad_vkGetDescriptorEXT, 4, device, pDescriptorInfo, dataSize, pDescriptor);
    glad_vkGetDescriptorEXT(device, pDescriptorInfo, dataSize, pDescriptor);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorEXT", (GLADapiproc) glad_vkGetDescriptorEXT, 4, device, pDescriptorInfo, dataSize, pDescriptor);
    
}
PFN_vkGetDescriptorEXT glad_debug_vkGetDescriptorEXT = glad_debug_impl_vkGetDescriptorEXT;
PFN_vkGetDescriptorSetHostMappingVALVE glad_vkGetDescriptorSetHostMappingVALVE = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetHostMappingVALVE(VkDevice device, VkDescriptorSet descriptorSet, void ** ppData) {
    _pre_call_vulkan_callback("vkGetDescriptorSetHostMappingVALVE", (GLADapiproc) glad_vkGetDescriptorSetHostMappingVALVE, 3, device, descriptorSet, ppData);
    glad_vkGetDescriptorSetHostMappingVALVE(device, descriptorSet, ppData);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetHostMappingVALVE", (GLADapiproc) glad_vkGetDescriptorSetHostMappingVALVE, 3, device, descriptorSet, ppData);
    
}
PFN_vkGetDescriptorSetHostMappingVALVE glad_debug_vkGetDescriptorSetHostMappingVALVE = glad_debug_impl_vkGetDescriptorSetHostMappingVALVE;
PFN_vkGetDescriptorSetLayoutBindingOffsetEXT glad_vkGetDescriptorSetLayoutBindingOffsetEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutBindingOffsetEXT(VkDevice device, VkDescriptorSetLayout layout, uint32_t binding, VkDeviceSize * pOffset) {
    _pre_call_vulkan_callback("vkGetDescriptorSetLayoutBindingOffsetEXT", (GLADapiproc) glad_vkGetDescriptorSetLayoutBindingOffsetEXT, 4, device, layout, binding, pOffset);
    glad_vkGetDescriptorSetLayoutBindingOffsetEXT(device, layout, binding, pOffset);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetLayoutBindingOffsetEXT", (GLADapiproc) glad_vkGetDescriptorSetLayoutBindingOffsetEXT, 4, device, layout, binding, pOffset);
    
}
PFN_vkGetDescriptorSetLayoutBindingOffsetEXT glad_debug_vkGetDescriptorSetLayoutBindingOffsetEXT = glad_debug_impl_vkGetDescriptorSetLayoutBindingOffsetEXT;
PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutHostMappingInfoVALVE(VkDevice device, const VkDescriptorSetBindingReferenceVALVE * pBindingReference, VkDescriptorSetLayoutHostMappingInfoVALVE * pHostMapping) {
    _pre_call_vulkan_callback("vkGetDescriptorSetLayoutHostMappingInfoVALVE", (GLADapiproc) glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE, 3, device, pBindingReference, pHostMapping);
    glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE(device, pBindingReference, pHostMapping);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetLayoutHostMappingInfoVALVE", (GLADapiproc) glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE, 3, device, pBindingReference, pHostMapping);
    
}
PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE glad_debug_vkGetDescriptorSetLayoutHostMappingInfoVALVE = glad_debug_impl_vkGetDescriptorSetLayoutHostMappingInfoVALVE;
PFN_vkGetDescriptorSetLayoutSizeEXT glad_vkGetDescriptorSetLayoutSizeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutSizeEXT(VkDevice device, VkDescriptorSetLayout layout, VkDeviceSize * pLayoutSizeInBytes) {
    _pre_call_vulkan_callback("vkGetDescriptorSetLayoutSizeEXT", (GLADapiproc) glad_vkGetDescriptorSetLayoutSizeEXT, 3, device, layout, pLayoutSizeInBytes);
    glad_vkGetDescriptorSetLayoutSizeEXT(device, layout, pLayoutSizeInBytes);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetLayoutSizeEXT", (GLADapiproc) glad_vkGetDescriptorSetLayoutSizeEXT, 3, device, layout, pLayoutSizeInBytes);
    
}
PFN_vkGetDescriptorSetLayoutSizeEXT glad_debug_vkGetDescriptorSetLayoutSizeEXT = glad_debug_impl_vkGetDescriptorSetLayoutSizeEXT;
PFN_vkGetDescriptorSetLayoutSupport glad_vkGetDescriptorSetLayoutSupport = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport) {
    _pre_call_vulkan_callback("vkGetDescriptorSetLayoutSupport", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupport, 3, device, pCreateInfo, pSupport);
    glad_vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetLayoutSupport", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupport, 3, device, pCreateInfo, pSupport);
    
}
PFN_vkGetDescriptorSetLayoutSupport glad_debug_vkGetDescriptorSetLayoutSupport = glad_debug_impl_vkGetDescriptorSetLayoutSupport;
PFN_vkGetDescriptorSetLayoutSupportKHR glad_vkGetDescriptorSetLayoutSupportKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutSupportKHR(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport) {
    _pre_call_vulkan_callback("vkGetDescriptorSetLayoutSupportKHR", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupportKHR, 3, device, pCreateInfo, pSupport);
    glad_vkGetDescriptorSetLayoutSupportKHR(device, pCreateInfo, pSupport);
    _post_call_vulkan_callback(NULL, "vkGetDescriptorSetLayoutSupportKHR", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupportKHR, 3, device, pCreateInfo, pSupport);
    
}
PFN_vkGetDescriptorSetLayoutSupportKHR glad_debug_vkGetDescriptorSetLayoutSupportKHR = glad_debug_impl_vkGetDescriptorSetLayoutSupportKHR;
PFN_vkGetDeviceAccelerationStructureCompatibilityKHR glad_vkGetDeviceAccelerationStructureCompatibilityKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceAccelerationStructureCompatibilityKHR(VkDevice device, const VkAccelerationStructureVersionInfoKHR * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility) {
    _pre_call_vulkan_callback("vkGetDeviceAccelerationStructureCompatibilityKHR", (GLADapiproc) glad_vkGetDeviceAccelerationStructureCompatibilityKHR, 3, device, pVersionInfo, pCompatibility);
    glad_vkGetDeviceAccelerationStructureCompatibilityKHR(device, pVersionInfo, pCompatibility);
    _post_call_vulkan_callback(NULL, "vkGetDeviceAccelerationStructureCompatibilityKHR", (GLADapiproc) glad_vkGetDeviceAccelerationStructureCompatibilityKHR, 3, device, pVersionInfo, pCompatibility);
    
}
PFN_vkGetDeviceAccelerationStructureCompatibilityKHR glad_debug_vkGetDeviceAccelerationStructureCompatibilityKHR = glad_debug_impl_vkGetDeviceAccelerationStructureCompatibilityKHR;
PFN_vkGetDeviceBufferMemoryRequirements glad_vkGetDeviceBufferMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceBufferMemoryRequirements(VkDevice device, const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceBufferMemoryRequirements", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceBufferMemoryRequirements", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceBufferMemoryRequirements glad_debug_vkGetDeviceBufferMemoryRequirements = glad_debug_impl_vkGetDeviceBufferMemoryRequirements;
PFN_vkGetDeviceBufferMemoryRequirementsKHR glad_vkGetDeviceBufferMemoryRequirementsKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceBufferMemoryRequirementsKHR(VkDevice device, const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceBufferMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirementsKHR, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceBufferMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceBufferMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirementsKHR, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceBufferMemoryRequirementsKHR glad_debug_vkGetDeviceBufferMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceBufferMemoryRequirementsKHR;
PFN_vkGetDeviceFaultInfoEXT glad_vkGetDeviceFaultInfoEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceFaultInfoEXT(VkDevice device, VkDeviceFaultCountsEXT * pFaultCounts, VkDeviceFaultInfoEXT * pFaultInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeviceFaultInfoEXT", (GLADapiproc) glad_vkGetDeviceFaultInfoEXT, 3, device, pFaultCounts, pFaultInfo);
    ret = glad_vkGetDeviceFaultInfoEXT(device, pFaultCounts, pFaultInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceFaultInfoEXT", (GLADapiproc) glad_vkGetDeviceFaultInfoEXT, 3, device, pFaultCounts, pFaultInfo);
    return ret;
}
PFN_vkGetDeviceFaultInfoEXT glad_debug_vkGetDeviceFaultInfoEXT = glad_debug_impl_vkGetDeviceFaultInfoEXT;
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_vkGetDeviceGroupPeerMemoryFeatures = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures) {
    _pre_call_vulkan_callback("vkGetDeviceGroupPeerMemoryFeatures", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeatures, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    glad_vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    _post_call_vulkan_callback(NULL, "vkGetDeviceGroupPeerMemoryFeatures", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeatures, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    
}
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures;
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupPeerMemoryFeaturesKHR(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures) {
    _pre_call_vulkan_callback("vkGetDeviceGroupPeerMemoryFeaturesKHR", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeaturesKHR, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    glad_vkGetDeviceGroupPeerMemoryFeaturesKHR(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    _post_call_vulkan_callback(NULL, "vkGetDeviceGroupPeerMemoryFeaturesKHR", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeaturesKHR, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    
}
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR glad_debug_vkGetDeviceGroupPeerMemoryFeaturesKHR = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeaturesKHR;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeviceGroupPresentCapabilitiesKHR", (GLADapiproc) glad_vkGetDeviceGroupPresentCapabilitiesKHR, 2, device, pDeviceGroupPresentCapabilities);
    ret = glad_vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceGroupPresentCapabilitiesKHR", (GLADapiproc) glad_vkGetDeviceGroupPresentCapabilitiesKHR, 2, device, pDeviceGroupPresentCapabilities);
    return ret;
}
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetDeviceGroupSurfacePresentModes2EXT glad_vkGetDeviceGroupSurfacePresentModes2EXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupSurfacePresentModes2EXT(VkDevice device, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkDeviceGroupPresentModeFlagsKHR * pModes) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeviceGroupSurfacePresentModes2EXT", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModes2EXT, 3, device, pSurfaceInfo, pModes);
    ret = glad_vkGetDeviceGroupSurfacePresentModes2EXT(device, pSurfaceInfo, pModes);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceGroupSurfacePresentModes2EXT", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModes2EXT, 3, device, pSurfaceInfo, pModes);
    return ret;
}
PFN_vkGetDeviceGroupSurfacePresentModes2EXT glad_debug_vkGetDeviceGroupSurfacePresentModes2EXT = glad_debug_impl_vkGetDeviceGroupSurfacePresentModes2EXT;

#endif
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeviceGroupSurfacePresentModesKHR", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModesKHR, 3, device, surface, pModes);
    ret = glad_vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceGroupSurfacePresentModesKHR", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModesKHR, 3, device, surface, pModes);
    return ret;
}
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR;
PFN_vkGetDeviceImageMemoryRequirements glad_vkGetDeviceImageMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceImageMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceImageMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceImageMemoryRequirements glad_debug_vkGetDeviceImageMemoryRequirements = glad_debug_impl_vkGetDeviceImageMemoryRequirements;
PFN_vkGetDeviceImageMemoryRequirementsKHR glad_vkGetDeviceImageMemoryRequirementsKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceImageMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirementsKHR, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceImageMemoryRequirementsKHR(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceImageMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirementsKHR, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceImageMemoryRequirementsKHR glad_debug_vkGetDeviceImageMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceImageMemoryRequirementsKHR;
PFN_vkGetDeviceImageSparseMemoryRequirements glad_vkGetDeviceImageSparseMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirements, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirements, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetDeviceImageSparseMemoryRequirements glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements;
PFN_vkGetDeviceImageSparseMemoryRequirementsKHR glad_vkGetDeviceImageSparseMemoryRequirementsKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageSparseMemoryRequirementsKHR(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetDeviceImageSparseMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirementsKHR, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetDeviceImageSparseMemoryRequirementsKHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetDeviceImageSparseMemoryRequirementsKHR", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirementsKHR, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetDeviceImageSparseMemoryRequirementsKHR glad_debug_vkGetDeviceImageSparseMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirementsKHR;
PFN_vkGetDeviceImageSubresourceLayoutKHR glad_vkGetDeviceImageSubresourceLayoutKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageSubresourceLayoutKHR(VkDevice device, const VkDeviceImageSubresourceInfoKHR * pInfo, VkSubresourceLayout2KHR * pLayout) {
    _pre_call_vulkan_callback("vkGetDeviceImageSubresourceLayoutKHR", (GLADapiproc) glad_vkGetDeviceImageSubresourceLayoutKHR, 3, device, pInfo, pLayout);
    glad_vkGetDeviceImageSubresourceLayoutKHR(device, pInfo, pLayout);
    _post_call_vulkan_callback(NULL, "vkGetDeviceImageSubresourceLayoutKHR", (GLADapiproc) glad_vkGetDeviceImageSubresourceLayoutKHR, 3, device, pInfo, pLayout);
    
}
PFN_vkGetDeviceImageSubresourceLayoutKHR glad_debug_vkGetDeviceImageSubresourceLayoutKHR = glad_debug_impl_vkGetDeviceImageSubresourceLayoutKHR;
PFN_vkGetDeviceMemoryCommitment glad_vkGetDeviceMemoryCommitment = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceMemoryCommitment(VkDevice device, VkDeviceMemory memory, VkDeviceSize * pCommittedMemoryInBytes) {
    _pre_call_vulkan_callback("vkGetDeviceMemoryCommitment", (GLADapiproc) glad_vkGetDeviceMemoryCommitment, 3, device, memory, pCommittedMemoryInBytes);
    glad_vkGetDeviceMemoryCommitment(device, memory, pCommittedMemoryInBytes);
    _post_call_vulkan_callback(NULL, "vkGetDeviceMemoryCommitment", (GLADapiproc) glad_vkGetDeviceMemoryCommitment, 3, device, memory, pCommittedMemoryInBytes);
    
}
PFN_vkGetDeviceMemoryCommitment glad_debug_vkGetDeviceMemoryCommitment = glad_debug_impl_vkGetDeviceMemoryCommitment;
PFN_vkGetDeviceMemoryOpaqueCaptureAddress glad_vkGetDeviceMemoryOpaqueCaptureAddress = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkan_callback("vkGetDeviceMemoryOpaqueCaptureAddress", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddress, 2, device, pInfo);
    ret = glad_vkGetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceMemoryOpaqueCaptureAddress", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetDeviceMemoryOpaqueCaptureAddress glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress;
PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddressKHR(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkan_callback("vkGetDeviceMemoryOpaqueCaptureAddressKHR", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR, 2, device, pInfo);
    ret = glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceMemoryOpaqueCaptureAddressKHR", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR, 2, device, pInfo);
    return ret;
}
PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR glad_debug_vkGetDeviceMemoryOpaqueCaptureAddressKHR = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
PFN_vkGetDeviceMicromapCompatibilityEXT glad_vkGetDeviceMicromapCompatibilityEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceMicromapCompatibilityEXT(VkDevice device, const VkMicromapVersionInfoEXT * pVersionInfo, VkAccelerationStructureCompatibilityKHR * pCompatibility) {
    _pre_call_vulkan_callback("vkGetDeviceMicromapCompatibilityEXT", (GLADapiproc) glad_vkGetDeviceMicromapCompatibilityEXT, 3, device, pVersionInfo, pCompatibility);
    glad_vkGetDeviceMicromapCompatibilityEXT(device, pVersionInfo, pCompatibility);
    _post_call_vulkan_callback(NULL, "vkGetDeviceMicromapCompatibilityEXT", (GLADapiproc) glad_vkGetDeviceMicromapCompatibilityEXT, 3, device, pVersionInfo, pCompatibility);
    
}
PFN_vkGetDeviceMicromapCompatibilityEXT glad_debug_vkGetDeviceMicromapCompatibilityEXT = glad_debug_impl_vkGetDeviceMicromapCompatibilityEXT;
PFN_vkGetDeviceProcAddr glad_vkGetDeviceProcAddr = NULL;
static PFN_vkVoidFunction GLAD_API_PTR glad_debug_impl_vkGetDeviceProcAddr(VkDevice device, const char * pName) {
    PFN_vkVoidFunction ret;
    _pre_call_vulkan_callback("vkGetDeviceProcAddr", (GLADapiproc) glad_vkGetDeviceProcAddr, 2, device, pName);
    ret = glad_vkGetDeviceProcAddr(device, pName);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceProcAddr", (GLADapiproc) glad_vkGetDeviceProcAddr, 2, device, pName);
    return ret;
}
PFN_vkGetDeviceProcAddr glad_debug_vkGetDeviceProcAddr = glad_debug_impl_vkGetDeviceProcAddr;
PFN_vkGetDeviceQueue glad_vkGetDeviceQueue = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceQueue(VkDevice device, uint32_t queueFamilyIndex, uint32_t queueIndex, VkQueue * pQueue) {
    _pre_call_vulkan_callback("vkGetDeviceQueue", (GLADapiproc) glad_vkGetDeviceQueue, 4, device, queueFamilyIndex, queueIndex, pQueue);
    glad_vkGetDeviceQueue(device, queueFamilyIndex, queueIndex, pQueue);
    _post_call_vulkan_callback(NULL, "vkGetDeviceQueue", (GLADapiproc) glad_vkGetDeviceQueue, 4, device, queueFamilyIndex, queueIndex, pQueue);
    
}
PFN_vkGetDeviceQueue glad_debug_vkGetDeviceQueue = glad_debug_impl_vkGetDeviceQueue;
PFN_vkGetDeviceQueue2 glad_vkGetDeviceQueue2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) {
    _pre_call_vulkan_callback("vkGetDeviceQueue2", (GLADapiproc) glad_vkGetDeviceQueue2, 3, device, pQueueInfo, pQueue);
    glad_vkGetDeviceQueue2(device, pQueueInfo, pQueue);
    _post_call_vulkan_callback(NULL, "vkGetDeviceQueue2", (GLADapiproc) glad_vkGetDeviceQueue2, 3, device, pQueueInfo, pQueue);
    
}
PFN_vkGetDeviceQueue2 glad_debug_vkGetDeviceQueue2 = glad_debug_impl_vkGetDeviceQueue2;
PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(VkDevice device, VkRenderPass renderpass, VkExtent2D * pMaxWorkgroupSize) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI", (GLADapiproc) glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI, 3, device, renderpass, pMaxWorkgroupSize);
    ret = glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(device, renderpass, pMaxWorkgroupSize);
    _post_call_vulkan_callback((void*) &ret, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI", (GLADapiproc) glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI, 3, device, renderpass, pMaxWorkgroupSize);
    return ret;
}
PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI glad_debug_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = glad_debug_impl_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
PFN_vkGetDisplayModeProperties2KHR glad_vkGetDisplayModeProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDisplayModeProperties2KHR", (GLADapiproc) glad_vkGetDisplayModeProperties2KHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    ret = glad_vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetDisplayModeProperties2KHR", (GLADapiproc) glad_vkGetDisplayModeProperties2KHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetDisplayModeProperties2KHR glad_debug_vkGetDisplayModeProperties2KHR = glad_debug_impl_vkGetDisplayModeProperties2KHR;
PFN_vkGetDisplayModePropertiesKHR glad_vkGetDisplayModePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDisplayModePropertiesKHR", (GLADapiproc) glad_vkGetDisplayModePropertiesKHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    ret = glad_vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetDisplayModePropertiesKHR", (GLADapiproc) glad_vkGetDisplayModePropertiesKHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetDisplayModePropertiesKHR glad_debug_vkGetDisplayModePropertiesKHR = glad_debug_impl_vkGetDisplayModePropertiesKHR;
PFN_vkGetDisplayPlaneCapabilities2KHR glad_vkGetDisplayPlaneCapabilities2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDisplayPlaneCapabilities2KHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilities2KHR, 3, physicalDevice, pDisplayPlaneInfo, pCapabilities);
    ret = glad_vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetDisplayPlaneCapabilities2KHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilities2KHR, 3, physicalDevice, pDisplayPlaneInfo, pCapabilities);
    return ret;
}
PFN_vkGetDisplayPlaneCapabilities2KHR glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR;
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_vkGetDisplayPlaneCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDisplayPlaneCapabilitiesKHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilitiesKHR, 4, physicalDevice, mode, planeIndex, pCapabilities);
    ret = glad_vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetDisplayPlaneCapabilitiesKHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilitiesKHR, 4, physicalDevice, mode, planeIndex, pCapabilities);
    return ret;
}
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_vkGetDisplayPlaneSupportedDisplaysKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDisplayPlaneSupportedDisplaysKHR", (GLADapiproc) glad_vkGetDisplayPlaneSupportedDisplaysKHR, 4, physicalDevice, planeIndex, pDisplayCount, pDisplays);
    ret = glad_vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
    _post_call_vulkan_callback((void*) &ret, "vkGetDisplayPlaneSupportedDisplaysKHR", (GLADapiproc) glad_vkGetDisplayPlaneSupportedDisplaysKHR, 4, physicalDevice, planeIndex, pDisplayCount, pDisplays);
    return ret;
}
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR;
PFN_vkGetDrmDisplayEXT glad_vkGetDrmDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDrmDisplayEXT(VkPhysicalDevice physicalDevice, int32_t drmFd, uint32_t connectorId, VkDisplayKHR * display) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDrmDisplayEXT", (GLADapiproc) glad_vkGetDrmDisplayEXT, 4, physicalDevice, drmFd, connectorId, display);
    ret = glad_vkGetDrmDisplayEXT(physicalDevice, drmFd, connectorId, display);
    _post_call_vulkan_callback((void*) &ret, "vkGetDrmDisplayEXT", (GLADapiproc) glad_vkGetDrmDisplayEXT, 4, physicalDevice, drmFd, connectorId, display);
    return ret;
}
PFN_vkGetDrmDisplayEXT glad_debug_vkGetDrmDisplayEXT = glad_debug_impl_vkGetDrmDisplayEXT;
PFN_vkGetDynamicRenderingTilePropertiesQCOM glad_vkGetDynamicRenderingTilePropertiesQCOM = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDynamicRenderingTilePropertiesQCOM(VkDevice device, const VkRenderingInfo * pRenderingInfo, VkTilePropertiesQCOM * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetDynamicRenderingTilePropertiesQCOM", (GLADapiproc) glad_vkGetDynamicRenderingTilePropertiesQCOM, 3, device, pRenderingInfo, pProperties);
    ret = glad_vkGetDynamicRenderingTilePropertiesQCOM(device, pRenderingInfo, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetDynamicRenderingTilePropertiesQCOM", (GLADapiproc) glad_vkGetDynamicRenderingTilePropertiesQCOM, 3, device, pRenderingInfo, pProperties);
    return ret;
}
PFN_vkGetDynamicRenderingTilePropertiesQCOM glad_debug_vkGetDynamicRenderingTilePropertiesQCOM = glad_debug_impl_vkGetDynamicRenderingTilePropertiesQCOM;
PFN_vkGetEncodedVideoSessionParametersKHR glad_vkGetEncodedVideoSessionParametersKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetEncodedVideoSessionParametersKHR(VkDevice device, const VkVideoEncodeSessionParametersGetInfoKHR * pVideoSessionParametersInfo, VkVideoEncodeSessionParametersFeedbackInfoKHR * pFeedbackInfo, size_t * pDataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetEncodedVideoSessionParametersKHR", (GLADapiproc) glad_vkGetEncodedVideoSessionParametersKHR, 5, device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
    ret = glad_vkGetEncodedVideoSessionParametersKHR(device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetEncodedVideoSessionParametersKHR", (GLADapiproc) glad_vkGetEncodedVideoSessionParametersKHR, 5, device, pVideoSessionParametersInfo, pFeedbackInfo, pDataSize, pData);
    return ret;
}
PFN_vkGetEncodedVideoSessionParametersKHR glad_debug_vkGetEncodedVideoSessionParametersKHR = glad_debug_impl_vkGetEncodedVideoSessionParametersKHR;
PFN_vkGetEventStatus glad_vkGetEventStatus = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetEventStatus(VkDevice device, VkEvent event) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetEventStatus", (GLADapiproc) glad_vkGetEventStatus, 2, device, event);
    ret = glad_vkGetEventStatus(device, event);
    _post_call_vulkan_callback((void*) &ret, "vkGetEventStatus", (GLADapiproc) glad_vkGetEventStatus, 2, device, event);
    return ret;
}
PFN_vkGetEventStatus glad_debug_vkGetEventStatus = glad_debug_impl_vkGetEventStatus;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkGetExecutionGraphPipelineNodeIndexAMDX glad_vkGetExecutionGraphPipelineNodeIndexAMDX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetExecutionGraphPipelineNodeIndexAMDX(VkDevice device, VkPipeline executionGraph, const VkPipelineShaderStageNodeCreateInfoAMDX * pNodeInfo, uint32_t * pNodeIndex) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetExecutionGraphPipelineNodeIndexAMDX", (GLADapiproc) glad_vkGetExecutionGraphPipelineNodeIndexAMDX, 4, device, executionGraph, pNodeInfo, pNodeIndex);
    ret = glad_vkGetExecutionGraphPipelineNodeIndexAMDX(device, executionGraph, pNodeInfo, pNodeIndex);
    _post_call_vulkan_callback((void*) &ret, "vkGetExecutionGraphPipelineNodeIndexAMDX", (GLADapiproc) glad_vkGetExecutionGraphPipelineNodeIndexAMDX, 4, device, executionGraph, pNodeInfo, pNodeIndex);
    return ret;
}
PFN_vkGetExecutionGraphPipelineNodeIndexAMDX glad_debug_vkGetExecutionGraphPipelineNodeIndexAMDX = glad_debug_impl_vkGetExecutionGraphPipelineNodeIndexAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkGetExecutionGraphPipelineScratchSizeAMDX glad_vkGetExecutionGraphPipelineScratchSizeAMDX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetExecutionGraphPipelineScratchSizeAMDX(VkDevice device, VkPipeline executionGraph, VkExecutionGraphPipelineScratchSizeAMDX * pSizeInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetExecutionGraphPipelineScratchSizeAMDX", (GLADapiproc) glad_vkGetExecutionGraphPipelineScratchSizeAMDX, 3, device, executionGraph, pSizeInfo);
    ret = glad_vkGetExecutionGraphPipelineScratchSizeAMDX(device, executionGraph, pSizeInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetExecutionGraphPipelineScratchSizeAMDX", (GLADapiproc) glad_vkGetExecutionGraphPipelineScratchSizeAMDX, 3, device, executionGraph, pSizeInfo);
    return ret;
}
PFN_vkGetExecutionGraphPipelineScratchSizeAMDX glad_debug_vkGetExecutionGraphPipelineScratchSizeAMDX = glad_debug_impl_vkGetExecutionGraphPipelineScratchSizeAMDX;

#endif
PFN_vkGetFenceFdKHR glad_vkGetFenceFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetFenceFdKHR", (GLADapiproc) glad_vkGetFenceFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetFenceFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkan_callback((void*) &ret, "vkGetFenceFdKHR", (GLADapiproc) glad_vkGetFenceFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetFenceFdKHR glad_debug_vkGetFenceFdKHR = glad_debug_impl_vkGetFenceFdKHR;
PFN_vkGetFenceStatus glad_vkGetFenceStatus = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceStatus(VkDevice device, VkFence fence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetFenceStatus", (GLADapiproc) glad_vkGetFenceStatus, 2, device, fence);
    ret = glad_vkGetFenceStatus(device, fence);
    _post_call_vulkan_callback((void*) &ret, "vkGetFenceStatus", (GLADapiproc) glad_vkGetFenceStatus, 2, device, fence);
    return ret;
}
PFN_vkGetFenceStatus glad_debug_vkGetFenceStatus = glad_debug_impl_vkGetFenceStatus;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetFenceWin32HandleKHR glad_vkGetFenceWin32HandleKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceWin32HandleKHR(VkDevice device, const VkFenceGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetFenceWin32HandleKHR", (GLADapiproc) glad_vkGetFenceWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    ret = glad_vkGetFenceWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetFenceWin32HandleKHR", (GLADapiproc) glad_vkGetFenceWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    return ret;
}
PFN_vkGetFenceWin32HandleKHR glad_debug_vkGetFenceWin32HandleKHR = glad_debug_impl_vkGetFenceWin32HandleKHR;

#endif
PFN_vkGetFramebufferTilePropertiesQCOM glad_vkGetFramebufferTilePropertiesQCOM = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFramebufferTilePropertiesQCOM(VkDevice device, VkFramebuffer framebuffer, uint32_t * pPropertiesCount, VkTilePropertiesQCOM * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetFramebufferTilePropertiesQCOM", (GLADapiproc) glad_vkGetFramebufferTilePropertiesQCOM, 4, device, framebuffer, pPropertiesCount, pProperties);
    ret = glad_vkGetFramebufferTilePropertiesQCOM(device, framebuffer, pPropertiesCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetFramebufferTilePropertiesQCOM", (GLADapiproc) glad_vkGetFramebufferTilePropertiesQCOM, 4, device, framebuffer, pPropertiesCount, pProperties);
    return ret;
}
PFN_vkGetFramebufferTilePropertiesQCOM glad_debug_vkGetFramebufferTilePropertiesQCOM = glad_debug_impl_vkGetFramebufferTilePropertiesQCOM;
PFN_vkGetGeneratedCommandsMemoryRequirementsNV glad_vkGetGeneratedCommandsMemoryRequirementsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetGeneratedCommandsMemoryRequirementsNV(VkDevice device, const VkGeneratedCommandsMemoryRequirementsInfoNV * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetGeneratedCommandsMemoryRequirementsNV", (GLADapiproc) glad_vkGetGeneratedCommandsMemoryRequirementsNV, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetGeneratedCommandsMemoryRequirementsNV(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetGeneratedCommandsMemoryRequirementsNV", (GLADapiproc) glad_vkGetGeneratedCommandsMemoryRequirementsNV, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetGeneratedCommandsMemoryRequirementsNV glad_debug_vkGetGeneratedCommandsMemoryRequirementsNV = glad_debug_impl_vkGetGeneratedCommandsMemoryRequirementsNV;
PFN_vkGetImageDrmFormatModifierPropertiesEXT glad_vkGetImageDrmFormatModifierPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetImageDrmFormatModifierPropertiesEXT", (GLADapiproc) glad_vkGetImageDrmFormatModifierPropertiesEXT, 3, device, image, pProperties);
    ret = glad_vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetImageDrmFormatModifierPropertiesEXT", (GLADapiproc) glad_vkGetImageDrmFormatModifierPropertiesEXT, 3, device, image, pProperties);
    return ret;
}
PFN_vkGetImageDrmFormatModifierPropertiesEXT glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT;
PFN_vkGetImageMemoryRequirements glad_vkGetImageMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageMemoryRequirements(VkDevice device, VkImage image, VkMemoryRequirements * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageMemoryRequirements", (GLADapiproc) glad_vkGetImageMemoryRequirements, 3, device, image, pMemoryRequirements);
    glad_vkGetImageMemoryRequirements(device, image, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageMemoryRequirements", (GLADapiproc) glad_vkGetImageMemoryRequirements, 3, device, image, pMemoryRequirements);
    
}
PFN_vkGetImageMemoryRequirements glad_debug_vkGetImageMemoryRequirements = glad_debug_impl_vkGetImageMemoryRequirements;
PFN_vkGetImageMemoryRequirements2 glad_vkGetImageMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageMemoryRequirements2", (GLADapiproc) glad_vkGetImageMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageMemoryRequirements2", (GLADapiproc) glad_vkGetImageMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetImageMemoryRequirements2 glad_debug_vkGetImageMemoryRequirements2 = glad_debug_impl_vkGetImageMemoryRequirements2;
PFN_vkGetImageMemoryRequirements2KHR glad_vkGetImageMemoryRequirements2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageMemoryRequirements2KHR(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageMemoryRequirements2KHR", (GLADapiproc) glad_vkGetImageMemoryRequirements2KHR, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetImageMemoryRequirements2KHR(device, pInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageMemoryRequirements2KHR", (GLADapiproc) glad_vkGetImageMemoryRequirements2KHR, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetImageMemoryRequirements2KHR glad_debug_vkGetImageMemoryRequirements2KHR = glad_debug_impl_vkGetImageMemoryRequirements2KHR;
PFN_vkGetImageOpaqueCaptureDescriptorDataEXT glad_vkGetImageOpaqueCaptureDescriptorDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetImageOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkImageCaptureDescriptorDataInfoEXT * pInfo, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetImageOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetImageOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    ret = glad_vkGetImageOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetImageOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetImageOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    return ret;
}
PFN_vkGetImageOpaqueCaptureDescriptorDataEXT glad_debug_vkGetImageOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetImageOpaqueCaptureDescriptorDataEXT;
PFN_vkGetImageSparseMemoryRequirements glad_vkGetImageSparseMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSparseMemoryRequirements(VkDevice device, VkImage image, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements * pSparseMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements, 4, device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetImageSparseMemoryRequirements(device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements, 4, device, image, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetImageSparseMemoryRequirements glad_debug_vkGetImageSparseMemoryRequirements = glad_debug_impl_vkGetImageSparseMemoryRequirements;
PFN_vkGetImageSparseMemoryRequirements2 glad_vkGetImageSparseMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageSparseMemoryRequirements2", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageSparseMemoryRequirements2", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetImageSparseMemoryRequirements2 glad_debug_vkGetImageSparseMemoryRequirements2 = glad_debug_impl_vkGetImageSparseMemoryRequirements2;
PFN_vkGetImageSparseMemoryRequirements2KHR glad_vkGetImageSparseMemoryRequirements2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSparseMemoryRequirements2KHR(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetImageSparseMemoryRequirements2KHR", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2KHR, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetImageSparseMemoryRequirements2KHR(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetImageSparseMemoryRequirements2KHR", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2KHR, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetImageSparseMemoryRequirements2KHR glad_debug_vkGetImageSparseMemoryRequirements2KHR = glad_debug_impl_vkGetImageSparseMemoryRequirements2KHR;
PFN_vkGetImageSubresourceLayout glad_vkGetImageSubresourceLayout = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSubresourceLayout(VkDevice device, VkImage image, const VkImageSubresource * pSubresource, VkSubresourceLayout * pLayout) {
    _pre_call_vulkan_callback("vkGetImageSubresourceLayout", (GLADapiproc) glad_vkGetImageSubresourceLayout, 4, device, image, pSubresource, pLayout);
    glad_vkGetImageSubresourceLayout(device, image, pSubresource, pLayout);
    _post_call_vulkan_callback(NULL, "vkGetImageSubresourceLayout", (GLADapiproc) glad_vkGetImageSubresourceLayout, 4, device, image, pSubresource, pLayout);
    
}
PFN_vkGetImageSubresourceLayout glad_debug_vkGetImageSubresourceLayout = glad_debug_impl_vkGetImageSubresourceLayout;
PFN_vkGetImageSubresourceLayout2EXT glad_vkGetImageSubresourceLayout2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSubresourceLayout2EXT(VkDevice device, VkImage image, const VkImageSubresource2KHR * pSubresource, VkSubresourceLayout2KHR * pLayout) {
    _pre_call_vulkan_callback("vkGetImageSubresourceLayout2EXT", (GLADapiproc) glad_vkGetImageSubresourceLayout2EXT, 4, device, image, pSubresource, pLayout);
    glad_vkGetImageSubresourceLayout2EXT(device, image, pSubresource, pLayout);
    _post_call_vulkan_callback(NULL, "vkGetImageSubresourceLayout2EXT", (GLADapiproc) glad_vkGetImageSubresourceLayout2EXT, 4, device, image, pSubresource, pLayout);
    
}
PFN_vkGetImageSubresourceLayout2EXT glad_debug_vkGetImageSubresourceLayout2EXT = glad_debug_impl_vkGetImageSubresourceLayout2EXT;
PFN_vkGetImageSubresourceLayout2KHR glad_vkGetImageSubresourceLayout2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSubresourceLayout2KHR(VkDevice device, VkImage image, const VkImageSubresource2KHR * pSubresource, VkSubresourceLayout2KHR * pLayout) {
    _pre_call_vulkan_callback("vkGetImageSubresourceLayout2KHR", (GLADapiproc) glad_vkGetImageSubresourceLayout2KHR, 4, device, image, pSubresource, pLayout);
    glad_vkGetImageSubresourceLayout2KHR(device, image, pSubresource, pLayout);
    _post_call_vulkan_callback(NULL, "vkGetImageSubresourceLayout2KHR", (GLADapiproc) glad_vkGetImageSubresourceLayout2KHR, 4, device, image, pSubresource, pLayout);
    
}
PFN_vkGetImageSubresourceLayout2KHR glad_debug_vkGetImageSubresourceLayout2KHR = glad_debug_impl_vkGetImageSubresourceLayout2KHR;
PFN_vkGetImageViewAddressNVX glad_vkGetImageViewAddressNVX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetImageViewAddressNVX(VkDevice device, VkImageView imageView, VkImageViewAddressPropertiesNVX * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetImageViewAddressNVX", (GLADapiproc) glad_vkGetImageViewAddressNVX, 3, device, imageView, pProperties);
    ret = glad_vkGetImageViewAddressNVX(device, imageView, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetImageViewAddressNVX", (GLADapiproc) glad_vkGetImageViewAddressNVX, 3, device, imageView, pProperties);
    return ret;
}
PFN_vkGetImageViewAddressNVX glad_debug_vkGetImageViewAddressNVX = glad_debug_impl_vkGetImageViewAddressNVX;
PFN_vkGetImageViewHandleNVX glad_vkGetImageViewHandleNVX = NULL;
static uint32_t GLAD_API_PTR glad_debug_impl_vkGetImageViewHandleNVX(VkDevice device, const VkImageViewHandleInfoNVX * pInfo) {
    uint32_t ret;
    _pre_call_vulkan_callback("vkGetImageViewHandleNVX", (GLADapiproc) glad_vkGetImageViewHandleNVX, 2, device, pInfo);
    ret = glad_vkGetImageViewHandleNVX(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetImageViewHandleNVX", (GLADapiproc) glad_vkGetImageViewHandleNVX, 2, device, pInfo);
    return ret;
}
PFN_vkGetImageViewHandleNVX glad_debug_vkGetImageViewHandleNVX = glad_debug_impl_vkGetImageViewHandleNVX;
PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetImageViewOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkImageViewCaptureDescriptorDataInfoEXT * pInfo, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetImageViewOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    ret = glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetImageViewOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    return ret;
}
PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT glad_debug_vkGetImageViewOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetImageViewOpaqueCaptureDescriptorDataEXT;
PFN_vkGetInstanceProcAddr glad_vkGetInstanceProcAddr = NULL;
static PFN_vkVoidFunction GLAD_API_PTR glad_debug_impl_vkGetInstanceProcAddr(VkInstance instance, const char * pName) {
    PFN_vkVoidFunction ret;
    _pre_call_vulkan_callback("vkGetInstanceProcAddr", (GLADapiproc) glad_vkGetInstanceProcAddr, 2, instance, pName);
    ret = glad_vkGetInstanceProcAddr(instance, pName);
    _post_call_vulkan_callback((void*) &ret, "vkGetInstanceProcAddr", (GLADapiproc) glad_vkGetInstanceProcAddr, 2, instance, pName);
    return ret;
}
PFN_vkGetInstanceProcAddr glad_debug_vkGetInstanceProcAddr = glad_debug_impl_vkGetInstanceProcAddr;
PFN_vkGetLatencyTimingsNV glad_vkGetLatencyTimingsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetLatencyTimingsNV(VkDevice device, VkSwapchainKHR swapchain, VkGetLatencyMarkerInfoNV * pLatencyMarkerInfo) {
    _pre_call_vulkan_callback("vkGetLatencyTimingsNV", (GLADapiproc) glad_vkGetLatencyTimingsNV, 3, device, swapchain, pLatencyMarkerInfo);
    glad_vkGetLatencyTimingsNV(device, swapchain, pLatencyMarkerInfo);
    _post_call_vulkan_callback(NULL, "vkGetLatencyTimingsNV", (GLADapiproc) glad_vkGetLatencyTimingsNV, 3, device, swapchain, pLatencyMarkerInfo);
    
}
PFN_vkGetLatencyTimingsNV glad_debug_vkGetLatencyTimingsNV = glad_debug_impl_vkGetLatencyTimingsNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetMemoryAndroidHardwareBufferANDROID glad_vkGetMemoryAndroidHardwareBufferANDROID = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryAndroidHardwareBufferANDROID(VkDevice device, const VkMemoryGetAndroidHardwareBufferInfoANDROID * pInfo, struct AHardwareBuffer ** pBuffer) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryAndroidHardwareBufferANDROID", (GLADapiproc) glad_vkGetMemoryAndroidHardwareBufferANDROID, 3, device, pInfo, pBuffer);
    ret = glad_vkGetMemoryAndroidHardwareBufferANDROID(device, pInfo, pBuffer);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryAndroidHardwareBufferANDROID", (GLADapiproc) glad_vkGetMemoryAndroidHardwareBufferANDROID, 3, device, pInfo, pBuffer);
    return ret;
}
PFN_vkGetMemoryAndroidHardwareBufferANDROID glad_debug_vkGetMemoryAndroidHardwareBufferANDROID = glad_debug_impl_vkGetMemoryAndroidHardwareBufferANDROID;

#endif
PFN_vkGetMemoryFdKHR glad_vkGetMemoryFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryFdKHR", (GLADapiproc) glad_vkGetMemoryFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryFdKHR", (GLADapiproc) glad_vkGetMemoryFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetMemoryFdKHR glad_debug_vkGetMemoryFdKHR = glad_debug_impl_vkGetMemoryFdKHR;
PFN_vkGetMemoryFdPropertiesKHR glad_vkGetMemoryFdPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryFdPropertiesKHR", (GLADapiproc) glad_vkGetMemoryFdPropertiesKHR, 4, device, handleType, fd, pMemoryFdProperties);
    ret = glad_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryFdPropertiesKHR", (GLADapiproc) glad_vkGetMemoryFdPropertiesKHR, 4, device, handleType, fd, pMemoryFdProperties);
    return ret;
}
PFN_vkGetMemoryFdPropertiesKHR glad_debug_vkGetMemoryFdPropertiesKHR = glad_debug_impl_vkGetMemoryFdPropertiesKHR;
PFN_vkGetMemoryHostPointerPropertiesEXT glad_vkGetMemoryHostPointerPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryHostPointerPropertiesEXT", (GLADapiproc) glad_vkGetMemoryHostPointerPropertiesEXT, 4, device, handleType, pHostPointer, pMemoryHostPointerProperties);
    ret = glad_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryHostPointerPropertiesEXT", (GLADapiproc) glad_vkGetMemoryHostPointerPropertiesEXT, 4, device, handleType, pHostPointer, pMemoryHostPointerProperties);
    return ret;
}
PFN_vkGetMemoryHostPointerPropertiesEXT glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT;
PFN_vkGetMemoryRemoteAddressNV glad_vkGetMemoryRemoteAddressNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryRemoteAddressNV(VkDevice device, const VkMemoryGetRemoteAddressInfoNV * pMemoryGetRemoteAddressInfo, VkRemoteAddressNV * pAddress) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryRemoteAddressNV", (GLADapiproc) glad_vkGetMemoryRemoteAddressNV, 3, device, pMemoryGetRemoteAddressInfo, pAddress);
    ret = glad_vkGetMemoryRemoteAddressNV(device, pMemoryGetRemoteAddressInfo, pAddress);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryRemoteAddressNV", (GLADapiproc) glad_vkGetMemoryRemoteAddressNV, 3, device, pMemoryGetRemoteAddressInfo, pAddress);
    return ret;
}
PFN_vkGetMemoryRemoteAddressNV glad_debug_vkGetMemoryRemoteAddressNV = glad_debug_impl_vkGetMemoryRemoteAddressNV;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleKHR glad_vkGetMemoryWin32HandleKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryWin32HandleKHR(VkDevice device, const VkMemoryGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryWin32HandleKHR", (GLADapiproc) glad_vkGetMemoryWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    ret = glad_vkGetMemoryWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryWin32HandleKHR", (GLADapiproc) glad_vkGetMemoryWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    return ret;
}
PFN_vkGetMemoryWin32HandleKHR glad_debug_vkGetMemoryWin32HandleKHR = glad_debug_impl_vkGetMemoryWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleNV glad_vkGetMemoryWin32HandleNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryWin32HandleNV(VkDevice device, VkDeviceMemory memory, VkExternalMemoryHandleTypeFlagsNV handleType, HANDLE * pHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryWin32HandleNV", (GLADapiproc) glad_vkGetMemoryWin32HandleNV, 4, device, memory, handleType, pHandle);
    ret = glad_vkGetMemoryWin32HandleNV(device, memory, handleType, pHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryWin32HandleNV", (GLADapiproc) glad_vkGetMemoryWin32HandleNV, 4, device, memory, handleType, pHandle);
    return ret;
}
PFN_vkGetMemoryWin32HandleNV glad_debug_vkGetMemoryWin32HandleNV = glad_debug_impl_vkGetMemoryWin32HandleNV;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandlePropertiesKHR glad_vkGetMemoryWin32HandlePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryWin32HandlePropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, HANDLE handle, VkMemoryWin32HandlePropertiesKHR * pMemoryWin32HandleProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryWin32HandlePropertiesKHR", (GLADapiproc) glad_vkGetMemoryWin32HandlePropertiesKHR, 4, device, handleType, handle, pMemoryWin32HandleProperties);
    ret = glad_vkGetMemoryWin32HandlePropertiesKHR(device, handleType, handle, pMemoryWin32HandleProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryWin32HandlePropertiesKHR", (GLADapiproc) glad_vkGetMemoryWin32HandlePropertiesKHR, 4, device, handleType, handle, pMemoryWin32HandleProperties);
    return ret;
}
PFN_vkGetMemoryWin32HandlePropertiesKHR glad_debug_vkGetMemoryWin32HandlePropertiesKHR = glad_debug_impl_vkGetMemoryWin32HandlePropertiesKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetMemoryZirconHandleFUCHSIA glad_vkGetMemoryZirconHandleFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryZirconHandleFUCHSIA(VkDevice device, const VkMemoryGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryZirconHandleFUCHSIA", (GLADapiproc) glad_vkGetMemoryZirconHandleFUCHSIA, 3, device, pGetZirconHandleInfo, pZirconHandle);
    ret = glad_vkGetMemoryZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryZirconHandleFUCHSIA", (GLADapiproc) glad_vkGetMemoryZirconHandleFUCHSIA, 3, device, pGetZirconHandleInfo, pZirconHandle);
    return ret;
}
PFN_vkGetMemoryZirconHandleFUCHSIA glad_debug_vkGetMemoryZirconHandleFUCHSIA = glad_debug_impl_vkGetMemoryZirconHandleFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA glad_vkGetMemoryZirconHandlePropertiesFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryZirconHandlePropertiesFUCHSIA(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, zx_handle_t zirconHandle, VkMemoryZirconHandlePropertiesFUCHSIA * pMemoryZirconHandleProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetMemoryZirconHandlePropertiesFUCHSIA", (GLADapiproc) glad_vkGetMemoryZirconHandlePropertiesFUCHSIA, 4, device, handleType, zirconHandle, pMemoryZirconHandleProperties);
    ret = glad_vkGetMemoryZirconHandlePropertiesFUCHSIA(device, handleType, zirconHandle, pMemoryZirconHandleProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetMemoryZirconHandlePropertiesFUCHSIA", (GLADapiproc) glad_vkGetMemoryZirconHandlePropertiesFUCHSIA, 4, device, handleType, zirconHandle, pMemoryZirconHandleProperties);
    return ret;
}
PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA glad_debug_vkGetMemoryZirconHandlePropertiesFUCHSIA = glad_debug_impl_vkGetMemoryZirconHandlePropertiesFUCHSIA;

#endif
PFN_vkGetMicromapBuildSizesEXT glad_vkGetMicromapBuildSizesEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetMicromapBuildSizesEXT(VkDevice device, VkAccelerationStructureBuildTypeKHR buildType, const VkMicromapBuildInfoEXT * pBuildInfo, VkMicromapBuildSizesInfoEXT * pSizeInfo) {
    _pre_call_vulkan_callback("vkGetMicromapBuildSizesEXT", (GLADapiproc) glad_vkGetMicromapBuildSizesEXT, 4, device, buildType, pBuildInfo, pSizeInfo);
    glad_vkGetMicromapBuildSizesEXT(device, buildType, pBuildInfo, pSizeInfo);
    _post_call_vulkan_callback(NULL, "vkGetMicromapBuildSizesEXT", (GLADapiproc) glad_vkGetMicromapBuildSizesEXT, 4, device, buildType, pBuildInfo, pSizeInfo);
    
}
PFN_vkGetMicromapBuildSizesEXT glad_debug_vkGetMicromapBuildSizesEXT = glad_debug_impl_vkGetMicromapBuildSizesEXT;
PFN_vkGetPastPresentationTimingGOOGLE glad_vkGetPastPresentationTimingGOOGLE = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPastPresentationTimingGOOGLE(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pPresentationTimingCount, VkPastPresentationTimingGOOGLE * pPresentationTimings) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPastPresentationTimingGOOGLE", (GLADapiproc) glad_vkGetPastPresentationTimingGOOGLE, 4, device, swapchain, pPresentationTimingCount, pPresentationTimings);
    ret = glad_vkGetPastPresentationTimingGOOGLE(device, swapchain, pPresentationTimingCount, pPresentationTimings);
    _post_call_vulkan_callback((void*) &ret, "vkGetPastPresentationTimingGOOGLE", (GLADapiproc) glad_vkGetPastPresentationTimingGOOGLE, 4, device, swapchain, pPresentationTimingCount, pPresentationTimings);
    return ret;
}
PFN_vkGetPastPresentationTimingGOOGLE glad_debug_vkGetPastPresentationTimingGOOGLE = glad_debug_impl_vkGetPastPresentationTimingGOOGLE;
PFN_vkGetPerformanceParameterINTEL glad_vkGetPerformanceParameterINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPerformanceParameterINTEL(VkDevice device, VkPerformanceParameterTypeINTEL parameter, VkPerformanceValueINTEL * pValue) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPerformanceParameterINTEL", (GLADapiproc) glad_vkGetPerformanceParameterINTEL, 3, device, parameter, pValue);
    ret = glad_vkGetPerformanceParameterINTEL(device, parameter, pValue);
    _post_call_vulkan_callback((void*) &ret, "vkGetPerformanceParameterINTEL", (GLADapiproc) glad_vkGetPerformanceParameterINTEL, 3, device, parameter, pValue);
    return ret;
}
PFN_vkGetPerformanceParameterINTEL glad_debug_vkGetPerformanceParameterINTEL = glad_debug_impl_vkGetPerformanceParameterINTEL;
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainKHR * pTimeDomains) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    ret = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT(physicalDevice, pTimeDomainCount, pTimeDomains);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    return ret;
}
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainKHR * pTimeDomains) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceCalibrateableTimeDomainsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    ret = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(physicalDevice, pTimeDomainCount, pTimeDomains);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    return ret;
}
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR;
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkCooperativeMatrixPropertiesNV * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, IDirectFB * dfb) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceDirectFBPresentationSupportEXT", (GLADapiproc) glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT, 3, physicalDevice, queueFamilyIndex, dfb);
    ret = glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT(physicalDevice, queueFamilyIndex, dfb);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT", (GLADapiproc) glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT, 3, physicalDevice, queueFamilyIndex, dfb);
    return ret;
}
PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT glad_debug_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = glad_debug_impl_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;

#endif
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_vkGetPhysicalDeviceDisplayProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceDisplayProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceDisplayProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_vkGetPhysicalDeviceDisplayPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceDisplayPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR;
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_vkGetPhysicalDeviceExternalBufferProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalBufferProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferProperties, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    glad_vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalBufferProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferProperties, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    
}
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties;
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalBufferPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalBufferPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalBufferPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    
}
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR glad_debug_vkGetPhysicalDeviceExternalBufferPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_vkGetPhysicalDeviceExternalFenceProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalFenceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFenceProperties, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    glad_vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalFenceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFenceProperties, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    
}
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties;
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalFencePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalFencePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFencePropertiesKHR, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    glad_vkGetPhysicalDeviceExternalFencePropertiesKHR(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalFencePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFencePropertiesKHR, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    
}
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR glad_debug_vkGetPhysicalDeviceExternalFencePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalFencePropertiesKHR;
PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkExternalMemoryHandleTypeFlagsNV externalHandleType, VkExternalImageFormatPropertiesNV * pExternalImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalImageFormatPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV, 8, physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV(physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV, 8, physicalDevice, format, type, tiling, usage, flags, externalHandleType, pExternalImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV glad_debug_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalSemaphoreProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphoreProperties, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalSemaphoreProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphoreProperties, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    
}
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties;
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    
}
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR glad_debug_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
PFN_vkGetPhysicalDeviceFeatures glad_vkGetPhysicalDeviceFeatures = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFeatures(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures * pFeatures) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFeatures", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures, 2, physicalDevice, pFeatures);
    glad_vkGetPhysicalDeviceFeatures(physicalDevice, pFeatures);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFeatures", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures, 2, physicalDevice, pFeatures);
    
}
PFN_vkGetPhysicalDeviceFeatures glad_debug_vkGetPhysicalDeviceFeatures = glad_debug_impl_vkGetPhysicalDeviceFeatures;
PFN_vkGetPhysicalDeviceFeatures2 glad_vkGetPhysicalDeviceFeatures2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFeatures2", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2, 2, physicalDevice, pFeatures);
    glad_vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFeatures2", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2, 2, physicalDevice, pFeatures);
    
}
PFN_vkGetPhysicalDeviceFeatures2 glad_debug_vkGetPhysicalDeviceFeatures2 = glad_debug_impl_vkGetPhysicalDeviceFeatures2;
PFN_vkGetPhysicalDeviceFeatures2KHR glad_vkGetPhysicalDeviceFeatures2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFeatures2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFeatures2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2KHR, 2, physicalDevice, pFeatures);
    glad_vkGetPhysicalDeviceFeatures2KHR(physicalDevice, pFeatures);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFeatures2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2KHR, 2, physicalDevice, pFeatures);
    
}
PFN_vkGetPhysicalDeviceFeatures2KHR glad_debug_vkGetPhysicalDeviceFeatures2KHR = glad_debug_impl_vkGetPhysicalDeviceFeatures2KHR;
PFN_vkGetPhysicalDeviceFormatProperties glad_vkGetPhysicalDeviceFormatProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties * pFormatProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties, 3, physicalDevice, format, pFormatProperties);
    glad_vkGetPhysicalDeviceFormatProperties(physicalDevice, format, pFormatProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties, 3, physicalDevice, format, pFormatProperties);
    
}
PFN_vkGetPhysicalDeviceFormatProperties glad_debug_vkGetPhysicalDeviceFormatProperties = glad_debug_impl_vkGetPhysicalDeviceFormatProperties;
PFN_vkGetPhysicalDeviceFormatProperties2 glad_vkGetPhysicalDeviceFormatProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2, 3, physicalDevice, format, pFormatProperties);
    glad_vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2, 3, physicalDevice, format, pFormatProperties);
    
}
PFN_vkGetPhysicalDeviceFormatProperties2 glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2;
PFN_vkGetPhysicalDeviceFormatProperties2KHR glad_vkGetPhysicalDeviceFormatProperties2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFormatProperties2KHR(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2KHR, 3, physicalDevice, format, pFormatProperties);
    glad_vkGetPhysicalDeviceFormatProperties2KHR(physicalDevice, format, pFormatProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2KHR, 3, physicalDevice, format, pFormatProperties);
    
}
PFN_vkGetPhysicalDeviceFormatProperties2KHR glad_debug_vkGetPhysicalDeviceFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2KHR;
PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR glad_vkGetPhysicalDeviceFragmentShadingRatesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t * pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR * pFragmentShadingRates) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceFragmentShadingRatesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceFragmentShadingRatesKHR, 3, physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    ret = glad_vkGetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceFragmentShadingRatesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceFragmentShadingRatesKHR, 3, physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    return ret;
}
PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR;
PFN_vkGetPhysicalDeviceImageFormatProperties glad_vkGetPhysicalDeviceImageFormatProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkImageTiling tiling, VkImageUsageFlags usage, VkImageCreateFlags flags, VkImageFormatProperties * pImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceImageFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties, 7, physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceImageFormatProperties(physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceImageFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties, 7, physicalDevice, format, type, tiling, usage, flags, pImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceImageFormatProperties glad_debug_vkGetPhysicalDeviceImageFormatProperties = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties;
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2;
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR glad_vkGetPhysicalDeviceImageFormatProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceImageFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2KHR, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceImageFormatProperties2KHR(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceImageFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2KHR, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR glad_debug_vkGetPhysicalDeviceImageFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2KHR;
PFN_vkGetPhysicalDeviceMemoryProperties glad_vkGetPhysicalDeviceMemoryProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMemoryProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties * pMemoryProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceMemoryProperties", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties, 2, physicalDevice, pMemoryProperties);
    glad_vkGetPhysicalDeviceMemoryProperties(physicalDevice, pMemoryProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceMemoryProperties", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties, 2, physicalDevice, pMemoryProperties);
    
}
PFN_vkGetPhysicalDeviceMemoryProperties glad_debug_vkGetPhysicalDeviceMemoryProperties = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties;
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_vkGetPhysicalDeviceMemoryProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceMemoryProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2, 2, physicalDevice, pMemoryProperties);
    glad_vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceMemoryProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2, 2, physicalDevice, pMemoryProperties);
    
}
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2;
PFN_vkGetPhysicalDeviceMemoryProperties2KHR glad_vkGetPhysicalDeviceMemoryProperties2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceMemoryProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2KHR, 2, physicalDevice, pMemoryProperties);
    glad_vkGetPhysicalDeviceMemoryProperties2KHR(physicalDevice, pMemoryProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceMemoryProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2KHR, 2, physicalDevice, pMemoryProperties);
    
}
PFN_vkGetPhysicalDeviceMemoryProperties2KHR glad_debug_vkGetPhysicalDeviceMemoryProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2KHR;
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceMultisamplePropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceMultisamplePropertiesEXT, 3, physicalDevice, samples, pMultisampleProperties);
    glad_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceMultisamplePropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceMultisamplePropertiesEXT, 3, physicalDevice, samples, pMultisampleProperties);
    
}
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT;
PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(VkPhysicalDevice physicalDevice, const VkOpticalFlowImageFormatInfoNV * pOpticalFlowImageFormatInfo, uint32_t * pFormatCount, VkOpticalFlowImageFormatPropertiesNV * pImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceOpticalFlowImageFormatsNV", (GLADapiproc) glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV, 4, physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV(physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV", (GLADapiproc) glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV, 4, physicalDevice, pOpticalFlowImageFormatInfo, pFormatCount, pImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV glad_debug_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = glad_debug_impl_vkGetPhysicalDeviceOpticalFlowImageFormatsNV;
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDevicePresentRectanglesKHR", (GLADapiproc) glad_vkGetPhysicalDevicePresentRectanglesKHR, 4, physicalDevice, surface, pRectCount, pRects);
    ret = glad_vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDevicePresentRectanglesKHR", (GLADapiproc) glad_vkGetPhysicalDevicePresentRectanglesKHR, 4, physicalDevice, surface, pRectCount, pRects);
    return ret;
}
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR;
PFN_vkGetPhysicalDeviceProperties glad_vkGetPhysicalDeviceProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceProperties(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceProperties, 2, physicalDevice, pProperties);
    glad_vkGetPhysicalDeviceProperties(physicalDevice, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceProperties, 2, physicalDevice, pProperties);
    
}
PFN_vkGetPhysicalDeviceProperties glad_debug_vkGetPhysicalDeviceProperties = glad_debug_impl_vkGetPhysicalDeviceProperties;
PFN_vkGetPhysicalDeviceProperties2 glad_vkGetPhysicalDeviceProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2, 2, physicalDevice, pProperties);
    glad_vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2, 2, physicalDevice, pProperties);
    
}
PFN_vkGetPhysicalDeviceProperties2 glad_debug_vkGetPhysicalDeviceProperties2 = glad_debug_impl_vkGetPhysicalDeviceProperties2;
PFN_vkGetPhysicalDeviceProperties2KHR glad_vkGetPhysicalDeviceProperties2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceProperties2KHR(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2KHR, 2, physicalDevice, pProperties);
    glad_vkGetPhysicalDeviceProperties2KHR(physicalDevice, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2KHR, 2, physicalDevice, pProperties);
    
}
PFN_vkGetPhysicalDeviceProperties2KHR glad_debug_vkGetPhysicalDeviceProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceProperties2KHR;
PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR * pPerformanceQueryCreateInfo, uint32_t * pNumPasses) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR, 3, physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR, 3, physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
PFN_vkGetPhysicalDeviceQueueFamilyProperties glad_vkGetPhysicalDeviceQueueFamilyProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties * pQueueFamilyProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceQueueFamilyProperties", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    glad_vkGetPhysicalDeviceQueueFamilyProperties(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceQueueFamilyProperties", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyProperties glad_debug_vkGetPhysicalDeviceQueueFamilyProperties = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceQueueFamilyProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    glad_vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceQueueFamilyProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceQueueFamilyProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceQueueFamilyProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX glad_vkGetPhysicalDeviceScreenPresentationSupportQNX = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceScreenPresentationSupportQNX(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct _screen_window * window) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceScreenPresentationSupportQNX", (GLADapiproc) glad_vkGetPhysicalDeviceScreenPresentationSupportQNX, 3, physicalDevice, queueFamilyIndex, window);
    ret = glad_vkGetPhysicalDeviceScreenPresentationSupportQNX(physicalDevice, queueFamilyIndex, window);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceScreenPresentationSupportQNX", (GLADapiproc) glad_vkGetPhysicalDeviceScreenPresentationSupportQNX, 3, physicalDevice, queueFamilyIndex, window);
    return ret;
}
PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX glad_debug_vkGetPhysicalDeviceScreenPresentationSupportQNX = glad_debug_impl_vkGetPhysicalDeviceScreenPresentationSupportQNX;

#endif
PFN_vkGetPhysicalDeviceSparseImageFormatProperties glad_vkGetPhysicalDeviceSparseImageFormatProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, VkSampleCountFlagBits samples, VkImageUsageFlags usage, VkImageTiling tiling, uint32_t * pPropertyCount, VkSparseImageFormatProperties * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSparseImageFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties, 8, physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
    glad_vkGetPhysicalDeviceSparseImageFormatProperties(physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceSparseImageFormatProperties", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties, 8, physicalDevice, format, type, samples, usage, tiling, pPropertyCount, pProperties);
    
}
PFN_vkGetPhysicalDeviceSparseImageFormatProperties glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSparseImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceSparseImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    
}
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties) {
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSparseImageFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    _post_call_vulkan_callback(NULL, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    
}
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(VkPhysicalDevice physicalDevice, uint32_t * pCombinationCount, VkFramebufferMixedSamplesCombinationNV * pCombinations) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV", (GLADapiproc) glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV, 3, physicalDevice, pCombinationCount, pCombinations);
    ret = glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(physicalDevice, pCombinationCount, pCombinations);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV", (GLADapiproc) glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV, 3, physicalDevice, pCombinationCount, pCombinations);
    return ret;
}
PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV glad_debug_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = glad_debug_impl_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceCapabilities2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT, 3, physicalDevice, surface, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT, 3, physicalDevice, surface, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceCapabilities2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR, 3, physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR, 3, physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR, 3, physicalDevice, surface, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR, 3, physicalDevice, surface, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_vkGetPhysicalDeviceSurfaceFormats2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceFormats2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormats2KHR, 4, physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    ret = glad_vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceFormats2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormats2KHR, 4, physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceFormatsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormatsKHR, 4, physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    ret = glad_vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceFormatsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormatsKHR, 4, physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT glad_vkGetPhysicalDeviceSurfacePresentModes2EXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModes2EXT(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfacePresentModes2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModes2EXT, 4, physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
    ret = glad_vkGetPhysicalDeviceSurfacePresentModes2EXT(physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfacePresentModes2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModes2EXT, 4, physicalDevice, pSurfaceInfo, pPresentModeCount, pPresentModes);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT glad_debug_vkGetPhysicalDeviceSurfacePresentModes2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModes2EXT;

#endif
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfacePresentModesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModesKHR, 4, physicalDevice, surface, pPresentModeCount, pPresentModes);
    ret = glad_vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfacePresentModesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModesKHR, 4, physicalDevice, surface, pPresentModeCount, pPresentModes);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceSurfaceSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceSupportKHR, 4, physicalDevice, queueFamilyIndex, surface, pSupported);
    ret = glad_vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceSupportKHR, 4, physicalDevice, queueFamilyIndex, surface, pSupported);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR;
PFN_vkGetPhysicalDeviceToolProperties glad_vkGetPhysicalDeviceToolProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceToolProperties", (GLADapiproc) glad_vkGetPhysicalDeviceToolProperties, 3, physicalDevice, pToolCount, pToolProperties);
    ret = glad_vkGetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceToolProperties", (GLADapiproc) glad_vkGetPhysicalDeviceToolProperties, 3, physicalDevice, pToolCount, pToolProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceToolProperties glad_debug_vkGetPhysicalDeviceToolProperties = glad_debug_impl_vkGetPhysicalDeviceToolProperties;
PFN_vkGetPhysicalDeviceToolPropertiesEXT glad_vkGetPhysicalDeviceToolPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceToolPropertiesEXT(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceToolPropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceToolPropertiesEXT, 3, physicalDevice, pToolCount, pToolProperties);
    ret = glad_vkGetPhysicalDeviceToolPropertiesEXT(physicalDevice, pToolCount, pToolProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceToolPropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceToolPropertiesEXT, 3, physicalDevice, pToolCount, pToolProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceToolPropertiesEXT glad_debug_vkGetPhysicalDeviceToolPropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceToolPropertiesEXT;
PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR glad_vkGetPhysicalDeviceVideoCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceVideoCapabilitiesKHR(VkPhysicalDevice physicalDevice, const VkVideoProfileInfoKHR * pVideoProfile, VkVideoCapabilitiesKHR * pCapabilities) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceVideoCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoCapabilitiesKHR, 3, physicalDevice, pVideoProfile, pCapabilities);
    ret = glad_vkGetPhysicalDeviceVideoCapabilitiesKHR(physicalDevice, pVideoProfile, pCapabilities);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceVideoCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoCapabilitiesKHR, 3, physicalDevice, pVideoProfile, pCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR glad_debug_vkGetPhysicalDeviceVideoCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoCapabilitiesKHR;
PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR * pQualityLevelInfo, VkVideoEncodeQualityLevelPropertiesKHR * pQualityLevelProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR, 3, physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
    ret = glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR, 3, physicalDevice, pQualityLevelInfo, pQualityLevelProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR glad_debug_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceVideoFormatPropertiesKHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceVideoFormatInfoKHR * pVideoFormatInfo, uint32_t * pVideoFormatPropertyCount, VkVideoFormatPropertiesKHR * pVideoFormatProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceVideoFormatPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR, 4, physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
    ret = glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR(physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceVideoFormatPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR, 4, physicalDevice, pVideoFormatInfo, pVideoFormatPropertyCount, pVideoFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR glad_debug_vkGetPhysicalDeviceVideoFormatPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceWaylandPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, struct wl_display * display) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceWaylandPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR, 3, physicalDevice, queueFamilyIndex, display);
    ret = glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR(physicalDevice, queueFamilyIndex, display);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceWaylandPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR, 3, physicalDevice, queueFamilyIndex, display);
    return ret;
}
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR glad_debug_vkGetPhysicalDeviceWaylandPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceWaylandPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR glad_vkGetPhysicalDeviceWin32PresentationSupportKHR = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceWin32PresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceWin32PresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceWin32PresentationSupportKHR, 2, physicalDevice, queueFamilyIndex);
    ret = glad_vkGetPhysicalDeviceWin32PresentationSupportKHR(physicalDevice, queueFamilyIndex);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceWin32PresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceWin32PresentationSupportKHR, 2, physicalDevice, queueFamilyIndex);
    return ret;
}
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR glad_debug_vkGetPhysicalDeviceWin32PresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceWin32PresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR glad_vkGetPhysicalDeviceXcbPresentationSupportKHR = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceXcbPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, xcb_connection_t * connection, xcb_visualid_t visual_id) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceXcbPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceXcbPresentationSupportKHR, 4, physicalDevice, queueFamilyIndex, connection, visual_id);
    ret = glad_vkGetPhysicalDeviceXcbPresentationSupportKHR(physicalDevice, queueFamilyIndex, connection, visual_id);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceXcbPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceXcbPresentationSupportKHR, 4, physicalDevice, queueFamilyIndex, connection, visual_id);
    return ret;
}
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR glad_debug_vkGetPhysicalDeviceXcbPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceXcbPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR glad_vkGetPhysicalDeviceXlibPresentationSupportKHR = NULL;
static VkBool32 GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceXlibPresentationSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, Display * dpy, VisualID visualID) {
    VkBool32 ret;
    _pre_call_vulkan_callback("vkGetPhysicalDeviceXlibPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceXlibPresentationSupportKHR, 4, physicalDevice, queueFamilyIndex, dpy, visualID);
    ret = glad_vkGetPhysicalDeviceXlibPresentationSupportKHR(physicalDevice, queueFamilyIndex, dpy, visualID);
    _post_call_vulkan_callback((void*) &ret, "vkGetPhysicalDeviceXlibPresentationSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceXlibPresentationSupportKHR, 4, physicalDevice, queueFamilyIndex, dpy, visualID);
    return ret;
}
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR glad_debug_vkGetPhysicalDeviceXlibPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceXlibPresentationSupportKHR;

#endif
PFN_vkGetPipelineCacheData glad_vkGetPipelineCacheData = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPipelineCacheData(VkDevice device, VkPipelineCache pipelineCache, size_t * pDataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPipelineCacheData", (GLADapiproc) glad_vkGetPipelineCacheData, 4, device, pipelineCache, pDataSize, pData);
    ret = glad_vkGetPipelineCacheData(device, pipelineCache, pDataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelineCacheData", (GLADapiproc) glad_vkGetPipelineCacheData, 4, device, pipelineCache, pDataSize, pData);
    return ret;
}
PFN_vkGetPipelineCacheData glad_debug_vkGetPipelineCacheData = glad_debug_impl_vkGetPipelineCacheData;
PFN_vkGetPipelineExecutableInternalRepresentationsKHR glad_vkGetPipelineExecutableInternalRepresentationsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPipelineExecutableInternalRepresentationsKHR(VkDevice device, const VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pInternalRepresentationCount, VkPipelineExecutableInternalRepresentationKHR * pInternalRepresentations) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPipelineExecutableInternalRepresentationsKHR", (GLADapiproc) glad_vkGetPipelineExecutableInternalRepresentationsKHR, 4, device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
    ret = glad_vkGetPipelineExecutableInternalRepresentationsKHR(device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelineExecutableInternalRepresentationsKHR", (GLADapiproc) glad_vkGetPipelineExecutableInternalRepresentationsKHR, 4, device, pExecutableInfo, pInternalRepresentationCount, pInternalRepresentations);
    return ret;
}
PFN_vkGetPipelineExecutableInternalRepresentationsKHR glad_debug_vkGetPipelineExecutableInternalRepresentationsKHR = glad_debug_impl_vkGetPipelineExecutableInternalRepresentationsKHR;
PFN_vkGetPipelineExecutablePropertiesKHR glad_vkGetPipelineExecutablePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPipelineExecutablePropertiesKHR(VkDevice device, const VkPipelineInfoKHR * pPipelineInfo, uint32_t * pExecutableCount, VkPipelineExecutablePropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPipelineExecutablePropertiesKHR", (GLADapiproc) glad_vkGetPipelineExecutablePropertiesKHR, 4, device, pPipelineInfo, pExecutableCount, pProperties);
    ret = glad_vkGetPipelineExecutablePropertiesKHR(device, pPipelineInfo, pExecutableCount, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelineExecutablePropertiesKHR", (GLADapiproc) glad_vkGetPipelineExecutablePropertiesKHR, 4, device, pPipelineInfo, pExecutableCount, pProperties);
    return ret;
}
PFN_vkGetPipelineExecutablePropertiesKHR glad_debug_vkGetPipelineExecutablePropertiesKHR = glad_debug_impl_vkGetPipelineExecutablePropertiesKHR;
PFN_vkGetPipelineExecutableStatisticsKHR glad_vkGetPipelineExecutableStatisticsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPipelineExecutableStatisticsKHR(VkDevice device, const VkPipelineExecutableInfoKHR * pExecutableInfo, uint32_t * pStatisticCount, VkPipelineExecutableStatisticKHR * pStatistics) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPipelineExecutableStatisticsKHR", (GLADapiproc) glad_vkGetPipelineExecutableStatisticsKHR, 4, device, pExecutableInfo, pStatisticCount, pStatistics);
    ret = glad_vkGetPipelineExecutableStatisticsKHR(device, pExecutableInfo, pStatisticCount, pStatistics);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelineExecutableStatisticsKHR", (GLADapiproc) glad_vkGetPipelineExecutableStatisticsKHR, 4, device, pExecutableInfo, pStatisticCount, pStatistics);
    return ret;
}
PFN_vkGetPipelineExecutableStatisticsKHR glad_debug_vkGetPipelineExecutableStatisticsKHR = glad_debug_impl_vkGetPipelineExecutableStatisticsKHR;
PFN_vkGetPipelineIndirectDeviceAddressNV glad_vkGetPipelineIndirectDeviceAddressNV = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetPipelineIndirectDeviceAddressNV(VkDevice device, const VkPipelineIndirectDeviceAddressInfoNV * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkan_callback("vkGetPipelineIndirectDeviceAddressNV", (GLADapiproc) glad_vkGetPipelineIndirectDeviceAddressNV, 2, device, pInfo);
    ret = glad_vkGetPipelineIndirectDeviceAddressNV(device, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelineIndirectDeviceAddressNV", (GLADapiproc) glad_vkGetPipelineIndirectDeviceAddressNV, 2, device, pInfo);
    return ret;
}
PFN_vkGetPipelineIndirectDeviceAddressNV glad_debug_vkGetPipelineIndirectDeviceAddressNV = glad_debug_impl_vkGetPipelineIndirectDeviceAddressNV;
PFN_vkGetPipelineIndirectMemoryRequirementsNV glad_vkGetPipelineIndirectMemoryRequirementsNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPipelineIndirectMemoryRequirementsNV(VkDevice device, const VkComputePipelineCreateInfo * pCreateInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkan_callback("vkGetPipelineIndirectMemoryRequirementsNV", (GLADapiproc) glad_vkGetPipelineIndirectMemoryRequirementsNV, 3, device, pCreateInfo, pMemoryRequirements);
    glad_vkGetPipelineIndirectMemoryRequirementsNV(device, pCreateInfo, pMemoryRequirements);
    _post_call_vulkan_callback(NULL, "vkGetPipelineIndirectMemoryRequirementsNV", (GLADapiproc) glad_vkGetPipelineIndirectMemoryRequirementsNV, 3, device, pCreateInfo, pMemoryRequirements);
    
}
PFN_vkGetPipelineIndirectMemoryRequirementsNV glad_debug_vkGetPipelineIndirectMemoryRequirementsNV = glad_debug_impl_vkGetPipelineIndirectMemoryRequirementsNV;
PFN_vkGetPipelinePropertiesEXT glad_vkGetPipelinePropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPipelinePropertiesEXT(VkDevice device, const VkPipelineInfoEXT * pPipelineInfo, VkBaseOutStructure * pPipelineProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetPipelinePropertiesEXT", (GLADapiproc) glad_vkGetPipelinePropertiesEXT, 3, device, pPipelineInfo, pPipelineProperties);
    ret = glad_vkGetPipelinePropertiesEXT(device, pPipelineInfo, pPipelineProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetPipelinePropertiesEXT", (GLADapiproc) glad_vkGetPipelinePropertiesEXT, 3, device, pPipelineInfo, pPipelineProperties);
    return ret;
}
PFN_vkGetPipelinePropertiesEXT glad_debug_vkGetPipelinePropertiesEXT = glad_debug_impl_vkGetPipelinePropertiesEXT;
PFN_vkGetPrivateData glad_vkGetPrivateData = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData) {
    _pre_call_vulkan_callback("vkGetPrivateData", (GLADapiproc) glad_vkGetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, pData);
    glad_vkGetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
    _post_call_vulkan_callback(NULL, "vkGetPrivateData", (GLADapiproc) glad_vkGetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, pData);
    
}
PFN_vkGetPrivateData glad_debug_vkGetPrivateData = glad_debug_impl_vkGetPrivateData;
PFN_vkGetPrivateDataEXT glad_vkGetPrivateDataEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData) {
    _pre_call_vulkan_callback("vkGetPrivateDataEXT", (GLADapiproc) glad_vkGetPrivateDataEXT, 5, device, objectType, objectHandle, privateDataSlot, pData);
    glad_vkGetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, pData);
    _post_call_vulkan_callback(NULL, "vkGetPrivateDataEXT", (GLADapiproc) glad_vkGetPrivateDataEXT, 5, device, objectType, objectHandle, privateDataSlot, pData);
    
}
PFN_vkGetPrivateDataEXT glad_debug_vkGetPrivateDataEXT = glad_debug_impl_vkGetPrivateDataEXT;
PFN_vkGetQueryPoolResults glad_vkGetQueryPoolResults = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetQueryPoolResults(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount, size_t dataSize, void * pData, VkDeviceSize stride, VkQueryResultFlags flags) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetQueryPoolResults", (GLADapiproc) glad_vkGetQueryPoolResults, 8, device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
    ret = glad_vkGetQueryPoolResults(device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
    _post_call_vulkan_callback((void*) &ret, "vkGetQueryPoolResults", (GLADapiproc) glad_vkGetQueryPoolResults, 8, device, queryPool, firstQuery, queryCount, dataSize, pData, stride, flags);
    return ret;
}
PFN_vkGetQueryPoolResults glad_debug_vkGetQueryPoolResults = glad_debug_impl_vkGetQueryPoolResults;
PFN_vkGetQueueCheckpointData2NV glad_vkGetQueueCheckpointData2NV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetQueueCheckpointData2NV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointData2NV * pCheckpointData) {
    _pre_call_vulkan_callback("vkGetQueueCheckpointData2NV", (GLADapiproc) glad_vkGetQueueCheckpointData2NV, 3, queue, pCheckpointDataCount, pCheckpointData);
    glad_vkGetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
    _post_call_vulkan_callback(NULL, "vkGetQueueCheckpointData2NV", (GLADapiproc) glad_vkGetQueueCheckpointData2NV, 3, queue, pCheckpointDataCount, pCheckpointData);
    
}
PFN_vkGetQueueCheckpointData2NV glad_debug_vkGetQueueCheckpointData2NV = glad_debug_impl_vkGetQueueCheckpointData2NV;
PFN_vkGetQueueCheckpointDataNV glad_vkGetQueueCheckpointDataNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetQueueCheckpointDataNV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointDataNV * pCheckpointData) {
    _pre_call_vulkan_callback("vkGetQueueCheckpointDataNV", (GLADapiproc) glad_vkGetQueueCheckpointDataNV, 3, queue, pCheckpointDataCount, pCheckpointData);
    glad_vkGetQueueCheckpointDataNV(queue, pCheckpointDataCount, pCheckpointData);
    _post_call_vulkan_callback(NULL, "vkGetQueueCheckpointDataNV", (GLADapiproc) glad_vkGetQueueCheckpointDataNV, 3, queue, pCheckpointDataCount, pCheckpointData);
    
}
PFN_vkGetQueueCheckpointDataNV glad_debug_vkGetQueueCheckpointDataNV = glad_debug_impl_vkGetQueueCheckpointDataNV;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkGetRandROutputDisplayEXT glad_vkGetRandROutputDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetRandROutputDisplayEXT(VkPhysicalDevice physicalDevice, Display * dpy, RROutput rrOutput, VkDisplayKHR * pDisplay) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetRandROutputDisplayEXT", (GLADapiproc) glad_vkGetRandROutputDisplayEXT, 4, physicalDevice, dpy, rrOutput, pDisplay);
    ret = glad_vkGetRandROutputDisplayEXT(physicalDevice, dpy, rrOutput, pDisplay);
    _post_call_vulkan_callback((void*) &ret, "vkGetRandROutputDisplayEXT", (GLADapiproc) glad_vkGetRandROutputDisplayEXT, 4, physicalDevice, dpy, rrOutput, pDisplay);
    return ret;
}
PFN_vkGetRandROutputDisplayEXT glad_debug_vkGetRandROutputDisplayEXT = glad_debug_impl_vkGetRandROutputDisplayEXT;

#endif
PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetRayTracingCaptureReplayShaderGroupHandlesKHR", (GLADapiproc) glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    ret = glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR", (GLADapiproc) glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    return ret;
}
PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR glad_debug_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = glad_debug_impl_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
PFN_vkGetRayTracingShaderGroupHandlesKHR glad_vkGetRayTracingShaderGroupHandlesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetRayTracingShaderGroupHandlesKHR(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetRayTracingShaderGroupHandlesKHR", (GLADapiproc) glad_vkGetRayTracingShaderGroupHandlesKHR, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    ret = glad_vkGetRayTracingShaderGroupHandlesKHR(device, pipeline, firstGroup, groupCount, dataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetRayTracingShaderGroupHandlesKHR", (GLADapiproc) glad_vkGetRayTracingShaderGroupHandlesKHR, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    return ret;
}
PFN_vkGetRayTracingShaderGroupHandlesKHR glad_debug_vkGetRayTracingShaderGroupHandlesKHR = glad_debug_impl_vkGetRayTracingShaderGroupHandlesKHR;
PFN_vkGetRayTracingShaderGroupHandlesNV glad_vkGetRayTracingShaderGroupHandlesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetRayTracingShaderGroupHandlesNV(VkDevice device, VkPipeline pipeline, uint32_t firstGroup, uint32_t groupCount, size_t dataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetRayTracingShaderGroupHandlesNV", (GLADapiproc) glad_vkGetRayTracingShaderGroupHandlesNV, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    ret = glad_vkGetRayTracingShaderGroupHandlesNV(device, pipeline, firstGroup, groupCount, dataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetRayTracingShaderGroupHandlesNV", (GLADapiproc) glad_vkGetRayTracingShaderGroupHandlesNV, 6, device, pipeline, firstGroup, groupCount, dataSize, pData);
    return ret;
}
PFN_vkGetRayTracingShaderGroupHandlesNV glad_debug_vkGetRayTracingShaderGroupHandlesNV = glad_debug_impl_vkGetRayTracingShaderGroupHandlesNV;
PFN_vkGetRayTracingShaderGroupStackSizeKHR glad_vkGetRayTracingShaderGroupStackSizeKHR = NULL;
static VkDeviceSize GLAD_API_PTR glad_debug_impl_vkGetRayTracingShaderGroupStackSizeKHR(VkDevice device, VkPipeline pipeline, uint32_t group, VkShaderGroupShaderKHR groupShader) {
    VkDeviceSize ret;
    _pre_call_vulkan_callback("vkGetRayTracingShaderGroupStackSizeKHR", (GLADapiproc) glad_vkGetRayTracingShaderGroupStackSizeKHR, 4, device, pipeline, group, groupShader);
    ret = glad_vkGetRayTracingShaderGroupStackSizeKHR(device, pipeline, group, groupShader);
    _post_call_vulkan_callback((void*) &ret, "vkGetRayTracingShaderGroupStackSizeKHR", (GLADapiproc) glad_vkGetRayTracingShaderGroupStackSizeKHR, 4, device, pipeline, group, groupShader);
    return ret;
}
PFN_vkGetRayTracingShaderGroupStackSizeKHR glad_debug_vkGetRayTracingShaderGroupStackSizeKHR = glad_debug_impl_vkGetRayTracingShaderGroupStackSizeKHR;
PFN_vkGetRefreshCycleDurationGOOGLE glad_vkGetRefreshCycleDurationGOOGLE = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetRefreshCycleDurationGOOGLE(VkDevice device, VkSwapchainKHR swapchain, VkRefreshCycleDurationGOOGLE * pDisplayTimingProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetRefreshCycleDurationGOOGLE", (GLADapiproc) glad_vkGetRefreshCycleDurationGOOGLE, 3, device, swapchain, pDisplayTimingProperties);
    ret = glad_vkGetRefreshCycleDurationGOOGLE(device, swapchain, pDisplayTimingProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetRefreshCycleDurationGOOGLE", (GLADapiproc) glad_vkGetRefreshCycleDurationGOOGLE, 3, device, swapchain, pDisplayTimingProperties);
    return ret;
}
PFN_vkGetRefreshCycleDurationGOOGLE glad_debug_vkGetRefreshCycleDurationGOOGLE = glad_debug_impl_vkGetRefreshCycleDurationGOOGLE;
PFN_vkGetRenderAreaGranularity glad_vkGetRenderAreaGranularity = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetRenderAreaGranularity(VkDevice device, VkRenderPass renderPass, VkExtent2D * pGranularity) {
    _pre_call_vulkan_callback("vkGetRenderAreaGranularity", (GLADapiproc) glad_vkGetRenderAreaGranularity, 3, device, renderPass, pGranularity);
    glad_vkGetRenderAreaGranularity(device, renderPass, pGranularity);
    _post_call_vulkan_callback(NULL, "vkGetRenderAreaGranularity", (GLADapiproc) glad_vkGetRenderAreaGranularity, 3, device, renderPass, pGranularity);
    
}
PFN_vkGetRenderAreaGranularity glad_debug_vkGetRenderAreaGranularity = glad_debug_impl_vkGetRenderAreaGranularity;
PFN_vkGetRenderingAreaGranularityKHR glad_vkGetRenderingAreaGranularityKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetRenderingAreaGranularityKHR(VkDevice device, const VkRenderingAreaInfoKHR * pRenderingAreaInfo, VkExtent2D * pGranularity) {
    _pre_call_vulkan_callback("vkGetRenderingAreaGranularityKHR", (GLADapiproc) glad_vkGetRenderingAreaGranularityKHR, 3, device, pRenderingAreaInfo, pGranularity);
    glad_vkGetRenderingAreaGranularityKHR(device, pRenderingAreaInfo, pGranularity);
    _post_call_vulkan_callback(NULL, "vkGetRenderingAreaGranularityKHR", (GLADapiproc) glad_vkGetRenderingAreaGranularityKHR, 3, device, pRenderingAreaInfo, pGranularity);
    
}
PFN_vkGetRenderingAreaGranularityKHR glad_debug_vkGetRenderingAreaGranularityKHR = glad_debug_impl_vkGetRenderingAreaGranularityKHR;
PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSamplerOpaqueCaptureDescriptorDataEXT(VkDevice device, const VkSamplerCaptureDescriptorDataInfoEXT * pInfo, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSamplerOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    ret = glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT(device, pInfo, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetSamplerOpaqueCaptureDescriptorDataEXT", (GLADapiproc) glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT, 3, device, pInfo, pData);
    return ret;
}
PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT glad_debug_vkGetSamplerOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetSamplerOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkGetScreenBufferPropertiesQNX glad_vkGetScreenBufferPropertiesQNX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer * buffer, VkScreenBufferPropertiesQNX * pProperties) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetScreenBufferPropertiesQNX", (GLADapiproc) glad_vkGetScreenBufferPropertiesQNX, 3, device, buffer, pProperties);
    ret = glad_vkGetScreenBufferPropertiesQNX(device, buffer, pProperties);
    _post_call_vulkan_callback((void*) &ret, "vkGetScreenBufferPropertiesQNX", (GLADapiproc) glad_vkGetScreenBufferPropertiesQNX, 3, device, buffer, pProperties);
    return ret;
}
PFN_vkGetScreenBufferPropertiesQNX glad_debug_vkGetScreenBufferPropertiesQNX = glad_debug_impl_vkGetScreenBufferPropertiesQNX;

#endif
PFN_vkGetSemaphoreCounterValue glad_vkGetSemaphoreCounterValue = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t * pValue) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSemaphoreCounterValue", (GLADapiproc) glad_vkGetSemaphoreCounterValue, 3, device, semaphore, pValue);
    ret = glad_vkGetSemaphoreCounterValue(device, semaphore, pValue);
    _post_call_vulkan_callback((void*) &ret, "vkGetSemaphoreCounterValue", (GLADapiproc) glad_vkGetSemaphoreCounterValue, 3, device, semaphore, pValue);
    return ret;
}
PFN_vkGetSemaphoreCounterValue glad_debug_vkGetSemaphoreCounterValue = glad_debug_impl_vkGetSemaphoreCounterValue;
PFN_vkGetSemaphoreCounterValueKHR glad_vkGetSemaphoreCounterValueKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreCounterValueKHR(VkDevice device, VkSemaphore semaphore, uint64_t * pValue) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSemaphoreCounterValueKHR", (GLADapiproc) glad_vkGetSemaphoreCounterValueKHR, 3, device, semaphore, pValue);
    ret = glad_vkGetSemaphoreCounterValueKHR(device, semaphore, pValue);
    _post_call_vulkan_callback((void*) &ret, "vkGetSemaphoreCounterValueKHR", (GLADapiproc) glad_vkGetSemaphoreCounterValueKHR, 3, device, semaphore, pValue);
    return ret;
}
PFN_vkGetSemaphoreCounterValueKHR glad_debug_vkGetSemaphoreCounterValueKHR = glad_debug_impl_vkGetSemaphoreCounterValueKHR;
PFN_vkGetSemaphoreFdKHR glad_vkGetSemaphoreFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSemaphoreFdKHR", (GLADapiproc) glad_vkGetSemaphoreFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkan_callback((void*) &ret, "vkGetSemaphoreFdKHR", (GLADapiproc) glad_vkGetSemaphoreFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetSemaphoreFdKHR glad_debug_vkGetSemaphoreFdKHR = glad_debug_impl_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetSemaphoreWin32HandleKHR glad_vkGetSemaphoreWin32HandleKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreWin32HandleKHR(VkDevice device, const VkSemaphoreGetWin32HandleInfoKHR * pGetWin32HandleInfo, HANDLE * pHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSemaphoreWin32HandleKHR", (GLADapiproc) glad_vkGetSemaphoreWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    ret = glad_vkGetSemaphoreWin32HandleKHR(device, pGetWin32HandleInfo, pHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetSemaphoreWin32HandleKHR", (GLADapiproc) glad_vkGetSemaphoreWin32HandleKHR, 3, device, pGetWin32HandleInfo, pHandle);
    return ret;
}
PFN_vkGetSemaphoreWin32HandleKHR glad_debug_vkGetSemaphoreWin32HandleKHR = glad_debug_impl_vkGetSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetSemaphoreZirconHandleFUCHSIA glad_vkGetSemaphoreZirconHandleFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkSemaphoreGetZirconHandleInfoFUCHSIA * pGetZirconHandleInfo, zx_handle_t * pZirconHandle) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSemaphoreZirconHandleFUCHSIA", (GLADapiproc) glad_vkGetSemaphoreZirconHandleFUCHSIA, 3, device, pGetZirconHandleInfo, pZirconHandle);
    ret = glad_vkGetSemaphoreZirconHandleFUCHSIA(device, pGetZirconHandleInfo, pZirconHandle);
    _post_call_vulkan_callback((void*) &ret, "vkGetSemaphoreZirconHandleFUCHSIA", (GLADapiproc) glad_vkGetSemaphoreZirconHandleFUCHSIA, 3, device, pGetZirconHandleInfo, pZirconHandle);
    return ret;
}
PFN_vkGetSemaphoreZirconHandleFUCHSIA glad_debug_vkGetSemaphoreZirconHandleFUCHSIA = glad_debug_impl_vkGetSemaphoreZirconHandleFUCHSIA;

#endif
PFN_vkGetShaderBinaryDataEXT glad_vkGetShaderBinaryDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetShaderBinaryDataEXT(VkDevice device, VkShaderEXT shader, size_t * pDataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetShaderBinaryDataEXT", (GLADapiproc) glad_vkGetShaderBinaryDataEXT, 4, device, shader, pDataSize, pData);
    ret = glad_vkGetShaderBinaryDataEXT(device, shader, pDataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetShaderBinaryDataEXT", (GLADapiproc) glad_vkGetShaderBinaryDataEXT, 4, device, shader, pDataSize, pData);
    return ret;
}
PFN_vkGetShaderBinaryDataEXT glad_debug_vkGetShaderBinaryDataEXT = glad_debug_impl_vkGetShaderBinaryDataEXT;
PFN_vkGetShaderInfoAMD glad_vkGetShaderInfoAMD = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetShaderInfoAMD(VkDevice device, VkPipeline pipeline, VkShaderStageFlagBits shaderStage, VkShaderInfoTypeAMD infoType, size_t * pInfoSize, void * pInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetShaderInfoAMD", (GLADapiproc) glad_vkGetShaderInfoAMD, 6, device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
    ret = glad_vkGetShaderInfoAMD(device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
    _post_call_vulkan_callback((void*) &ret, "vkGetShaderInfoAMD", (GLADapiproc) glad_vkGetShaderInfoAMD, 6, device, pipeline, shaderStage, infoType, pInfoSize, pInfo);
    return ret;
}
PFN_vkGetShaderInfoAMD glad_debug_vkGetShaderInfoAMD = glad_debug_impl_vkGetShaderInfoAMD;
PFN_vkGetShaderModuleCreateInfoIdentifierEXT glad_vkGetShaderModuleCreateInfoIdentifierEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetShaderModuleCreateInfoIdentifierEXT(VkDevice device, const VkShaderModuleCreateInfo * pCreateInfo, VkShaderModuleIdentifierEXT * pIdentifier) {
    _pre_call_vulkan_callback("vkGetShaderModuleCreateInfoIdentifierEXT", (GLADapiproc) glad_vkGetShaderModuleCreateInfoIdentifierEXT, 3, device, pCreateInfo, pIdentifier);
    glad_vkGetShaderModuleCreateInfoIdentifierEXT(device, pCreateInfo, pIdentifier);
    _post_call_vulkan_callback(NULL, "vkGetShaderModuleCreateInfoIdentifierEXT", (GLADapiproc) glad_vkGetShaderModuleCreateInfoIdentifierEXT, 3, device, pCreateInfo, pIdentifier);
    
}
PFN_vkGetShaderModuleCreateInfoIdentifierEXT glad_debug_vkGetShaderModuleCreateInfoIdentifierEXT = glad_debug_impl_vkGetShaderModuleCreateInfoIdentifierEXT;
PFN_vkGetShaderModuleIdentifierEXT glad_vkGetShaderModuleIdentifierEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetShaderModuleIdentifierEXT(VkDevice device, VkShaderModule shaderModule, VkShaderModuleIdentifierEXT * pIdentifier) {
    _pre_call_vulkan_callback("vkGetShaderModuleIdentifierEXT", (GLADapiproc) glad_vkGetShaderModuleIdentifierEXT, 3, device, shaderModule, pIdentifier);
    glad_vkGetShaderModuleIdentifierEXT(device, shaderModule, pIdentifier);
    _post_call_vulkan_callback(NULL, "vkGetShaderModuleIdentifierEXT", (GLADapiproc) glad_vkGetShaderModuleIdentifierEXT, 3, device, shaderModule, pIdentifier);
    
}
PFN_vkGetShaderModuleIdentifierEXT glad_debug_vkGetShaderModuleIdentifierEXT = glad_debug_impl_vkGetShaderModuleIdentifierEXT;
PFN_vkGetSwapchainCounterEXT glad_vkGetSwapchainCounterEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSwapchainCounterEXT", (GLADapiproc) glad_vkGetSwapchainCounterEXT, 4, device, swapchain, counter, pCounterValue);
    ret = glad_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
    _post_call_vulkan_callback((void*) &ret, "vkGetSwapchainCounterEXT", (GLADapiproc) glad_vkGetSwapchainCounterEXT, 4, device, swapchain, counter, pCounterValue);
    return ret;
}
PFN_vkGetSwapchainCounterEXT glad_debug_vkGetSwapchainCounterEXT = glad_debug_impl_vkGetSwapchainCounterEXT;
PFN_vkGetSwapchainImagesKHR glad_vkGetSwapchainImagesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSwapchainImagesKHR", (GLADapiproc) glad_vkGetSwapchainImagesKHR, 4, device, swapchain, pSwapchainImageCount, pSwapchainImages);
    ret = glad_vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
    _post_call_vulkan_callback((void*) &ret, "vkGetSwapchainImagesKHR", (GLADapiproc) glad_vkGetSwapchainImagesKHR, 4, device, swapchain, pSwapchainImageCount, pSwapchainImages);
    return ret;
}
PFN_vkGetSwapchainImagesKHR glad_debug_vkGetSwapchainImagesKHR = glad_debug_impl_vkGetSwapchainImagesKHR;
PFN_vkGetSwapchainStatusKHR glad_vkGetSwapchainStatusKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetSwapchainStatusKHR", (GLADapiproc) glad_vkGetSwapchainStatusKHR, 2, device, swapchain);
    ret = glad_vkGetSwapchainStatusKHR(device, swapchain);
    _post_call_vulkan_callback((void*) &ret, "vkGetSwapchainStatusKHR", (GLADapiproc) glad_vkGetSwapchainStatusKHR, 2, device, swapchain);
    return ret;
}
PFN_vkGetSwapchainStatusKHR glad_debug_vkGetSwapchainStatusKHR = glad_debug_impl_vkGetSwapchainStatusKHR;
PFN_vkGetValidationCacheDataEXT glad_vkGetValidationCacheDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetValidationCacheDataEXT(VkDevice device, VkValidationCacheEXT validationCache, size_t * pDataSize, void * pData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetValidationCacheDataEXT", (GLADapiproc) glad_vkGetValidationCacheDataEXT, 4, device, validationCache, pDataSize, pData);
    ret = glad_vkGetValidationCacheDataEXT(device, validationCache, pDataSize, pData);
    _post_call_vulkan_callback((void*) &ret, "vkGetValidationCacheDataEXT", (GLADapiproc) glad_vkGetValidationCacheDataEXT, 4, device, validationCache, pDataSize, pData);
    return ret;
}
PFN_vkGetValidationCacheDataEXT glad_debug_vkGetValidationCacheDataEXT = glad_debug_impl_vkGetValidationCacheDataEXT;
PFN_vkGetVideoSessionMemoryRequirementsKHR glad_vkGetVideoSessionMemoryRequirementsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetVideoSessionMemoryRequirementsKHR(VkDevice device, VkVideoSessionKHR videoSession, uint32_t * pMemoryRequirementsCount, VkVideoSessionMemoryRequirementsKHR * pMemoryRequirements) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetVideoSessionMemoryRequirementsKHR", (GLADapiproc) glad_vkGetVideoSessionMemoryRequirementsKHR, 4, device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
    ret = glad_vkGetVideoSessionMemoryRequirementsKHR(device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
    _post_call_vulkan_callback((void*) &ret, "vkGetVideoSessionMemoryRequirementsKHR", (GLADapiproc) glad_vkGetVideoSessionMemoryRequirementsKHR, 4, device, videoSession, pMemoryRequirementsCount, pMemoryRequirements);
    return ret;
}
PFN_vkGetVideoSessionMemoryRequirementsKHR glad_debug_vkGetVideoSessionMemoryRequirementsKHR = glad_debug_impl_vkGetVideoSessionMemoryRequirementsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetWinrtDisplayNV glad_vkGetWinrtDisplayNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay) {
    VkResult ret;
    _pre_call_vulkan_callback("vkGetWinrtDisplayNV", (GLADapiproc) glad_vkGetWinrtDisplayNV, 3, physicalDevice, deviceRelativeId, pDisplay);
    ret = glad_vkGetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
    _post_call_vulkan_callback((void*) &ret, "vkGetWinrtDisplayNV", (GLADapiproc) glad_vkGetWinrtDisplayNV, 3, physicalDevice, deviceRelativeId, pDisplay);
    return ret;
}
PFN_vkGetWinrtDisplayNV glad_debug_vkGetWinrtDisplayNV = glad_debug_impl_vkGetWinrtDisplayNV;

#endif
PFN_vkImportFenceFdKHR glad_vkImportFenceFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkImportFenceFdKHR", (GLADapiproc) glad_vkImportFenceFdKHR, 2, device, pImportFenceFdInfo);
    ret = glad_vkImportFenceFdKHR(device, pImportFenceFdInfo);
    _post_call_vulkan_callback((void*) &ret, "vkImportFenceFdKHR", (GLADapiproc) glad_vkImportFenceFdKHR, 2, device, pImportFenceFdInfo);
    return ret;
}
PFN_vkImportFenceFdKHR glad_debug_vkImportFenceFdKHR = glad_debug_impl_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportFenceWin32HandleKHR glad_vkImportFenceWin32HandleKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportFenceWin32HandleKHR(VkDevice device, const VkImportFenceWin32HandleInfoKHR * pImportFenceWin32HandleInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkImportFenceWin32HandleKHR", (GLADapiproc) glad_vkImportFenceWin32HandleKHR, 2, device, pImportFenceWin32HandleInfo);
    ret = glad_vkImportFenceWin32HandleKHR(device, pImportFenceWin32HandleInfo);
    _post_call_vulkan_callback((void*) &ret, "vkImportFenceWin32HandleKHR", (GLADapiproc) glad_vkImportFenceWin32HandleKHR, 2, device, pImportFenceWin32HandleInfo);
    return ret;
}
PFN_vkImportFenceWin32HandleKHR glad_debug_vkImportFenceWin32HandleKHR = glad_debug_impl_vkImportFenceWin32HandleKHR;

#endif
PFN_vkImportSemaphoreFdKHR glad_vkImportSemaphoreFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkImportSemaphoreFdKHR", (GLADapiproc) glad_vkImportSemaphoreFdKHR, 2, device, pImportSemaphoreFdInfo);
    ret = glad_vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
    _post_call_vulkan_callback((void*) &ret, "vkImportSemaphoreFdKHR", (GLADapiproc) glad_vkImportSemaphoreFdKHR, 2, device, pImportSemaphoreFdInfo);
    return ret;
}
PFN_vkImportSemaphoreFdKHR glad_debug_vkImportSemaphoreFdKHR = glad_debug_impl_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportSemaphoreWin32HandleKHR glad_vkImportSemaphoreWin32HandleKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportSemaphoreWin32HandleKHR(VkDevice device, const VkImportSemaphoreWin32HandleInfoKHR * pImportSemaphoreWin32HandleInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkImportSemaphoreWin32HandleKHR", (GLADapiproc) glad_vkImportSemaphoreWin32HandleKHR, 2, device, pImportSemaphoreWin32HandleInfo);
    ret = glad_vkImportSemaphoreWin32HandleKHR(device, pImportSemaphoreWin32HandleInfo);
    _post_call_vulkan_callback((void*) &ret, "vkImportSemaphoreWin32HandleKHR", (GLADapiproc) glad_vkImportSemaphoreWin32HandleKHR, 2, device, pImportSemaphoreWin32HandleInfo);
    return ret;
}
PFN_vkImportSemaphoreWin32HandleKHR glad_debug_vkImportSemaphoreWin32HandleKHR = glad_debug_impl_vkImportSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkImportSemaphoreZirconHandleFUCHSIA glad_vkImportSemaphoreZirconHandleFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportSemaphoreZirconHandleFUCHSIA(VkDevice device, const VkImportSemaphoreZirconHandleInfoFUCHSIA * pImportSemaphoreZirconHandleInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkImportSemaphoreZirconHandleFUCHSIA", (GLADapiproc) glad_vkImportSemaphoreZirconHandleFUCHSIA, 2, device, pImportSemaphoreZirconHandleInfo);
    ret = glad_vkImportSemaphoreZirconHandleFUCHSIA(device, pImportSemaphoreZirconHandleInfo);
    _post_call_vulkan_callback((void*) &ret, "vkImportSemaphoreZirconHandleFUCHSIA", (GLADapiproc) glad_vkImportSemaphoreZirconHandleFUCHSIA, 2, device, pImportSemaphoreZirconHandleInfo);
    return ret;
}
PFN_vkImportSemaphoreZirconHandleFUCHSIA glad_debug_vkImportSemaphoreZirconHandleFUCHSIA = glad_debug_impl_vkImportSemaphoreZirconHandleFUCHSIA;

#endif
PFN_vkInitializePerformanceApiINTEL glad_vkInitializePerformanceApiINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkInitializePerformanceApiINTEL(VkDevice device, const VkInitializePerformanceApiInfoINTEL * pInitializeInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkInitializePerformanceApiINTEL", (GLADapiproc) glad_vkInitializePerformanceApiINTEL, 2, device, pInitializeInfo);
    ret = glad_vkInitializePerformanceApiINTEL(device, pInitializeInfo);
    _post_call_vulkan_callback((void*) &ret, "vkInitializePerformanceApiINTEL", (GLADapiproc) glad_vkInitializePerformanceApiINTEL, 2, device, pInitializeInfo);
    return ret;
}
PFN_vkInitializePerformanceApiINTEL glad_debug_vkInitializePerformanceApiINTEL = glad_debug_impl_vkInitializePerformanceApiINTEL;
PFN_vkInvalidateMappedMemoryRanges glad_vkInvalidateMappedMemoryRanges = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkInvalidateMappedMemoryRanges(VkDevice device, uint32_t memoryRangeCount, const VkMappedMemoryRange * pMemoryRanges) {
    VkResult ret;
    _pre_call_vulkan_callback("vkInvalidateMappedMemoryRanges", (GLADapiproc) glad_vkInvalidateMappedMemoryRanges, 3, device, memoryRangeCount, pMemoryRanges);
    ret = glad_vkInvalidateMappedMemoryRanges(device, memoryRangeCount, pMemoryRanges);
    _post_call_vulkan_callback((void*) &ret, "vkInvalidateMappedMemoryRanges", (GLADapiproc) glad_vkInvalidateMappedMemoryRanges, 3, device, memoryRangeCount, pMemoryRanges);
    return ret;
}
PFN_vkInvalidateMappedMemoryRanges glad_debug_vkInvalidateMappedMemoryRanges = glad_debug_impl_vkInvalidateMappedMemoryRanges;
PFN_vkLatencySleepNV glad_vkLatencySleepNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkLatencySleepNV(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepInfoNV * pSleepInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkLatencySleepNV", (GLADapiproc) glad_vkLatencySleepNV, 3, device, swapchain, pSleepInfo);
    ret = glad_vkLatencySleepNV(device, swapchain, pSleepInfo);
    _post_call_vulkan_callback((void*) &ret, "vkLatencySleepNV", (GLADapiproc) glad_vkLatencySleepNV, 3, device, swapchain, pSleepInfo);
    return ret;
}
PFN_vkLatencySleepNV glad_debug_vkLatencySleepNV = glad_debug_impl_vkLatencySleepNV;
PFN_vkMapMemory glad_vkMapMemory = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkMapMemory(VkDevice device, VkDeviceMemory memory, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void ** ppData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkMapMemory", (GLADapiproc) glad_vkMapMemory, 6, device, memory, offset, size, flags, ppData);
    ret = glad_vkMapMemory(device, memory, offset, size, flags, ppData);
    _post_call_vulkan_callback((void*) &ret, "vkMapMemory", (GLADapiproc) glad_vkMapMemory, 6, device, memory, offset, size, flags, ppData);
    return ret;
}
PFN_vkMapMemory glad_debug_vkMapMemory = glad_debug_impl_vkMapMemory;
PFN_vkMapMemory2KHR glad_vkMapMemory2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkMapMemory2KHR(VkDevice device, const VkMemoryMapInfoKHR * pMemoryMapInfo, void ** ppData) {
    VkResult ret;
    _pre_call_vulkan_callback("vkMapMemory2KHR", (GLADapiproc) glad_vkMapMemory2KHR, 3, device, pMemoryMapInfo, ppData);
    ret = glad_vkMapMemory2KHR(device, pMemoryMapInfo, ppData);
    _post_call_vulkan_callback((void*) &ret, "vkMapMemory2KHR", (GLADapiproc) glad_vkMapMemory2KHR, 3, device, pMemoryMapInfo, ppData);
    return ret;
}
PFN_vkMapMemory2KHR glad_debug_vkMapMemory2KHR = glad_debug_impl_vkMapMemory2KHR;
PFN_vkMergePipelineCaches glad_vkMergePipelineCaches = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkMergePipelineCaches(VkDevice device, VkPipelineCache dstCache, uint32_t srcCacheCount, const VkPipelineCache * pSrcCaches) {
    VkResult ret;
    _pre_call_vulkan_callback("vkMergePipelineCaches", (GLADapiproc) glad_vkMergePipelineCaches, 4, device, dstCache, srcCacheCount, pSrcCaches);
    ret = glad_vkMergePipelineCaches(device, dstCache, srcCacheCount, pSrcCaches);
    _post_call_vulkan_callback((void*) &ret, "vkMergePipelineCaches", (GLADapiproc) glad_vkMergePipelineCaches, 4, device, dstCache, srcCacheCount, pSrcCaches);
    return ret;
}
PFN_vkMergePipelineCaches glad_debug_vkMergePipelineCaches = glad_debug_impl_vkMergePipelineCaches;
PFN_vkMergeValidationCachesEXT glad_vkMergeValidationCachesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkMergeValidationCachesEXT(VkDevice device, VkValidationCacheEXT dstCache, uint32_t srcCacheCount, const VkValidationCacheEXT * pSrcCaches) {
    VkResult ret;
    _pre_call_vulkan_callback("vkMergeValidationCachesEXT", (GLADapiproc) glad_vkMergeValidationCachesEXT, 4, device, dstCache, srcCacheCount, pSrcCaches);
    ret = glad_vkMergeValidationCachesEXT(device, dstCache, srcCacheCount, pSrcCaches);
    _post_call_vulkan_callback((void*) &ret, "vkMergeValidationCachesEXT", (GLADapiproc) glad_vkMergeValidationCachesEXT, 4, device, dstCache, srcCacheCount, pSrcCaches);
    return ret;
}
PFN_vkMergeValidationCachesEXT glad_debug_vkMergeValidationCachesEXT = glad_debug_impl_vkMergeValidationCachesEXT;
PFN_vkQueueBeginDebugUtilsLabelEXT glad_vkQueueBeginDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkan_callback("vkQueueBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueBeginDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    glad_vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
    _post_call_vulkan_callback(NULL, "vkQueueBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueBeginDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    
}
PFN_vkQueueBeginDebugUtilsLabelEXT glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT;
PFN_vkQueueBindSparse glad_vkQueueBindSparse = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueBindSparse(VkQueue queue, uint32_t bindInfoCount, const VkBindSparseInfo * pBindInfo, VkFence fence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueBindSparse", (GLADapiproc) glad_vkQueueBindSparse, 4, queue, bindInfoCount, pBindInfo, fence);
    ret = glad_vkQueueBindSparse(queue, bindInfoCount, pBindInfo, fence);
    _post_call_vulkan_callback((void*) &ret, "vkQueueBindSparse", (GLADapiproc) glad_vkQueueBindSparse, 4, queue, bindInfoCount, pBindInfo, fence);
    return ret;
}
PFN_vkQueueBindSparse glad_debug_vkQueueBindSparse = glad_debug_impl_vkQueueBindSparse;
PFN_vkQueueEndDebugUtilsLabelEXT glad_vkQueueEndDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueEndDebugUtilsLabelEXT(VkQueue queue) {
    _pre_call_vulkan_callback("vkQueueEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueEndDebugUtilsLabelEXT, 1, queue);
    glad_vkQueueEndDebugUtilsLabelEXT(queue);
    _post_call_vulkan_callback(NULL, "vkQueueEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueEndDebugUtilsLabelEXT, 1, queue);
    
}
PFN_vkQueueEndDebugUtilsLabelEXT glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_debug_impl_vkQueueEndDebugUtilsLabelEXT;
PFN_vkQueueInsertDebugUtilsLabelEXT glad_vkQueueInsertDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkan_callback("vkQueueInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueInsertDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    glad_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
    _post_call_vulkan_callback(NULL, "vkQueueInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueInsertDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    
}
PFN_vkQueueInsertDebugUtilsLabelEXT glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT;
PFN_vkQueueNotifyOutOfBandNV glad_vkQueueNotifyOutOfBandNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueNotifyOutOfBandNV(VkQueue queue, const VkOutOfBandQueueTypeInfoNV * pQueueTypeInfo) {
    _pre_call_vulkan_callback("vkQueueNotifyOutOfBandNV", (GLADapiproc) glad_vkQueueNotifyOutOfBandNV, 2, queue, pQueueTypeInfo);
    glad_vkQueueNotifyOutOfBandNV(queue, pQueueTypeInfo);
    _post_call_vulkan_callback(NULL, "vkQueueNotifyOutOfBandNV", (GLADapiproc) glad_vkQueueNotifyOutOfBandNV, 2, queue, pQueueTypeInfo);
    
}
PFN_vkQueueNotifyOutOfBandNV glad_debug_vkQueueNotifyOutOfBandNV = glad_debug_impl_vkQueueNotifyOutOfBandNV;
PFN_vkQueuePresentKHR glad_vkQueuePresentKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR * pPresentInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueuePresentKHR", (GLADapiproc) glad_vkQueuePresentKHR, 2, queue, pPresentInfo);
    ret = glad_vkQueuePresentKHR(queue, pPresentInfo);
    _post_call_vulkan_callback((void*) &ret, "vkQueuePresentKHR", (GLADapiproc) glad_vkQueuePresentKHR, 2, queue, pPresentInfo);
    return ret;
}
PFN_vkQueuePresentKHR glad_debug_vkQueuePresentKHR = glad_debug_impl_vkQueuePresentKHR;
PFN_vkQueueSetPerformanceConfigurationINTEL glad_vkQueueSetPerformanceConfigurationINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSetPerformanceConfigurationINTEL(VkQueue queue, VkPerformanceConfigurationINTEL configuration) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueSetPerformanceConfigurationINTEL", (GLADapiproc) glad_vkQueueSetPerformanceConfigurationINTEL, 2, queue, configuration);
    ret = glad_vkQueueSetPerformanceConfigurationINTEL(queue, configuration);
    _post_call_vulkan_callback((void*) &ret, "vkQueueSetPerformanceConfigurationINTEL", (GLADapiproc) glad_vkQueueSetPerformanceConfigurationINTEL, 2, queue, configuration);
    return ret;
}
PFN_vkQueueSetPerformanceConfigurationINTEL glad_debug_vkQueueSetPerformanceConfigurationINTEL = glad_debug_impl_vkQueueSetPerformanceConfigurationINTEL;
PFN_vkQueueSubmit glad_vkQueueSubmit = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSubmit(VkQueue queue, uint32_t submitCount, const VkSubmitInfo * pSubmits, VkFence fence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueSubmit", (GLADapiproc) glad_vkQueueSubmit, 4, queue, submitCount, pSubmits, fence);
    ret = glad_vkQueueSubmit(queue, submitCount, pSubmits, fence);
    _post_call_vulkan_callback((void*) &ret, "vkQueueSubmit", (GLADapiproc) glad_vkQueueSubmit, 4, queue, submitCount, pSubmits, fence);
    return ret;
}
PFN_vkQueueSubmit glad_debug_vkQueueSubmit = glad_debug_impl_vkQueueSubmit;
PFN_vkQueueSubmit2 glad_vkQueueSubmit2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSubmit2(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueSubmit2", (GLADapiproc) glad_vkQueueSubmit2, 4, queue, submitCount, pSubmits, fence);
    ret = glad_vkQueueSubmit2(queue, submitCount, pSubmits, fence);
    _post_call_vulkan_callback((void*) &ret, "vkQueueSubmit2", (GLADapiproc) glad_vkQueueSubmit2, 4, queue, submitCount, pSubmits, fence);
    return ret;
}
PFN_vkQueueSubmit2 glad_debug_vkQueueSubmit2 = glad_debug_impl_vkQueueSubmit2;
PFN_vkQueueSubmit2KHR glad_vkQueueSubmit2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueSubmit2KHR", (GLADapiproc) glad_vkQueueSubmit2KHR, 4, queue, submitCount, pSubmits, fence);
    ret = glad_vkQueueSubmit2KHR(queue, submitCount, pSubmits, fence);
    _post_call_vulkan_callback((void*) &ret, "vkQueueSubmit2KHR", (GLADapiproc) glad_vkQueueSubmit2KHR, 4, queue, submitCount, pSubmits, fence);
    return ret;
}
PFN_vkQueueSubmit2KHR glad_debug_vkQueueSubmit2KHR = glad_debug_impl_vkQueueSubmit2KHR;
PFN_vkQueueWaitIdle glad_vkQueueWaitIdle = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueWaitIdle(VkQueue queue) {
    VkResult ret;
    _pre_call_vulkan_callback("vkQueueWaitIdle", (GLADapiproc) glad_vkQueueWaitIdle, 1, queue);
    ret = glad_vkQueueWaitIdle(queue);
    _post_call_vulkan_callback((void*) &ret, "vkQueueWaitIdle", (GLADapiproc) glad_vkQueueWaitIdle, 1, queue);
    return ret;
}
PFN_vkQueueWaitIdle glad_debug_vkQueueWaitIdle = glad_debug_impl_vkQueueWaitIdle;
PFN_vkRegisterDeviceEventEXT glad_vkRegisterDeviceEventEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkRegisterDeviceEventEXT", (GLADapiproc) glad_vkRegisterDeviceEventEXT, 4, device, pDeviceEventInfo, pAllocator, pFence);
    ret = glad_vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
    _post_call_vulkan_callback((void*) &ret, "vkRegisterDeviceEventEXT", (GLADapiproc) glad_vkRegisterDeviceEventEXT, 4, device, pDeviceEventInfo, pAllocator, pFence);
    return ret;
}
PFN_vkRegisterDeviceEventEXT glad_debug_vkRegisterDeviceEventEXT = glad_debug_impl_vkRegisterDeviceEventEXT;
PFN_vkRegisterDisplayEventEXT glad_vkRegisterDisplayEventEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {
    VkResult ret;
    _pre_call_vulkan_callback("vkRegisterDisplayEventEXT", (GLADapiproc) glad_vkRegisterDisplayEventEXT, 5, device, display, pDisplayEventInfo, pAllocator, pFence);
    ret = glad_vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
    _post_call_vulkan_callback((void*) &ret, "vkRegisterDisplayEventEXT", (GLADapiproc) glad_vkRegisterDisplayEventEXT, 5, device, display, pDisplayEventInfo, pAllocator, pFence);
    return ret;
}
PFN_vkRegisterDisplayEventEXT glad_debug_vkRegisterDisplayEventEXT = glad_debug_impl_vkRegisterDisplayEventEXT;
PFN_vkReleaseDisplayEXT glad_vkReleaseDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkan_callback("vkReleaseDisplayEXT", (GLADapiproc) glad_vkReleaseDisplayEXT, 2, physicalDevice, display);
    ret = glad_vkReleaseDisplayEXT(physicalDevice, display);
    _post_call_vulkan_callback((void*) &ret, "vkReleaseDisplayEXT", (GLADapiproc) glad_vkReleaseDisplayEXT, 2, physicalDevice, display);
    return ret;
}
PFN_vkReleaseDisplayEXT glad_debug_vkReleaseDisplayEXT = glad_debug_impl_vkReleaseDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkReleaseFullScreenExclusiveModeEXT glad_vkReleaseFullScreenExclusiveModeEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkReleaseFullScreenExclusiveModeEXT(VkDevice device, VkSwapchainKHR swapchain) {
    VkResult ret;
    _pre_call_vulkan_callback("vkReleaseFullScreenExclusiveModeEXT", (GLADapiproc) glad_vkReleaseFullScreenExclusiveModeEXT, 2, device, swapchain);
    ret = glad_vkReleaseFullScreenExclusiveModeEXT(device, swapchain);
    _post_call_vulkan_callback((void*) &ret, "vkReleaseFullScreenExclusiveModeEXT", (GLADapiproc) glad_vkReleaseFullScreenExclusiveModeEXT, 2, device, swapchain);
    return ret;
}
PFN_vkReleaseFullScreenExclusiveModeEXT glad_debug_vkReleaseFullScreenExclusiveModeEXT = glad_debug_impl_vkReleaseFullScreenExclusiveModeEXT;

#endif
PFN_vkReleasePerformanceConfigurationINTEL glad_vkReleasePerformanceConfigurationINTEL = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkReleasePerformanceConfigurationINTEL(VkDevice device, VkPerformanceConfigurationINTEL configuration) {
    VkResult ret;
    _pre_call_vulkan_callback("vkReleasePerformanceConfigurationINTEL", (GLADapiproc) glad_vkReleasePerformanceConfigurationINTEL, 2, device, configuration);
    ret = glad_vkReleasePerformanceConfigurationINTEL(device, configuration);
    _post_call_vulkan_callback((void*) &ret, "vkReleasePerformanceConfigurationINTEL", (GLADapiproc) glad_vkReleasePerformanceConfigurationINTEL, 2, device, configuration);
    return ret;
}
PFN_vkReleasePerformanceConfigurationINTEL glad_debug_vkReleasePerformanceConfigurationINTEL = glad_debug_impl_vkReleasePerformanceConfigurationINTEL;
PFN_vkReleaseProfilingLockKHR glad_vkReleaseProfilingLockKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkReleaseProfilingLockKHR(VkDevice device) {
    _pre_call_vulkan_callback("vkReleaseProfilingLockKHR", (GLADapiproc) glad_vkReleaseProfilingLockKHR, 1, device);
    glad_vkReleaseProfilingLockKHR(device);
    _post_call_vulkan_callback(NULL, "vkReleaseProfilingLockKHR", (GLADapiproc) glad_vkReleaseProfilingLockKHR, 1, device);
    
}
PFN_vkReleaseProfilingLockKHR glad_debug_vkReleaseProfilingLockKHR = glad_debug_impl_vkReleaseProfilingLockKHR;
PFN_vkReleaseSwapchainImagesEXT glad_vkReleaseSwapchainImagesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkReleaseSwapchainImagesEXT(VkDevice device, const VkReleaseSwapchainImagesInfoEXT * pReleaseInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkReleaseSwapchainImagesEXT", (GLADapiproc) glad_vkReleaseSwapchainImagesEXT, 2, device, pReleaseInfo);
    ret = glad_vkReleaseSwapchainImagesEXT(device, pReleaseInfo);
    _post_call_vulkan_callback((void*) &ret, "vkReleaseSwapchainImagesEXT", (GLADapiproc) glad_vkReleaseSwapchainImagesEXT, 2, device, pReleaseInfo);
    return ret;
}
PFN_vkReleaseSwapchainImagesEXT glad_debug_vkReleaseSwapchainImagesEXT = glad_debug_impl_vkReleaseSwapchainImagesEXT;
PFN_vkResetCommandBuffer glad_vkResetCommandBuffer = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkResetCommandBuffer(VkCommandBuffer commandBuffer, VkCommandBufferResetFlags flags) {
    VkResult ret;
    _pre_call_vulkan_callback("vkResetCommandBuffer", (GLADapiproc) glad_vkResetCommandBuffer, 2, commandBuffer, flags);
    ret = glad_vkResetCommandBuffer(commandBuffer, flags);
    _post_call_vulkan_callback((void*) &ret, "vkResetCommandBuffer", (GLADapiproc) glad_vkResetCommandBuffer, 2, commandBuffer, flags);
    return ret;
}
PFN_vkResetCommandBuffer glad_debug_vkResetCommandBuffer = glad_debug_impl_vkResetCommandBuffer;
PFN_vkResetCommandPool glad_vkResetCommandPool = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkResetCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolResetFlags flags) {
    VkResult ret;
    _pre_call_vulkan_callback("vkResetCommandPool", (GLADapiproc) glad_vkResetCommandPool, 3, device, commandPool, flags);
    ret = glad_vkResetCommandPool(device, commandPool, flags);
    _post_call_vulkan_callback((void*) &ret, "vkResetCommandPool", (GLADapiproc) glad_vkResetCommandPool, 3, device, commandPool, flags);
    return ret;
}
PFN_vkResetCommandPool glad_debug_vkResetCommandPool = glad_debug_impl_vkResetCommandPool;
PFN_vkResetDescriptorPool glad_vkResetDescriptorPool = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkResetDescriptorPool(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorPoolResetFlags flags) {
    VkResult ret;
    _pre_call_vulkan_callback("vkResetDescriptorPool", (GLADapiproc) glad_vkResetDescriptorPool, 3, device, descriptorPool, flags);
    ret = glad_vkResetDescriptorPool(device, descriptorPool, flags);
    _post_call_vulkan_callback((void*) &ret, "vkResetDescriptorPool", (GLADapiproc) glad_vkResetDescriptorPool, 3, device, descriptorPool, flags);
    return ret;
}
PFN_vkResetDescriptorPool glad_debug_vkResetDescriptorPool = glad_debug_impl_vkResetDescriptorPool;
PFN_vkResetEvent glad_vkResetEvent = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkResetEvent(VkDevice device, VkEvent event) {
    VkResult ret;
    _pre_call_vulkan_callback("vkResetEvent", (GLADapiproc) glad_vkResetEvent, 2, device, event);
    ret = glad_vkResetEvent(device, event);
    _post_call_vulkan_callback((void*) &ret, "vkResetEvent", (GLADapiproc) glad_vkResetEvent, 2, device, event);
    return ret;
}
PFN_vkResetEvent glad_debug_vkResetEvent = glad_debug_impl_vkResetEvent;
PFN_vkResetFences glad_vkResetFences = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkResetFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences) {
    VkResult ret;
    _pre_call_vulkan_callback("vkResetFences", (GLADapiproc) glad_vkResetFences, 3, device, fenceCount, pFences);
    ret = glad_vkResetFences(device, fenceCount, pFences);
    _post_call_vulkan_callback((void*) &ret, "vkResetFences", (GLADapiproc) glad_vkResetFences, 3, device, fenceCount, pFences);
    return ret;
}
PFN_vkResetFences glad_debug_vkResetFences = glad_debug_impl_vkResetFences;
PFN_vkResetQueryPool glad_vkResetQueryPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    _pre_call_vulkan_callback("vkResetQueryPool", (GLADapiproc) glad_vkResetQueryPool, 4, device, queryPool, firstQuery, queryCount);
    glad_vkResetQueryPool(device, queryPool, firstQuery, queryCount);
    _post_call_vulkan_callback(NULL, "vkResetQueryPool", (GLADapiproc) glad_vkResetQueryPool, 4, device, queryPool, firstQuery, queryCount);
    
}
PFN_vkResetQueryPool glad_debug_vkResetQueryPool = glad_debug_impl_vkResetQueryPool;
PFN_vkResetQueryPoolEXT glad_vkResetQueryPoolEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkResetQueryPoolEXT(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    _pre_call_vulkan_callback("vkResetQueryPoolEXT", (GLADapiproc) glad_vkResetQueryPoolEXT, 4, device, queryPool, firstQuery, queryCount);
    glad_vkResetQueryPoolEXT(device, queryPool, firstQuery, queryCount);
    _post_call_vulkan_callback(NULL, "vkResetQueryPoolEXT", (GLADapiproc) glad_vkResetQueryPoolEXT, 4, device, queryPool, firstQuery, queryCount);
    
}
PFN_vkResetQueryPoolEXT glad_debug_vkResetQueryPoolEXT = glad_debug_impl_vkResetQueryPoolEXT;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA glad_vkSetBufferCollectionBufferConstraintsFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetBufferCollectionBufferConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkBufferConstraintsInfoFUCHSIA * pBufferConstraintsInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetBufferCollectionBufferConstraintsFUCHSIA", (GLADapiproc) glad_vkSetBufferCollectionBufferConstraintsFUCHSIA, 3, device, collection, pBufferConstraintsInfo);
    ret = glad_vkSetBufferCollectionBufferConstraintsFUCHSIA(device, collection, pBufferConstraintsInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSetBufferCollectionBufferConstraintsFUCHSIA", (GLADapiproc) glad_vkSetBufferCollectionBufferConstraintsFUCHSIA, 3, device, collection, pBufferConstraintsInfo);
    return ret;
}
PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA glad_debug_vkSetBufferCollectionBufferConstraintsFUCHSIA = glad_debug_impl_vkSetBufferCollectionBufferConstraintsFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkSetBufferCollectionImageConstraintsFUCHSIA glad_vkSetBufferCollectionImageConstraintsFUCHSIA = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetBufferCollectionImageConstraintsFUCHSIA(VkDevice device, VkBufferCollectionFUCHSIA collection, const VkImageConstraintsInfoFUCHSIA * pImageConstraintsInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetBufferCollectionImageConstraintsFUCHSIA", (GLADapiproc) glad_vkSetBufferCollectionImageConstraintsFUCHSIA, 3, device, collection, pImageConstraintsInfo);
    ret = glad_vkSetBufferCollectionImageConstraintsFUCHSIA(device, collection, pImageConstraintsInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSetBufferCollectionImageConstraintsFUCHSIA", (GLADapiproc) glad_vkSetBufferCollectionImageConstraintsFUCHSIA, 3, device, collection, pImageConstraintsInfo);
    return ret;
}
PFN_vkSetBufferCollectionImageConstraintsFUCHSIA glad_debug_vkSetBufferCollectionImageConstraintsFUCHSIA = glad_debug_impl_vkSetBufferCollectionImageConstraintsFUCHSIA;

#endif
PFN_vkSetDebugUtilsObjectNameEXT glad_vkSetDebugUtilsObjectNameEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetDebugUtilsObjectNameEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectNameEXT, 2, device, pNameInfo);
    ret = glad_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSetDebugUtilsObjectNameEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectNameEXT, 2, device, pNameInfo);
    return ret;
}
PFN_vkSetDebugUtilsObjectNameEXT glad_debug_vkSetDebugUtilsObjectNameEXT = glad_debug_impl_vkSetDebugUtilsObjectNameEXT;
PFN_vkSetDebugUtilsObjectTagEXT glad_vkSetDebugUtilsObjectTagEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetDebugUtilsObjectTagEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectTagEXT, 2, device, pTagInfo);
    ret = glad_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSetDebugUtilsObjectTagEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectTagEXT, 2, device, pTagInfo);
    return ret;
}
PFN_vkSetDebugUtilsObjectTagEXT glad_debug_vkSetDebugUtilsObjectTagEXT = glad_debug_impl_vkSetDebugUtilsObjectTagEXT;
PFN_vkSetDeviceMemoryPriorityEXT glad_vkSetDeviceMemoryPriorityEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSetDeviceMemoryPriorityEXT(VkDevice device, VkDeviceMemory memory, float priority) {
    _pre_call_vulkan_callback("vkSetDeviceMemoryPriorityEXT", (GLADapiproc) glad_vkSetDeviceMemoryPriorityEXT, 3, device, memory, priority);
    glad_vkSetDeviceMemoryPriorityEXT(device, memory, priority);
    _post_call_vulkan_callback(NULL, "vkSetDeviceMemoryPriorityEXT", (GLADapiproc) glad_vkSetDeviceMemoryPriorityEXT, 3, device, memory, priority);
    
}
PFN_vkSetDeviceMemoryPriorityEXT glad_debug_vkSetDeviceMemoryPriorityEXT = glad_debug_impl_vkSetDeviceMemoryPriorityEXT;
PFN_vkSetEvent glad_vkSetEvent = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetEvent(VkDevice device, VkEvent event) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetEvent", (GLADapiproc) glad_vkSetEvent, 2, device, event);
    ret = glad_vkSetEvent(device, event);
    _post_call_vulkan_callback((void*) &ret, "vkSetEvent", (GLADapiproc) glad_vkSetEvent, 2, device, event);
    return ret;
}
PFN_vkSetEvent glad_debug_vkSetEvent = glad_debug_impl_vkSetEvent;
PFN_vkSetHdrMetadataEXT glad_vkSetHdrMetadataEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata) {
    _pre_call_vulkan_callback("vkSetHdrMetadataEXT", (GLADapiproc) glad_vkSetHdrMetadataEXT, 4, device, swapchainCount, pSwapchains, pMetadata);
    glad_vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
    _post_call_vulkan_callback(NULL, "vkSetHdrMetadataEXT", (GLADapiproc) glad_vkSetHdrMetadataEXT, 4, device, swapchainCount, pSwapchains, pMetadata);
    
}
PFN_vkSetHdrMetadataEXT glad_debug_vkSetHdrMetadataEXT = glad_debug_impl_vkSetHdrMetadataEXT;
PFN_vkSetLatencyMarkerNV glad_vkSetLatencyMarkerNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSetLatencyMarkerNV(VkDevice device, VkSwapchainKHR swapchain, const VkSetLatencyMarkerInfoNV * pLatencyMarkerInfo) {
    _pre_call_vulkan_callback("vkSetLatencyMarkerNV", (GLADapiproc) glad_vkSetLatencyMarkerNV, 3, device, swapchain, pLatencyMarkerInfo);
    glad_vkSetLatencyMarkerNV(device, swapchain, pLatencyMarkerInfo);
    _post_call_vulkan_callback(NULL, "vkSetLatencyMarkerNV", (GLADapiproc) glad_vkSetLatencyMarkerNV, 3, device, swapchain, pLatencyMarkerInfo);
    
}
PFN_vkSetLatencyMarkerNV glad_debug_vkSetLatencyMarkerNV = glad_debug_impl_vkSetLatencyMarkerNV;
PFN_vkSetLatencySleepModeNV glad_vkSetLatencySleepModeNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetLatencySleepModeNV(VkDevice device, VkSwapchainKHR swapchain, const VkLatencySleepModeInfoNV * pSleepModeInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetLatencySleepModeNV", (GLADapiproc) glad_vkSetLatencySleepModeNV, 3, device, swapchain, pSleepModeInfo);
    ret = glad_vkSetLatencySleepModeNV(device, swapchain, pSleepModeInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSetLatencySleepModeNV", (GLADapiproc) glad_vkSetLatencySleepModeNV, 3, device, swapchain, pSleepModeInfo);
    return ret;
}
PFN_vkSetLatencySleepModeNV glad_debug_vkSetLatencySleepModeNV = glad_debug_impl_vkSetLatencySleepModeNV;
PFN_vkSetLocalDimmingAMD glad_vkSetLocalDimmingAMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSetLocalDimmingAMD(VkDevice device, VkSwapchainKHR swapChain, VkBool32 localDimmingEnable) {
    _pre_call_vulkan_callback("vkSetLocalDimmingAMD", (GLADapiproc) glad_vkSetLocalDimmingAMD, 3, device, swapChain, localDimmingEnable);
    glad_vkSetLocalDimmingAMD(device, swapChain, localDimmingEnable);
    _post_call_vulkan_callback(NULL, "vkSetLocalDimmingAMD", (GLADapiproc) glad_vkSetLocalDimmingAMD, 3, device, swapChain, localDimmingEnable);
    
}
PFN_vkSetLocalDimmingAMD glad_debug_vkSetLocalDimmingAMD = glad_debug_impl_vkSetLocalDimmingAMD;
PFN_vkSetPrivateData glad_vkSetPrivateData = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetPrivateData", (GLADapiproc) glad_vkSetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, data);
    ret = glad_vkSetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
    _post_call_vulkan_callback((void*) &ret, "vkSetPrivateData", (GLADapiproc) glad_vkSetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, data);
    return ret;
}
PFN_vkSetPrivateData glad_debug_vkSetPrivateData = glad_debug_impl_vkSetPrivateData;
PFN_vkSetPrivateDataEXT glad_vkSetPrivateDataEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetPrivateDataEXT(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSetPrivateDataEXT", (GLADapiproc) glad_vkSetPrivateDataEXT, 5, device, objectType, objectHandle, privateDataSlot, data);
    ret = glad_vkSetPrivateDataEXT(device, objectType, objectHandle, privateDataSlot, data);
    _post_call_vulkan_callback((void*) &ret, "vkSetPrivateDataEXT", (GLADapiproc) glad_vkSetPrivateDataEXT, 5, device, objectType, objectHandle, privateDataSlot, data);
    return ret;
}
PFN_vkSetPrivateDataEXT glad_debug_vkSetPrivateDataEXT = glad_debug_impl_vkSetPrivateDataEXT;
PFN_vkSignalSemaphore glad_vkSignalSemaphore = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo * pSignalInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSignalSemaphore", (GLADapiproc) glad_vkSignalSemaphore, 2, device, pSignalInfo);
    ret = glad_vkSignalSemaphore(device, pSignalInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSignalSemaphore", (GLADapiproc) glad_vkSignalSemaphore, 2, device, pSignalInfo);
    return ret;
}
PFN_vkSignalSemaphore glad_debug_vkSignalSemaphore = glad_debug_impl_vkSignalSemaphore;
PFN_vkSignalSemaphoreKHR glad_vkSignalSemaphoreKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSignalSemaphoreKHR(VkDevice device, const VkSemaphoreSignalInfo * pSignalInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkSignalSemaphoreKHR", (GLADapiproc) glad_vkSignalSemaphoreKHR, 2, device, pSignalInfo);
    ret = glad_vkSignalSemaphoreKHR(device, pSignalInfo);
    _post_call_vulkan_callback((void*) &ret, "vkSignalSemaphoreKHR", (GLADapiproc) glad_vkSignalSemaphoreKHR, 2, device, pSignalInfo);
    return ret;
}
PFN_vkSignalSemaphoreKHR glad_debug_vkSignalSemaphoreKHR = glad_debug_impl_vkSignalSemaphoreKHR;
PFN_vkSubmitDebugUtilsMessageEXT glad_vkSubmitDebugUtilsMessageEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData) {
    _pre_call_vulkan_callback("vkSubmitDebugUtilsMessageEXT", (GLADapiproc) glad_vkSubmitDebugUtilsMessageEXT, 4, instance, messageSeverity, messageTypes, pCallbackData);
    glad_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
    _post_call_vulkan_callback(NULL, "vkSubmitDebugUtilsMessageEXT", (GLADapiproc) glad_vkSubmitDebugUtilsMessageEXT, 4, instance, messageSeverity, messageTypes, pCallbackData);
    
}
PFN_vkSubmitDebugUtilsMessageEXT glad_debug_vkSubmitDebugUtilsMessageEXT = glad_debug_impl_vkSubmitDebugUtilsMessageEXT;
PFN_vkTransitionImageLayoutEXT glad_vkTransitionImageLayoutEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkTransitionImageLayoutEXT(VkDevice device, uint32_t transitionCount, const VkHostImageLayoutTransitionInfoEXT * pTransitions) {
    VkResult ret;
    _pre_call_vulkan_callback("vkTransitionImageLayoutEXT", (GLADapiproc) glad_vkTransitionImageLayoutEXT, 3, device, transitionCount, pTransitions);
    ret = glad_vkTransitionImageLayoutEXT(device, transitionCount, pTransitions);
    _post_call_vulkan_callback((void*) &ret, "vkTransitionImageLayoutEXT", (GLADapiproc) glad_vkTransitionImageLayoutEXT, 3, device, transitionCount, pTransitions);
    return ret;
}
PFN_vkTransitionImageLayoutEXT glad_debug_vkTransitionImageLayoutEXT = glad_debug_impl_vkTransitionImageLayoutEXT;
PFN_vkTrimCommandPool glad_vkTrimCommandPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
    _pre_call_vulkan_callback("vkTrimCommandPool", (GLADapiproc) glad_vkTrimCommandPool, 3, device, commandPool, flags);
    glad_vkTrimCommandPool(device, commandPool, flags);
    _post_call_vulkan_callback(NULL, "vkTrimCommandPool", (GLADapiproc) glad_vkTrimCommandPool, 3, device, commandPool, flags);
    
}
PFN_vkTrimCommandPool glad_debug_vkTrimCommandPool = glad_debug_impl_vkTrimCommandPool;
PFN_vkTrimCommandPoolKHR glad_vkTrimCommandPoolKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkTrimCommandPoolKHR(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
    _pre_call_vulkan_callback("vkTrimCommandPoolKHR", (GLADapiproc) glad_vkTrimCommandPoolKHR, 3, device, commandPool, flags);
    glad_vkTrimCommandPoolKHR(device, commandPool, flags);
    _post_call_vulkan_callback(NULL, "vkTrimCommandPoolKHR", (GLADapiproc) glad_vkTrimCommandPoolKHR, 3, device, commandPool, flags);
    
}
PFN_vkTrimCommandPoolKHR glad_debug_vkTrimCommandPoolKHR = glad_debug_impl_vkTrimCommandPoolKHR;
PFN_vkUninitializePerformanceApiINTEL glad_vkUninitializePerformanceApiINTEL = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUninitializePerformanceApiINTEL(VkDevice device) {
    _pre_call_vulkan_callback("vkUninitializePerformanceApiINTEL", (GLADapiproc) glad_vkUninitializePerformanceApiINTEL, 1, device);
    glad_vkUninitializePerformanceApiINTEL(device);
    _post_call_vulkan_callback(NULL, "vkUninitializePerformanceApiINTEL", (GLADapiproc) glad_vkUninitializePerformanceApiINTEL, 1, device);
    
}
PFN_vkUninitializePerformanceApiINTEL glad_debug_vkUninitializePerformanceApiINTEL = glad_debug_impl_vkUninitializePerformanceApiINTEL;
PFN_vkUnmapMemory glad_vkUnmapMemory = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUnmapMemory(VkDevice device, VkDeviceMemory memory) {
    _pre_call_vulkan_callback("vkUnmapMemory", (GLADapiproc) glad_vkUnmapMemory, 2, device, memory);
    glad_vkUnmapMemory(device, memory);
    _post_call_vulkan_callback(NULL, "vkUnmapMemory", (GLADapiproc) glad_vkUnmapMemory, 2, device, memory);
    
}
PFN_vkUnmapMemory glad_debug_vkUnmapMemory = glad_debug_impl_vkUnmapMemory;
PFN_vkUnmapMemory2KHR glad_vkUnmapMemory2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkUnmapMemory2KHR(VkDevice device, const VkMemoryUnmapInfoKHR * pMemoryUnmapInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkUnmapMemory2KHR", (GLADapiproc) glad_vkUnmapMemory2KHR, 2, device, pMemoryUnmapInfo);
    ret = glad_vkUnmapMemory2KHR(device, pMemoryUnmapInfo);
    _post_call_vulkan_callback((void*) &ret, "vkUnmapMemory2KHR", (GLADapiproc) glad_vkUnmapMemory2KHR, 2, device, pMemoryUnmapInfo);
    return ret;
}
PFN_vkUnmapMemory2KHR glad_debug_vkUnmapMemory2KHR = glad_debug_impl_vkUnmapMemory2KHR;
PFN_vkUpdateDescriptorSetWithTemplate glad_vkUpdateDescriptorSetWithTemplate = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData) {
    _pre_call_vulkan_callback("vkUpdateDescriptorSetWithTemplate", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplate, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    glad_vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
    _post_call_vulkan_callback(NULL, "vkUpdateDescriptorSetWithTemplate", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplate, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    
}
PFN_vkUpdateDescriptorSetWithTemplate glad_debug_vkUpdateDescriptorSetWithTemplate = glad_debug_impl_vkUpdateDescriptorSetWithTemplate;
PFN_vkUpdateDescriptorSetWithTemplateKHR glad_vkUpdateDescriptorSetWithTemplateKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUpdateDescriptorSetWithTemplateKHR(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData) {
    _pre_call_vulkan_callback("vkUpdateDescriptorSetWithTemplateKHR", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplateKHR, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    glad_vkUpdateDescriptorSetWithTemplateKHR(device, descriptorSet, descriptorUpdateTemplate, pData);
    _post_call_vulkan_callback(NULL, "vkUpdateDescriptorSetWithTemplateKHR", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplateKHR, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    
}
PFN_vkUpdateDescriptorSetWithTemplateKHR glad_debug_vkUpdateDescriptorSetWithTemplateKHR = glad_debug_impl_vkUpdateDescriptorSetWithTemplateKHR;
PFN_vkUpdateDescriptorSets glad_vkUpdateDescriptorSets = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUpdateDescriptorSets(VkDevice device, uint32_t descriptorWriteCount, const VkWriteDescriptorSet * pDescriptorWrites, uint32_t descriptorCopyCount, const VkCopyDescriptorSet * pDescriptorCopies) {
    _pre_call_vulkan_callback("vkUpdateDescriptorSets", (GLADapiproc) glad_vkUpdateDescriptorSets, 5, device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
    glad_vkUpdateDescriptorSets(device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
    _post_call_vulkan_callback(NULL, "vkUpdateDescriptorSets", (GLADapiproc) glad_vkUpdateDescriptorSets, 5, device, descriptorWriteCount, pDescriptorWrites, descriptorCopyCount, pDescriptorCopies);
    
}
PFN_vkUpdateDescriptorSets glad_debug_vkUpdateDescriptorSets = glad_debug_impl_vkUpdateDescriptorSets;
PFN_vkUpdateVideoSessionParametersKHR glad_vkUpdateVideoSessionParametersKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkUpdateVideoSessionParametersKHR(VkDevice device, VkVideoSessionParametersKHR videoSessionParameters, const VkVideoSessionParametersUpdateInfoKHR * pUpdateInfo) {
    VkResult ret;
    _pre_call_vulkan_callback("vkUpdateVideoSessionParametersKHR", (GLADapiproc) glad_vkUpdateVideoSessionParametersKHR, 3, device, videoSessionParameters, pUpdateInfo);
    ret = glad_vkUpdateVideoSessionParametersKHR(device, videoSessionParameters, pUpdateInfo);
    _post_call_vulkan_callback((void*) &ret, "vkUpdateVideoSessionParametersKHR", (GLADapiproc) glad_vkUpdateVideoSessionParametersKHR, 3, device, videoSessionParameters, pUpdateInfo);
    return ret;
}
PFN_vkUpdateVideoSessionParametersKHR glad_debug_vkUpdateVideoSessionParametersKHR = glad_debug_impl_vkUpdateVideoSessionParametersKHR;
PFN_vkWaitForFences glad_vkWaitForFences = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWaitForFences(VkDevice device, uint32_t fenceCount, const VkFence * pFences, VkBool32 waitAll, uint64_t timeout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWaitForFences", (GLADapiproc) glad_vkWaitForFences, 5, device, fenceCount, pFences, waitAll, timeout);
    ret = glad_vkWaitForFences(device, fenceCount, pFences, waitAll, timeout);
    _post_call_vulkan_callback((void*) &ret, "vkWaitForFences", (GLADapiproc) glad_vkWaitForFences, 5, device, fenceCount, pFences, waitAll, timeout);
    return ret;
}
PFN_vkWaitForFences glad_debug_vkWaitForFences = glad_debug_impl_vkWaitForFences;
PFN_vkWaitForPresentKHR glad_vkWaitForPresentKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWaitForPresentKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t presentId, uint64_t timeout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWaitForPresentKHR", (GLADapiproc) glad_vkWaitForPresentKHR, 4, device, swapchain, presentId, timeout);
    ret = glad_vkWaitForPresentKHR(device, swapchain, presentId, timeout);
    _post_call_vulkan_callback((void*) &ret, "vkWaitForPresentKHR", (GLADapiproc) glad_vkWaitForPresentKHR, 4, device, swapchain, presentId, timeout);
    return ret;
}
PFN_vkWaitForPresentKHR glad_debug_vkWaitForPresentKHR = glad_debug_impl_vkWaitForPresentKHR;
PFN_vkWaitSemaphores glad_vkWaitSemaphores = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWaitSemaphores", (GLADapiproc) glad_vkWaitSemaphores, 3, device, pWaitInfo, timeout);
    ret = glad_vkWaitSemaphores(device, pWaitInfo, timeout);
    _post_call_vulkan_callback((void*) &ret, "vkWaitSemaphores", (GLADapiproc) glad_vkWaitSemaphores, 3, device, pWaitInfo, timeout);
    return ret;
}
PFN_vkWaitSemaphores glad_debug_vkWaitSemaphores = glad_debug_impl_vkWaitSemaphores;
PFN_vkWaitSemaphoresKHR glad_vkWaitSemaphoresKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWaitSemaphoresKHR(VkDevice device, const VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWaitSemaphoresKHR", (GLADapiproc) glad_vkWaitSemaphoresKHR, 3, device, pWaitInfo, timeout);
    ret = glad_vkWaitSemaphoresKHR(device, pWaitInfo, timeout);
    _post_call_vulkan_callback((void*) &ret, "vkWaitSemaphoresKHR", (GLADapiproc) glad_vkWaitSemaphoresKHR, 3, device, pWaitInfo, timeout);
    return ret;
}
PFN_vkWaitSemaphoresKHR glad_debug_vkWaitSemaphoresKHR = glad_debug_impl_vkWaitSemaphoresKHR;
PFN_vkWriteAccelerationStructuresPropertiesKHR glad_vkWriteAccelerationStructuresPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWriteAccelerationStructuresPropertiesKHR(VkDevice device, uint32_t accelerationStructureCount, const VkAccelerationStructureKHR * pAccelerationStructures, VkQueryType queryType, size_t dataSize, void * pData, size_t stride) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWriteAccelerationStructuresPropertiesKHR", (GLADapiproc) glad_vkWriteAccelerationStructuresPropertiesKHR, 7, device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
    ret = glad_vkWriteAccelerationStructuresPropertiesKHR(device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
    _post_call_vulkan_callback((void*) &ret, "vkWriteAccelerationStructuresPropertiesKHR", (GLADapiproc) glad_vkWriteAccelerationStructuresPropertiesKHR, 7, device, accelerationStructureCount, pAccelerationStructures, queryType, dataSize, pData, stride);
    return ret;
}
PFN_vkWriteAccelerationStructuresPropertiesKHR glad_debug_vkWriteAccelerationStructuresPropertiesKHR = glad_debug_impl_vkWriteAccelerationStructuresPropertiesKHR;
PFN_vkWriteMicromapsPropertiesEXT glad_vkWriteMicromapsPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWriteMicromapsPropertiesEXT(VkDevice device, uint32_t micromapCount, const VkMicromapEXT * pMicromaps, VkQueryType queryType, size_t dataSize, void * pData, size_t stride) {
    VkResult ret;
    _pre_call_vulkan_callback("vkWriteMicromapsPropertiesEXT", (GLADapiproc) glad_vkWriteMicromapsPropertiesEXT, 7, device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
    ret = glad_vkWriteMicromapsPropertiesEXT(device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
    _post_call_vulkan_callback((void*) &ret, "vkWriteMicromapsPropertiesEXT", (GLADapiproc) glad_vkWriteMicromapsPropertiesEXT, 7, device, micromapCount, pMicromaps, queryType, dataSize, pData, stride);
    return ret;
}
PFN_vkWriteMicromapsPropertiesEXT glad_debug_vkWriteMicromapsPropertiesEXT = glad_debug_impl_vkWriteMicromapsPropertiesEXT;


static void glad_vk_load_VK_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_0) return;
    glad_vkAllocateCommandBuffers = (PFN_vkAllocateCommandBuffers) load(userptr, "vkAllocateCommandBuffers");
    glad_vkAllocateDescriptorSets = (PFN_vkAllocateDescriptorSets) load(userptr, "vkAllocateDescriptorSets");
    glad_vkAllocateMemory = (PFN_vkAllocateMemory) load(userptr, "vkAllocateMemory");
    glad_vkBeginCommandBuffer = (PFN_vkBeginCommandBuffer) load(userptr, "vkBeginCommandBuffer");
    glad_vkBindBufferMemory = (PFN_vkBindBufferMemory) load(userptr, "vkBindBufferMemory");
    glad_vkBindImageMemory = (PFN_vkBindImageMemory) load(userptr, "vkBindImageMemory");
    glad_vkCmdBeginQuery = (PFN_vkCmdBeginQuery) load(userptr, "vkCmdBeginQuery");
    glad_vkCmdBeginRenderPass = (PFN_vkCmdBeginRenderPass) load(userptr, "vkCmdBeginRenderPass");
    glad_vkCmdBindDescriptorSets = (PFN_vkCmdBindDescriptorSets) load(userptr, "vkCmdBindDescriptorSets");
    glad_vkCmdBindIndexBuffer = (PFN_vkCmdBindIndexBuffer) load(userptr, "vkCmdBindIndexBuffer");
    glad_vkCmdBindPipeline = (PFN_vkCmdBindPipeline) load(userptr, "vkCmdBindPipeline");
    glad_vkCmdBindVertexBuffers = (PFN_vkCmdBindVertexBuffers) load(userptr, "vkCmdBindVertexBuffers");
    glad_vkCmdBlitImage = (PFN_vkCmdBlitImage) load(userptr, "vkCmdBlitImage");
    glad_vkCmdClearAttachments = (PFN_vkCmdClearAttachments) load(userptr, "vkCmdClearAttachments");
    glad_vkCmdClearColorImage = (PFN_vkCmdClearColorImage) load(userptr, "vkCmdClearColorImage");
    glad_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage) load(userptr, "vkCmdClearDepthStencilImage");
    glad_vkCmdCopyBuffer = (PFN_vkCmdCopyBuffer) load(userptr, "vkCmdCopyBuffer");
    glad_vkCmdCopyBufferToImage = (PFN_vkCmdCopyBufferToImage) load(userptr, "vkCmdCopyBufferToImage");
    glad_vkCmdCopyImage = (PFN_vkCmdCopyImage) load(userptr, "vkCmdCopyImage");
    glad_vkCmdCopyImageToBuffer = (PFN_vkCmdCopyImageToBuffer) load(userptr, "vkCmdCopyImageToBuffer");
    glad_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults) load(userptr, "vkCmdCopyQueryPoolResults");
    glad_vkCmdDispatch = (PFN_vkCmdDispatch) load(userptr, "vkCmdDispatch");
    glad_vkCmdDispatchIndirect = (PFN_vkCmdDispatchIndirect) load(userptr, "vkCmdDispatchIndirect");
    glad_vkCmdDraw = (PFN_vkCmdDraw) load(userptr, "vkCmdDraw");
    glad_vkCmdDrawIndexed = (PFN_vkCmdDrawIndexed) load(userptr, "vkCmdDrawIndexed");
    glad_vkCmdDrawIndexedIndirect = (PFN_vkCmdDrawIndexedIndirect) load(userptr, "vkCmdDrawIndexedIndirect");
    glad_vkCmdDrawIndirect = (PFN_vkCmdDrawIndirect) load(userptr, "vkCmdDrawIndirect");
    glad_vkCmdEndQuery = (PFN_vkCmdEndQuery) load(userptr, "vkCmdEndQuery");
    glad_vkCmdEndRenderPass = (PFN_vkCmdEndRenderPass) load(userptr, "vkCmdEndRenderPass");
    glad_vkCmdExecuteCommands = (PFN_vkCmdExecuteCommands) load(userptr, "vkCmdExecuteCommands");
    glad_vkCmdFillBuffer = (PFN_vkCmdFillBuffer) load(userptr, "vkCmdFillBuffer");
    glad_vkCmdNextSubpass = (PFN_vkCmdNextSubpass) load(userptr, "vkCmdNextSubpass");
    glad_vkCmdPipelineBarrier = (PFN_vkCmdPipelineBarrier) load(userptr, "vkCmdPipelineBarrier");
    glad_vkCmdPushConstants = (PFN_vkCmdPushConstants) load(userptr, "vkCmdPushConstants");
    glad_vkCmdResetEvent = (PFN_vkCmdResetEvent) load(userptr, "vkCmdResetEvent");
    glad_vkCmdResetQueryPool = (PFN_vkCmdResetQueryPool) load(userptr, "vkCmdResetQueryPool");
    glad_vkCmdResolveImage = (PFN_vkCmdResolveImage) load(userptr, "vkCmdResolveImage");
    glad_vkCmdSetBlendConstants = (PFN_vkCmdSetBlendConstants) load(userptr, "vkCmdSetBlendConstants");
    glad_vkCmdSetDepthBias = (PFN_vkCmdSetDepthBias) load(userptr, "vkCmdSetDepthBias");
    glad_vkCmdSetDepthBounds = (PFN_vkCmdSetDepthBounds) load(userptr, "vkCmdSetDepthBounds");
    glad_vkCmdSetEvent = (PFN_vkCmdSetEvent) load(userptr, "vkCmdSetEvent");
    glad_vkCmdSetLineWidth = (PFN_vkCmdSetLineWidth) load(userptr, "vkCmdSetLineWidth");
    glad_vkCmdSetScissor = (PFN_vkCmdSetScissor) load(userptr, "vkCmdSetScissor");
    glad_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask) load(userptr, "vkCmdSetStencilCompareMask");
    glad_vkCmdSetStencilReference = (PFN_vkCmdSetStencilReference) load(userptr, "vkCmdSetStencilReference");
    glad_vkCmdSetStencilWriteMask = (PFN_vkCmdSetStencilWriteMask) load(userptr, "vkCmdSetStencilWriteMask");
    glad_vkCmdSetViewport = (PFN_vkCmdSetViewport) load(userptr, "vkCmdSetViewport");
    glad_vkCmdUpdateBuffer = (PFN_vkCmdUpdateBuffer) load(userptr, "vkCmdUpdateBuffer");
    glad_vkCmdWaitEvents = (PFN_vkCmdWaitEvents) load(userptr, "vkCmdWaitEvents");
    glad_vkCmdWriteTimestamp = (PFN_vkCmdWriteTimestamp) load(userptr, "vkCmdWriteTimestamp");
    glad_vkCreateBuffer = (PFN_vkCreateBuffer) load(userptr, "vkCreateBuffer");
    glad_vkCreateBufferView = (PFN_vkCreateBufferView) load(userptr, "vkCreateBufferView");
    glad_vkCreateCommandPool = (PFN_vkCreateCommandPool) load(userptr, "vkCreateCommandPool");
    glad_vkCreateComputePipelines = (PFN_vkCreateComputePipelines) load(userptr, "vkCreateComputePipelines");
    glad_vkCreateDescriptorPool = (PFN_vkCreateDescriptorPool) load(userptr, "vkCreateDescriptorPool");
    glad_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout) load(userptr, "vkCreateDescriptorSetLayout");
    glad_vkCreateDevice = (PFN_vkCreateDevice) load(userptr, "vkCreateDevice");
    glad_vkCreateEvent = (PFN_vkCreateEvent) load(userptr, "vkCreateEvent");
    glad_vkCreateFence = (PFN_vkCreateFence) load(userptr, "vkCreateFence");
    glad_vkCreateFramebuffer = (PFN_vkCreateFramebuffer) load(userptr, "vkCreateFramebuffer");
    glad_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines) load(userptr, "vkCreateGraphicsPipelines");
    glad_vkCreateImage = (PFN_vkCreateImage) load(userptr, "vkCreateImage");
    glad_vkCreateImageView = (PFN_vkCreateImageView) load(userptr, "vkCreateImageView");
    glad_vkCreateInstance = (PFN_vkCreateInstance) load(userptr, "vkCreateInstance");
    glad_vkCreatePipelineCache = (PFN_vkCreatePipelineCache) load(userptr, "vkCreatePipelineCache");
    glad_vkCreatePipelineLayout = (PFN_vkCreatePipelineLayout) load(userptr, "vkCreatePipelineLayout");
    glad_vkCreateQueryPool = (PFN_vkCreateQueryPool) load(userptr, "vkCreateQueryPool");
    glad_vkCreateRenderPass = (PFN_vkCreateRenderPass) load(userptr, "vkCreateRenderPass");
    glad_vkCreateSampler = (PFN_vkCreateSampler) load(userptr, "vkCreateSampler");
    glad_vkCreateSemaphore = (PFN_vkCreateSemaphore) load(userptr, "vkCreateSemaphore");
    glad_vkCreateShaderModule = (PFN_vkCreateShaderModule) load(userptr, "vkCreateShaderModule");
    glad_vkDestroyBuffer = (PFN_vkDestroyBuffer) load(userptr, "vkDestroyBuffer");
    glad_vkDestroyBufferView = (PFN_vkDestroyBufferView) load(userptr, "vkDestroyBufferView");
    glad_vkDestroyCommandPool = (PFN_vkDestroyCommandPool) load(userptr, "vkDestroyCommandPool");
    glad_vkDestroyDescriptorPool = (PFN_vkDestroyDescriptorPool) load(userptr, "vkDestroyDescriptorPool");
    glad_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout) load(userptr, "vkDestroyDescriptorSetLayout");
    glad_vkDestroyDevice = (PFN_vkDestroyDevice) load(userptr, "vkDestroyDevice");
    glad_vkDestroyEvent = (PFN_vkDestroyEvent) load(userptr, "vkDestroyEvent");
    glad_vkDestroyFence = (PFN_vkDestroyFence) load(userptr, "vkDestroyFence");
    glad_vkDestroyFramebuffer = (PFN_vkDestroyFramebuffer) load(userptr, "vkDestroyFramebuffer");
    glad_vkDestroyImage = (PFN_vkDestroyImage) load(userptr, "vkDestroyImage");
    glad_vkDestroyImageView = (PFN_vkDestroyImageView) load(userptr, "vkDestroyImageView");
    glad_vkDestroyInstance = (PFN_vkDestroyInstance) load(userptr, "vkDestroyInstance");
    glad_vkDestroyPipeline = (PFN_vkDestroyPipeline) load(userptr, "vkDestroyPipeline");
    glad_vkDestroyPipelineCache = (PFN_vkDestroyPipelineCache) load(userptr, "vkDestroyPipelineCache");
    glad_vkDestroyPipelineLayout = (PFN_vkDestroyPipelineLayout) load(userptr, "vkDestroyPipelineLayout");
    glad_vkDestroyQueryPool = (PFN_vkDestroyQueryPool) load(userptr, "vkDestroyQueryPool");
    glad_vkDestroyRenderPass = (PFN_vkDestroyRenderPass) load(userptr, "vkDestroyRenderPass");
    glad_vkDestroySampler = (PFN_vkDestroySampler) load(userptr, "vkDestroySampler");
    glad_vkDestroySemaphore = (PFN_vkDestroySemaphore) load(userptr, "vkDestroySemaphore");
    glad_vkDestroyShaderModule = (PFN_vkDestroyShaderModule) load(userptr, "vkDestroyShaderModule");
    glad_vkDeviceWaitIdle = (PFN_vkDeviceWaitIdle) load(userptr, "vkDeviceWaitIdle");
    glad_vkEndCommandBuffer = (PFN_vkEndCommandBuffer) load(userptr, "vkEndCommandBuffer");
    glad_vkEnumerateDeviceExtensionProperties = (PFN_vkEnumerateDeviceExtensionProperties) load(userptr, "vkEnumerateDeviceExtensionProperties");
    glad_vkEnumerateDeviceLayerProperties = (PFN_vkEnumerateDeviceLayerProperties) load(userptr, "vkEnumerateDeviceLayerProperties");
    glad_vkEnumerateInstanceExtensionProperties = (PFN_vkEnumerateInstanceExtensionProperties) load(userptr, "vkEnumerateInstanceExtensionProperties");
    glad_vkEnumerateInstanceLayerProperties = (PFN_vkEnumerateInstanceLayerProperties) load(userptr, "vkEnumerateInstanceLayerProperties");
    glad_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices) load(userptr, "vkEnumeratePhysicalDevices");
    glad_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges) load(userptr, "vkFlushMappedMemoryRanges");
    glad_vkFreeCommandBuffers = (PFN_vkFreeCommandBuffers) load(userptr, "vkFreeCommandBuffers");
    glad_vkFreeDescriptorSets = (PFN_vkFreeDescriptorSets) load(userptr, "vkFreeDescriptorSets");
    glad_vkFreeMemory = (PFN_vkFreeMemory) load(userptr, "vkFreeMemory");
    glad_vkGetBufferMemoryRequirements = (PFN_vkGetBufferMemoryRequirements) load(userptr, "vkGetBufferMemoryRequirements");
    glad_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment) load(userptr, "vkGetDeviceMemoryCommitment");
    glad_vkGetDeviceProcAddr = (PFN_vkGetDeviceProcAddr) load(userptr, "vkGetDeviceProcAddr");
    glad_vkGetDeviceQueue = (PFN_vkGetDeviceQueue) load(userptr, "vkGetDeviceQueue");
    glad_vkGetEventStatus = (PFN_vkGetEventStatus) load(userptr, "vkGetEventStatus");
    glad_vkGetFenceStatus = (PFN_vkGetFenceStatus) load(userptr, "vkGetFenceStatus");
    glad_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements) load(userptr, "vkGetImageMemoryRequirements");
    glad_vkGetImageSparseMemoryRequirements = (PFN_vkGetImageSparseMemoryRequirements) load(userptr, "vkGetImageSparseMemoryRequirements");
    glad_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout) load(userptr, "vkGetImageSubresourceLayout");
    glad_vkGetInstanceProcAddr = (PFN_vkGetInstanceProcAddr) load(userptr, "vkGetInstanceProcAddr");
    glad_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures) load(userptr, "vkGetPhysicalDeviceFeatures");
    glad_vkGetPhysicalDeviceFormatProperties = (PFN_vkGetPhysicalDeviceFormatProperties) load(userptr, "vkGetPhysicalDeviceFormatProperties");
    glad_vkGetPhysicalDeviceImageFormatProperties = (PFN_vkGetPhysicalDeviceImageFormatProperties) load(userptr, "vkGetPhysicalDeviceImageFormatProperties");
    glad_vkGetPhysicalDeviceMemoryProperties = (PFN_vkGetPhysicalDeviceMemoryProperties) load(userptr, "vkGetPhysicalDeviceMemoryProperties");
    glad_vkGetPhysicalDeviceProperties = (PFN_vkGetPhysicalDeviceProperties) load(userptr, "vkGetPhysicalDeviceProperties");
    glad_vkGetPhysicalDeviceQueueFamilyProperties = (PFN_vkGetPhysicalDeviceQueueFamilyProperties) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties");
    glad_vkGetPipelineCacheData = (PFN_vkGetPipelineCacheData) load(userptr, "vkGetPipelineCacheData");
    glad_vkGetQueryPoolResults = (PFN_vkGetQueryPoolResults) load(userptr, "vkGetQueryPoolResults");
    glad_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity) load(userptr, "vkGetRenderAreaGranularity");
    glad_vkInvalidateMappedMemoryRanges = (PFN_vkInvalidateMappedMemoryRanges) load(userptr, "vkInvalidateMappedMemoryRanges");
    glad_vkMapMemory = (PFN_vkMapMemory) load(userptr, "vkMapMemory");
    glad_vkMergePipelineCaches = (PFN_vkMergePipelineCaches) load(userptr, "vkMergePipelineCaches");
    glad_vkQueueBindSparse = (PFN_vkQueueBindSparse) load(userptr, "vkQueueBindSparse");
    glad_vkQueueSubmit = (PFN_vkQueueSubmit) load(userptr, "vkQueueSubmit");
    glad_vkQueueWaitIdle = (PFN_vkQueueWaitIdle) load(userptr, "vkQueueWaitIdle");
    glad_vkResetCommandBuffer = (PFN_vkResetCommandBuffer) load(userptr, "vkResetCommandBuffer");
    glad_vkResetCommandPool = (PFN_vkResetCommandPool) load(userptr, "vkResetCommandPool");
    glad_vkResetDescriptorPool = (PFN_vkResetDescriptorPool) load(userptr, "vkResetDescriptorPool");
    glad_vkResetEvent = (PFN_vkResetEvent) load(userptr, "vkResetEvent");
    glad_vkResetFences = (PFN_vkResetFences) load(userptr, "vkResetFences");
    glad_vkSetEvent = (PFN_vkSetEvent) load(userptr, "vkSetEvent");
    glad_vkUnmapMemory = (PFN_vkUnmapMemory) load(userptr, "vkUnmapMemory");
    glad_vkUpdateDescriptorSets = (PFN_vkUpdateDescriptorSets) load(userptr, "vkUpdateDescriptorSets");
    glad_vkWaitForFences = (PFN_vkWaitForFences) load(userptr, "vkWaitForFences");
}
static void glad_vk_load_VK_VERSION_1_1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_1) return;
    glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2) load(userptr, "vkBindBufferMemory2");
    glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2) load(userptr, "vkBindImageMemory2");
    glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase) load(userptr, "vkCmdDispatchBase");
    glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask) load(userptr, "vkCmdSetDeviceMask");
    glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate) load(userptr, "vkCreateDescriptorUpdateTemplate");
    glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion) load(userptr, "vkCreateSamplerYcbcrConversion");
    glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate) load(userptr, "vkDestroyDescriptorUpdateTemplate");
    glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion) load(userptr, "vkDestroySamplerYcbcrConversion");
    glad_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
    glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups) load(userptr, "vkEnumeratePhysicalDeviceGroups");
    glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2) load(userptr, "vkGetBufferMemoryRequirements2");
    glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport) load(userptr, "vkGetDescriptorSetLayoutSupport");
    glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures) load(userptr, "vkGetDeviceGroupPeerMemoryFeatures");
    glad_vkGetDeviceQueue2 = (PFN_vkGetDeviceQueue2) load(userptr, "vkGetDeviceQueue2");
    glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2) load(userptr, "vkGetImageMemoryRequirements2");
    glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2) load(userptr, "vkGetImageSparseMemoryRequirements2");
    glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties) load(userptr, "vkGetPhysicalDeviceExternalBufferProperties");
    glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties) load(userptr, "vkGetPhysicalDeviceExternalFenceProperties");
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties) load(userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
    glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2) load(userptr, "vkGetPhysicalDeviceFeatures2");
    glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2) load(userptr, "vkGetPhysicalDeviceFormatProperties2");
    glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2");
    glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2) load(userptr, "vkGetPhysicalDeviceMemoryProperties2");
    glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2) load(userptr, "vkGetPhysicalDeviceProperties2");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
    glad_vkTrimCommandPool = (PFN_vkTrimCommandPool) load(userptr, "vkTrimCommandPool");
    glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate) load(userptr, "vkUpdateDescriptorSetWithTemplate");
}
static void glad_vk_load_VK_VERSION_1_2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_2) return;
    glad_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2) load(userptr, "vkCmdBeginRenderPass2");
    glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount) load(userptr, "vkCmdDrawIndexedIndirectCount");
    glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount) load(userptr, "vkCmdDrawIndirectCount");
    glad_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2) load(userptr, "vkCmdEndRenderPass2");
    glad_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2) load(userptr, "vkCmdNextSubpass2");
    glad_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2) load(userptr, "vkCreateRenderPass2");
    glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress) load(userptr, "vkGetBufferDeviceAddress");
    glad_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress) load(userptr, "vkGetBufferOpaqueCaptureAddress");
    glad_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddress");
    glad_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue) load(userptr, "vkGetSemaphoreCounterValue");
    glad_vkResetQueryPool = (PFN_vkResetQueryPool) load(userptr, "vkResetQueryPool");
    glad_vkSignalSemaphore = (PFN_vkSignalSemaphore) load(userptr, "vkSignalSemaphore");
    glad_vkWaitSemaphores = (PFN_vkWaitSemaphores) load(userptr, "vkWaitSemaphores");
}
static void glad_vk_load_VK_VERSION_1_3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VERSION_1_3) return;
    glad_vkCmdBeginRendering = (PFN_vkCmdBeginRendering) load(userptr, "vkCmdBeginRendering");
    glad_vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2) load(userptr, "vkCmdBindVertexBuffers2");
    glad_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2) load(userptr, "vkCmdBlitImage2");
    glad_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2) load(userptr, "vkCmdCopyBuffer2");
    glad_vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2) load(userptr, "vkCmdCopyBufferToImage2");
    glad_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2) load(userptr, "vkCmdCopyImage2");
    glad_vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2) load(userptr, "vkCmdCopyImageToBuffer2");
    glad_vkCmdEndRendering = (PFN_vkCmdEndRendering) load(userptr, "vkCmdEndRendering");
    glad_vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2) load(userptr, "vkCmdPipelineBarrier2");
    glad_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2) load(userptr, "vkCmdResetEvent2");
    glad_vkCmdResolveImage2 = (PFN_vkCmdResolveImage2) load(userptr, "vkCmdResolveImage2");
    glad_vkCmdSetCullMode = (PFN_vkCmdSetCullMode) load(userptr, "vkCmdSetCullMode");
    glad_vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable) load(userptr, "vkCmdSetDepthBiasEnable");
    glad_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable) load(userptr, "vkCmdSetDepthBoundsTestEnable");
    glad_vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp) load(userptr, "vkCmdSetDepthCompareOp");
    glad_vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable) load(userptr, "vkCmdSetDepthTestEnable");
    glad_vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable) load(userptr, "vkCmdSetDepthWriteEnable");
    glad_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2) load(userptr, "vkCmdSetEvent2");
    glad_vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace) load(userptr, "vkCmdSetFrontFace");
    glad_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable) load(userptr, "vkCmdSetPrimitiveRestartEnable");
    glad_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology) load(userptr, "vkCmdSetPrimitiveTopology");
    glad_vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable) load(userptr, "vkCmdSetRasterizerDiscardEnable");
    glad_vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount) load(userptr, "vkCmdSetScissorWithCount");
    glad_vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp) load(userptr, "vkCmdSetStencilOp");
    glad_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable) load(userptr, "vkCmdSetStencilTestEnable");
    glad_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount) load(userptr, "vkCmdSetViewportWithCount");
    glad_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2) load(userptr, "vkCmdWaitEvents2");
    glad_vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2) load(userptr, "vkCmdWriteTimestamp2");
    glad_vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot) load(userptr, "vkCreatePrivateDataSlot");
    glad_vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot) load(userptr, "vkDestroyPrivateDataSlot");
    glad_vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements) load(userptr, "vkGetDeviceBufferMemoryRequirements");
    glad_vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements) load(userptr, "vkGetDeviceImageMemoryRequirements");
    glad_vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements) load(userptr, "vkGetDeviceImageSparseMemoryRequirements");
    glad_vkGetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties) load(userptr, "vkGetPhysicalDeviceToolProperties");
    glad_vkGetPrivateData = (PFN_vkGetPrivateData) load(userptr, "vkGetPrivateData");
    glad_vkQueueSubmit2 = (PFN_vkQueueSubmit2) load(userptr, "vkQueueSubmit2");
    glad_vkSetPrivateData = (PFN_vkSetPrivateData) load(userptr, "vkSetPrivateData");
}
#if defined(VK_ENABLE_BETA_EXTENSIONS)
static void glad_vk_load_VK_AMDX_shader_enqueue( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMDX_shader_enqueue) return;
    glad_vkCmdDispatchGraphAMDX = (PFN_vkCmdDispatchGraphAMDX) load(userptr, "vkCmdDispatchGraphAMDX");
    glad_vkCmdDispatchGraphIndirectAMDX = (PFN_vkCmdDispatchGraphIndirectAMDX) load(userptr, "vkCmdDispatchGraphIndirectAMDX");
    glad_vkCmdDispatchGraphIndirectCountAMDX = (PFN_vkCmdDispatchGraphIndirectCountAMDX) load(userptr, "vkCmdDispatchGraphIndirectCountAMDX");
    glad_vkCmdInitializeGraphScratchMemoryAMDX = (PFN_vkCmdInitializeGraphScratchMemoryAMDX) load(userptr, "vkCmdInitializeGraphScratchMemoryAMDX");
    glad_vkCreateExecutionGraphPipelinesAMDX = (PFN_vkCreateExecutionGraphPipelinesAMDX) load(userptr, "vkCreateExecutionGraphPipelinesAMDX");
    glad_vkGetExecutionGraphPipelineNodeIndexAMDX = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX) load(userptr, "vkGetExecutionGraphPipelineNodeIndexAMDX");
    glad_vkGetExecutionGraphPipelineScratchSizeAMDX = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX) load(userptr, "vkGetExecutionGraphPipelineScratchSizeAMDX");
}

#endif
static void glad_vk_load_VK_AMD_anti_lag( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_anti_lag) return;
    glad_vkAntiLagUpdateAMD = (PFN_vkAntiLagUpdateAMD) load(userptr, "vkAntiLagUpdateAMD");
}
static void glad_vk_load_VK_AMD_buffer_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_buffer_marker) return;
    glad_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD) load(userptr, "vkCmdWriteBufferMarkerAMD");
}
static void glad_vk_load_VK_AMD_display_native_hdr( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_display_native_hdr) return;
    glad_vkSetLocalDimmingAMD = (PFN_vkSetLocalDimmingAMD) load(userptr, "vkSetLocalDimmingAMD");
}
static void glad_vk_load_VK_AMD_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD) load(userptr, "vkCmdDrawIndexedIndirectCountAMD");
    glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD) load(userptr, "vkCmdDrawIndirectCountAMD");
}
static void glad_vk_load_VK_AMD_shader_info( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_AMD_shader_info) return;
    glad_vkGetShaderInfoAMD = (PFN_vkGetShaderInfoAMD) load(userptr, "vkGetShaderInfoAMD");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_ANDROID_external_memory_android_hardware_buffer) return;
    glad_vkGetAndroidHardwareBufferPropertiesANDROID = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID) load(userptr, "vkGetAndroidHardwareBufferPropertiesANDROID");
    glad_vkGetMemoryAndroidHardwareBufferANDROID = (PFN_vkGetMemoryAndroidHardwareBufferANDROID) load(userptr, "vkGetMemoryAndroidHardwareBufferANDROID");
}

#endif
static void glad_vk_load_VK_EXT_acquire_drm_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_acquire_drm_display) return;
    glad_vkAcquireDrmDisplayEXT = (PFN_vkAcquireDrmDisplayEXT) load(userptr, "vkAcquireDrmDisplayEXT");
    glad_vkGetDrmDisplayEXT = (PFN_vkGetDrmDisplayEXT) load(userptr, "vkGetDrmDisplayEXT");
}
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
static void glad_vk_load_VK_EXT_acquire_xlib_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_acquire_xlib_display) return;
    glad_vkAcquireXlibDisplayEXT = (PFN_vkAcquireXlibDisplayEXT) load(userptr, "vkAcquireXlibDisplayEXT");
    glad_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT) load(userptr, "vkGetRandROutputDisplayEXT");
}

#endif
static void glad_vk_load_VK_EXT_attachment_feedback_loop_dynamic_state( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_attachment_feedback_loop_dynamic_state) return;
    glad_vkCmdSetAttachmentFeedbackLoopEnableEXT = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT) load(userptr, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
}
static void glad_vk_load_VK_EXT_buffer_device_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_buffer_device_address) return;
    glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT) load(userptr, "vkGetBufferDeviceAddressEXT");
}
static void glad_vk_load_VK_EXT_calibrated_timestamps( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_calibrated_timestamps) return;
    glad_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT) load(userptr, "vkGetCalibratedTimestampsEXT");
    glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT) load(userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
}
static void glad_vk_load_VK_EXT_color_write_enable( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_color_write_enable) return;
    glad_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT) load(userptr, "vkCmdSetColorWriteEnableEXT");
}
static void glad_vk_load_VK_EXT_conditional_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_conditional_rendering) return;
    glad_vkCmdBeginConditionalRenderingEXT = (PFN_vkCmdBeginConditionalRenderingEXT) load(userptr, "vkCmdBeginConditionalRenderingEXT");
    glad_vkCmdEndConditionalRenderingEXT = (PFN_vkCmdEndConditionalRenderingEXT) load(userptr, "vkCmdEndConditionalRenderingEXT");
}
static void glad_vk_load_VK_EXT_debug_marker( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_marker) return;
    glad_vkCmdDebugMarkerBeginEXT = (PFN_vkCmdDebugMarkerBeginEXT) load(userptr, "vkCmdDebugMarkerBeginEXT");
    glad_vkCmdDebugMarkerEndEXT = (PFN_vkCmdDebugMarkerEndEXT) load(userptr, "vkCmdDebugMarkerEndEXT");
    glad_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT) load(userptr, "vkCmdDebugMarkerInsertEXT");
    glad_vkDebugMarkerSetObjectNameEXT = (PFN_vkDebugMarkerSetObjectNameEXT) load(userptr, "vkDebugMarkerSetObjectNameEXT");
    glad_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT) load(userptr, "vkDebugMarkerSetObjectTagEXT");
}
static void glad_vk_load_VK_EXT_debug_report( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_report) return;
    glad_vkCreateDebugReportCallbackEXT = (PFN_vkCreateDebugReportCallbackEXT) load(userptr, "vkCreateDebugReportCallbackEXT");
    glad_vkDebugReportMessageEXT = (PFN_vkDebugReportMessageEXT) load(userptr, "vkDebugReportMessageEXT");
    glad_vkDestroyDebugReportCallbackEXT = (PFN_vkDestroyDebugReportCallbackEXT) load(userptr, "vkDestroyDebugReportCallbackEXT");
}
static void glad_vk_load_VK_EXT_debug_utils( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_debug_utils) return;
    glad_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT) load(userptr, "vkCmdBeginDebugUtilsLabelEXT");
    glad_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT) load(userptr, "vkCmdEndDebugUtilsLabelEXT");
    glad_vkCmdInsertDebugUtilsLabelEXT = (PFN_vkCmdInsertDebugUtilsLabelEXT) load(userptr, "vkCmdInsertDebugUtilsLabelEXT");
    glad_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT) load(userptr, "vkCreateDebugUtilsMessengerEXT");
    glad_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT) load(userptr, "vkDestroyDebugUtilsMessengerEXT");
    glad_vkQueueBeginDebugUtilsLabelEXT = (PFN_vkQueueBeginDebugUtilsLabelEXT) load(userptr, "vkQueueBeginDebugUtilsLabelEXT");
    glad_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT) load(userptr, "vkQueueEndDebugUtilsLabelEXT");
    glad_vkQueueInsertDebugUtilsLabelEXT = (PFN_vkQueueInsertDebugUtilsLabelEXT) load(userptr, "vkQueueInsertDebugUtilsLabelEXT");
    glad_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT) load(userptr, "vkSetDebugUtilsObjectNameEXT");
    glad_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT) load(userptr, "vkSetDebugUtilsObjectTagEXT");
    glad_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT) load(userptr, "vkSubmitDebugUtilsMessageEXT");
}
static void glad_vk_load_VK_EXT_depth_bias_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_depth_bias_control) return;
    glad_vkCmdSetDepthBias2EXT = (PFN_vkCmdSetDepthBias2EXT) load(userptr, "vkCmdSetDepthBias2EXT");
}
static void glad_vk_load_VK_EXT_descriptor_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_descriptor_buffer) return;
    glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT) load(userptr, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
    glad_vkCmdBindDescriptorBuffersEXT = (PFN_vkCmdBindDescriptorBuffersEXT) load(userptr, "vkCmdBindDescriptorBuffersEXT");
    glad_vkCmdSetDescriptorBufferOffsetsEXT = (PFN_vkCmdSetDescriptorBufferOffsetsEXT) load(userptr, "vkCmdSetDescriptorBufferOffsetsEXT");
    glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
    glad_vkGetBufferOpaqueCaptureDescriptorDataEXT = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
    glad_vkGetDescriptorEXT = (PFN_vkGetDescriptorEXT) load(userptr, "vkGetDescriptorEXT");
    glad_vkGetDescriptorSetLayoutBindingOffsetEXT = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT) load(userptr, "vkGetDescriptorSetLayoutBindingOffsetEXT");
    glad_vkGetDescriptorSetLayoutSizeEXT = (PFN_vkGetDescriptorSetLayoutSizeEXT) load(userptr, "vkGetDescriptorSetLayoutSizeEXT");
    glad_vkGetImageOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetImageOpaqueCaptureDescriptorDataEXT");
    glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
    glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT) load(userptr, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
}
static void glad_vk_load_VK_EXT_device_fault( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_device_fault) return;
    glad_vkGetDeviceFaultInfoEXT = (PFN_vkGetDeviceFaultInfoEXT) load(userptr, "vkGetDeviceFaultInfoEXT");
}
static void glad_vk_load_VK_EXT_direct_mode_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_direct_mode_display) return;
    glad_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT) load(userptr, "vkReleaseDisplayEXT");
}
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
static void glad_vk_load_VK_EXT_directfb_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_directfb_surface) return;
    glad_vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT) load(userptr, "vkCreateDirectFBSurfaceEXT");
    glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT) load(userptr, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
}

#endif
static void glad_vk_load_VK_EXT_discard_rectangles( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_discard_rectangles) return;
    glad_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT) load(userptr, "vkCmdSetDiscardRectangleEXT");
    glad_vkCmdSetDiscardRectangleEnableEXT = (PFN_vkCmdSetDiscardRectangleEnableEXT) load(userptr, "vkCmdSetDiscardRectangleEnableEXT");
    glad_vkCmdSetDiscardRectangleModeEXT = (PFN_vkCmdSetDiscardRectangleModeEXT) load(userptr, "vkCmdSetDiscardRectangleModeEXT");
}
static void glad_vk_load_VK_EXT_display_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_control) return;
    glad_vkDisplayPowerControlEXT = (PFN_vkDisplayPowerControlEXT) load(userptr, "vkDisplayPowerControlEXT");
    glad_vkGetSwapchainCounterEXT = (PFN_vkGetSwapchainCounterEXT) load(userptr, "vkGetSwapchainCounterEXT");
    glad_vkRegisterDeviceEventEXT = (PFN_vkRegisterDeviceEventEXT) load(userptr, "vkRegisterDeviceEventEXT");
    glad_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT) load(userptr, "vkRegisterDisplayEventEXT");
}
static void glad_vk_load_VK_EXT_display_surface_counter( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_display_surface_counter) return;
    glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_extended_dynamic_state) return;
    glad_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT) load(userptr, "vkCmdBindVertexBuffers2EXT");
    glad_vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT) load(userptr, "vkCmdSetCullModeEXT");
    glad_vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT) load(userptr, "vkCmdSetDepthBoundsTestEnableEXT");
    glad_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT) load(userptr, "vkCmdSetDepthCompareOpEXT");
    glad_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT) load(userptr, "vkCmdSetDepthTestEnableEXT");
    glad_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT) load(userptr, "vkCmdSetDepthWriteEnableEXT");
    glad_vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT) load(userptr, "vkCmdSetFrontFaceEXT");
    glad_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT) load(userptr, "vkCmdSetPrimitiveTopologyEXT");
    glad_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT) load(userptr, "vkCmdSetScissorWithCountEXT");
    glad_vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT) load(userptr, "vkCmdSetStencilOpEXT");
    glad_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT) load(userptr, "vkCmdSetStencilTestEnableEXT");
    glad_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT) load(userptr, "vkCmdSetViewportWithCountEXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_extended_dynamic_state2) return;
    glad_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT) load(userptr, "vkCmdSetDepthBiasEnableEXT");
    glad_vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT) load(userptr, "vkCmdSetLogicOpEXT");
    glad_vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT) load(userptr, "vkCmdSetPatchControlPointsEXT");
    glad_vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT) load(userptr, "vkCmdSetPrimitiveRestartEnableEXT");
    glad_vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT) load(userptr, "vkCmdSetRasterizerDiscardEnableEXT");
}
static void glad_vk_load_VK_EXT_extended_dynamic_state3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_extended_dynamic_state3) return;
    glad_vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT) load(userptr, "vkCmdSetAlphaToCoverageEnableEXT");
    glad_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT) load(userptr, "vkCmdSetAlphaToOneEnableEXT");
    glad_vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT) load(userptr, "vkCmdSetColorBlendAdvancedEXT");
    glad_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT) load(userptr, "vkCmdSetColorBlendEnableEXT");
    glad_vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT) load(userptr, "vkCmdSetColorBlendEquationEXT");
    glad_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT) load(userptr, "vkCmdSetColorWriteMaskEXT");
    glad_vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT) load(userptr, "vkCmdSetConservativeRasterizationModeEXT");
    glad_vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV) load(userptr, "vkCmdSetCoverageModulationModeNV");
    glad_vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV) load(userptr, "vkCmdSetCoverageModulationTableEnableNV");
    glad_vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV) load(userptr, "vkCmdSetCoverageModulationTableNV");
    glad_vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV) load(userptr, "vkCmdSetCoverageReductionModeNV");
    glad_vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV) load(userptr, "vkCmdSetCoverageToColorEnableNV");
    glad_vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV) load(userptr, "vkCmdSetCoverageToColorLocationNV");
    glad_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT) load(userptr, "vkCmdSetDepthClampEnableEXT");
    glad_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT) load(userptr, "vkCmdSetDepthClipEnableEXT");
    glad_vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT) load(userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
    glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT) load(userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
    glad_vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT) load(userptr, "vkCmdSetLineRasterizationModeEXT");
    glad_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT) load(userptr, "vkCmdSetLineStippleEnableEXT");
    glad_vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT) load(userptr, "vkCmdSetLogicOpEnableEXT");
    glad_vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT) load(userptr, "vkCmdSetPolygonModeEXT");
    glad_vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT) load(userptr, "vkCmdSetProvokingVertexModeEXT");
    glad_vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT) load(userptr, "vkCmdSetRasterizationSamplesEXT");
    glad_vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT) load(userptr, "vkCmdSetRasterizationStreamEXT");
    glad_vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV) load(userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
    glad_vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT) load(userptr, "vkCmdSetSampleLocationsEnableEXT");
    glad_vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT) load(userptr, "vkCmdSetSampleMaskEXT");
    glad_vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV) load(userptr, "vkCmdSetShadingRateImageEnableNV");
    glad_vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT) load(userptr, "vkCmdSetTessellationDomainOriginEXT");
    glad_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV) load(userptr, "vkCmdSetViewportSwizzleNV");
    glad_vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV) load(userptr, "vkCmdSetViewportWScalingEnableNV");
}
static void glad_vk_load_VK_EXT_external_memory_host( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_external_memory_host) return;
    glad_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT) load(userptr, "vkGetMemoryHostPointerPropertiesEXT");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_EXT_full_screen_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_full_screen_exclusive) return;
    glad_vkAcquireFullScreenExclusiveModeEXT = (PFN_vkAcquireFullScreenExclusiveModeEXT) load(userptr, "vkAcquireFullScreenExclusiveModeEXT");
    glad_vkGetDeviceGroupSurfacePresentModes2EXT = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT) load(userptr, "vkGetDeviceGroupSurfacePresentModes2EXT");
    glad_vkGetPhysicalDeviceSurfacePresentModes2EXT = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT) load(userptr, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
    glad_vkReleaseFullScreenExclusiveModeEXT = (PFN_vkReleaseFullScreenExclusiveModeEXT) load(userptr, "vkReleaseFullScreenExclusiveModeEXT");
}

#endif
static void glad_vk_load_VK_EXT_hdr_metadata( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_hdr_metadata) return;
    glad_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) load(userptr, "vkSetHdrMetadataEXT");
}
static void glad_vk_load_VK_EXT_headless_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_headless_surface) return;
    glad_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT) load(userptr, "vkCreateHeadlessSurfaceEXT");
}
static void glad_vk_load_VK_EXT_host_image_copy( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_host_image_copy) return;
    glad_vkCopyImageToImageEXT = (PFN_vkCopyImageToImageEXT) load(userptr, "vkCopyImageToImageEXT");
    glad_vkCopyImageToMemoryEXT = (PFN_vkCopyImageToMemoryEXT) load(userptr, "vkCopyImageToMemoryEXT");
    glad_vkCopyMemoryToImageEXT = (PFN_vkCopyMemoryToImageEXT) load(userptr, "vkCopyMemoryToImageEXT");
    glad_vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT) load(userptr, "vkGetImageSubresourceLayout2EXT");
    glad_vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT) load(userptr, "vkTransitionImageLayoutEXT");
}
static void glad_vk_load_VK_EXT_host_query_reset( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_host_query_reset) return;
    glad_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT) load(userptr, "vkResetQueryPoolEXT");
}
static void glad_vk_load_VK_EXT_image_compression_control( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_image_compression_control) return;
    glad_vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT) load(userptr, "vkGetImageSubresourceLayout2EXT");
}
static void glad_vk_load_VK_EXT_image_drm_format_modifier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_image_drm_format_modifier) return;
    glad_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT) load(userptr, "vkGetImageDrmFormatModifierPropertiesEXT");
}
static void glad_vk_load_VK_EXT_line_rasterization( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_line_rasterization) return;
    glad_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT) load(userptr, "vkCmdSetLineStippleEXT");
}
static void glad_vk_load_VK_EXT_mesh_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_mesh_shader) return;
    glad_vkCmdDrawMeshTasksEXT = (PFN_vkCmdDrawMeshTasksEXT) load(userptr, "vkCmdDrawMeshTasksEXT");
    glad_vkCmdDrawMeshTasksIndirectCountEXT = (PFN_vkCmdDrawMeshTasksIndirectCountEXT) load(userptr, "vkCmdDrawMeshTasksIndirectCountEXT");
    glad_vkCmdDrawMeshTasksIndirectEXT = (PFN_vkCmdDrawMeshTasksIndirectEXT) load(userptr, "vkCmdDrawMeshTasksIndirectEXT");
}
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void glad_vk_load_VK_EXT_metal_objects( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_metal_objects) return;
    glad_vkExportMetalObjectsEXT = (PFN_vkExportMetalObjectsEXT) load(userptr, "vkExportMetalObjectsEXT");
}

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void glad_vk_load_VK_EXT_metal_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_metal_surface) return;
    glad_vkCreateMetalSurfaceEXT = (PFN_vkCreateMetalSurfaceEXT) load(userptr, "vkCreateMetalSurfaceEXT");
}

#endif
static void glad_vk_load_VK_EXT_multi_draw( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_multi_draw) return;
    glad_vkCmdDrawMultiEXT = (PFN_vkCmdDrawMultiEXT) load(userptr, "vkCmdDrawMultiEXT");
    glad_vkCmdDrawMultiIndexedEXT = (PFN_vkCmdDrawMultiIndexedEXT) load(userptr, "vkCmdDrawMultiIndexedEXT");
}
static void glad_vk_load_VK_EXT_opacity_micromap( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_opacity_micromap) return;
    glad_vkBuildMicromapsEXT = (PFN_vkBuildMicromapsEXT) load(userptr, "vkBuildMicromapsEXT");
    glad_vkCmdBuildMicromapsEXT = (PFN_vkCmdBuildMicromapsEXT) load(userptr, "vkCmdBuildMicromapsEXT");
    glad_vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT) load(userptr, "vkCmdCopyMemoryToMicromapEXT");
    glad_vkCmdCopyMicromapEXT = (PFN_vkCmdCopyMicromapEXT) load(userptr, "vkCmdCopyMicromapEXT");
    glad_vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT) load(userptr, "vkCmdCopyMicromapToMemoryEXT");
    glad_vkCmdWriteMicromapsPropertiesEXT = (PFN_vkCmdWriteMicromapsPropertiesEXT) load(userptr, "vkCmdWriteMicromapsPropertiesEXT");
    glad_vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT) load(userptr, "vkCopyMemoryToMicromapEXT");
    glad_vkCopyMicromapEXT = (PFN_vkCopyMicromapEXT) load(userptr, "vkCopyMicromapEXT");
    glad_vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT) load(userptr, "vkCopyMicromapToMemoryEXT");
    glad_vkCreateMicromapEXT = (PFN_vkCreateMicromapEXT) load(userptr, "vkCreateMicromapEXT");
    glad_vkDestroyMicromapEXT = (PFN_vkDestroyMicromapEXT) load(userptr, "vkDestroyMicromapEXT");
    glad_vkGetDeviceMicromapCompatibilityEXT = (PFN_vkGetDeviceMicromapCompatibilityEXT) load(userptr, "vkGetDeviceMicromapCompatibilityEXT");
    glad_vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT) load(userptr, "vkGetMicromapBuildSizesEXT");
    glad_vkWriteMicromapsPropertiesEXT = (PFN_vkWriteMicromapsPropertiesEXT) load(userptr, "vkWriteMicromapsPropertiesEXT");
}
static void glad_vk_load_VK_EXT_pageable_device_local_memory( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_pageable_device_local_memory) return;
    glad_vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT) load(userptr, "vkSetDeviceMemoryPriorityEXT");
}
static void glad_vk_load_VK_EXT_pipeline_properties( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_pipeline_properties) return;
    glad_vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT) load(userptr, "vkGetPipelinePropertiesEXT");
}
static void glad_vk_load_VK_EXT_private_data( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_private_data) return;
    glad_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT) load(userptr, "vkCreatePrivateDataSlotEXT");
    glad_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT) load(userptr, "vkDestroyPrivateDataSlotEXT");
    glad_vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT) load(userptr, "vkGetPrivateDataEXT");
    glad_vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT) load(userptr, "vkSetPrivateDataEXT");
}
static void glad_vk_load_VK_EXT_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_sample_locations) return;
    glad_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) load(userptr, "vkCmdSetSampleLocationsEXT");
    glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) load(userptr, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}
static void glad_vk_load_VK_EXT_shader_module_identifier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_shader_module_identifier) return;
    glad_vkGetShaderModuleCreateInfoIdentifierEXT = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT) load(userptr, "vkGetShaderModuleCreateInfoIdentifierEXT");
    glad_vkGetShaderModuleIdentifierEXT = (PFN_vkGetShaderModuleIdentifierEXT) load(userptr, "vkGetShaderModuleIdentifierEXT");
}
static void glad_vk_load_VK_EXT_shader_object( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_shader_object) return;
    glad_vkCmdBindShadersEXT = (PFN_vkCmdBindShadersEXT) load(userptr, "vkCmdBindShadersEXT");
    glad_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT) load(userptr, "vkCmdBindVertexBuffers2EXT");
    glad_vkCmdSetAlphaToCoverageEnableEXT = (PFN_vkCmdSetAlphaToCoverageEnableEXT) load(userptr, "vkCmdSetAlphaToCoverageEnableEXT");
    glad_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT) load(userptr, "vkCmdSetAlphaToOneEnableEXT");
    glad_vkCmdSetColorBlendAdvancedEXT = (PFN_vkCmdSetColorBlendAdvancedEXT) load(userptr, "vkCmdSetColorBlendAdvancedEXT");
    glad_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT) load(userptr, "vkCmdSetColorBlendEnableEXT");
    glad_vkCmdSetColorBlendEquationEXT = (PFN_vkCmdSetColorBlendEquationEXT) load(userptr, "vkCmdSetColorBlendEquationEXT");
    glad_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT) load(userptr, "vkCmdSetColorWriteMaskEXT");
    glad_vkCmdSetConservativeRasterizationModeEXT = (PFN_vkCmdSetConservativeRasterizationModeEXT) load(userptr, "vkCmdSetConservativeRasterizationModeEXT");
    glad_vkCmdSetCoverageModulationModeNV = (PFN_vkCmdSetCoverageModulationModeNV) load(userptr, "vkCmdSetCoverageModulationModeNV");
    glad_vkCmdSetCoverageModulationTableEnableNV = (PFN_vkCmdSetCoverageModulationTableEnableNV) load(userptr, "vkCmdSetCoverageModulationTableEnableNV");
    glad_vkCmdSetCoverageModulationTableNV = (PFN_vkCmdSetCoverageModulationTableNV) load(userptr, "vkCmdSetCoverageModulationTableNV");
    glad_vkCmdSetCoverageReductionModeNV = (PFN_vkCmdSetCoverageReductionModeNV) load(userptr, "vkCmdSetCoverageReductionModeNV");
    glad_vkCmdSetCoverageToColorEnableNV = (PFN_vkCmdSetCoverageToColorEnableNV) load(userptr, "vkCmdSetCoverageToColorEnableNV");
    glad_vkCmdSetCoverageToColorLocationNV = (PFN_vkCmdSetCoverageToColorLocationNV) load(userptr, "vkCmdSetCoverageToColorLocationNV");
    glad_vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT) load(userptr, "vkCmdSetCullModeEXT");
    glad_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT) load(userptr, "vkCmdSetDepthBiasEnableEXT");
    glad_vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT) load(userptr, "vkCmdSetDepthBoundsTestEnableEXT");
    glad_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT) load(userptr, "vkCmdSetDepthClampEnableEXT");
    glad_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT) load(userptr, "vkCmdSetDepthClipEnableEXT");
    glad_vkCmdSetDepthClipNegativeOneToOneEXT = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT) load(userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
    glad_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT) load(userptr, "vkCmdSetDepthCompareOpEXT");
    glad_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT) load(userptr, "vkCmdSetDepthTestEnableEXT");
    glad_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT) load(userptr, "vkCmdSetDepthWriteEnableEXT");
    glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT) load(userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
    glad_vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT) load(userptr, "vkCmdSetFrontFaceEXT");
    glad_vkCmdSetLineRasterizationModeEXT = (PFN_vkCmdSetLineRasterizationModeEXT) load(userptr, "vkCmdSetLineRasterizationModeEXT");
    glad_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT) load(userptr, "vkCmdSetLineStippleEnableEXT");
    glad_vkCmdSetLogicOpEXT = (PFN_vkCmdSetLogicOpEXT) load(userptr, "vkCmdSetLogicOpEXT");
    glad_vkCmdSetLogicOpEnableEXT = (PFN_vkCmdSetLogicOpEnableEXT) load(userptr, "vkCmdSetLogicOpEnableEXT");
    glad_vkCmdSetPatchControlPointsEXT = (PFN_vkCmdSetPatchControlPointsEXT) load(userptr, "vkCmdSetPatchControlPointsEXT");
    glad_vkCmdSetPolygonModeEXT = (PFN_vkCmdSetPolygonModeEXT) load(userptr, "vkCmdSetPolygonModeEXT");
    glad_vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT) load(userptr, "vkCmdSetPrimitiveRestartEnableEXT");
    glad_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT) load(userptr, "vkCmdSetPrimitiveTopologyEXT");
    glad_vkCmdSetProvokingVertexModeEXT = (PFN_vkCmdSetProvokingVertexModeEXT) load(userptr, "vkCmdSetProvokingVertexModeEXT");
    glad_vkCmdSetRasterizationSamplesEXT = (PFN_vkCmdSetRasterizationSamplesEXT) load(userptr, "vkCmdSetRasterizationSamplesEXT");
    glad_vkCmdSetRasterizationStreamEXT = (PFN_vkCmdSetRasterizationStreamEXT) load(userptr, "vkCmdSetRasterizationStreamEXT");
    glad_vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT) load(userptr, "vkCmdSetRasterizerDiscardEnableEXT");
    glad_vkCmdSetRepresentativeFragmentTestEnableNV = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV) load(userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
    glad_vkCmdSetSampleLocationsEnableEXT = (PFN_vkCmdSetSampleLocationsEnableEXT) load(userptr, "vkCmdSetSampleLocationsEnableEXT");
    glad_vkCmdSetSampleMaskEXT = (PFN_vkCmdSetSampleMaskEXT) load(userptr, "vkCmdSetSampleMaskEXT");
    glad_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT) load(userptr, "vkCmdSetScissorWithCountEXT");
    glad_vkCmdSetShadingRateImageEnableNV = (PFN_vkCmdSetShadingRateImageEnableNV) load(userptr, "vkCmdSetShadingRateImageEnableNV");
    glad_vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT) load(userptr, "vkCmdSetStencilOpEXT");
    glad_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT) load(userptr, "vkCmdSetStencilTestEnableEXT");
    glad_vkCmdSetTessellationDomainOriginEXT = (PFN_vkCmdSetTessellationDomainOriginEXT) load(userptr, "vkCmdSetTessellationDomainOriginEXT");
    glad_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT) load(userptr, "vkCmdSetVertexInputEXT");
    glad_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV) load(userptr, "vkCmdSetViewportSwizzleNV");
    glad_vkCmdSetViewportWScalingEnableNV = (PFN_vkCmdSetViewportWScalingEnableNV) load(userptr, "vkCmdSetViewportWScalingEnableNV");
    glad_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT) load(userptr, "vkCmdSetViewportWithCountEXT");
    glad_vkCreateShadersEXT = (PFN_vkCreateShadersEXT) load(userptr, "vkCreateShadersEXT");
    glad_vkDestroyShaderEXT = (PFN_vkDestroyShaderEXT) load(userptr, "vkDestroyShaderEXT");
    glad_vkGetShaderBinaryDataEXT = (PFN_vkGetShaderBinaryDataEXT) load(userptr, "vkGetShaderBinaryDataEXT");
}
static void glad_vk_load_VK_EXT_swapchain_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_swapchain_maintenance1) return;
    glad_vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT) load(userptr, "vkReleaseSwapchainImagesEXT");
}
static void glad_vk_load_VK_EXT_tooling_info( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_tooling_info) return;
    glad_vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT) load(userptr, "vkGetPhysicalDeviceToolPropertiesEXT");
}
static void glad_vk_load_VK_EXT_transform_feedback( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_transform_feedback) return;
    glad_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT) load(userptr, "vkCmdBeginQueryIndexedEXT");
    glad_vkCmdBeginTransformFeedbackEXT = (PFN_vkCmdBeginTransformFeedbackEXT) load(userptr, "vkCmdBeginTransformFeedbackEXT");
    glad_vkCmdBindTransformFeedbackBuffersEXT = (PFN_vkCmdBindTransformFeedbackBuffersEXT) load(userptr, "vkCmdBindTransformFeedbackBuffersEXT");
    glad_vkCmdDrawIndirectByteCountEXT = (PFN_vkCmdDrawIndirectByteCountEXT) load(userptr, "vkCmdDrawIndirectByteCountEXT");
    glad_vkCmdEndQueryIndexedEXT = (PFN_vkCmdEndQueryIndexedEXT) load(userptr, "vkCmdEndQueryIndexedEXT");
    glad_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT) load(userptr, "vkCmdEndTransformFeedbackEXT");
}
static void glad_vk_load_VK_EXT_validation_cache( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_validation_cache) return;
    glad_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT) load(userptr, "vkCreateValidationCacheEXT");
    glad_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT) load(userptr, "vkDestroyValidationCacheEXT");
    glad_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT) load(userptr, "vkGetValidationCacheDataEXT");
    glad_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT) load(userptr, "vkMergeValidationCachesEXT");
}
static void glad_vk_load_VK_EXT_vertex_input_dynamic_state( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_vertex_input_dynamic_state) return;
    glad_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT) load(userptr, "vkCmdSetVertexInputEXT");
}
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void glad_vk_load_VK_FUCHSIA_buffer_collection( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_FUCHSIA_buffer_collection) return;
    glad_vkCreateBufferCollectionFUCHSIA = (PFN_vkCreateBufferCollectionFUCHSIA) load(userptr, "vkCreateBufferCollectionFUCHSIA");
    glad_vkDestroyBufferCollectionFUCHSIA = (PFN_vkDestroyBufferCollectionFUCHSIA) load(userptr, "vkDestroyBufferCollectionFUCHSIA");
    glad_vkGetBufferCollectionPropertiesFUCHSIA = (PFN_vkGetBufferCollectionPropertiesFUCHSIA) load(userptr, "vkGetBufferCollectionPropertiesFUCHSIA");
    glad_vkSetBufferCollectionBufferConstraintsFUCHSIA = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA) load(userptr, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
    glad_vkSetBufferCollectionImageConstraintsFUCHSIA = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA) load(userptr, "vkSetBufferCollectionImageConstraintsFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void glad_vk_load_VK_FUCHSIA_external_memory( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_FUCHSIA_external_memory) return;
    glad_vkGetMemoryZirconHandleFUCHSIA = (PFN_vkGetMemoryZirconHandleFUCHSIA) load(userptr, "vkGetMemoryZirconHandleFUCHSIA");
    glad_vkGetMemoryZirconHandlePropertiesFUCHSIA = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA) load(userptr, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void glad_vk_load_VK_FUCHSIA_external_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_FUCHSIA_external_semaphore) return;
    glad_vkGetSemaphoreZirconHandleFUCHSIA = (PFN_vkGetSemaphoreZirconHandleFUCHSIA) load(userptr, "vkGetSemaphoreZirconHandleFUCHSIA");
    glad_vkImportSemaphoreZirconHandleFUCHSIA = (PFN_vkImportSemaphoreZirconHandleFUCHSIA) load(userptr, "vkImportSemaphoreZirconHandleFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void glad_vk_load_VK_FUCHSIA_imagepipe_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_FUCHSIA_imagepipe_surface) return;
    glad_vkCreateImagePipeSurfaceFUCHSIA = (PFN_vkCreateImagePipeSurfaceFUCHSIA) load(userptr, "vkCreateImagePipeSurfaceFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_GGP)
static void glad_vk_load_VK_GGP_stream_descriptor_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_GGP_stream_descriptor_surface) return;
    glad_vkCreateStreamDescriptorSurfaceGGP = (PFN_vkCreateStreamDescriptorSurfaceGGP) load(userptr, "vkCreateStreamDescriptorSurfaceGGP");
}

#endif
static void glad_vk_load_VK_GOOGLE_display_timing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_GOOGLE_display_timing) return;
    glad_vkGetPastPresentationTimingGOOGLE = (PFN_vkGetPastPresentationTimingGOOGLE) load(userptr, "vkGetPastPresentationTimingGOOGLE");
    glad_vkGetRefreshCycleDurationGOOGLE = (PFN_vkGetRefreshCycleDurationGOOGLE) load(userptr, "vkGetRefreshCycleDurationGOOGLE");
}
static void glad_vk_load_VK_HUAWEI_cluster_culling_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_HUAWEI_cluster_culling_shader) return;
    glad_vkCmdDrawClusterHUAWEI = (PFN_vkCmdDrawClusterHUAWEI) load(userptr, "vkCmdDrawClusterHUAWEI");
    glad_vkCmdDrawClusterIndirectHUAWEI = (PFN_vkCmdDrawClusterIndirectHUAWEI) load(userptr, "vkCmdDrawClusterIndirectHUAWEI");
}
static void glad_vk_load_VK_HUAWEI_invocation_mask( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_HUAWEI_invocation_mask) return;
    glad_vkCmdBindInvocationMaskHUAWEI = (PFN_vkCmdBindInvocationMaskHUAWEI) load(userptr, "vkCmdBindInvocationMaskHUAWEI");
}
static void glad_vk_load_VK_HUAWEI_subpass_shading( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_HUAWEI_subpass_shading) return;
    glad_vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI) load(userptr, "vkCmdSubpassShadingHUAWEI");
    glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI) load(userptr, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
}
static void glad_vk_load_VK_INTEL_performance_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_INTEL_performance_query) return;
    glad_vkAcquirePerformanceConfigurationINTEL = (PFN_vkAcquirePerformanceConfigurationINTEL) load(userptr, "vkAcquirePerformanceConfigurationINTEL");
    glad_vkCmdSetPerformanceMarkerINTEL = (PFN_vkCmdSetPerformanceMarkerINTEL) load(userptr, "vkCmdSetPerformanceMarkerINTEL");
    glad_vkCmdSetPerformanceOverrideINTEL = (PFN_vkCmdSetPerformanceOverrideINTEL) load(userptr, "vkCmdSetPerformanceOverrideINTEL");
    glad_vkCmdSetPerformanceStreamMarkerINTEL = (PFN_vkCmdSetPerformanceStreamMarkerINTEL) load(userptr, "vkCmdSetPerformanceStreamMarkerINTEL");
    glad_vkGetPerformanceParameterINTEL = (PFN_vkGetPerformanceParameterINTEL) load(userptr, "vkGetPerformanceParameterINTEL");
    glad_vkInitializePerformanceApiINTEL = (PFN_vkInitializePerformanceApiINTEL) load(userptr, "vkInitializePerformanceApiINTEL");
    glad_vkQueueSetPerformanceConfigurationINTEL = (PFN_vkQueueSetPerformanceConfigurationINTEL) load(userptr, "vkQueueSetPerformanceConfigurationINTEL");
    glad_vkReleasePerformanceConfigurationINTEL = (PFN_vkReleasePerformanceConfigurationINTEL) load(userptr, "vkReleasePerformanceConfigurationINTEL");
    glad_vkUninitializePerformanceApiINTEL = (PFN_vkUninitializePerformanceApiINTEL) load(userptr, "vkUninitializePerformanceApiINTEL");
}
static void glad_vk_load_VK_KHR_acceleration_structure( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_acceleration_structure) return;
    glad_vkBuildAccelerationStructuresKHR = (PFN_vkBuildAccelerationStructuresKHR) load(userptr, "vkBuildAccelerationStructuresKHR");
    glad_vkCmdBuildAccelerationStructuresIndirectKHR = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR) load(userptr, "vkCmdBuildAccelerationStructuresIndirectKHR");
    glad_vkCmdBuildAccelerationStructuresKHR = (PFN_vkCmdBuildAccelerationStructuresKHR) load(userptr, "vkCmdBuildAccelerationStructuresKHR");
    glad_vkCmdCopyAccelerationStructureKHR = (PFN_vkCmdCopyAccelerationStructureKHR) load(userptr, "vkCmdCopyAccelerationStructureKHR");
    glad_vkCmdCopyAccelerationStructureToMemoryKHR = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR) load(userptr, "vkCmdCopyAccelerationStructureToMemoryKHR");
    glad_vkCmdCopyMemoryToAccelerationStructureKHR = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR) load(userptr, "vkCmdCopyMemoryToAccelerationStructureKHR");
    glad_vkCmdWriteAccelerationStructuresPropertiesKHR = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR) load(userptr, "vkCmdWriteAccelerationStructuresPropertiesKHR");
    glad_vkCopyAccelerationStructureKHR = (PFN_vkCopyAccelerationStructureKHR) load(userptr, "vkCopyAccelerationStructureKHR");
    glad_vkCopyAccelerationStructureToMemoryKHR = (PFN_vkCopyAccelerationStructureToMemoryKHR) load(userptr, "vkCopyAccelerationStructureToMemoryKHR");
    glad_vkCopyMemoryToAccelerationStructureKHR = (PFN_vkCopyMemoryToAccelerationStructureKHR) load(userptr, "vkCopyMemoryToAccelerationStructureKHR");
    glad_vkCreateAccelerationStructureKHR = (PFN_vkCreateAccelerationStructureKHR) load(userptr, "vkCreateAccelerationStructureKHR");
    glad_vkDestroyAccelerationStructureKHR = (PFN_vkDestroyAccelerationStructureKHR) load(userptr, "vkDestroyAccelerationStructureKHR");
    glad_vkGetAccelerationStructureBuildSizesKHR = (PFN_vkGetAccelerationStructureBuildSizesKHR) load(userptr, "vkGetAccelerationStructureBuildSizesKHR");
    glad_vkGetAccelerationStructureDeviceAddressKHR = (PFN_vkGetAccelerationStructureDeviceAddressKHR) load(userptr, "vkGetAccelerationStructureDeviceAddressKHR");
    glad_vkGetDeviceAccelerationStructureCompatibilityKHR = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR) load(userptr, "vkGetDeviceAccelerationStructureCompatibilityKHR");
    glad_vkWriteAccelerationStructuresPropertiesKHR = (PFN_vkWriteAccelerationStructuresPropertiesKHR) load(userptr, "vkWriteAccelerationStructuresPropertiesKHR");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void glad_vk_load_VK_KHR_android_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_android_surface) return;
    glad_vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR) load(userptr, "vkCreateAndroidSurfaceKHR");
}

#endif
static void glad_vk_load_VK_KHR_bind_memory2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_bind_memory2) return;
    glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR) load(userptr, "vkBindBufferMemory2KHR");
    glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR) load(userptr, "vkBindImageMemory2KHR");
}
static void glad_vk_load_VK_KHR_buffer_device_address( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_buffer_device_address) return;
    glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR) load(userptr, "vkGetBufferDeviceAddressKHR");
    glad_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR) load(userptr, "vkGetBufferOpaqueCaptureAddressKHR");
    glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR) load(userptr, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
}
static void glad_vk_load_VK_KHR_calibrated_timestamps( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_calibrated_timestamps) return;
    glad_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR) load(userptr, "vkGetCalibratedTimestampsKHR");
    glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR) load(userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
}
static void glad_vk_load_VK_KHR_cooperative_matrix( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_cooperative_matrix) return;
    glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR) load(userptr, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
}
static void glad_vk_load_VK_KHR_copy_commands2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_copy_commands2) return;
    glad_vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR) load(userptr, "vkCmdBlitImage2KHR");
    glad_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR) load(userptr, "vkCmdCopyBuffer2KHR");
    glad_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR) load(userptr, "vkCmdCopyBufferToImage2KHR");
    glad_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR) load(userptr, "vkCmdCopyImage2KHR");
    glad_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR) load(userptr, "vkCmdCopyImageToBuffer2KHR");
    glad_vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR) load(userptr, "vkCmdResolveImage2KHR");
}
static void glad_vk_load_VK_KHR_create_renderpass2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_create_renderpass2) return;
    glad_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR) load(userptr, "vkCmdBeginRenderPass2KHR");
    glad_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR) load(userptr, "vkCmdEndRenderPass2KHR");
    glad_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR) load(userptr, "vkCmdNextSubpass2KHR");
    glad_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR) load(userptr, "vkCreateRenderPass2KHR");
}
static void glad_vk_load_VK_KHR_deferred_host_operations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_deferred_host_operations) return;
    glad_vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR) load(userptr, "vkCreateDeferredOperationKHR");
    glad_vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR) load(userptr, "vkDeferredOperationJoinKHR");
    glad_vkDestroyDeferredOperationKHR = (PFN_vkDestroyDeferredOperationKHR) load(userptr, "vkDestroyDeferredOperationKHR");
    glad_vkGetDeferredOperationMaxConcurrencyKHR = (PFN_vkGetDeferredOperationMaxConcurrencyKHR) load(userptr, "vkGetDeferredOperationMaxConcurrencyKHR");
    glad_vkGetDeferredOperationResultKHR = (PFN_vkGetDeferredOperationResultKHR) load(userptr, "vkGetDeferredOperationResultKHR");
}
static void glad_vk_load_VK_KHR_descriptor_update_template( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_descriptor_update_template) return;
    glad_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
    glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR) load(userptr, "vkCreateDescriptorUpdateTemplateKHR");
    glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR) load(userptr, "vkDestroyDescriptorUpdateTemplateKHR");
    glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR) load(userptr, "vkUpdateDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_device_group( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group) return;
    glad_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR) load(userptr, "vkCmdDispatchBaseKHR");
    glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR) load(userptr, "vkCmdSetDeviceMaskKHR");
    glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR) load(userptr, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
    glad_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    glad_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    glad_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
}
static void glad_vk_load_VK_KHR_device_group_creation( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_device_group_creation) return;
    glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR) load(userptr, "vkEnumeratePhysicalDeviceGroupsKHR");
}
static void glad_vk_load_VK_KHR_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display) return;
    glad_vkCreateDisplayModeKHR = (PFN_vkCreateDisplayModeKHR) load(userptr, "vkCreateDisplayModeKHR");
    glad_vkCreateDisplayPlaneSurfaceKHR = (PFN_vkCreateDisplayPlaneSurfaceKHR) load(userptr, "vkCreateDisplayPlaneSurfaceKHR");
    glad_vkGetDisplayModePropertiesKHR = (PFN_vkGetDisplayModePropertiesKHR) load(userptr, "vkGetDisplayModePropertiesKHR");
    glad_vkGetDisplayPlaneCapabilitiesKHR = (PFN_vkGetDisplayPlaneCapabilitiesKHR) load(userptr, "vkGetDisplayPlaneCapabilitiesKHR");
    glad_vkGetDisplayPlaneSupportedDisplaysKHR = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR) load(userptr, "vkGetDisplayPlaneSupportedDisplaysKHR");
    glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR) load(userptr, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
    glad_vkGetPhysicalDeviceDisplayPropertiesKHR = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR) load(userptr, "vkGetPhysicalDeviceDisplayPropertiesKHR");
}
static void glad_vk_load_VK_KHR_display_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_display_swapchain) return;
    glad_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR) load(userptr, "vkCreateSharedSwapchainsKHR");
}
static void glad_vk_load_VK_KHR_draw_indirect_count( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_draw_indirect_count) return;
    glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR) load(userptr, "vkCmdDrawIndexedIndirectCountKHR");
    glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR) load(userptr, "vkCmdDrawIndirectCountKHR");
}
static void glad_vk_load_VK_KHR_dynamic_rendering( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_dynamic_rendering) return;
    glad_vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR) load(userptr, "vkCmdBeginRenderingKHR");
    glad_vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR) load(userptr, "vkCmdEndRenderingKHR");
}
static void glad_vk_load_VK_KHR_dynamic_rendering_local_read( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_dynamic_rendering_local_read) return;
    glad_vkCmdSetRenderingAttachmentLocationsKHR = (PFN_vkCmdSetRenderingAttachmentLocationsKHR) load(userptr, "vkCmdSetRenderingAttachmentLocationsKHR");
    glad_vkCmdSetRenderingInputAttachmentIndicesKHR = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR) load(userptr, "vkCmdSetRenderingInputAttachmentIndicesKHR");
}
static void glad_vk_load_VK_KHR_external_fence_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_capabilities) return;
    glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_fence_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_fd) return;
    glad_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR) load(userptr, "vkGetFenceFdKHR");
    glad_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR) load(userptr, "vkImportFenceFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_fence_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_win32) return;
    glad_vkGetFenceWin32HandleKHR = (PFN_vkGetFenceWin32HandleKHR) load(userptr, "vkGetFenceWin32HandleKHR");
    glad_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR) load(userptr, "vkImportFenceWin32HandleKHR");
}

#endif
static void glad_vk_load_VK_KHR_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_capabilities) return;
    glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_memory_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_fd) return;
    glad_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR) load(userptr, "vkGetMemoryFdKHR");
    glad_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR) load(userptr, "vkGetMemoryFdPropertiesKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_win32) return;
    glad_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR) load(userptr, "vkGetMemoryWin32HandleKHR");
    glad_vkGetMemoryWin32HandlePropertiesKHR = (PFN_vkGetMemoryWin32HandlePropertiesKHR) load(userptr, "vkGetMemoryWin32HandlePropertiesKHR");
}

#endif
static void glad_vk_load_VK_KHR_external_semaphore_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_capabilities) return;
    glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR) load(userptr, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_fd) return;
    glad_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR) load(userptr, "vkGetSemaphoreFdKHR");
    glad_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR) load(userptr, "vkImportSemaphoreFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_external_semaphore_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_win32) return;
    glad_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR) load(userptr, "vkGetSemaphoreWin32HandleKHR");
    glad_vkImportSemaphoreWin32HandleKHR = (PFN_vkImportSemaphoreWin32HandleKHR) load(userptr, "vkImportSemaphoreWin32HandleKHR");
}

#endif
static void glad_vk_load_VK_KHR_fragment_shading_rate( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_fragment_shading_rate) return;
    glad_vkCmdSetFragmentShadingRateKHR = (PFN_vkCmdSetFragmentShadingRateKHR) load(userptr, "vkCmdSetFragmentShadingRateKHR");
    glad_vkGetPhysicalDeviceFragmentShadingRatesKHR = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR) load(userptr, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
}
static void glad_vk_load_VK_KHR_get_display_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_display_properties2) return;
    glad_vkGetDisplayModeProperties2KHR = (PFN_vkGetDisplayModeProperties2KHR) load(userptr, "vkGetDisplayModeProperties2KHR");
    glad_vkGetDisplayPlaneCapabilities2KHR = (PFN_vkGetDisplayPlaneCapabilities2KHR) load(userptr, "vkGetDisplayPlaneCapabilities2KHR");
    glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR) load(userptr, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
    glad_vkGetPhysicalDeviceDisplayProperties2KHR = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR) load(userptr, "vkGetPhysicalDeviceDisplayProperties2KHR");
}
static void glad_vk_load_VK_KHR_get_memory_requirements2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_memory_requirements2) return;
    glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR) load(userptr, "vkGetBufferMemoryRequirements2KHR");
    glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR) load(userptr, "vkGetImageMemoryRequirements2KHR");
    glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR) load(userptr, "vkGetImageSparseMemoryRequirements2KHR");
}
static void glad_vk_load_VK_KHR_get_physical_device_properties2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_physical_device_properties2) return;
    glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR) load(userptr, "vkGetPhysicalDeviceFeatures2KHR");
    glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceFormatProperties2KHR");
    glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceImageFormatProperties2KHR");
    glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR) load(userptr, "vkGetPhysicalDeviceMemoryProperties2KHR");
    glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR) load(userptr, "vkGetPhysicalDeviceProperties2KHR");
    glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR) load(userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}
static void glad_vk_load_VK_KHR_get_surface_capabilities2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_surface_capabilities2) return;
    glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    glad_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormats2KHR");
}
static void glad_vk_load_VK_KHR_line_rasterization( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_line_rasterization) return;
    glad_vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR) load(userptr, "vkCmdSetLineStippleKHR");
}
static void glad_vk_load_VK_KHR_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance1) return;
    glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR) load(userptr, "vkTrimCommandPoolKHR");
}
static void glad_vk_load_VK_KHR_maintenance3( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance3) return;
    glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR) load(userptr, "vkGetDescriptorSetLayoutSupportKHR");
}
static void glad_vk_load_VK_KHR_maintenance4( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance4) return;
    glad_vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR) load(userptr, "vkGetDeviceBufferMemoryRequirementsKHR");
    glad_vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR) load(userptr, "vkGetDeviceImageMemoryRequirementsKHR");
    glad_vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR) load(userptr, "vkGetDeviceImageSparseMemoryRequirementsKHR");
}
static void glad_vk_load_VK_KHR_maintenance5( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance5) return;
    glad_vkCmdBindIndexBuffer2KHR = (PFN_vkCmdBindIndexBuffer2KHR) load(userptr, "vkCmdBindIndexBuffer2KHR");
    glad_vkGetDeviceImageSubresourceLayoutKHR = (PFN_vkGetDeviceImageSubresourceLayoutKHR) load(userptr, "vkGetDeviceImageSubresourceLayoutKHR");
    glad_vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR) load(userptr, "vkGetImageSubresourceLayout2KHR");
    glad_vkGetRenderingAreaGranularityKHR = (PFN_vkGetRenderingAreaGranularityKHR) load(userptr, "vkGetRenderingAreaGranularityKHR");
}
static void glad_vk_load_VK_KHR_maintenance6( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_maintenance6) return;
    glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT) load(userptr, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
    glad_vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR) load(userptr, "vkCmdBindDescriptorSets2KHR");
    glad_vkCmdPushConstants2KHR = (PFN_vkCmdPushConstants2KHR) load(userptr, "vkCmdPushConstants2KHR");
    glad_vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR) load(userptr, "vkCmdPushDescriptorSet2KHR");
    glad_vkCmdPushDescriptorSetWithTemplate2KHR = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR) load(userptr, "vkCmdPushDescriptorSetWithTemplate2KHR");
    glad_vkCmdSetDescriptorBufferOffsets2EXT = (PFN_vkCmdSetDescriptorBufferOffsets2EXT) load(userptr, "vkCmdSetDescriptorBufferOffsets2EXT");
}
static void glad_vk_load_VK_KHR_map_memory2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_map_memory2) return;
    glad_vkMapMemory2KHR = (PFN_vkMapMemory2KHR) load(userptr, "vkMapMemory2KHR");
    glad_vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR) load(userptr, "vkUnmapMemory2KHR");
}
static void glad_vk_load_VK_KHR_performance_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_performance_query) return;
    glad_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR) load(userptr, "vkAcquireProfilingLockKHR");
    glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) load(userptr, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
    glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    glad_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR) load(userptr, "vkReleaseProfilingLockKHR");
}
static void glad_vk_load_VK_KHR_pipeline_executable_properties( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_pipeline_executable_properties) return;
    glad_vkGetPipelineExecutableInternalRepresentationsKHR = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR) load(userptr, "vkGetPipelineExecutableInternalRepresentationsKHR");
    glad_vkGetPipelineExecutablePropertiesKHR = (PFN_vkGetPipelineExecutablePropertiesKHR) load(userptr, "vkGetPipelineExecutablePropertiesKHR");
    glad_vkGetPipelineExecutableStatisticsKHR = (PFN_vkGetPipelineExecutableStatisticsKHR) load(userptr, "vkGetPipelineExecutableStatisticsKHR");
}
static void glad_vk_load_VK_KHR_present_wait( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_present_wait) return;
    glad_vkWaitForPresentKHR = (PFN_vkWaitForPresentKHR) load(userptr, "vkWaitForPresentKHR");
}
static void glad_vk_load_VK_KHR_push_descriptor( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_push_descriptor) return;
    glad_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR) load(userptr, "vkCmdPushDescriptorSetKHR");
    glad_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR) load(userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
}
static void glad_vk_load_VK_KHR_ray_tracing_maintenance1( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_ray_tracing_maintenance1) return;
    glad_vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR) load(userptr, "vkCmdTraceRaysIndirect2KHR");
}
static void glad_vk_load_VK_KHR_ray_tracing_pipeline( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_ray_tracing_pipeline) return;
    glad_vkCmdSetRayTracingPipelineStackSizeKHR = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR) load(userptr, "vkCmdSetRayTracingPipelineStackSizeKHR");
    glad_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR) load(userptr, "vkCmdTraceRaysIndirectKHR");
    glad_vkCmdTraceRaysKHR = (PFN_vkCmdTraceRaysKHR) load(userptr, "vkCmdTraceRaysKHR");
    glad_vkCreateRayTracingPipelinesKHR = (PFN_vkCreateRayTracingPipelinesKHR) load(userptr, "vkCreateRayTracingPipelinesKHR");
    glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR) load(userptr, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
    glad_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR) load(userptr, "vkGetRayTracingShaderGroupHandlesKHR");
    glad_vkGetRayTracingShaderGroupStackSizeKHR = (PFN_vkGetRayTracingShaderGroupStackSizeKHR) load(userptr, "vkGetRayTracingShaderGroupStackSizeKHR");
}
static void glad_vk_load_VK_KHR_sampler_ycbcr_conversion( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_sampler_ycbcr_conversion) return;
    glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR) load(userptr, "vkCreateSamplerYcbcrConversionKHR");
    glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR) load(userptr, "vkDestroySamplerYcbcrConversionKHR");
}
static void glad_vk_load_VK_KHR_shared_presentable_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_shared_presentable_image) return;
    glad_vkGetSwapchainStatusKHR = (PFN_vkGetSwapchainStatusKHR) load(userptr, "vkGetSwapchainStatusKHR");
}
static void glad_vk_load_VK_KHR_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_surface) return;
    glad_vkDestroySurfaceKHR = (PFN_vkDestroySurfaceKHR) load(userptr, "vkDestroySurfaceKHR");
    glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
    glad_vkGetPhysicalDeviceSurfaceFormatsKHR = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormatsKHR");
    glad_vkGetPhysicalDeviceSurfacePresentModesKHR = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR) load(userptr, "vkGetPhysicalDeviceSurfacePresentModesKHR");
    glad_vkGetPhysicalDeviceSurfaceSupportKHR = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR) load(userptr, "vkGetPhysicalDeviceSurfaceSupportKHR");
}
static void glad_vk_load_VK_KHR_swapchain( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_swapchain) return;
    glad_vkAcquireNextImage2KHR = (PFN_vkAcquireNextImage2KHR) load(userptr, "vkAcquireNextImage2KHR");
    glad_vkAcquireNextImageKHR = (PFN_vkAcquireNextImageKHR) load(userptr, "vkAcquireNextImageKHR");
    glad_vkCreateSwapchainKHR = (PFN_vkCreateSwapchainKHR) load(userptr, "vkCreateSwapchainKHR");
    glad_vkDestroySwapchainKHR = (PFN_vkDestroySwapchainKHR) load(userptr, "vkDestroySwapchainKHR");
    glad_vkGetDeviceGroupPresentCapabilitiesKHR = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR) load(userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
    glad_vkGetDeviceGroupSurfacePresentModesKHR = (PFN_vkGetDeviceGroupSurfacePresentModesKHR) load(userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
    glad_vkGetPhysicalDevicePresentRectanglesKHR = (PFN_vkGetPhysicalDevicePresentRectanglesKHR) load(userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
    glad_vkGetSwapchainImagesKHR = (PFN_vkGetSwapchainImagesKHR) load(userptr, "vkGetSwapchainImagesKHR");
    glad_vkQueuePresentKHR = (PFN_vkQueuePresentKHR) load(userptr, "vkQueuePresentKHR");
}
static void glad_vk_load_VK_KHR_synchronization2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_synchronization2) return;
    glad_vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR) load(userptr, "vkCmdPipelineBarrier2KHR");
    glad_vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR) load(userptr, "vkCmdResetEvent2KHR");
    glad_vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR) load(userptr, "vkCmdSetEvent2KHR");
    glad_vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR) load(userptr, "vkCmdWaitEvents2KHR");
    glad_vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD) load(userptr, "vkCmdWriteBufferMarker2AMD");
    glad_vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR) load(userptr, "vkCmdWriteTimestamp2KHR");
    glad_vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV) load(userptr, "vkGetQueueCheckpointData2NV");
    glad_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR) load(userptr, "vkQueueSubmit2KHR");
}
static void glad_vk_load_VK_KHR_timeline_semaphore( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_timeline_semaphore) return;
    glad_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR) load(userptr, "vkGetSemaphoreCounterValueKHR");
    glad_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR) load(userptr, "vkSignalSemaphoreKHR");
    glad_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR) load(userptr, "vkWaitSemaphoresKHR");
}
static void glad_vk_load_VK_KHR_video_decode_queue( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_video_decode_queue) return;
    glad_vkCmdDecodeVideoKHR = (PFN_vkCmdDecodeVideoKHR) load(userptr, "vkCmdDecodeVideoKHR");
}
static void glad_vk_load_VK_KHR_video_encode_queue( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_video_encode_queue) return;
    glad_vkCmdEncodeVideoKHR = (PFN_vkCmdEncodeVideoKHR) load(userptr, "vkCmdEncodeVideoKHR");
    glad_vkGetEncodedVideoSessionParametersKHR = (PFN_vkGetEncodedVideoSessionParametersKHR) load(userptr, "vkGetEncodedVideoSessionParametersKHR");
    glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR) load(userptr, "vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR");
}
static void glad_vk_load_VK_KHR_video_queue( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_video_queue) return;
    glad_vkBindVideoSessionMemoryKHR = (PFN_vkBindVideoSessionMemoryKHR) load(userptr, "vkBindVideoSessionMemoryKHR");
    glad_vkCmdBeginVideoCodingKHR = (PFN_vkCmdBeginVideoCodingKHR) load(userptr, "vkCmdBeginVideoCodingKHR");
    glad_vkCmdControlVideoCodingKHR = (PFN_vkCmdControlVideoCodingKHR) load(userptr, "vkCmdControlVideoCodingKHR");
    glad_vkCmdEndVideoCodingKHR = (PFN_vkCmdEndVideoCodingKHR) load(userptr, "vkCmdEndVideoCodingKHR");
    glad_vkCreateVideoSessionKHR = (PFN_vkCreateVideoSessionKHR) load(userptr, "vkCreateVideoSessionKHR");
    glad_vkCreateVideoSessionParametersKHR = (PFN_vkCreateVideoSessionParametersKHR) load(userptr, "vkCreateVideoSessionParametersKHR");
    glad_vkDestroyVideoSessionKHR = (PFN_vkDestroyVideoSessionKHR) load(userptr, "vkDestroyVideoSessionKHR");
    glad_vkDestroyVideoSessionParametersKHR = (PFN_vkDestroyVideoSessionParametersKHR) load(userptr, "vkDestroyVideoSessionParametersKHR");
    glad_vkGetPhysicalDeviceVideoCapabilitiesKHR = (PFN_vkGetPhysicalDeviceVideoCapabilitiesKHR) load(userptr, "vkGetPhysicalDeviceVideoCapabilitiesKHR");
    glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR = (PFN_vkGetPhysicalDeviceVideoFormatPropertiesKHR) load(userptr, "vkGetPhysicalDeviceVideoFormatPropertiesKHR");
    glad_vkGetVideoSessionMemoryRequirementsKHR = (PFN_vkGetVideoSessionMemoryRequirementsKHR) load(userptr, "vkGetVideoSessionMemoryRequirementsKHR");
    glad_vkUpdateVideoSessionParametersKHR = (PFN_vkUpdateVideoSessionParametersKHR) load(userptr, "vkUpdateVideoSessionParametersKHR");
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
static void glad_vk_load_VK_KHR_wayland_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_wayland_surface) return;
    glad_vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR) load(userptr, "vkCreateWaylandSurfaceKHR");
    glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_KHR_win32_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_win32_surface) return;
    glad_vkCreateWin32SurfaceKHR = (PFN_vkCreateWin32SurfaceKHR) load(userptr, "vkCreateWin32SurfaceKHR");
    glad_vkGetPhysicalDeviceWin32PresentationSupportKHR = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
static void glad_vk_load_VK_KHR_xcb_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xcb_surface) return;
    glad_vkCreateXcbSurfaceKHR = (PFN_vkCreateXcbSurfaceKHR) load(userptr, "vkCreateXcbSurfaceKHR");
    glad_vkGetPhysicalDeviceXcbPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
static void glad_vk_load_VK_KHR_xlib_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_xlib_surface) return;
    glad_vkCreateXlibSurfaceKHR = (PFN_vkCreateXlibSurfaceKHR) load(userptr, "vkCreateXlibSurfaceKHR");
    glad_vkGetPhysicalDeviceXlibPresentationSupportKHR = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR) load(userptr, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
static void glad_vk_load_VK_MVK_ios_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_ios_surface) return;
    glad_vkCreateIOSSurfaceMVK = (PFN_vkCreateIOSSurfaceMVK) load(userptr, "vkCreateIOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
static void glad_vk_load_VK_MVK_macos_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_MVK_macos_surface) return;
    glad_vkCreateMacOSSurfaceMVK = (PFN_vkCreateMacOSSurfaceMVK) load(userptr, "vkCreateMacOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
static void glad_vk_load_VK_NN_vi_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NN_vi_surface) return;
    glad_vkCreateViSurfaceNN = (PFN_vkCreateViSurfaceNN) load(userptr, "vkCreateViSurfaceNN");
}

#endif
static void glad_vk_load_VK_NVX_binary_import( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_binary_import) return;
    glad_vkCmdCuLaunchKernelNVX = (PFN_vkCmdCuLaunchKernelNVX) load(userptr, "vkCmdCuLaunchKernelNVX");
    glad_vkCreateCuFunctionNVX = (PFN_vkCreateCuFunctionNVX) load(userptr, "vkCreateCuFunctionNVX");
    glad_vkCreateCuModuleNVX = (PFN_vkCreateCuModuleNVX) load(userptr, "vkCreateCuModuleNVX");
    glad_vkDestroyCuFunctionNVX = (PFN_vkDestroyCuFunctionNVX) load(userptr, "vkDestroyCuFunctionNVX");
    glad_vkDestroyCuModuleNVX = (PFN_vkDestroyCuModuleNVX) load(userptr, "vkDestroyCuModuleNVX");
}
static void glad_vk_load_VK_NVX_image_view_handle( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NVX_image_view_handle) return;
    glad_vkGetImageViewAddressNVX = (PFN_vkGetImageViewAddressNVX) load(userptr, "vkGetImageViewAddressNVX");
    glad_vkGetImageViewHandleNVX = (PFN_vkGetImageViewHandleNVX) load(userptr, "vkGetImageViewHandleNVX");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_NV_acquire_winrt_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_acquire_winrt_display) return;
    glad_vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV) load(userptr, "vkAcquireWinrtDisplayNV");
    glad_vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV) load(userptr, "vkGetWinrtDisplayNV");
}

#endif
static void glad_vk_load_VK_NV_clip_space_w_scaling( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_clip_space_w_scaling) return;
    glad_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV) load(userptr, "vkCmdSetViewportWScalingNV");
}
static void glad_vk_load_VK_NV_cooperative_matrix( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_cooperative_matrix) return;
    glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV) load(userptr, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
}
static void glad_vk_load_VK_NV_copy_memory_indirect( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_copy_memory_indirect) return;
    glad_vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV) load(userptr, "vkCmdCopyMemoryIndirectNV");
    glad_vkCmdCopyMemoryToImageIndirectNV = (PFN_vkCmdCopyMemoryToImageIndirectNV) load(userptr, "vkCmdCopyMemoryToImageIndirectNV");
}
static void glad_vk_load_VK_NV_coverage_reduction_mode( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_coverage_reduction_mode) return;
    glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV) load(userptr, "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
}
static void glad_vk_load_VK_NV_cuda_kernel_launch( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_cuda_kernel_launch) return;
    glad_vkCmdCudaLaunchKernelNV = (PFN_vkCmdCudaLaunchKernelNV) load(userptr, "vkCmdCudaLaunchKernelNV");
    glad_vkCreateCudaFunctionNV = (PFN_vkCreateCudaFunctionNV) load(userptr, "vkCreateCudaFunctionNV");
    glad_vkCreateCudaModuleNV = (PFN_vkCreateCudaModuleNV) load(userptr, "vkCreateCudaModuleNV");
    glad_vkDestroyCudaFunctionNV = (PFN_vkDestroyCudaFunctionNV) load(userptr, "vkDestroyCudaFunctionNV");
    glad_vkDestroyCudaModuleNV = (PFN_vkDestroyCudaModuleNV) load(userptr, "vkDestroyCudaModuleNV");
    glad_vkGetCudaModuleCacheNV = (PFN_vkGetCudaModuleCacheNV) load(userptr, "vkGetCudaModuleCacheNV");
}
static void glad_vk_load_VK_NV_device_diagnostic_checkpoints( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_device_diagnostic_checkpoints) return;
    glad_vkCmdSetCheckpointNV = (PFN_vkCmdSetCheckpointNV) load(userptr, "vkCmdSetCheckpointNV");
    glad_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV) load(userptr, "vkGetQueueCheckpointDataNV");
}
static void glad_vk_load_VK_NV_device_generated_commands( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_device_generated_commands) return;
    glad_vkCmdBindPipelineShaderGroupNV = (PFN_vkCmdBindPipelineShaderGroupNV) load(userptr, "vkCmdBindPipelineShaderGroupNV");
    glad_vkCmdExecuteGeneratedCommandsNV = (PFN_vkCmdExecuteGeneratedCommandsNV) load(userptr, "vkCmdExecuteGeneratedCommandsNV");
    glad_vkCmdPreprocessGeneratedCommandsNV = (PFN_vkCmdPreprocessGeneratedCommandsNV) load(userptr, "vkCmdPreprocessGeneratedCommandsNV");
    glad_vkCreateIndirectCommandsLayoutNV = (PFN_vkCreateIndirectCommandsLayoutNV) load(userptr, "vkCreateIndirectCommandsLayoutNV");
    glad_vkDestroyIndirectCommandsLayoutNV = (PFN_vkDestroyIndirectCommandsLayoutNV) load(userptr, "vkDestroyIndirectCommandsLayoutNV");
    glad_vkGetGeneratedCommandsMemoryRequirementsNV = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV) load(userptr, "vkGetGeneratedCommandsMemoryRequirementsNV");
}
static void glad_vk_load_VK_NV_device_generated_commands_compute( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_device_generated_commands_compute) return;
    glad_vkCmdUpdatePipelineIndirectBufferNV = (PFN_vkCmdUpdatePipelineIndirectBufferNV) load(userptr, "vkCmdUpdatePipelineIndirectBufferNV");
    glad_vkGetPipelineIndirectDeviceAddressNV = (PFN_vkGetPipelineIndirectDeviceAddressNV) load(userptr, "vkGetPipelineIndirectDeviceAddressNV");
    glad_vkGetPipelineIndirectMemoryRequirementsNV = (PFN_vkGetPipelineIndirectMemoryRequirementsNV) load(userptr, "vkGetPipelineIndirectMemoryRequirementsNV");
}
static void glad_vk_load_VK_NV_external_memory_capabilities( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_capabilities) return;
    glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV) load(userptr, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
}
static void glad_vk_load_VK_NV_external_memory_rdma( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_rdma) return;
    glad_vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV) load(userptr, "vkGetMemoryRemoteAddressNV");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_NV_external_memory_win32( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_win32) return;
    glad_vkGetMemoryWin32HandleNV = (PFN_vkGetMemoryWin32HandleNV) load(userptr, "vkGetMemoryWin32HandleNV");
}

#endif
static void glad_vk_load_VK_NV_fragment_shading_rate_enums( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_fragment_shading_rate_enums) return;
    glad_vkCmdSetFragmentShadingRateEnumNV = (PFN_vkCmdSetFragmentShadingRateEnumNV) load(userptr, "vkCmdSetFragmentShadingRateEnumNV");
}
static void glad_vk_load_VK_NV_low_latency2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_low_latency2) return;
    glad_vkGetLatencyTimingsNV = (PFN_vkGetLatencyTimingsNV) load(userptr, "vkGetLatencyTimingsNV");
    glad_vkLatencySleepNV = (PFN_vkLatencySleepNV) load(userptr, "vkLatencySleepNV");
    glad_vkQueueNotifyOutOfBandNV = (PFN_vkQueueNotifyOutOfBandNV) load(userptr, "vkQueueNotifyOutOfBandNV");
    glad_vkSetLatencyMarkerNV = (PFN_vkSetLatencyMarkerNV) load(userptr, "vkSetLatencyMarkerNV");
    glad_vkSetLatencySleepModeNV = (PFN_vkSetLatencySleepModeNV) load(userptr, "vkSetLatencySleepModeNV");
}
static void glad_vk_load_VK_NV_memory_decompression( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_memory_decompression) return;
    glad_vkCmdDecompressMemoryIndirectCountNV = (PFN_vkCmdDecompressMemoryIndirectCountNV) load(userptr, "vkCmdDecompressMemoryIndirectCountNV");
    glad_vkCmdDecompressMemoryNV = (PFN_vkCmdDecompressMemoryNV) load(userptr, "vkCmdDecompressMemoryNV");
}
static void glad_vk_load_VK_NV_mesh_shader( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_mesh_shader) return;
    glad_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV) load(userptr, "vkCmdDrawMeshTasksIndirectCountNV");
    glad_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV) load(userptr, "vkCmdDrawMeshTasksIndirectNV");
    glad_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV) load(userptr, "vkCmdDrawMeshTasksNV");
}
static void glad_vk_load_VK_NV_optical_flow( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_optical_flow) return;
    glad_vkBindOpticalFlowSessionImageNV = (PFN_vkBindOpticalFlowSessionImageNV) load(userptr, "vkBindOpticalFlowSessionImageNV");
    glad_vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV) load(userptr, "vkCmdOpticalFlowExecuteNV");
    glad_vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV) load(userptr, "vkCreateOpticalFlowSessionNV");
    glad_vkDestroyOpticalFlowSessionNV = (PFN_vkDestroyOpticalFlowSessionNV) load(userptr, "vkDestroyOpticalFlowSessionNV");
    glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV) load(userptr, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
}
static void glad_vk_load_VK_NV_ray_tracing( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_ray_tracing) return;
    glad_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV) load(userptr, "vkBindAccelerationStructureMemoryNV");
    glad_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV) load(userptr, "vkCmdBuildAccelerationStructureNV");
    glad_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV) load(userptr, "vkCmdCopyAccelerationStructureNV");
    glad_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV) load(userptr, "vkCmdTraceRaysNV");
    glad_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV) load(userptr, "vkCmdWriteAccelerationStructuresPropertiesNV");
    glad_vkCompileDeferredNV = (PFN_vkCompileDeferredNV) load(userptr, "vkCompileDeferredNV");
    glad_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV) load(userptr, "vkCreateAccelerationStructureNV");
    glad_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV) load(userptr, "vkCreateRayTracingPipelinesNV");
    glad_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV) load(userptr, "vkDestroyAccelerationStructureNV");
    glad_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV) load(userptr, "vkGetAccelerationStructureHandleNV");
    glad_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV) load(userptr, "vkGetAccelerationStructureMemoryRequirementsNV");
    glad_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV) load(userptr, "vkGetRayTracingShaderGroupHandlesNV");
}
static void glad_vk_load_VK_NV_scissor_exclusive( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_scissor_exclusive) return;
    glad_vkCmdSetExclusiveScissorEnableNV = (PFN_vkCmdSetExclusiveScissorEnableNV) load(userptr, "vkCmdSetExclusiveScissorEnableNV");
    glad_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV) load(userptr, "vkCmdSetExclusiveScissorNV");
}
static void glad_vk_load_VK_NV_shading_rate_image( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_shading_rate_image) return;
    glad_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV) load(userptr, "vkCmdBindShadingRateImageNV");
    glad_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV) load(userptr, "vkCmdSetCoarseSampleOrderNV");
    glad_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV) load(userptr, "vkCmdSetViewportShadingRatePaletteNV");
}
static void glad_vk_load_VK_QCOM_tile_properties( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_QCOM_tile_properties) return;
    glad_vkGetDynamicRenderingTilePropertiesQCOM = (PFN_vkGetDynamicRenderingTilePropertiesQCOM) load(userptr, "vkGetDynamicRenderingTilePropertiesQCOM");
    glad_vkGetFramebufferTilePropertiesQCOM = (PFN_vkGetFramebufferTilePropertiesQCOM) load(userptr, "vkGetFramebufferTilePropertiesQCOM");
}
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
static void glad_vk_load_VK_QNX_external_memory_screen_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_QNX_external_memory_screen_buffer) return;
    glad_vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX) load(userptr, "vkGetScreenBufferPropertiesQNX");
}

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
static void glad_vk_load_VK_QNX_screen_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_QNX_screen_surface) return;
    glad_vkCreateScreenSurfaceQNX = (PFN_vkCreateScreenSurfaceQNX) load(userptr, "vkCreateScreenSurfaceQNX");
    glad_vkGetPhysicalDeviceScreenPresentationSupportQNX = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX) load(userptr, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
}

#endif
static void glad_vk_load_VK_VALVE_descriptor_set_host_mapping( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_VALVE_descriptor_set_host_mapping) return;
    glad_vkGetDescriptorSetHostMappingVALVE = (PFN_vkGetDescriptorSetHostMappingVALVE) load(userptr, "vkGetDescriptorSetHostMappingVALVE");
    glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE) load(userptr, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
}


static void glad_vk_resolve_aliases(void) {
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
    if (glad_vkBindBufferMemory2 == NULL && glad_vkBindBufferMemory2KHR != NULL) glad_vkBindBufferMemory2 = (PFN_vkBindBufferMemory2)glad_vkBindBufferMemory2KHR;
    if (glad_vkBindBufferMemory2KHR == NULL && glad_vkBindBufferMemory2 != NULL) glad_vkBindBufferMemory2KHR = (PFN_vkBindBufferMemory2KHR)glad_vkBindBufferMemory2;
    if (glad_vkBindImageMemory2 == NULL && glad_vkBindImageMemory2KHR != NULL) glad_vkBindImageMemory2 = (PFN_vkBindImageMemory2)glad_vkBindImageMemory2KHR;
    if (glad_vkBindImageMemory2KHR == NULL && glad_vkBindImageMemory2 != NULL) glad_vkBindImageMemory2KHR = (PFN_vkBindImageMemory2KHR)glad_vkBindImageMemory2;
    if (glad_vkCmdBeginRendering == NULL && glad_vkCmdBeginRenderingKHR != NULL) glad_vkCmdBeginRendering = (PFN_vkCmdBeginRendering)glad_vkCmdBeginRenderingKHR;
    if (glad_vkCmdBeginRenderingKHR == NULL && glad_vkCmdBeginRendering != NULL) glad_vkCmdBeginRenderingKHR = (PFN_vkCmdBeginRenderingKHR)glad_vkCmdBeginRendering;
    if (glad_vkCmdBeginRenderPass2 == NULL && glad_vkCmdBeginRenderPass2KHR != NULL) glad_vkCmdBeginRenderPass2 = (PFN_vkCmdBeginRenderPass2)glad_vkCmdBeginRenderPass2KHR;
    if (glad_vkCmdBeginRenderPass2KHR == NULL && glad_vkCmdBeginRenderPass2 != NULL) glad_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)glad_vkCmdBeginRenderPass2;
    if (glad_vkCmdBindVertexBuffers2 == NULL && glad_vkCmdBindVertexBuffers2EXT != NULL) glad_vkCmdBindVertexBuffers2 = (PFN_vkCmdBindVertexBuffers2)glad_vkCmdBindVertexBuffers2EXT;
    if (glad_vkCmdBindVertexBuffers2EXT == NULL && glad_vkCmdBindVertexBuffers2 != NULL) glad_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)glad_vkCmdBindVertexBuffers2;
    if (glad_vkCmdBlitImage2 == NULL && glad_vkCmdBlitImage2KHR != NULL) glad_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)glad_vkCmdBlitImage2KHR;
    if (glad_vkCmdBlitImage2KHR == NULL && glad_vkCmdBlitImage2 != NULL) glad_vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)glad_vkCmdBlitImage2;
    if (glad_vkCmdCopyBuffer2 == NULL && glad_vkCmdCopyBuffer2KHR != NULL) glad_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)glad_vkCmdCopyBuffer2KHR;
    if (glad_vkCmdCopyBuffer2KHR == NULL && glad_vkCmdCopyBuffer2 != NULL) glad_vkCmdCopyBuffer2KHR = (PFN_vkCmdCopyBuffer2KHR)glad_vkCmdCopyBuffer2;
    if (glad_vkCmdCopyBufferToImage2 == NULL && glad_vkCmdCopyBufferToImage2KHR != NULL) glad_vkCmdCopyBufferToImage2 = (PFN_vkCmdCopyBufferToImage2)glad_vkCmdCopyBufferToImage2KHR;
    if (glad_vkCmdCopyBufferToImage2KHR == NULL && glad_vkCmdCopyBufferToImage2 != NULL) glad_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)glad_vkCmdCopyBufferToImage2;
    if (glad_vkCmdCopyImage2 == NULL && glad_vkCmdCopyImage2KHR != NULL) glad_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)glad_vkCmdCopyImage2KHR;
    if (glad_vkCmdCopyImage2KHR == NULL && glad_vkCmdCopyImage2 != NULL) glad_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)glad_vkCmdCopyImage2;
    if (glad_vkCmdCopyImageToBuffer2 == NULL && glad_vkCmdCopyImageToBuffer2KHR != NULL) glad_vkCmdCopyImageToBuffer2 = (PFN_vkCmdCopyImageToBuffer2)glad_vkCmdCopyImageToBuffer2KHR;
    if (glad_vkCmdCopyImageToBuffer2KHR == NULL && glad_vkCmdCopyImageToBuffer2 != NULL) glad_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)glad_vkCmdCopyImageToBuffer2;
    if (glad_vkCmdDispatchBase == NULL && glad_vkCmdDispatchBaseKHR != NULL) glad_vkCmdDispatchBase = (PFN_vkCmdDispatchBase)glad_vkCmdDispatchBaseKHR;
    if (glad_vkCmdDispatchBaseKHR == NULL && glad_vkCmdDispatchBase != NULL) glad_vkCmdDispatchBaseKHR = (PFN_vkCmdDispatchBaseKHR)glad_vkCmdDispatchBase;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
    if (glad_vkCmdDrawIndexedIndirectCount == NULL && glad_vkCmdDrawIndexedIndirectCountAMD != NULL) glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)glad_vkCmdDrawIndexedIndirectCountAMD;
    if (glad_vkCmdDrawIndexedIndirectCount == NULL && glad_vkCmdDrawIndexedIndirectCountKHR != NULL) glad_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)glad_vkCmdDrawIndexedIndirectCountKHR;
    if (glad_vkCmdDrawIndexedIndirectCountAMD == NULL && glad_vkCmdDrawIndexedIndirectCount != NULL) glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)glad_vkCmdDrawIndexedIndirectCount;
    if (glad_vkCmdDrawIndexedIndirectCountAMD == NULL && glad_vkCmdDrawIndexedIndirectCountKHR != NULL) glad_vkCmdDrawIndexedIndirectCountAMD = (PFN_vkCmdDrawIndexedIndirectCountAMD)glad_vkCmdDrawIndexedIndirectCountKHR;
    if (glad_vkCmdDrawIndexedIndirectCountKHR == NULL && glad_vkCmdDrawIndexedIndirectCount != NULL) glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)glad_vkCmdDrawIndexedIndirectCount;
    if (glad_vkCmdDrawIndexedIndirectCountKHR == NULL && glad_vkCmdDrawIndexedIndirectCountAMD != NULL) glad_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)glad_vkCmdDrawIndexedIndirectCountAMD;
    if (glad_vkCmdDrawIndirectCount == NULL && glad_vkCmdDrawIndirectCountAMD != NULL) glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)glad_vkCmdDrawIndirectCountAMD;
    if (glad_vkCmdDrawIndirectCount == NULL && glad_vkCmdDrawIndirectCountKHR != NULL) glad_vkCmdDrawIndirectCount = (PFN_vkCmdDrawIndirectCount)glad_vkCmdDrawIndirectCountKHR;
    if (glad_vkCmdDrawIndirectCountAMD == NULL && glad_vkCmdDrawIndirectCount != NULL) glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)glad_vkCmdDrawIndirectCount;
    if (glad_vkCmdDrawIndirectCountAMD == NULL && glad_vkCmdDrawIndirectCountKHR != NULL) glad_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)glad_vkCmdDrawIndirectCountKHR;
    if (glad_vkCmdDrawIndirectCountKHR == NULL && glad_vkCmdDrawIndirectCount != NULL) glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)glad_vkCmdDrawIndirectCount;
    if (glad_vkCmdDrawIndirectCountKHR == NULL && glad_vkCmdDrawIndirectCountAMD != NULL) glad_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)glad_vkCmdDrawIndirectCountAMD;
    if (glad_vkCmdEndRendering == NULL && glad_vkCmdEndRenderingKHR != NULL) glad_vkCmdEndRendering = (PFN_vkCmdEndRendering)glad_vkCmdEndRenderingKHR;
    if (glad_vkCmdEndRenderingKHR == NULL && glad_vkCmdEndRendering != NULL) glad_vkCmdEndRenderingKHR = (PFN_vkCmdEndRenderingKHR)glad_vkCmdEndRendering;
    if (glad_vkCmdEndRenderPass2 == NULL && glad_vkCmdEndRenderPass2KHR != NULL) glad_vkCmdEndRenderPass2 = (PFN_vkCmdEndRenderPass2)glad_vkCmdEndRenderPass2KHR;
    if (glad_vkCmdEndRenderPass2KHR == NULL && glad_vkCmdEndRenderPass2 != NULL) glad_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)glad_vkCmdEndRenderPass2;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
    if (glad_vkCmdNextSubpass2 == NULL && glad_vkCmdNextSubpass2KHR != NULL) glad_vkCmdNextSubpass2 = (PFN_vkCmdNextSubpass2)glad_vkCmdNextSubpass2KHR;
    if (glad_vkCmdNextSubpass2KHR == NULL && glad_vkCmdNextSubpass2 != NULL) glad_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)glad_vkCmdNextSubpass2;
    if (glad_vkCmdPipelineBarrier2 == NULL && glad_vkCmdPipelineBarrier2KHR != NULL) glad_vkCmdPipelineBarrier2 = (PFN_vkCmdPipelineBarrier2)glad_vkCmdPipelineBarrier2KHR;
    if (glad_vkCmdPipelineBarrier2KHR == NULL && glad_vkCmdPipelineBarrier2 != NULL) glad_vkCmdPipelineBarrier2KHR = (PFN_vkCmdPipelineBarrier2KHR)glad_vkCmdPipelineBarrier2;
    if (glad_vkCmdResetEvent2 == NULL && glad_vkCmdResetEvent2KHR != NULL) glad_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)glad_vkCmdResetEvent2KHR;
    if (glad_vkCmdResetEvent2KHR == NULL && glad_vkCmdResetEvent2 != NULL) glad_vkCmdResetEvent2KHR = (PFN_vkCmdResetEvent2KHR)glad_vkCmdResetEvent2;
    if (glad_vkCmdResolveImage2 == NULL && glad_vkCmdResolveImage2KHR != NULL) glad_vkCmdResolveImage2 = (PFN_vkCmdResolveImage2)glad_vkCmdResolveImage2KHR;
    if (glad_vkCmdResolveImage2KHR == NULL && glad_vkCmdResolveImage2 != NULL) glad_vkCmdResolveImage2KHR = (PFN_vkCmdResolveImage2KHR)glad_vkCmdResolveImage2;
    if (glad_vkCmdSetCullMode == NULL && glad_vkCmdSetCullModeEXT != NULL) glad_vkCmdSetCullMode = (PFN_vkCmdSetCullMode)glad_vkCmdSetCullModeEXT;
    if (glad_vkCmdSetCullModeEXT == NULL && glad_vkCmdSetCullMode != NULL) glad_vkCmdSetCullModeEXT = (PFN_vkCmdSetCullModeEXT)glad_vkCmdSetCullMode;
    if (glad_vkCmdSetDepthBiasEnable == NULL && glad_vkCmdSetDepthBiasEnableEXT != NULL) glad_vkCmdSetDepthBiasEnable = (PFN_vkCmdSetDepthBiasEnable)glad_vkCmdSetDepthBiasEnableEXT;
    if (glad_vkCmdSetDepthBiasEnableEXT == NULL && glad_vkCmdSetDepthBiasEnable != NULL) glad_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)glad_vkCmdSetDepthBiasEnable;
    if (glad_vkCmdSetDepthBoundsTestEnable == NULL && glad_vkCmdSetDepthBoundsTestEnableEXT != NULL) glad_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)glad_vkCmdSetDepthBoundsTestEnableEXT;
    if (glad_vkCmdSetDepthBoundsTestEnableEXT == NULL && glad_vkCmdSetDepthBoundsTestEnable != NULL) glad_vkCmdSetDepthBoundsTestEnableEXT = (PFN_vkCmdSetDepthBoundsTestEnableEXT)glad_vkCmdSetDepthBoundsTestEnable;
    if (glad_vkCmdSetDepthCompareOp == NULL && glad_vkCmdSetDepthCompareOpEXT != NULL) glad_vkCmdSetDepthCompareOp = (PFN_vkCmdSetDepthCompareOp)glad_vkCmdSetDepthCompareOpEXT;
    if (glad_vkCmdSetDepthCompareOpEXT == NULL && glad_vkCmdSetDepthCompareOp != NULL) glad_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)glad_vkCmdSetDepthCompareOp;
    if (glad_vkCmdSetDepthTestEnable == NULL && glad_vkCmdSetDepthTestEnableEXT != NULL) glad_vkCmdSetDepthTestEnable = (PFN_vkCmdSetDepthTestEnable)glad_vkCmdSetDepthTestEnableEXT;
    if (glad_vkCmdSetDepthTestEnableEXT == NULL && glad_vkCmdSetDepthTestEnable != NULL) glad_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)glad_vkCmdSetDepthTestEnable;
    if (glad_vkCmdSetDepthWriteEnable == NULL && glad_vkCmdSetDepthWriteEnableEXT != NULL) glad_vkCmdSetDepthWriteEnable = (PFN_vkCmdSetDepthWriteEnable)glad_vkCmdSetDepthWriteEnableEXT;
    if (glad_vkCmdSetDepthWriteEnableEXT == NULL && glad_vkCmdSetDepthWriteEnable != NULL) glad_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)glad_vkCmdSetDepthWriteEnable;
    if (glad_vkCmdSetDeviceMask == NULL && glad_vkCmdSetDeviceMaskKHR != NULL) glad_vkCmdSetDeviceMask = (PFN_vkCmdSetDeviceMask)glad_vkCmdSetDeviceMaskKHR;
    if (glad_vkCmdSetDeviceMaskKHR == NULL && glad_vkCmdSetDeviceMask != NULL) glad_vkCmdSetDeviceMaskKHR = (PFN_vkCmdSetDeviceMaskKHR)glad_vkCmdSetDeviceMask;
    if (glad_vkCmdSetEvent2 == NULL && glad_vkCmdSetEvent2KHR != NULL) glad_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)glad_vkCmdSetEvent2KHR;
    if (glad_vkCmdSetEvent2KHR == NULL && glad_vkCmdSetEvent2 != NULL) glad_vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)glad_vkCmdSetEvent2;
    if (glad_vkCmdSetFrontFace == NULL && glad_vkCmdSetFrontFaceEXT != NULL) glad_vkCmdSetFrontFace = (PFN_vkCmdSetFrontFace)glad_vkCmdSetFrontFaceEXT;
    if (glad_vkCmdSetFrontFaceEXT == NULL && glad_vkCmdSetFrontFace != NULL) glad_vkCmdSetFrontFaceEXT = (PFN_vkCmdSetFrontFaceEXT)glad_vkCmdSetFrontFace;
    if (glad_vkCmdSetLineStippleEXT == NULL && glad_vkCmdSetLineStippleKHR != NULL) glad_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT)glad_vkCmdSetLineStippleKHR;
    if (glad_vkCmdSetLineStippleKHR == NULL && glad_vkCmdSetLineStippleEXT != NULL) glad_vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR)glad_vkCmdSetLineStippleEXT;
    if (glad_vkCmdSetPrimitiveRestartEnable == NULL && glad_vkCmdSetPrimitiveRestartEnableEXT != NULL) glad_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)glad_vkCmdSetPrimitiveRestartEnableEXT;
    if (glad_vkCmdSetPrimitiveRestartEnableEXT == NULL && glad_vkCmdSetPrimitiveRestartEnable != NULL) glad_vkCmdSetPrimitiveRestartEnableEXT = (PFN_vkCmdSetPrimitiveRestartEnableEXT)glad_vkCmdSetPrimitiveRestartEnable;
    if (glad_vkCmdSetPrimitiveTopology == NULL && glad_vkCmdSetPrimitiveTopologyEXT != NULL) glad_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)glad_vkCmdSetPrimitiveTopologyEXT;
    if (glad_vkCmdSetPrimitiveTopologyEXT == NULL && glad_vkCmdSetPrimitiveTopology != NULL) glad_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)glad_vkCmdSetPrimitiveTopology;
    if (glad_vkCmdSetRasterizerDiscardEnable == NULL && glad_vkCmdSetRasterizerDiscardEnableEXT != NULL) glad_vkCmdSetRasterizerDiscardEnable = (PFN_vkCmdSetRasterizerDiscardEnable)glad_vkCmdSetRasterizerDiscardEnableEXT;
    if (glad_vkCmdSetRasterizerDiscardEnableEXT == NULL && glad_vkCmdSetRasterizerDiscardEnable != NULL) glad_vkCmdSetRasterizerDiscardEnableEXT = (PFN_vkCmdSetRasterizerDiscardEnableEXT)glad_vkCmdSetRasterizerDiscardEnable;
    if (glad_vkCmdSetScissorWithCount == NULL && glad_vkCmdSetScissorWithCountEXT != NULL) glad_vkCmdSetScissorWithCount = (PFN_vkCmdSetScissorWithCount)glad_vkCmdSetScissorWithCountEXT;
    if (glad_vkCmdSetScissorWithCountEXT == NULL && glad_vkCmdSetScissorWithCount != NULL) glad_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)glad_vkCmdSetScissorWithCount;
    if (glad_vkCmdSetStencilOp == NULL && glad_vkCmdSetStencilOpEXT != NULL) glad_vkCmdSetStencilOp = (PFN_vkCmdSetStencilOp)glad_vkCmdSetStencilOpEXT;
    if (glad_vkCmdSetStencilOpEXT == NULL && glad_vkCmdSetStencilOp != NULL) glad_vkCmdSetStencilOpEXT = (PFN_vkCmdSetStencilOpEXT)glad_vkCmdSetStencilOp;
    if (glad_vkCmdSetStencilTestEnable == NULL && glad_vkCmdSetStencilTestEnableEXT != NULL) glad_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)glad_vkCmdSetStencilTestEnableEXT;
    if (glad_vkCmdSetStencilTestEnableEXT == NULL && glad_vkCmdSetStencilTestEnable != NULL) glad_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)glad_vkCmdSetStencilTestEnable;
    if (glad_vkCmdSetViewportWithCount == NULL && glad_vkCmdSetViewportWithCountEXT != NULL) glad_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)glad_vkCmdSetViewportWithCountEXT;
    if (glad_vkCmdSetViewportWithCountEXT == NULL && glad_vkCmdSetViewportWithCount != NULL) glad_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)glad_vkCmdSetViewportWithCount;
    if (glad_vkCmdWaitEvents2 == NULL && glad_vkCmdWaitEvents2KHR != NULL) glad_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)glad_vkCmdWaitEvents2KHR;
    if (glad_vkCmdWaitEvents2KHR == NULL && glad_vkCmdWaitEvents2 != NULL) glad_vkCmdWaitEvents2KHR = (PFN_vkCmdWaitEvents2KHR)glad_vkCmdWaitEvents2;
    if (glad_vkCmdWriteTimestamp2 == NULL && glad_vkCmdWriteTimestamp2KHR != NULL) glad_vkCmdWriteTimestamp2 = (PFN_vkCmdWriteTimestamp2)glad_vkCmdWriteTimestamp2KHR;
    if (glad_vkCmdWriteTimestamp2KHR == NULL && glad_vkCmdWriteTimestamp2 != NULL) glad_vkCmdWriteTimestamp2KHR = (PFN_vkCmdWriteTimestamp2KHR)glad_vkCmdWriteTimestamp2;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkCreateDescriptorUpdateTemplate == NULL && glad_vkCreateDescriptorUpdateTemplateKHR != NULL) glad_vkCreateDescriptorUpdateTemplate = (PFN_vkCreateDescriptorUpdateTemplate)glad_vkCreateDescriptorUpdateTemplateKHR;
    if (glad_vkCreateDescriptorUpdateTemplateKHR == NULL && glad_vkCreateDescriptorUpdateTemplate != NULL) glad_vkCreateDescriptorUpdateTemplateKHR = (PFN_vkCreateDescriptorUpdateTemplateKHR)glad_vkCreateDescriptorUpdateTemplate;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
    if (glad_vkCreatePrivateDataSlot == NULL && glad_vkCreatePrivateDataSlotEXT != NULL) glad_vkCreatePrivateDataSlot = (PFN_vkCreatePrivateDataSlot)glad_vkCreatePrivateDataSlotEXT;
    if (glad_vkCreatePrivateDataSlotEXT == NULL && glad_vkCreatePrivateDataSlot != NULL) glad_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)glad_vkCreatePrivateDataSlot;
    if (glad_vkCreateRenderPass2 == NULL && glad_vkCreateRenderPass2KHR != NULL) glad_vkCreateRenderPass2 = (PFN_vkCreateRenderPass2)glad_vkCreateRenderPass2KHR;
    if (glad_vkCreateRenderPass2KHR == NULL && glad_vkCreateRenderPass2 != NULL) glad_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)glad_vkCreateRenderPass2;
    if (glad_vkCreateSamplerYcbcrConversion == NULL && glad_vkCreateSamplerYcbcrConversionKHR != NULL) glad_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)glad_vkCreateSamplerYcbcrConversionKHR;
    if (glad_vkCreateSamplerYcbcrConversionKHR == NULL && glad_vkCreateSamplerYcbcrConversion != NULL) glad_vkCreateSamplerYcbcrConversionKHR = (PFN_vkCreateSamplerYcbcrConversionKHR)glad_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
#if defined(VK_USE_PLATFORM_GGP)

#endif
#if defined(VK_USE_PLATFORM_VI_NN)

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkDestroyDescriptorUpdateTemplate == NULL && glad_vkDestroyDescriptorUpdateTemplateKHR != NULL) glad_vkDestroyDescriptorUpdateTemplate = (PFN_vkDestroyDescriptorUpdateTemplate)glad_vkDestroyDescriptorUpdateTemplateKHR;
    if (glad_vkDestroyDescriptorUpdateTemplateKHR == NULL && glad_vkDestroyDescriptorUpdateTemplate != NULL) glad_vkDestroyDescriptorUpdateTemplateKHR = (PFN_vkDestroyDescriptorUpdateTemplateKHR)glad_vkDestroyDescriptorUpdateTemplate;
    if (glad_vkDestroyPrivateDataSlot == NULL && glad_vkDestroyPrivateDataSlotEXT != NULL) glad_vkDestroyPrivateDataSlot = (PFN_vkDestroyPrivateDataSlot)glad_vkDestroyPrivateDataSlotEXT;
    if (glad_vkDestroyPrivateDataSlotEXT == NULL && glad_vkDestroyPrivateDataSlot != NULL) glad_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)glad_vkDestroyPrivateDataSlot;
    if (glad_vkDestroySamplerYcbcrConversion == NULL && glad_vkDestroySamplerYcbcrConversionKHR != NULL) glad_vkDestroySamplerYcbcrConversion = (PFN_vkDestroySamplerYcbcrConversion)glad_vkDestroySamplerYcbcrConversionKHR;
    if (glad_vkDestroySamplerYcbcrConversionKHR == NULL && glad_vkDestroySamplerYcbcrConversion != NULL) glad_vkDestroySamplerYcbcrConversionKHR = (PFN_vkDestroySamplerYcbcrConversionKHR)glad_vkDestroySamplerYcbcrConversion;
    if (glad_vkEnumeratePhysicalDeviceGroups == NULL && glad_vkEnumeratePhysicalDeviceGroupsKHR != NULL) glad_vkEnumeratePhysicalDeviceGroups = (PFN_vkEnumeratePhysicalDeviceGroups)glad_vkEnumeratePhysicalDeviceGroupsKHR;
    if (glad_vkEnumeratePhysicalDeviceGroupsKHR == NULL && glad_vkEnumeratePhysicalDeviceGroups != NULL) glad_vkEnumeratePhysicalDeviceGroupsKHR = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)glad_vkEnumeratePhysicalDeviceGroups;
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkGetBufferDeviceAddress == NULL && glad_vkGetBufferDeviceAddressEXT != NULL) glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)glad_vkGetBufferDeviceAddressEXT;
    if (glad_vkGetBufferDeviceAddress == NULL && glad_vkGetBufferDeviceAddressKHR != NULL) glad_vkGetBufferDeviceAddress = (PFN_vkGetBufferDeviceAddress)glad_vkGetBufferDeviceAddressKHR;
    if (glad_vkGetBufferDeviceAddressEXT == NULL && glad_vkGetBufferDeviceAddress != NULL) glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)glad_vkGetBufferDeviceAddress;
    if (glad_vkGetBufferDeviceAddressEXT == NULL && glad_vkGetBufferDeviceAddressKHR != NULL) glad_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)glad_vkGetBufferDeviceAddressKHR;
    if (glad_vkGetBufferDeviceAddressKHR == NULL && glad_vkGetBufferDeviceAddress != NULL) glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)glad_vkGetBufferDeviceAddress;
    if (glad_vkGetBufferDeviceAddressKHR == NULL && glad_vkGetBufferDeviceAddressEXT != NULL) glad_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)glad_vkGetBufferDeviceAddressEXT;
    if (glad_vkGetBufferMemoryRequirements2 == NULL && glad_vkGetBufferMemoryRequirements2KHR != NULL) glad_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)glad_vkGetBufferMemoryRequirements2KHR;
    if (glad_vkGetBufferMemoryRequirements2KHR == NULL && glad_vkGetBufferMemoryRequirements2 != NULL) glad_vkGetBufferMemoryRequirements2KHR = (PFN_vkGetBufferMemoryRequirements2KHR)glad_vkGetBufferMemoryRequirements2;
    if (glad_vkGetBufferOpaqueCaptureAddress == NULL && glad_vkGetBufferOpaqueCaptureAddressKHR != NULL) glad_vkGetBufferOpaqueCaptureAddress = (PFN_vkGetBufferOpaqueCaptureAddress)glad_vkGetBufferOpaqueCaptureAddressKHR;
    if (glad_vkGetBufferOpaqueCaptureAddressKHR == NULL && glad_vkGetBufferOpaqueCaptureAddress != NULL) glad_vkGetBufferOpaqueCaptureAddressKHR = (PFN_vkGetBufferOpaqueCaptureAddressKHR)glad_vkGetBufferOpaqueCaptureAddress;
    if (glad_vkGetCalibratedTimestampsEXT == NULL && glad_vkGetCalibratedTimestampsKHR != NULL) glad_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)glad_vkGetCalibratedTimestampsKHR;
    if (glad_vkGetCalibratedTimestampsKHR == NULL && glad_vkGetCalibratedTimestampsEXT != NULL) glad_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)glad_vkGetCalibratedTimestampsEXT;
    if (glad_vkGetDescriptorSetLayoutSupport == NULL && glad_vkGetDescriptorSetLayoutSupportKHR != NULL) glad_vkGetDescriptorSetLayoutSupport = (PFN_vkGetDescriptorSetLayoutSupport)glad_vkGetDescriptorSetLayoutSupportKHR;
    if (glad_vkGetDescriptorSetLayoutSupportKHR == NULL && glad_vkGetDescriptorSetLayoutSupport != NULL) glad_vkGetDescriptorSetLayoutSupportKHR = (PFN_vkGetDescriptorSetLayoutSupportKHR)glad_vkGetDescriptorSetLayoutSupport;
    if (glad_vkGetDeviceBufferMemoryRequirements == NULL && glad_vkGetDeviceBufferMemoryRequirementsKHR != NULL) glad_vkGetDeviceBufferMemoryRequirements = (PFN_vkGetDeviceBufferMemoryRequirements)glad_vkGetDeviceBufferMemoryRequirementsKHR;
    if (glad_vkGetDeviceBufferMemoryRequirementsKHR == NULL && glad_vkGetDeviceBufferMemoryRequirements != NULL) glad_vkGetDeviceBufferMemoryRequirementsKHR = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)glad_vkGetDeviceBufferMemoryRequirements;
    if (glad_vkGetDeviceGroupPeerMemoryFeatures == NULL && glad_vkGetDeviceGroupPeerMemoryFeaturesKHR != NULL) glad_vkGetDeviceGroupPeerMemoryFeatures = (PFN_vkGetDeviceGroupPeerMemoryFeatures)glad_vkGetDeviceGroupPeerMemoryFeaturesKHR;
    if (glad_vkGetDeviceGroupPeerMemoryFeaturesKHR == NULL && glad_vkGetDeviceGroupPeerMemoryFeatures != NULL) glad_vkGetDeviceGroupPeerMemoryFeaturesKHR = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)glad_vkGetDeviceGroupPeerMemoryFeatures;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkGetDeviceImageMemoryRequirements == NULL && glad_vkGetDeviceImageMemoryRequirementsKHR != NULL) glad_vkGetDeviceImageMemoryRequirements = (PFN_vkGetDeviceImageMemoryRequirements)glad_vkGetDeviceImageMemoryRequirementsKHR;
    if (glad_vkGetDeviceImageMemoryRequirementsKHR == NULL && glad_vkGetDeviceImageMemoryRequirements != NULL) glad_vkGetDeviceImageMemoryRequirementsKHR = (PFN_vkGetDeviceImageMemoryRequirementsKHR)glad_vkGetDeviceImageMemoryRequirements;
    if (glad_vkGetDeviceImageSparseMemoryRequirements == NULL && glad_vkGetDeviceImageSparseMemoryRequirementsKHR != NULL) glad_vkGetDeviceImageSparseMemoryRequirements = (PFN_vkGetDeviceImageSparseMemoryRequirements)glad_vkGetDeviceImageSparseMemoryRequirementsKHR;
    if (glad_vkGetDeviceImageSparseMemoryRequirementsKHR == NULL && glad_vkGetDeviceImageSparseMemoryRequirements != NULL) glad_vkGetDeviceImageSparseMemoryRequirementsKHR = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)glad_vkGetDeviceImageSparseMemoryRequirements;
    if (glad_vkGetDeviceMemoryOpaqueCaptureAddress == NULL && glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR != NULL) glad_vkGetDeviceMemoryOpaqueCaptureAddress = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
    if (glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR == NULL && glad_vkGetDeviceMemoryOpaqueCaptureAddress != NULL) glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)glad_vkGetDeviceMemoryOpaqueCaptureAddress;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkGetImageMemoryRequirements2 == NULL && glad_vkGetImageMemoryRequirements2KHR != NULL) glad_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)glad_vkGetImageMemoryRequirements2KHR;
    if (glad_vkGetImageMemoryRequirements2KHR == NULL && glad_vkGetImageMemoryRequirements2 != NULL) glad_vkGetImageMemoryRequirements2KHR = (PFN_vkGetImageMemoryRequirements2KHR)glad_vkGetImageMemoryRequirements2;
    if (glad_vkGetImageSparseMemoryRequirements2 == NULL && glad_vkGetImageSparseMemoryRequirements2KHR != NULL) glad_vkGetImageSparseMemoryRequirements2 = (PFN_vkGetImageSparseMemoryRequirements2)glad_vkGetImageSparseMemoryRequirements2KHR;
    if (glad_vkGetImageSparseMemoryRequirements2KHR == NULL && glad_vkGetImageSparseMemoryRequirements2 != NULL) glad_vkGetImageSparseMemoryRequirements2KHR = (PFN_vkGetImageSparseMemoryRequirements2KHR)glad_vkGetImageSparseMemoryRequirements2;
    if (glad_vkGetImageSubresourceLayout2EXT == NULL && glad_vkGetImageSubresourceLayout2KHR != NULL) glad_vkGetImageSubresourceLayout2EXT = (PFN_vkGetImageSubresourceLayout2EXT)glad_vkGetImageSubresourceLayout2KHR;
    if (glad_vkGetImageSubresourceLayout2KHR == NULL && glad_vkGetImageSubresourceLayout2EXT != NULL) glad_vkGetImageSubresourceLayout2KHR = (PFN_vkGetImageSubresourceLayout2KHR)glad_vkGetImageSubresourceLayout2EXT;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT == NULL && glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR != NULL) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
    if (glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR == NULL && glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT != NULL) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)

#endif
    if (glad_vkGetPhysicalDeviceExternalBufferProperties == NULL && glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalBufferProperties = (PFN_vkGetPhysicalDeviceExternalBufferProperties)glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalBufferProperties != NULL) glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)glad_vkGetPhysicalDeviceExternalBufferProperties;
    if (glad_vkGetPhysicalDeviceExternalFenceProperties == NULL && glad_vkGetPhysicalDeviceExternalFencePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalFenceProperties = (PFN_vkGetPhysicalDeviceExternalFenceProperties)glad_vkGetPhysicalDeviceExternalFencePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalFencePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalFenceProperties != NULL) glad_vkGetPhysicalDeviceExternalFencePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)glad_vkGetPhysicalDeviceExternalFenceProperties;
    if (glad_vkGetPhysicalDeviceExternalSemaphoreProperties == NULL && glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR != NULL) glad_vkGetPhysicalDeviceExternalSemaphoreProperties = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    if (glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR == NULL && glad_vkGetPhysicalDeviceExternalSemaphoreProperties != NULL) glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)glad_vkGetPhysicalDeviceExternalSemaphoreProperties;
    if (glad_vkGetPhysicalDeviceFeatures2 == NULL && glad_vkGetPhysicalDeviceFeatures2KHR != NULL) glad_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)glad_vkGetPhysicalDeviceFeatures2KHR;
    if (glad_vkGetPhysicalDeviceFeatures2KHR == NULL && glad_vkGetPhysicalDeviceFeatures2 != NULL) glad_vkGetPhysicalDeviceFeatures2KHR = (PFN_vkGetPhysicalDeviceFeatures2KHR)glad_vkGetPhysicalDeviceFeatures2;
    if (glad_vkGetPhysicalDeviceFormatProperties2 == NULL && glad_vkGetPhysicalDeviceFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceFormatProperties2 = (PFN_vkGetPhysicalDeviceFormatProperties2)glad_vkGetPhysicalDeviceFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceFormatProperties2 != NULL) glad_vkGetPhysicalDeviceFormatProperties2KHR = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)glad_vkGetPhysicalDeviceFormatProperties2;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2 = (PFN_vkGetPhysicalDeviceImageFormatProperties2)glad_vkGetPhysicalDeviceImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)glad_vkGetPhysicalDeviceImageFormatProperties2;
    if (glad_vkGetPhysicalDeviceMemoryProperties2 == NULL && glad_vkGetPhysicalDeviceMemoryProperties2KHR != NULL) glad_vkGetPhysicalDeviceMemoryProperties2 = (PFN_vkGetPhysicalDeviceMemoryProperties2)glad_vkGetPhysicalDeviceMemoryProperties2KHR;
    if (glad_vkGetPhysicalDeviceMemoryProperties2KHR == NULL && glad_vkGetPhysicalDeviceMemoryProperties2 != NULL) glad_vkGetPhysicalDeviceMemoryProperties2KHR = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)glad_vkGetPhysicalDeviceMemoryProperties2;
    if (glad_vkGetPhysicalDeviceProperties2 == NULL && glad_vkGetPhysicalDeviceProperties2KHR != NULL) glad_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)glad_vkGetPhysicalDeviceProperties2KHR;
    if (glad_vkGetPhysicalDeviceProperties2KHR == NULL && glad_vkGetPhysicalDeviceProperties2 != NULL) glad_vkGetPhysicalDeviceProperties2KHR = (PFN_vkGetPhysicalDeviceProperties2KHR)glad_vkGetPhysicalDeviceProperties2;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2 == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2 = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
    if (glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR == NULL && glad_vkGetPhysicalDeviceQueueFamilyProperties2 != NULL) glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)glad_vkGetPhysicalDeviceQueueFamilyProperties2;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2 == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    if (glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR == NULL && glad_vkGetPhysicalDeviceSparseImageFormatProperties2 != NULL) glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)glad_vkGetPhysicalDeviceSparseImageFormatProperties2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkGetPhysicalDeviceToolProperties == NULL && glad_vkGetPhysicalDeviceToolPropertiesEXT != NULL) glad_vkGetPhysicalDeviceToolProperties = (PFN_vkGetPhysicalDeviceToolProperties)glad_vkGetPhysicalDeviceToolPropertiesEXT;
    if (glad_vkGetPhysicalDeviceToolPropertiesEXT == NULL && glad_vkGetPhysicalDeviceToolProperties != NULL) glad_vkGetPhysicalDeviceToolPropertiesEXT = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)glad_vkGetPhysicalDeviceToolProperties;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
    if (glad_vkGetPrivateData == NULL && glad_vkGetPrivateDataEXT != NULL) glad_vkGetPrivateData = (PFN_vkGetPrivateData)glad_vkGetPrivateDataEXT;
    if (glad_vkGetPrivateDataEXT == NULL && glad_vkGetPrivateData != NULL) glad_vkGetPrivateDataEXT = (PFN_vkGetPrivateDataEXT)glad_vkGetPrivateData;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
    if (glad_vkGetRayTracingShaderGroupHandlesKHR == NULL && glad_vkGetRayTracingShaderGroupHandlesNV != NULL) glad_vkGetRayTracingShaderGroupHandlesKHR = (PFN_vkGetRayTracingShaderGroupHandlesKHR)glad_vkGetRayTracingShaderGroupHandlesNV;
    if (glad_vkGetRayTracingShaderGroupHandlesNV == NULL && glad_vkGetRayTracingShaderGroupHandlesKHR != NULL) glad_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)glad_vkGetRayTracingShaderGroupHandlesKHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
    if (glad_vkGetSemaphoreCounterValue == NULL && glad_vkGetSemaphoreCounterValueKHR != NULL) glad_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)glad_vkGetSemaphoreCounterValueKHR;
    if (glad_vkGetSemaphoreCounterValueKHR == NULL && glad_vkGetSemaphoreCounterValue != NULL) glad_vkGetSemaphoreCounterValueKHR = (PFN_vkGetSemaphoreCounterValueKHR)glad_vkGetSemaphoreCounterValue;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkQueueSubmit2 == NULL && glad_vkQueueSubmit2KHR != NULL) glad_vkQueueSubmit2 = (PFN_vkQueueSubmit2)glad_vkQueueSubmit2KHR;
    if (glad_vkQueueSubmit2KHR == NULL && glad_vkQueueSubmit2 != NULL) glad_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)glad_vkQueueSubmit2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
    if (glad_vkResetQueryPool == NULL && glad_vkResetQueryPoolEXT != NULL) glad_vkResetQueryPool = (PFN_vkResetQueryPool)glad_vkResetQueryPoolEXT;
    if (glad_vkResetQueryPoolEXT == NULL && glad_vkResetQueryPool != NULL) glad_vkResetQueryPoolEXT = (PFN_vkResetQueryPoolEXT)glad_vkResetQueryPool;
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
    if (glad_vkSetPrivateData == NULL && glad_vkSetPrivateDataEXT != NULL) glad_vkSetPrivateData = (PFN_vkSetPrivateData)glad_vkSetPrivateDataEXT;
    if (glad_vkSetPrivateDataEXT == NULL && glad_vkSetPrivateData != NULL) glad_vkSetPrivateDataEXT = (PFN_vkSetPrivateDataEXT)glad_vkSetPrivateData;
    if (glad_vkSignalSemaphore == NULL && glad_vkSignalSemaphoreKHR != NULL) glad_vkSignalSemaphore = (PFN_vkSignalSemaphore)glad_vkSignalSemaphoreKHR;
    if (glad_vkSignalSemaphoreKHR == NULL && glad_vkSignalSemaphore != NULL) glad_vkSignalSemaphoreKHR = (PFN_vkSignalSemaphoreKHR)glad_vkSignalSemaphore;
    if (glad_vkTrimCommandPool == NULL && glad_vkTrimCommandPoolKHR != NULL) glad_vkTrimCommandPool = (PFN_vkTrimCommandPool)glad_vkTrimCommandPoolKHR;
    if (glad_vkTrimCommandPoolKHR == NULL && glad_vkTrimCommandPool != NULL) glad_vkTrimCommandPoolKHR = (PFN_vkTrimCommandPoolKHR)glad_vkTrimCommandPool;
    if (glad_vkUpdateDescriptorSetWithTemplate == NULL && glad_vkUpdateDescriptorSetWithTemplateKHR != NULL) glad_vkUpdateDescriptorSetWithTemplate = (PFN_vkUpdateDescriptorSetWithTemplate)glad_vkUpdateDescriptorSetWithTemplateKHR;
    if (glad_vkUpdateDescriptorSetWithTemplateKHR == NULL && glad_vkUpdateDescriptorSetWithTemplate != NULL) glad_vkUpdateDescriptorSetWithTemplateKHR = (PFN_vkUpdateDescriptorSetWithTemplateKHR)glad_vkUpdateDescriptorSetWithTemplate;
    if (glad_vkWaitSemaphores == NULL && glad_vkWaitSemaphoresKHR != NULL) glad_vkWaitSemaphores = (PFN_vkWaitSemaphores)glad_vkWaitSemaphoresKHR;
    if (glad_vkWaitSemaphoresKHR == NULL && glad_vkWaitSemaphores != NULL) glad_vkWaitSemaphoresKHR = (PFN_vkWaitSemaphoresKHR)glad_vkWaitSemaphores;
}

static int glad_vk_get_extensions( VkPhysicalDevice physical_device, uint32_t *out_extension_count, char ***out_extensions) {
    uint32_t i;
    uint32_t instance_extension_count = 0;
    uint32_t device_extension_count = 0;
    uint32_t max_extension_count = 0;
    uint32_t total_extension_count = 0;
    char **extensions = NULL;
    VkExtensionProperties *ext_properties = NULL;
    VkResult result;

    if (glad_vkEnumerateInstanceExtensionProperties == NULL || (physical_device != NULL && glad_vkEnumerateDeviceExtensionProperties == NULL)) {
        return 0;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, NULL);
    if (result != VK_SUCCESS) {
        return 0;
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, NULL);
        if (result != VK_SUCCESS) {
            return 0;
        }
    }

    total_extension_count = instance_extension_count + device_extension_count;
    if (total_extension_count <= 0) {
        return 0;
    }

    max_extension_count = instance_extension_count > device_extension_count
        ? instance_extension_count : device_extension_count;

    ext_properties = (VkExtensionProperties*) malloc(max_extension_count * sizeof(VkExtensionProperties));
    if (ext_properties == NULL) {
        goto glad_vk_get_extensions_error;
    }

    result = glad_vkEnumerateInstanceExtensionProperties(NULL, &instance_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
        goto glad_vk_get_extensions_error;
    }

    extensions = (char**) calloc(total_extension_count, sizeof(char*));
    if (extensions == NULL) {
        goto glad_vk_get_extensions_error;
    }

    for (i = 0; i < instance_extension_count; ++i) {
        VkExtensionProperties ext = ext_properties[i];

        size_t extension_name_length = strlen(ext.extensionName) + 1;
        extensions[i] = (char*) malloc(extension_name_length * sizeof(char));
        if (extensions[i] == NULL) {
            goto glad_vk_get_extensions_error;
        }
        memcpy(extensions[i], ext.extensionName, extension_name_length * sizeof(char));
    }

    if (physical_device != NULL) {
        result = glad_vkEnumerateDeviceExtensionProperties(physical_device, NULL, &device_extension_count, ext_properties);
        if (result != VK_SUCCESS) {
            goto glad_vk_get_extensions_error;
        }

        for (i = 0; i < device_extension_count; ++i) {
            VkExtensionProperties ext = ext_properties[i];

            size_t extension_name_length = strlen(ext.extensionName) + 1;
            extensions[instance_extension_count + i] = (char*) malloc(extension_name_length * sizeof(char));
            if (extensions[instance_extension_count + i] == NULL) {
                goto glad_vk_get_extensions_error;
            }
            memcpy(extensions[instance_extension_count + i], ext.extensionName, extension_name_length * sizeof(char));
        }
    }

    free((void*) ext_properties);

    *out_extension_count = total_extension_count;
    *out_extensions = extensions;

    return 1;

glad_vk_get_extensions_error:
    free((void*) ext_properties);
    if (extensions != NULL) {
        for (i = 0; i < total_extension_count; ++i) {
            free((void*) extensions[i]);
        }
        free(extensions);
    }
    return 0;
}

static void glad_vk_free_extensions(uint32_t extension_count, char **extensions) {
    uint32_t i;

    for(i = 0; i < extension_count ; ++i) {
        free((void*) (extensions[i]));
    }

    free((void*) extensions);
}

static int glad_vk_has_extension(const char *name, uint32_t extension_count, char **extensions) {
    uint32_t i;

    for (i = 0; i < extension_count; ++i) {
        if(extensions[i] != NULL && strcmp(name, extensions[i]) == 0) {
            return 1;
        }
    }

    return 0;
}

static GLADapiproc glad_vk_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLAD_GNUC_EXTENSION (GLADapiproc (*)(const char *name)) userptr)(name);
}

static int glad_vk_find_extensions_vulkan( VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(physical_device, &extension_count, &extensions)) return 0;

#if defined(VK_ENABLE_BETA_EXTENSIONS)
    GLAD_VK_AMDX_shader_enqueue = glad_vk_has_extension("VK_AMDX_shader_enqueue", extension_count, extensions);

#endif
    GLAD_VK_AMD_anti_lag = glad_vk_has_extension("VK_AMD_anti_lag", extension_count, extensions);
    GLAD_VK_AMD_buffer_marker = glad_vk_has_extension("VK_AMD_buffer_marker", extension_count, extensions);
    GLAD_VK_AMD_device_coherent_memory = glad_vk_has_extension("VK_AMD_device_coherent_memory", extension_count, extensions);
    GLAD_VK_AMD_display_native_hdr = glad_vk_has_extension("VK_AMD_display_native_hdr", extension_count, extensions);
    GLAD_VK_AMD_draw_indirect_count = glad_vk_has_extension("VK_AMD_draw_indirect_count", extension_count, extensions);
    GLAD_VK_AMD_gcn_shader = glad_vk_has_extension("VK_AMD_gcn_shader", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_half_float = glad_vk_has_extension("VK_AMD_gpu_shader_half_float", extension_count, extensions);
    GLAD_VK_AMD_gpu_shader_int16 = glad_vk_has_extension("VK_AMD_gpu_shader_int16", extension_count, extensions);
    GLAD_VK_AMD_memory_overallocation_behavior = glad_vk_has_extension("VK_AMD_memory_overallocation_behavior", extension_count, extensions);
    GLAD_VK_AMD_mixed_attachment_samples = glad_vk_has_extension("VK_AMD_mixed_attachment_samples", extension_count, extensions);
    GLAD_VK_AMD_negative_viewport_height = glad_vk_has_extension("VK_AMD_negative_viewport_height", extension_count, extensions);
    GLAD_VK_AMD_pipeline_compiler_control = glad_vk_has_extension("VK_AMD_pipeline_compiler_control", extension_count, extensions);
    GLAD_VK_AMD_rasterization_order = glad_vk_has_extension("VK_AMD_rasterization_order", extension_count, extensions);
    GLAD_VK_AMD_shader_ballot = glad_vk_has_extension("VK_AMD_shader_ballot", extension_count, extensions);
    GLAD_VK_AMD_shader_core_properties = glad_vk_has_extension("VK_AMD_shader_core_properties", extension_count, extensions);
    GLAD_VK_AMD_shader_core_properties2 = glad_vk_has_extension("VK_AMD_shader_core_properties2", extension_count, extensions);
    GLAD_VK_AMD_shader_early_and_late_fragment_tests = glad_vk_has_extension("VK_AMD_shader_early_and_late_fragment_tests", extension_count, extensions);
    GLAD_VK_AMD_shader_explicit_vertex_parameter = glad_vk_has_extension("VK_AMD_shader_explicit_vertex_parameter", extension_count, extensions);
    GLAD_VK_AMD_shader_fragment_mask = glad_vk_has_extension("VK_AMD_shader_fragment_mask", extension_count, extensions);
    GLAD_VK_AMD_shader_image_load_store_lod = glad_vk_has_extension("VK_AMD_shader_image_load_store_lod", extension_count, extensions);
    GLAD_VK_AMD_shader_info = glad_vk_has_extension("VK_AMD_shader_info", extension_count, extensions);
    GLAD_VK_AMD_shader_trinary_minmax = glad_vk_has_extension("VK_AMD_shader_trinary_minmax", extension_count, extensions);
    GLAD_VK_AMD_texture_gather_bias_lod = glad_vk_has_extension("VK_AMD_texture_gather_bias_lod", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_ANDROID_external_format_resolve = glad_vk_has_extension("VK_ANDROID_external_format_resolve", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_ANDROID_external_memory_android_hardware_buffer = glad_vk_has_extension("VK_ANDROID_external_memory_android_hardware_buffer", extension_count, extensions);

#endif
    GLAD_VK_ARM_rasterization_order_attachment_access = glad_vk_has_extension("VK_ARM_rasterization_order_attachment_access", extension_count, extensions);
    GLAD_VK_ARM_render_pass_striped = glad_vk_has_extension("VK_ARM_render_pass_striped", extension_count, extensions);
    GLAD_VK_ARM_scheduling_controls = glad_vk_has_extension("VK_ARM_scheduling_controls", extension_count, extensions);
    GLAD_VK_ARM_shader_core_builtins = glad_vk_has_extension("VK_ARM_shader_core_builtins", extension_count, extensions);
    GLAD_VK_ARM_shader_core_properties = glad_vk_has_extension("VK_ARM_shader_core_properties", extension_count, extensions);
    GLAD_VK_EXT_4444_formats = glad_vk_has_extension("VK_EXT_4444_formats", extension_count, extensions);
    GLAD_VK_EXT_acquire_drm_display = glad_vk_has_extension("VK_EXT_acquire_drm_display", extension_count, extensions);
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    GLAD_VK_EXT_acquire_xlib_display = glad_vk_has_extension("VK_EXT_acquire_xlib_display", extension_count, extensions);

#endif
    GLAD_VK_EXT_astc_decode_mode = glad_vk_has_extension("VK_EXT_astc_decode_mode", extension_count, extensions);
    GLAD_VK_EXT_attachment_feedback_loop_dynamic_state = glad_vk_has_extension("VK_EXT_attachment_feedback_loop_dynamic_state", extension_count, extensions);
    GLAD_VK_EXT_attachment_feedback_loop_layout = glad_vk_has_extension("VK_EXT_attachment_feedback_loop_layout", extension_count, extensions);
    GLAD_VK_EXT_blend_operation_advanced = glad_vk_has_extension("VK_EXT_blend_operation_advanced", extension_count, extensions);
    GLAD_VK_EXT_border_color_swizzle = glad_vk_has_extension("VK_EXT_border_color_swizzle", extension_count, extensions);
    GLAD_VK_EXT_buffer_device_address = glad_vk_has_extension("VK_EXT_buffer_device_address", extension_count, extensions);
    GLAD_VK_EXT_calibrated_timestamps = glad_vk_has_extension("VK_EXT_calibrated_timestamps", extension_count, extensions);
    GLAD_VK_EXT_color_write_enable = glad_vk_has_extension("VK_EXT_color_write_enable", extension_count, extensions);
    GLAD_VK_EXT_conditional_rendering = glad_vk_has_extension("VK_EXT_conditional_rendering", extension_count, extensions);
    GLAD_VK_EXT_conservative_rasterization = glad_vk_has_extension("VK_EXT_conservative_rasterization", extension_count, extensions);
    GLAD_VK_EXT_custom_border_color = glad_vk_has_extension("VK_EXT_custom_border_color", extension_count, extensions);
    GLAD_VK_EXT_debug_marker = glad_vk_has_extension("VK_EXT_debug_marker", extension_count, extensions);
    GLAD_VK_EXT_debug_report = glad_vk_has_extension("VK_EXT_debug_report", extension_count, extensions);
    GLAD_VK_EXT_debug_utils = glad_vk_has_extension("VK_EXT_debug_utils", extension_count, extensions);
    GLAD_VK_EXT_depth_bias_control = glad_vk_has_extension("VK_EXT_depth_bias_control", extension_count, extensions);
    GLAD_VK_EXT_depth_clamp_zero_one = glad_vk_has_extension("VK_EXT_depth_clamp_zero_one", extension_count, extensions);
    GLAD_VK_EXT_depth_clip_control = glad_vk_has_extension("VK_EXT_depth_clip_control", extension_count, extensions);
    GLAD_VK_EXT_depth_clip_enable = glad_vk_has_extension("VK_EXT_depth_clip_enable", extension_count, extensions);
    GLAD_VK_EXT_depth_range_unrestricted = glad_vk_has_extension("VK_EXT_depth_range_unrestricted", extension_count, extensions);
    GLAD_VK_EXT_descriptor_buffer = glad_vk_has_extension("VK_EXT_descriptor_buffer", extension_count, extensions);
    GLAD_VK_EXT_descriptor_indexing = glad_vk_has_extension("VK_EXT_descriptor_indexing", extension_count, extensions);
    GLAD_VK_EXT_device_address_binding_report = glad_vk_has_extension("VK_EXT_device_address_binding_report", extension_count, extensions);
    GLAD_VK_EXT_device_fault = glad_vk_has_extension("VK_EXT_device_fault", extension_count, extensions);
    GLAD_VK_EXT_device_memory_report = glad_vk_has_extension("VK_EXT_device_memory_report", extension_count, extensions);
    GLAD_VK_EXT_direct_mode_display = glad_vk_has_extension("VK_EXT_direct_mode_display", extension_count, extensions);
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    GLAD_VK_EXT_directfb_surface = glad_vk_has_extension("VK_EXT_directfb_surface", extension_count, extensions);

#endif
    GLAD_VK_EXT_discard_rectangles = glad_vk_has_extension("VK_EXT_discard_rectangles", extension_count, extensions);
    GLAD_VK_EXT_display_control = glad_vk_has_extension("VK_EXT_display_control", extension_count, extensions);
    GLAD_VK_EXT_display_surface_counter = glad_vk_has_extension("VK_EXT_display_surface_counter", extension_count, extensions);
    GLAD_VK_EXT_dynamic_rendering_unused_attachments = glad_vk_has_extension("VK_EXT_dynamic_rendering_unused_attachments", extension_count, extensions);
    GLAD_VK_EXT_extended_dynamic_state = glad_vk_has_extension("VK_EXT_extended_dynamic_state", extension_count, extensions);
    GLAD_VK_EXT_extended_dynamic_state2 = glad_vk_has_extension("VK_EXT_extended_dynamic_state2", extension_count, extensions);
    GLAD_VK_EXT_extended_dynamic_state3 = glad_vk_has_extension("VK_EXT_extended_dynamic_state3", extension_count, extensions);
    GLAD_VK_EXT_external_memory_acquire_unmodified = glad_vk_has_extension("VK_EXT_external_memory_acquire_unmodified", extension_count, extensions);
    GLAD_VK_EXT_external_memory_dma_buf = glad_vk_has_extension("VK_EXT_external_memory_dma_buf", extension_count, extensions);
    GLAD_VK_EXT_external_memory_host = glad_vk_has_extension("VK_EXT_external_memory_host", extension_count, extensions);
    GLAD_VK_EXT_filter_cubic = glad_vk_has_extension("VK_EXT_filter_cubic", extension_count, extensions);
    GLAD_VK_EXT_fragment_density_map = glad_vk_has_extension("VK_EXT_fragment_density_map", extension_count, extensions);
    GLAD_VK_EXT_fragment_density_map2 = glad_vk_has_extension("VK_EXT_fragment_density_map2", extension_count, extensions);
    GLAD_VK_EXT_fragment_shader_interlock = glad_vk_has_extension("VK_EXT_fragment_shader_interlock", extension_count, extensions);
    GLAD_VK_EXT_frame_boundary = glad_vk_has_extension("VK_EXT_frame_boundary", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_EXT_full_screen_exclusive = glad_vk_has_extension("VK_EXT_full_screen_exclusive", extension_count, extensions);

#endif
    GLAD_VK_EXT_global_priority = glad_vk_has_extension("VK_EXT_global_priority", extension_count, extensions);
    GLAD_VK_EXT_global_priority_query = glad_vk_has_extension("VK_EXT_global_priority_query", extension_count, extensions);
    GLAD_VK_EXT_graphics_pipeline_library = glad_vk_has_extension("VK_EXT_graphics_pipeline_library", extension_count, extensions);
    GLAD_VK_EXT_hdr_metadata = glad_vk_has_extension("VK_EXT_hdr_metadata", extension_count, extensions);
    GLAD_VK_EXT_headless_surface = glad_vk_has_extension("VK_EXT_headless_surface", extension_count, extensions);
    GLAD_VK_EXT_host_image_copy = glad_vk_has_extension("VK_EXT_host_image_copy", extension_count, extensions);
    GLAD_VK_EXT_host_query_reset = glad_vk_has_extension("VK_EXT_host_query_reset", extension_count, extensions);
    GLAD_VK_EXT_image_2d_view_of_3d = glad_vk_has_extension("VK_EXT_image_2d_view_of_3d", extension_count, extensions);
    GLAD_VK_EXT_image_compression_control = glad_vk_has_extension("VK_EXT_image_compression_control", extension_count, extensions);
    GLAD_VK_EXT_image_compression_control_swapchain = glad_vk_has_extension("VK_EXT_image_compression_control_swapchain", extension_count, extensions);
    GLAD_VK_EXT_image_drm_format_modifier = glad_vk_has_extension("VK_EXT_image_drm_format_modifier", extension_count, extensions);
    GLAD_VK_EXT_image_robustness = glad_vk_has_extension("VK_EXT_image_robustness", extension_count, extensions);
    GLAD_VK_EXT_image_sliced_view_of_3d = glad_vk_has_extension("VK_EXT_image_sliced_view_of_3d", extension_count, extensions);
    GLAD_VK_EXT_image_view_min_lod = glad_vk_has_extension("VK_EXT_image_view_min_lod", extension_count, extensions);
    GLAD_VK_EXT_index_type_uint8 = glad_vk_has_extension("VK_EXT_index_type_uint8", extension_count, extensions);
    GLAD_VK_EXT_inline_uniform_block = glad_vk_has_extension("VK_EXT_inline_uniform_block", extension_count, extensions);
    GLAD_VK_EXT_layer_settings = glad_vk_has_extension("VK_EXT_layer_settings", extension_count, extensions);
    GLAD_VK_EXT_legacy_dithering = glad_vk_has_extension("VK_EXT_legacy_dithering", extension_count, extensions);
    GLAD_VK_EXT_legacy_vertex_attributes = glad_vk_has_extension("VK_EXT_legacy_vertex_attributes", extension_count, extensions);
    GLAD_VK_EXT_line_rasterization = glad_vk_has_extension("VK_EXT_line_rasterization", extension_count, extensions);
    GLAD_VK_EXT_load_store_op_none = glad_vk_has_extension("VK_EXT_load_store_op_none", extension_count, extensions);
    GLAD_VK_EXT_map_memory_placed = glad_vk_has_extension("VK_EXT_map_memory_placed", extension_count, extensions);
    GLAD_VK_EXT_memory_budget = glad_vk_has_extension("VK_EXT_memory_budget", extension_count, extensions);
    GLAD_VK_EXT_memory_priority = glad_vk_has_extension("VK_EXT_memory_priority", extension_count, extensions);
    GLAD_VK_EXT_mesh_shader = glad_vk_has_extension("VK_EXT_mesh_shader", extension_count, extensions);
#if defined(VK_USE_PLATFORM_METAL_EXT)
    GLAD_VK_EXT_metal_objects = glad_vk_has_extension("VK_EXT_metal_objects", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
    GLAD_VK_EXT_metal_surface = glad_vk_has_extension("VK_EXT_metal_surface", extension_count, extensions);

#endif
    GLAD_VK_EXT_multi_draw = glad_vk_has_extension("VK_EXT_multi_draw", extension_count, extensions);
    GLAD_VK_EXT_multisampled_render_to_single_sampled = glad_vk_has_extension("VK_EXT_multisampled_render_to_single_sampled", extension_count, extensions);
    GLAD_VK_EXT_mutable_descriptor_type = glad_vk_has_extension("VK_EXT_mutable_descriptor_type", extension_count, extensions);
    GLAD_VK_EXT_nested_command_buffer = glad_vk_has_extension("VK_EXT_nested_command_buffer", extension_count, extensions);
    GLAD_VK_EXT_non_seamless_cube_map = glad_vk_has_extension("VK_EXT_non_seamless_cube_map", extension_count, extensions);
    GLAD_VK_EXT_opacity_micromap = glad_vk_has_extension("VK_EXT_opacity_micromap", extension_count, extensions);
    GLAD_VK_EXT_pageable_device_local_memory = glad_vk_has_extension("VK_EXT_pageable_device_local_memory", extension_count, extensions);
    GLAD_VK_EXT_pci_bus_info = glad_vk_has_extension("VK_EXT_pci_bus_info", extension_count, extensions);
    GLAD_VK_EXT_physical_device_drm = glad_vk_has_extension("VK_EXT_physical_device_drm", extension_count, extensions);
    GLAD_VK_EXT_pipeline_creation_cache_control = glad_vk_has_extension("VK_EXT_pipeline_creation_cache_control", extension_count, extensions);
    GLAD_VK_EXT_pipeline_creation_feedback = glad_vk_has_extension("VK_EXT_pipeline_creation_feedback", extension_count, extensions);
    GLAD_VK_EXT_pipeline_library_group_handles = glad_vk_has_extension("VK_EXT_pipeline_library_group_handles", extension_count, extensions);
    GLAD_VK_EXT_pipeline_properties = glad_vk_has_extension("VK_EXT_pipeline_properties", extension_count, extensions);
    GLAD_VK_EXT_pipeline_protected_access = glad_vk_has_extension("VK_EXT_pipeline_protected_access", extension_count, extensions);
    GLAD_VK_EXT_pipeline_robustness = glad_vk_has_extension("VK_EXT_pipeline_robustness", extension_count, extensions);
    GLAD_VK_EXT_post_depth_coverage = glad_vk_has_extension("VK_EXT_post_depth_coverage", extension_count, extensions);
    GLAD_VK_EXT_primitive_topology_list_restart = glad_vk_has_extension("VK_EXT_primitive_topology_list_restart", extension_count, extensions);
    GLAD_VK_EXT_primitives_generated_query = glad_vk_has_extension("VK_EXT_primitives_generated_query", extension_count, extensions);
    GLAD_VK_EXT_private_data = glad_vk_has_extension("VK_EXT_private_data", extension_count, extensions);
    GLAD_VK_EXT_provoking_vertex = glad_vk_has_extension("VK_EXT_provoking_vertex", extension_count, extensions);
    GLAD_VK_EXT_queue_family_foreign = glad_vk_has_extension("VK_EXT_queue_family_foreign", extension_count, extensions);
    GLAD_VK_EXT_rasterization_order_attachment_access = glad_vk_has_extension("VK_EXT_rasterization_order_attachment_access", extension_count, extensions);
    GLAD_VK_EXT_rgba10x6_formats = glad_vk_has_extension("VK_EXT_rgba10x6_formats", extension_count, extensions);
    GLAD_VK_EXT_robustness2 = glad_vk_has_extension("VK_EXT_robustness2", extension_count, extensions);
    GLAD_VK_EXT_sample_locations = glad_vk_has_extension("VK_EXT_sample_locations", extension_count, extensions);
    GLAD_VK_EXT_sampler_filter_minmax = glad_vk_has_extension("VK_EXT_sampler_filter_minmax", extension_count, extensions);
    GLAD_VK_EXT_scalar_block_layout = glad_vk_has_extension("VK_EXT_scalar_block_layout", extension_count, extensions);
    GLAD_VK_EXT_separate_stencil_usage = glad_vk_has_extension("VK_EXT_separate_stencil_usage", extension_count, extensions);
    GLAD_VK_EXT_shader_atomic_float = glad_vk_has_extension("VK_EXT_shader_atomic_float", extension_count, extensions);
    GLAD_VK_EXT_shader_atomic_float2 = glad_vk_has_extension("VK_EXT_shader_atomic_float2", extension_count, extensions);
    GLAD_VK_EXT_shader_demote_to_helper_invocation = glad_vk_has_extension("VK_EXT_shader_demote_to_helper_invocation", extension_count, extensions);
    GLAD_VK_EXT_shader_image_atomic_int64 = glad_vk_has_extension("VK_EXT_shader_image_atomic_int64", extension_count, extensions);
    GLAD_VK_EXT_shader_module_identifier = glad_vk_has_extension("VK_EXT_shader_module_identifier", extension_count, extensions);
    GLAD_VK_EXT_shader_object = glad_vk_has_extension("VK_EXT_shader_object", extension_count, extensions);
    GLAD_VK_EXT_shader_replicated_composites = glad_vk_has_extension("VK_EXT_shader_replicated_composites", extension_count, extensions);
    GLAD_VK_EXT_shader_stencil_export = glad_vk_has_extension("VK_EXT_shader_stencil_export", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_ballot = glad_vk_has_extension("VK_EXT_shader_subgroup_ballot", extension_count, extensions);
    GLAD_VK_EXT_shader_subgroup_vote = glad_vk_has_extension("VK_EXT_shader_subgroup_vote", extension_count, extensions);
    GLAD_VK_EXT_shader_tile_image = glad_vk_has_extension("VK_EXT_shader_tile_image", extension_count, extensions);
    GLAD_VK_EXT_shader_viewport_index_layer = glad_vk_has_extension("VK_EXT_shader_viewport_index_layer", extension_count, extensions);
    GLAD_VK_EXT_subgroup_size_control = glad_vk_has_extension("VK_EXT_subgroup_size_control", extension_count, extensions);
    GLAD_VK_EXT_subpass_merge_feedback = glad_vk_has_extension("VK_EXT_subpass_merge_feedback", extension_count, extensions);
    GLAD_VK_EXT_surface_maintenance1 = glad_vk_has_extension("VK_EXT_surface_maintenance1", extension_count, extensions);
    GLAD_VK_EXT_swapchain_colorspace = glad_vk_has_extension("VK_EXT_swapchain_colorspace", extension_count, extensions);
    GLAD_VK_EXT_swapchain_maintenance1 = glad_vk_has_extension("VK_EXT_swapchain_maintenance1", extension_count, extensions);
    GLAD_VK_EXT_texel_buffer_alignment = glad_vk_has_extension("VK_EXT_texel_buffer_alignment", extension_count, extensions);
    GLAD_VK_EXT_texture_compression_astc_hdr = glad_vk_has_extension("VK_EXT_texture_compression_astc_hdr", extension_count, extensions);
    GLAD_VK_EXT_tooling_info = glad_vk_has_extension("VK_EXT_tooling_info", extension_count, extensions);
    GLAD_VK_EXT_transform_feedback = glad_vk_has_extension("VK_EXT_transform_feedback", extension_count, extensions);
    GLAD_VK_EXT_validation_cache = glad_vk_has_extension("VK_EXT_validation_cache", extension_count, extensions);
    GLAD_VK_EXT_validation_features = glad_vk_has_extension("VK_EXT_validation_features", extension_count, extensions);
    GLAD_VK_EXT_validation_flags = glad_vk_has_extension("VK_EXT_validation_flags", extension_count, extensions);
    GLAD_VK_EXT_vertex_attribute_divisor = glad_vk_has_extension("VK_EXT_vertex_attribute_divisor", extension_count, extensions);
    GLAD_VK_EXT_vertex_input_dynamic_state = glad_vk_has_extension("VK_EXT_vertex_input_dynamic_state", extension_count, extensions);
    GLAD_VK_EXT_ycbcr_2plane_444_formats = glad_vk_has_extension("VK_EXT_ycbcr_2plane_444_formats", extension_count, extensions);
    GLAD_VK_EXT_ycbcr_image_arrays = glad_vk_has_extension("VK_EXT_ycbcr_image_arrays", extension_count, extensions);
#if defined(VK_USE_PLATFORM_FUCHSIA)
    GLAD_VK_FUCHSIA_buffer_collection = glad_vk_has_extension("VK_FUCHSIA_buffer_collection", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    GLAD_VK_FUCHSIA_external_memory = glad_vk_has_extension("VK_FUCHSIA_external_memory", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    GLAD_VK_FUCHSIA_external_semaphore = glad_vk_has_extension("VK_FUCHSIA_external_semaphore", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    GLAD_VK_FUCHSIA_imagepipe_surface = glad_vk_has_extension("VK_FUCHSIA_imagepipe_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    GLAD_VK_GGP_frame_token = glad_vk_has_extension("VK_GGP_frame_token", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    GLAD_VK_GGP_stream_descriptor_surface = glad_vk_has_extension("VK_GGP_stream_descriptor_surface", extension_count, extensions);

#endif
    GLAD_VK_GOOGLE_decorate_string = glad_vk_has_extension("VK_GOOGLE_decorate_string", extension_count, extensions);
    GLAD_VK_GOOGLE_display_timing = glad_vk_has_extension("VK_GOOGLE_display_timing", extension_count, extensions);
    GLAD_VK_GOOGLE_hlsl_functionality1 = glad_vk_has_extension("VK_GOOGLE_hlsl_functionality1", extension_count, extensions);
    GLAD_VK_GOOGLE_surfaceless_query = glad_vk_has_extension("VK_GOOGLE_surfaceless_query", extension_count, extensions);
    GLAD_VK_GOOGLE_user_type = glad_vk_has_extension("VK_GOOGLE_user_type", extension_count, extensions);
    GLAD_VK_HUAWEI_cluster_culling_shader = glad_vk_has_extension("VK_HUAWEI_cluster_culling_shader", extension_count, extensions);
    GLAD_VK_HUAWEI_invocation_mask = glad_vk_has_extension("VK_HUAWEI_invocation_mask", extension_count, extensions);
    GLAD_VK_HUAWEI_subpass_shading = glad_vk_has_extension("VK_HUAWEI_subpass_shading", extension_count, extensions);
    GLAD_VK_IMG_filter_cubic = glad_vk_has_extension("VK_IMG_filter_cubic", extension_count, extensions);
    GLAD_VK_IMG_format_pvrtc = glad_vk_has_extension("VK_IMG_format_pvrtc", extension_count, extensions);
    GLAD_VK_IMG_relaxed_line_rasterization = glad_vk_has_extension("VK_IMG_relaxed_line_rasterization", extension_count, extensions);
    GLAD_VK_INTEL_performance_query = glad_vk_has_extension("VK_INTEL_performance_query", extension_count, extensions);
    GLAD_VK_INTEL_shader_integer_functions2 = glad_vk_has_extension("VK_INTEL_shader_integer_functions2", extension_count, extensions);
    GLAD_VK_KHR_16bit_storage = glad_vk_has_extension("VK_KHR_16bit_storage", extension_count, extensions);
    GLAD_VK_KHR_8bit_storage = glad_vk_has_extension("VK_KHR_8bit_storage", extension_count, extensions);
    GLAD_VK_KHR_acceleration_structure = glad_vk_has_extension("VK_KHR_acceleration_structure", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    GLAD_VK_KHR_android_surface = glad_vk_has_extension("VK_KHR_android_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_bind_memory2 = glad_vk_has_extension("VK_KHR_bind_memory2", extension_count, extensions);
    GLAD_VK_KHR_buffer_device_address = glad_vk_has_extension("VK_KHR_buffer_device_address", extension_count, extensions);
    GLAD_VK_KHR_calibrated_timestamps = glad_vk_has_extension("VK_KHR_calibrated_timestamps", extension_count, extensions);
    GLAD_VK_KHR_cooperative_matrix = glad_vk_has_extension("VK_KHR_cooperative_matrix", extension_count, extensions);
    GLAD_VK_KHR_copy_commands2 = glad_vk_has_extension("VK_KHR_copy_commands2", extension_count, extensions);
    GLAD_VK_KHR_create_renderpass2 = glad_vk_has_extension("VK_KHR_create_renderpass2", extension_count, extensions);
    GLAD_VK_KHR_dedicated_allocation = glad_vk_has_extension("VK_KHR_dedicated_allocation", extension_count, extensions);
    GLAD_VK_KHR_deferred_host_operations = glad_vk_has_extension("VK_KHR_deferred_host_operations", extension_count, extensions);
    GLAD_VK_KHR_depth_stencil_resolve = glad_vk_has_extension("VK_KHR_depth_stencil_resolve", extension_count, extensions);
    GLAD_VK_KHR_descriptor_update_template = glad_vk_has_extension("VK_KHR_descriptor_update_template", extension_count, extensions);
    GLAD_VK_KHR_device_group = glad_vk_has_extension("VK_KHR_device_group", extension_count, extensions);
    GLAD_VK_KHR_device_group_creation = glad_vk_has_extension("VK_KHR_device_group_creation", extension_count, extensions);
    GLAD_VK_KHR_display = glad_vk_has_extension("VK_KHR_display", extension_count, extensions);
    GLAD_VK_KHR_display_swapchain = glad_vk_has_extension("VK_KHR_display_swapchain", extension_count, extensions);
    GLAD_VK_KHR_draw_indirect_count = glad_vk_has_extension("VK_KHR_draw_indirect_count", extension_count, extensions);
    GLAD_VK_KHR_driver_properties = glad_vk_has_extension("VK_KHR_driver_properties", extension_count, extensions);
    GLAD_VK_KHR_dynamic_rendering = glad_vk_has_extension("VK_KHR_dynamic_rendering", extension_count, extensions);
    GLAD_VK_KHR_dynamic_rendering_local_read = glad_vk_has_extension("VK_KHR_dynamic_rendering_local_read", extension_count, extensions);
    GLAD_VK_KHR_external_fence = glad_vk_has_extension("VK_KHR_external_fence", extension_count, extensions);
    GLAD_VK_KHR_external_fence_capabilities = glad_vk_has_extension("VK_KHR_external_fence_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_fence_fd = glad_vk_has_extension("VK_KHR_external_fence_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_fence_win32 = glad_vk_has_extension("VK_KHR_external_fence_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_memory = glad_vk_has_extension("VK_KHR_external_memory", extension_count, extensions);
    GLAD_VK_KHR_external_memory_capabilities = glad_vk_has_extension("VK_KHR_external_memory_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_memory_fd = glad_vk_has_extension("VK_KHR_external_memory_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_memory_win32 = glad_vk_has_extension("VK_KHR_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_external_semaphore = glad_vk_has_extension("VK_KHR_external_semaphore", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_capabilities = glad_vk_has_extension("VK_KHR_external_semaphore_capabilities", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_fd = glad_vk_has_extension("VK_KHR_external_semaphore_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_external_semaphore_win32 = glad_vk_has_extension("VK_KHR_external_semaphore_win32", extension_count, extensions);

#endif
    GLAD_VK_KHR_format_feature_flags2 = glad_vk_has_extension("VK_KHR_format_feature_flags2", extension_count, extensions);
    GLAD_VK_KHR_fragment_shader_barycentric = glad_vk_has_extension("VK_KHR_fragment_shader_barycentric", extension_count, extensions);
    GLAD_VK_KHR_fragment_shading_rate = glad_vk_has_extension("VK_KHR_fragment_shading_rate", extension_count, extensions);
    GLAD_VK_KHR_get_display_properties2 = glad_vk_has_extension("VK_KHR_get_display_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_memory_requirements2 = glad_vk_has_extension("VK_KHR_get_memory_requirements2", extension_count, extensions);
    GLAD_VK_KHR_get_physical_device_properties2 = glad_vk_has_extension("VK_KHR_get_physical_device_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_surface_capabilities2 = glad_vk_has_extension("VK_KHR_get_surface_capabilities2", extension_count, extensions);
    GLAD_VK_KHR_global_priority = glad_vk_has_extension("VK_KHR_global_priority", extension_count, extensions);
    GLAD_VK_KHR_image_format_list = glad_vk_has_extension("VK_KHR_image_format_list", extension_count, extensions);
    GLAD_VK_KHR_imageless_framebuffer = glad_vk_has_extension("VK_KHR_imageless_framebuffer", extension_count, extensions);
    GLAD_VK_KHR_incremental_present = glad_vk_has_extension("VK_KHR_incremental_present", extension_count, extensions);
    GLAD_VK_KHR_index_type_uint8 = glad_vk_has_extension("VK_KHR_index_type_uint8", extension_count, extensions);
    GLAD_VK_KHR_line_rasterization = glad_vk_has_extension("VK_KHR_line_rasterization", extension_count, extensions);
    GLAD_VK_KHR_load_store_op_none = glad_vk_has_extension("VK_KHR_load_store_op_none", extension_count, extensions);
    GLAD_VK_KHR_maintenance1 = glad_vk_has_extension("VK_KHR_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_maintenance2 = glad_vk_has_extension("VK_KHR_maintenance2", extension_count, extensions);
    GLAD_VK_KHR_maintenance3 = glad_vk_has_extension("VK_KHR_maintenance3", extension_count, extensions);
    GLAD_VK_KHR_maintenance4 = glad_vk_has_extension("VK_KHR_maintenance4", extension_count, extensions);
    GLAD_VK_KHR_maintenance5 = glad_vk_has_extension("VK_KHR_maintenance5", extension_count, extensions);
    GLAD_VK_KHR_maintenance6 = glad_vk_has_extension("VK_KHR_maintenance6", extension_count, extensions);
    GLAD_VK_KHR_maintenance7 = glad_vk_has_extension("VK_KHR_maintenance7", extension_count, extensions);
    GLAD_VK_KHR_map_memory2 = glad_vk_has_extension("VK_KHR_map_memory2", extension_count, extensions);
    GLAD_VK_KHR_multiview = glad_vk_has_extension("VK_KHR_multiview", extension_count, extensions);
    GLAD_VK_KHR_performance_query = glad_vk_has_extension("VK_KHR_performance_query", extension_count, extensions);
    GLAD_VK_KHR_pipeline_executable_properties = glad_vk_has_extension("VK_KHR_pipeline_executable_properties", extension_count, extensions);
    GLAD_VK_KHR_pipeline_library = glad_vk_has_extension("VK_KHR_pipeline_library", extension_count, extensions);
    GLAD_VK_KHR_portability_enumeration = glad_vk_has_extension("VK_KHR_portability_enumeration", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    GLAD_VK_KHR_portability_subset = glad_vk_has_extension("VK_KHR_portability_subset", extension_count, extensions);

#endif
    GLAD_VK_KHR_present_id = glad_vk_has_extension("VK_KHR_present_id", extension_count, extensions);
    GLAD_VK_KHR_present_wait = glad_vk_has_extension("VK_KHR_present_wait", extension_count, extensions);
    GLAD_VK_KHR_push_descriptor = glad_vk_has_extension("VK_KHR_push_descriptor", extension_count, extensions);
    GLAD_VK_KHR_ray_query = glad_vk_has_extension("VK_KHR_ray_query", extension_count, extensions);
    GLAD_VK_KHR_ray_tracing_maintenance1 = glad_vk_has_extension("VK_KHR_ray_tracing_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_ray_tracing_pipeline = glad_vk_has_extension("VK_KHR_ray_tracing_pipeline", extension_count, extensions);
    GLAD_VK_KHR_ray_tracing_position_fetch = glad_vk_has_extension("VK_KHR_ray_tracing_position_fetch", extension_count, extensions);
    GLAD_VK_KHR_relaxed_block_layout = glad_vk_has_extension("VK_KHR_relaxed_block_layout", extension_count, extensions);
    GLAD_VK_KHR_sampler_mirror_clamp_to_edge = glad_vk_has_extension("VK_KHR_sampler_mirror_clamp_to_edge", extension_count, extensions);
    GLAD_VK_KHR_sampler_ycbcr_conversion = glad_vk_has_extension("VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
    GLAD_VK_KHR_separate_depth_stencil_layouts = glad_vk_has_extension("VK_KHR_separate_depth_stencil_layouts", extension_count, extensions);
    GLAD_VK_KHR_shader_atomic_int64 = glad_vk_has_extension("VK_KHR_shader_atomic_int64", extension_count, extensions);
    GLAD_VK_KHR_shader_clock = glad_vk_has_extension("VK_KHR_shader_clock", extension_count, extensions);
    GLAD_VK_KHR_shader_draw_parameters = glad_vk_has_extension("VK_KHR_shader_draw_parameters", extension_count, extensions);
    GLAD_VK_KHR_shader_expect_assume = glad_vk_has_extension("VK_KHR_shader_expect_assume", extension_count, extensions);
    GLAD_VK_KHR_shader_float16_int8 = glad_vk_has_extension("VK_KHR_shader_float16_int8", extension_count, extensions);
    GLAD_VK_KHR_shader_float_controls = glad_vk_has_extension("VK_KHR_shader_float_controls", extension_count, extensions);
    GLAD_VK_KHR_shader_float_controls2 = glad_vk_has_extension("VK_KHR_shader_float_controls2", extension_count, extensions);
    GLAD_VK_KHR_shader_integer_dot_product = glad_vk_has_extension("VK_KHR_shader_integer_dot_product", extension_count, extensions);
    GLAD_VK_KHR_shader_maximal_reconvergence = glad_vk_has_extension("VK_KHR_shader_maximal_reconvergence", extension_count, extensions);
    GLAD_VK_KHR_shader_non_semantic_info = glad_vk_has_extension("VK_KHR_shader_non_semantic_info", extension_count, extensions);
    GLAD_VK_KHR_shader_quad_control = glad_vk_has_extension("VK_KHR_shader_quad_control", extension_count, extensions);
    GLAD_VK_KHR_shader_relaxed_extended_instruction = glad_vk_has_extension("VK_KHR_shader_relaxed_extended_instruction", extension_count, extensions);
    GLAD_VK_KHR_shader_subgroup_extended_types = glad_vk_has_extension("VK_KHR_shader_subgroup_extended_types", extension_count, extensions);
    GLAD_VK_KHR_shader_subgroup_rotate = glad_vk_has_extension("VK_KHR_shader_subgroup_rotate", extension_count, extensions);
    GLAD_VK_KHR_shader_subgroup_uniform_control_flow = glad_vk_has_extension("VK_KHR_shader_subgroup_uniform_control_flow", extension_count, extensions);
    GLAD_VK_KHR_shader_terminate_invocation = glad_vk_has_extension("VK_KHR_shader_terminate_invocation", extension_count, extensions);
    GLAD_VK_KHR_shared_presentable_image = glad_vk_has_extension("VK_KHR_shared_presentable_image", extension_count, extensions);
    GLAD_VK_KHR_spirv_1_4 = glad_vk_has_extension("VK_KHR_spirv_1_4", extension_count, extensions);
    GLAD_VK_KHR_storage_buffer_storage_class = glad_vk_has_extension("VK_KHR_storage_buffer_storage_class", extension_count, extensions);
    GLAD_VK_KHR_surface = glad_vk_has_extension("VK_KHR_surface", extension_count, extensions);
    GLAD_VK_KHR_surface_protected_capabilities = glad_vk_has_extension("VK_KHR_surface_protected_capabilities", extension_count, extensions);
    GLAD_VK_KHR_swapchain = glad_vk_has_extension("VK_KHR_swapchain", extension_count, extensions);
    GLAD_VK_KHR_swapchain_mutable_format = glad_vk_has_extension("VK_KHR_swapchain_mutable_format", extension_count, extensions);
    GLAD_VK_KHR_synchronization2 = glad_vk_has_extension("VK_KHR_synchronization2", extension_count, extensions);
    GLAD_VK_KHR_timeline_semaphore = glad_vk_has_extension("VK_KHR_timeline_semaphore", extension_count, extensions);
    GLAD_VK_KHR_uniform_buffer_standard_layout = glad_vk_has_extension("VK_KHR_uniform_buffer_standard_layout", extension_count, extensions);
    GLAD_VK_KHR_variable_pointers = glad_vk_has_extension("VK_KHR_variable_pointers", extension_count, extensions);
    GLAD_VK_KHR_vertex_attribute_divisor = glad_vk_has_extension("VK_KHR_vertex_attribute_divisor", extension_count, extensions);
    GLAD_VK_KHR_video_decode_av1 = glad_vk_has_extension("VK_KHR_video_decode_av1", extension_count, extensions);
    GLAD_VK_KHR_video_decode_h264 = glad_vk_has_extension("VK_KHR_video_decode_h264", extension_count, extensions);
    GLAD_VK_KHR_video_decode_h265 = glad_vk_has_extension("VK_KHR_video_decode_h265", extension_count, extensions);
    GLAD_VK_KHR_video_decode_queue = glad_vk_has_extension("VK_KHR_video_decode_queue", extension_count, extensions);
    GLAD_VK_KHR_video_encode_h264 = glad_vk_has_extension("VK_KHR_video_encode_h264", extension_count, extensions);
    GLAD_VK_KHR_video_encode_h265 = glad_vk_has_extension("VK_KHR_video_encode_h265", extension_count, extensions);
    GLAD_VK_KHR_video_encode_queue = glad_vk_has_extension("VK_KHR_video_encode_queue", extension_count, extensions);
    GLAD_VK_KHR_video_maintenance1 = glad_vk_has_extension("VK_KHR_video_maintenance1", extension_count, extensions);
    GLAD_VK_KHR_video_queue = glad_vk_has_extension("VK_KHR_video_queue", extension_count, extensions);
    GLAD_VK_KHR_vulkan_memory_model = glad_vk_has_extension("VK_KHR_vulkan_memory_model", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    GLAD_VK_KHR_wayland_surface = glad_vk_has_extension("VK_KHR_wayland_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_keyed_mutex = glad_vk_has_extension("VK_KHR_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_KHR_win32_surface = glad_vk_has_extension("VK_KHR_win32_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_workgroup_memory_explicit_layout = glad_vk_has_extension("VK_KHR_workgroup_memory_explicit_layout", extension_count, extensions);
#if defined(VK_USE_PLATFORM_XCB_KHR)
    GLAD_VK_KHR_xcb_surface = glad_vk_has_extension("VK_KHR_xcb_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    GLAD_VK_KHR_xlib_surface = glad_vk_has_extension("VK_KHR_xlib_surface", extension_count, extensions);

#endif
    GLAD_VK_KHR_zero_initialize_workgroup_memory = glad_vk_has_extension("VK_KHR_zero_initialize_workgroup_memory", extension_count, extensions);
    GLAD_VK_LUNARG_direct_driver_loading = glad_vk_has_extension("VK_LUNARG_direct_driver_loading", extension_count, extensions);
    GLAD_VK_MESA_image_alignment_control = glad_vk_has_extension("VK_MESA_image_alignment_control", extension_count, extensions);
    GLAD_VK_MSFT_layered_driver = glad_vk_has_extension("VK_MSFT_layered_driver", extension_count, extensions);
#if defined(VK_USE_PLATFORM_IOS_MVK)
    GLAD_VK_MVK_ios_surface = glad_vk_has_extension("VK_MVK_ios_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    GLAD_VK_MVK_macos_surface = glad_vk_has_extension("VK_MVK_macos_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    GLAD_VK_NN_vi_surface = glad_vk_has_extension("VK_NN_vi_surface", extension_count, extensions);

#endif
    GLAD_VK_NVX_binary_import = glad_vk_has_extension("VK_NVX_binary_import", extension_count, extensions);
    GLAD_VK_NVX_image_view_handle = glad_vk_has_extension("VK_NVX_image_view_handle", extension_count, extensions);
    GLAD_VK_NVX_multiview_per_view_attributes = glad_vk_has_extension("VK_NVX_multiview_per_view_attributes", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_acquire_winrt_display = glad_vk_has_extension("VK_NV_acquire_winrt_display", extension_count, extensions);

#endif
    GLAD_VK_NV_clip_space_w_scaling = glad_vk_has_extension("VK_NV_clip_space_w_scaling", extension_count, extensions);
    GLAD_VK_NV_command_buffer_inheritance = glad_vk_has_extension("VK_NV_command_buffer_inheritance", extension_count, extensions);
    GLAD_VK_NV_compute_shader_derivatives = glad_vk_has_extension("VK_NV_compute_shader_derivatives", extension_count, extensions);
    GLAD_VK_NV_cooperative_matrix = glad_vk_has_extension("VK_NV_cooperative_matrix", extension_count, extensions);
    GLAD_VK_NV_copy_memory_indirect = glad_vk_has_extension("VK_NV_copy_memory_indirect", extension_count, extensions);
    GLAD_VK_NV_corner_sampled_image = glad_vk_has_extension("VK_NV_corner_sampled_image", extension_count, extensions);
    GLAD_VK_NV_coverage_reduction_mode = glad_vk_has_extension("VK_NV_coverage_reduction_mode", extension_count, extensions);
    GLAD_VK_NV_cuda_kernel_launch = glad_vk_has_extension("VK_NV_cuda_kernel_launch", extension_count, extensions);
    GLAD_VK_NV_dedicated_allocation = glad_vk_has_extension("VK_NV_dedicated_allocation", extension_count, extensions);
    GLAD_VK_NV_dedicated_allocation_image_aliasing = glad_vk_has_extension("VK_NV_dedicated_allocation_image_aliasing", extension_count, extensions);
    GLAD_VK_NV_descriptor_pool_overallocation = glad_vk_has_extension("VK_NV_descriptor_pool_overallocation", extension_count, extensions);
    GLAD_VK_NV_device_diagnostic_checkpoints = glad_vk_has_extension("VK_NV_device_diagnostic_checkpoints", extension_count, extensions);
    GLAD_VK_NV_device_diagnostics_config = glad_vk_has_extension("VK_NV_device_diagnostics_config", extension_count, extensions);
    GLAD_VK_NV_device_generated_commands = glad_vk_has_extension("VK_NV_device_generated_commands", extension_count, extensions);
    GLAD_VK_NV_device_generated_commands_compute = glad_vk_has_extension("VK_NV_device_generated_commands_compute", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    GLAD_VK_NV_displacement_micromap = glad_vk_has_extension("VK_NV_displacement_micromap", extension_count, extensions);

#endif
    GLAD_VK_NV_extended_sparse_address_space = glad_vk_has_extension("VK_NV_extended_sparse_address_space", extension_count, extensions);
    GLAD_VK_NV_external_memory = glad_vk_has_extension("VK_NV_external_memory", extension_count, extensions);
    GLAD_VK_NV_external_memory_capabilities = glad_vk_has_extension("VK_NV_external_memory_capabilities", extension_count, extensions);
    GLAD_VK_NV_external_memory_rdma = glad_vk_has_extension("VK_NV_external_memory_rdma", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_external_memory_win32 = glad_vk_has_extension("VK_NV_external_memory_win32", extension_count, extensions);

#endif
    GLAD_VK_NV_fill_rectangle = glad_vk_has_extension("VK_NV_fill_rectangle", extension_count, extensions);
    GLAD_VK_NV_fragment_coverage_to_color = glad_vk_has_extension("VK_NV_fragment_coverage_to_color", extension_count, extensions);
    GLAD_VK_NV_fragment_shader_barycentric = glad_vk_has_extension("VK_NV_fragment_shader_barycentric", extension_count, extensions);
    GLAD_VK_NV_fragment_shading_rate_enums = glad_vk_has_extension("VK_NV_fragment_shading_rate_enums", extension_count, extensions);
    GLAD_VK_NV_framebuffer_mixed_samples = glad_vk_has_extension("VK_NV_framebuffer_mixed_samples", extension_count, extensions);
    GLAD_VK_NV_geometry_shader_passthrough = glad_vk_has_extension("VK_NV_geometry_shader_passthrough", extension_count, extensions);
    GLAD_VK_NV_glsl_shader = glad_vk_has_extension("VK_NV_glsl_shader", extension_count, extensions);
    GLAD_VK_NV_inherited_viewport_scissor = glad_vk_has_extension("VK_NV_inherited_viewport_scissor", extension_count, extensions);
    GLAD_VK_NV_linear_color_attachment = glad_vk_has_extension("VK_NV_linear_color_attachment", extension_count, extensions);
    GLAD_VK_NV_low_latency = glad_vk_has_extension("VK_NV_low_latency", extension_count, extensions);
    GLAD_VK_NV_low_latency2 = glad_vk_has_extension("VK_NV_low_latency2", extension_count, extensions);
    GLAD_VK_NV_memory_decompression = glad_vk_has_extension("VK_NV_memory_decompression", extension_count, extensions);
    GLAD_VK_NV_mesh_shader = glad_vk_has_extension("VK_NV_mesh_shader", extension_count, extensions);
    GLAD_VK_NV_optical_flow = glad_vk_has_extension("VK_NV_optical_flow", extension_count, extensions);
    GLAD_VK_NV_per_stage_descriptor_set = glad_vk_has_extension("VK_NV_per_stage_descriptor_set", extension_count, extensions);
    GLAD_VK_NV_present_barrier = glad_vk_has_extension("VK_NV_present_barrier", extension_count, extensions);
    GLAD_VK_NV_raw_access_chains = glad_vk_has_extension("VK_NV_raw_access_chains", extension_count, extensions);
    GLAD_VK_NV_ray_tracing = glad_vk_has_extension("VK_NV_ray_tracing", extension_count, extensions);
    GLAD_VK_NV_ray_tracing_invocation_reorder = glad_vk_has_extension("VK_NV_ray_tracing_invocation_reorder", extension_count, extensions);
    GLAD_VK_NV_ray_tracing_motion_blur = glad_vk_has_extension("VK_NV_ray_tracing_motion_blur", extension_count, extensions);
    GLAD_VK_NV_ray_tracing_validation = glad_vk_has_extension("VK_NV_ray_tracing_validation", extension_count, extensions);
    GLAD_VK_NV_representative_fragment_test = glad_vk_has_extension("VK_NV_representative_fragment_test", extension_count, extensions);
    GLAD_VK_NV_sample_mask_override_coverage = glad_vk_has_extension("VK_NV_sample_mask_override_coverage", extension_count, extensions);
    GLAD_VK_NV_scissor_exclusive = glad_vk_has_extension("VK_NV_scissor_exclusive", extension_count, extensions);
    GLAD_VK_NV_shader_atomic_float16_vector = glad_vk_has_extension("VK_NV_shader_atomic_float16_vector", extension_count, extensions);
    GLAD_VK_NV_shader_image_footprint = glad_vk_has_extension("VK_NV_shader_image_footprint", extension_count, extensions);
    GLAD_VK_NV_shader_sm_builtins = glad_vk_has_extension("VK_NV_shader_sm_builtins", extension_count, extensions);
    GLAD_VK_NV_shader_subgroup_partitioned = glad_vk_has_extension("VK_NV_shader_subgroup_partitioned", extension_count, extensions);
    GLAD_VK_NV_shading_rate_image = glad_vk_has_extension("VK_NV_shading_rate_image", extension_count, extensions);
    GLAD_VK_NV_viewport_array2 = glad_vk_has_extension("VK_NV_viewport_array2", extension_count, extensions);
    GLAD_VK_NV_viewport_swizzle = glad_vk_has_extension("VK_NV_viewport_swizzle", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_win32_keyed_mutex = glad_vk_has_extension("VK_NV_win32_keyed_mutex", extension_count, extensions);

#endif
    GLAD_VK_QCOM_filter_cubic_clamp = glad_vk_has_extension("VK_QCOM_filter_cubic_clamp", extension_count, extensions);
    GLAD_VK_QCOM_filter_cubic_weights = glad_vk_has_extension("VK_QCOM_filter_cubic_weights", extension_count, extensions);
    GLAD_VK_QCOM_fragment_density_map_offset = glad_vk_has_extension("VK_QCOM_fragment_density_map_offset", extension_count, extensions);
    GLAD_VK_QCOM_image_processing = glad_vk_has_extension("VK_QCOM_image_processing", extension_count, extensions);
    GLAD_VK_QCOM_image_processing2 = glad_vk_has_extension("VK_QCOM_image_processing2", extension_count, extensions);
    GLAD_VK_QCOM_multiview_per_view_render_areas = glad_vk_has_extension("VK_QCOM_multiview_per_view_render_areas", extension_count, extensions);
    GLAD_VK_QCOM_multiview_per_view_viewports = glad_vk_has_extension("VK_QCOM_multiview_per_view_viewports", extension_count, extensions);
    GLAD_VK_QCOM_render_pass_shader_resolve = glad_vk_has_extension("VK_QCOM_render_pass_shader_resolve", extension_count, extensions);
    GLAD_VK_QCOM_render_pass_store_ops = glad_vk_has_extension("VK_QCOM_render_pass_store_ops", extension_count, extensions);
    GLAD_VK_QCOM_render_pass_transform = glad_vk_has_extension("VK_QCOM_render_pass_transform", extension_count, extensions);
    GLAD_VK_QCOM_rotated_copy_commands = glad_vk_has_extension("VK_QCOM_rotated_copy_commands", extension_count, extensions);
    GLAD_VK_QCOM_tile_properties = glad_vk_has_extension("VK_QCOM_tile_properties", extension_count, extensions);
    GLAD_VK_QCOM_ycbcr_degamma = glad_vk_has_extension("VK_QCOM_ycbcr_degamma", extension_count, extensions);
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    GLAD_VK_QNX_external_memory_screen_buffer = glad_vk_has_extension("VK_QNX_external_memory_screen_buffer", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    GLAD_VK_QNX_screen_surface = glad_vk_has_extension("VK_QNX_screen_surface", extension_count, extensions);

#endif
    GLAD_VK_SEC_amigo_profiling = glad_vk_has_extension("VK_SEC_amigo_profiling", extension_count, extensions);
    GLAD_VK_VALVE_descriptor_set_host_mapping = glad_vk_has_extension("VK_VALVE_descriptor_set_host_mapping", extension_count, extensions);
    GLAD_VK_VALVE_mutable_descriptor_type = glad_vk_has_extension("VK_VALVE_mutable_descriptor_type", extension_count, extensions);

    GLAD_UNUSED(glad_vk_has_extension);

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkan( VkPhysicalDevice physical_device) {
    int major = 1;
    int minor = 0;

#ifdef VK_VERSION_1_1
    if (glad_vkEnumerateInstanceVersion != NULL) {
        uint32_t version;
        VkResult result;

        result = glad_vkEnumerateInstanceVersion(&version);
        if (result == VK_SUCCESS) {
            major = (int) VK_VERSION_MAJOR(version);
            minor = (int) VK_VERSION_MINOR(version);
        }
    }
#endif

    if (physical_device != NULL && glad_vkGetPhysicalDeviceProperties != NULL) {
        VkPhysicalDeviceProperties properties;
        glad_vkGetPhysicalDeviceProperties(physical_device, &properties);

        major = (int) VK_VERSION_MAJOR(properties.apiVersion);
        minor = (int) VK_VERSION_MINOR(properties.apiVersion);
    }

    GLAD_VK_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_VK_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLAD_VK_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanUserPtr( VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    glad_vkEnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
#endif
    version = glad_vk_find_core_vulkan( physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VK_VERSION_1_0(load, userptr);
    glad_vk_load_VK_VERSION_1_1(load, userptr);
    glad_vk_load_VK_VERSION_1_2(load, userptr);
    glad_vk_load_VK_VERSION_1_3(load, userptr);

    if (!glad_vk_find_extensions_vulkan( physical_device)) return 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_vk_load_VK_AMDX_shader_enqueue(load, userptr);

#endif
    glad_vk_load_VK_AMD_anti_lag(load, userptr);
    glad_vk_load_VK_AMD_buffer_marker(load, userptr);
    glad_vk_load_VK_AMD_display_native_hdr(load, userptr);
    glad_vk_load_VK_AMD_draw_indirect_count(load, userptr);
    glad_vk_load_VK_AMD_shader_info(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_ANDROID_external_memory_android_hardware_buffer(load, userptr);

#endif
    glad_vk_load_VK_EXT_acquire_drm_display(load, userptr);
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_vk_load_VK_EXT_acquire_xlib_display(load, userptr);

#endif
    glad_vk_load_VK_EXT_attachment_feedback_loop_dynamic_state(load, userptr);
    glad_vk_load_VK_EXT_buffer_device_address(load, userptr);
    glad_vk_load_VK_EXT_calibrated_timestamps(load, userptr);
    glad_vk_load_VK_EXT_color_write_enable(load, userptr);
    glad_vk_load_VK_EXT_conditional_rendering(load, userptr);
    glad_vk_load_VK_EXT_debug_marker(load, userptr);
    glad_vk_load_VK_EXT_debug_report(load, userptr);
    glad_vk_load_VK_EXT_debug_utils(load, userptr);
    glad_vk_load_VK_EXT_depth_bias_control(load, userptr);
    glad_vk_load_VK_EXT_descriptor_buffer(load, userptr);
    glad_vk_load_VK_EXT_device_fault(load, userptr);
    glad_vk_load_VK_EXT_direct_mode_display(load, userptr);
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    glad_vk_load_VK_EXT_directfb_surface(load, userptr);

#endif
    glad_vk_load_VK_EXT_discard_rectangles(load, userptr);
    glad_vk_load_VK_EXT_display_control(load, userptr);
    glad_vk_load_VK_EXT_display_surface_counter(load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state(load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state2(load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state3(load, userptr);
    glad_vk_load_VK_EXT_external_memory_host(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_EXT_full_screen_exclusive(load, userptr);

#endif
    glad_vk_load_VK_EXT_hdr_metadata(load, userptr);
    glad_vk_load_VK_EXT_headless_surface(load, userptr);
    glad_vk_load_VK_EXT_host_image_copy(load, userptr);
    glad_vk_load_VK_EXT_host_query_reset(load, userptr);
    glad_vk_load_VK_EXT_image_compression_control(load, userptr);
    glad_vk_load_VK_EXT_image_drm_format_modifier(load, userptr);
    glad_vk_load_VK_EXT_line_rasterization(load, userptr);
    glad_vk_load_VK_EXT_mesh_shader(load, userptr);
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_vk_load_VK_EXT_metal_objects(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_vk_load_VK_EXT_metal_surface(load, userptr);

#endif
    glad_vk_load_VK_EXT_multi_draw(load, userptr);
    glad_vk_load_VK_EXT_opacity_micromap(load, userptr);
    glad_vk_load_VK_EXT_pageable_device_local_memory(load, userptr);
    glad_vk_load_VK_EXT_pipeline_properties(load, userptr);
    glad_vk_load_VK_EXT_private_data(load, userptr);
    glad_vk_load_VK_EXT_sample_locations(load, userptr);
    glad_vk_load_VK_EXT_shader_module_identifier(load, userptr);
    glad_vk_load_VK_EXT_shader_object(load, userptr);
    glad_vk_load_VK_EXT_swapchain_maintenance1(load, userptr);
    glad_vk_load_VK_EXT_tooling_info(load, userptr);
    glad_vk_load_VK_EXT_transform_feedback(load, userptr);
    glad_vk_load_VK_EXT_validation_cache(load, userptr);
    glad_vk_load_VK_EXT_vertex_input_dynamic_state(load, userptr);
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_vk_load_VK_FUCHSIA_buffer_collection(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_vk_load_VK_FUCHSIA_external_memory(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_vk_load_VK_FUCHSIA_external_semaphore(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_vk_load_VK_FUCHSIA_imagepipe_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_GGP)
    glad_vk_load_VK_GGP_stream_descriptor_surface(load, userptr);

#endif
    glad_vk_load_VK_GOOGLE_display_timing(load, userptr);
    glad_vk_load_VK_HUAWEI_cluster_culling_shader(load, userptr);
    glad_vk_load_VK_HUAWEI_invocation_mask(load, userptr);
    glad_vk_load_VK_HUAWEI_subpass_shading(load, userptr);
    glad_vk_load_VK_INTEL_performance_query(load, userptr);
    glad_vk_load_VK_KHR_acceleration_structure(load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_vk_load_VK_KHR_android_surface(load, userptr);

#endif
    glad_vk_load_VK_KHR_bind_memory2(load, userptr);
    glad_vk_load_VK_KHR_buffer_device_address(load, userptr);
    glad_vk_load_VK_KHR_calibrated_timestamps(load, userptr);
    glad_vk_load_VK_KHR_cooperative_matrix(load, userptr);
    glad_vk_load_VK_KHR_copy_commands2(load, userptr);
    glad_vk_load_VK_KHR_create_renderpass2(load, userptr);
    glad_vk_load_VK_KHR_deferred_host_operations(load, userptr);
    glad_vk_load_VK_KHR_descriptor_update_template(load, userptr);
    glad_vk_load_VK_KHR_device_group(load, userptr);
    glad_vk_load_VK_KHR_device_group_creation(load, userptr);
    glad_vk_load_VK_KHR_display(load, userptr);
    glad_vk_load_VK_KHR_display_swapchain(load, userptr);
    glad_vk_load_VK_KHR_draw_indirect_count(load, userptr);
    glad_vk_load_VK_KHR_dynamic_rendering(load, userptr);
    glad_vk_load_VK_KHR_dynamic_rendering_local_read(load, userptr);
    glad_vk_load_VK_KHR_external_fence_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_fence_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_fence_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_memory_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_memory_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_external_semaphore_capabilities(load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_fd(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_external_semaphore_win32(load, userptr);

#endif
    glad_vk_load_VK_KHR_fragment_shading_rate(load, userptr);
    glad_vk_load_VK_KHR_get_display_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_memory_requirements2(load, userptr);
    glad_vk_load_VK_KHR_get_physical_device_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_surface_capabilities2(load, userptr);
    glad_vk_load_VK_KHR_line_rasterization(load, userptr);
    glad_vk_load_VK_KHR_maintenance1(load, userptr);
    glad_vk_load_VK_KHR_maintenance3(load, userptr);
    glad_vk_load_VK_KHR_maintenance4(load, userptr);
    glad_vk_load_VK_KHR_maintenance5(load, userptr);
    glad_vk_load_VK_KHR_maintenance6(load, userptr);
    glad_vk_load_VK_KHR_map_memory2(load, userptr);
    glad_vk_load_VK_KHR_performance_query(load, userptr);
    glad_vk_load_VK_KHR_pipeline_executable_properties(load, userptr);
    glad_vk_load_VK_KHR_present_wait(load, userptr);
    glad_vk_load_VK_KHR_push_descriptor(load, userptr);
    glad_vk_load_VK_KHR_ray_tracing_maintenance1(load, userptr);
    glad_vk_load_VK_KHR_ray_tracing_pipeline(load, userptr);
    glad_vk_load_VK_KHR_sampler_ycbcr_conversion(load, userptr);
    glad_vk_load_VK_KHR_shared_presentable_image(load, userptr);
    glad_vk_load_VK_KHR_surface(load, userptr);
    glad_vk_load_VK_KHR_swapchain(load, userptr);
    glad_vk_load_VK_KHR_synchronization2(load, userptr);
    glad_vk_load_VK_KHR_timeline_semaphore(load, userptr);
    glad_vk_load_VK_KHR_video_decode_queue(load, userptr);
    glad_vk_load_VK_KHR_video_encode_queue(load, userptr);
    glad_vk_load_VK_KHR_video_queue(load, userptr);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_vk_load_VK_KHR_wayland_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_KHR_win32_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_vk_load_VK_KHR_xcb_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_vk_load_VK_KHR_xlib_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
    glad_vk_load_VK_MVK_ios_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    glad_vk_load_VK_MVK_macos_surface(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
    glad_vk_load_VK_NN_vi_surface(load, userptr);

#endif
    glad_vk_load_VK_NVX_binary_import(load, userptr);
    glad_vk_load_VK_NVX_image_view_handle(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_NV_acquire_winrt_display(load, userptr);

#endif
    glad_vk_load_VK_NV_clip_space_w_scaling(load, userptr);
    glad_vk_load_VK_NV_cooperative_matrix(load, userptr);
    glad_vk_load_VK_NV_copy_memory_indirect(load, userptr);
    glad_vk_load_VK_NV_coverage_reduction_mode(load, userptr);
    glad_vk_load_VK_NV_cuda_kernel_launch(load, userptr);
    glad_vk_load_VK_NV_device_diagnostic_checkpoints(load, userptr);
    glad_vk_load_VK_NV_device_generated_commands(load, userptr);
    glad_vk_load_VK_NV_device_generated_commands_compute(load, userptr);
    glad_vk_load_VK_NV_external_memory_capabilities(load, userptr);
    glad_vk_load_VK_NV_external_memory_rdma(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_NV_external_memory_win32(load, userptr);

#endif
    glad_vk_load_VK_NV_fragment_shading_rate_enums(load, userptr);
    glad_vk_load_VK_NV_low_latency2(load, userptr);
    glad_vk_load_VK_NV_memory_decompression(load, userptr);
    glad_vk_load_VK_NV_mesh_shader(load, userptr);
    glad_vk_load_VK_NV_optical_flow(load, userptr);
    glad_vk_load_VK_NV_ray_tracing(load, userptr);
    glad_vk_load_VK_NV_scissor_exclusive(load, userptr);
    glad_vk_load_VK_NV_shading_rate_image(load, userptr);
    glad_vk_load_VK_QCOM_tile_properties(load, userptr);
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_vk_load_VK_QNX_external_memory_screen_buffer(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_vk_load_VK_QNX_screen_surface(load, userptr);

#endif
    glad_vk_load_VK_VALVE_descriptor_set_host_mapping(load, userptr);

    glad_vk_resolve_aliases();

    return version;
}


int gladLoadVulkan( VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanUserPtr( physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 
void gladInstallVulkanDebug() {
    glad_debug_vkAcquireDrmDisplayEXT = glad_debug_impl_vkAcquireDrmDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireFullScreenExclusiveModeEXT = glad_debug_impl_vkAcquireFullScreenExclusiveModeEXT;

#endif
    glad_debug_vkAcquireNextImage2KHR = glad_debug_impl_vkAcquireNextImage2KHR;
    glad_debug_vkAcquireNextImageKHR = glad_debug_impl_vkAcquireNextImageKHR;
    glad_debug_vkAcquirePerformanceConfigurationINTEL = glad_debug_impl_vkAcquirePerformanceConfigurationINTEL;
    glad_debug_vkAcquireProfilingLockKHR = glad_debug_impl_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireWinrtDisplayNV = glad_debug_impl_vkAcquireWinrtDisplayNV;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_debug_vkAcquireXlibDisplayEXT = glad_debug_impl_vkAcquireXlibDisplayEXT;

#endif
    glad_debug_vkAllocateCommandBuffers = glad_debug_impl_vkAllocateCommandBuffers;
    glad_debug_vkAllocateDescriptorSets = glad_debug_impl_vkAllocateDescriptorSets;
    glad_debug_vkAllocateMemory = glad_debug_impl_vkAllocateMemory;
    glad_debug_vkAntiLagUpdateAMD = glad_debug_impl_vkAntiLagUpdateAMD;
    glad_debug_vkBeginCommandBuffer = glad_debug_impl_vkBeginCommandBuffer;
    glad_debug_vkBindAccelerationStructureMemoryNV = glad_debug_impl_vkBindAccelerationStructureMemoryNV;
    glad_debug_vkBindBufferMemory = glad_debug_impl_vkBindBufferMemory;
    glad_debug_vkBindBufferMemory2 = glad_debug_impl_vkBindBufferMemory2;
    glad_debug_vkBindBufferMemory2KHR = glad_debug_impl_vkBindBufferMemory2KHR;
    glad_debug_vkBindImageMemory = glad_debug_impl_vkBindImageMemory;
    glad_debug_vkBindImageMemory2 = glad_debug_impl_vkBindImageMemory2;
    glad_debug_vkBindImageMemory2KHR = glad_debug_impl_vkBindImageMemory2KHR;
    glad_debug_vkBindOpticalFlowSessionImageNV = glad_debug_impl_vkBindOpticalFlowSessionImageNV;
    glad_debug_vkBindVideoSessionMemoryKHR = glad_debug_impl_vkBindVideoSessionMemoryKHR;
    glad_debug_vkBuildAccelerationStructuresKHR = glad_debug_impl_vkBuildAccelerationStructuresKHR;
    glad_debug_vkBuildMicromapsEXT = glad_debug_impl_vkBuildMicromapsEXT;
    glad_debug_vkCmdBeginConditionalRenderingEXT = glad_debug_impl_vkCmdBeginConditionalRenderingEXT;
    glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT;
    glad_debug_vkCmdBeginQuery = glad_debug_impl_vkCmdBeginQuery;
    glad_debug_vkCmdBeginQueryIndexedEXT = glad_debug_impl_vkCmdBeginQueryIndexedEXT;
    glad_debug_vkCmdBeginRenderPass = glad_debug_impl_vkCmdBeginRenderPass;
    glad_debug_vkCmdBeginRenderPass2 = glad_debug_impl_vkCmdBeginRenderPass2;
    glad_debug_vkCmdBeginRenderPass2KHR = glad_debug_impl_vkCmdBeginRenderPass2KHR;
    glad_debug_vkCmdBeginRendering = glad_debug_impl_vkCmdBeginRendering;
    glad_debug_vkCmdBeginRenderingKHR = glad_debug_impl_vkCmdBeginRenderingKHR;
    glad_debug_vkCmdBeginTransformFeedbackEXT = glad_debug_impl_vkCmdBeginTransformFeedbackEXT;
    glad_debug_vkCmdBeginVideoCodingKHR = glad_debug_impl_vkCmdBeginVideoCodingKHR;
    glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT;
    glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = glad_debug_impl_vkCmdBindDescriptorBufferEmbeddedSamplersEXT;
    glad_debug_vkCmdBindDescriptorBuffersEXT = glad_debug_impl_vkCmdBindDescriptorBuffersEXT;
    glad_debug_vkCmdBindDescriptorSets = glad_debug_impl_vkCmdBindDescriptorSets;
    glad_debug_vkCmdBindDescriptorSets2KHR = glad_debug_impl_vkCmdBindDescriptorSets2KHR;
    glad_debug_vkCmdBindIndexBuffer = glad_debug_impl_vkCmdBindIndexBuffer;
    glad_debug_vkCmdBindIndexBuffer2KHR = glad_debug_impl_vkCmdBindIndexBuffer2KHR;
    glad_debug_vkCmdBindInvocationMaskHUAWEI = glad_debug_impl_vkCmdBindInvocationMaskHUAWEI;
    glad_debug_vkCmdBindPipeline = glad_debug_impl_vkCmdBindPipeline;
    glad_debug_vkCmdBindPipelineShaderGroupNV = glad_debug_impl_vkCmdBindPipelineShaderGroupNV;
    glad_debug_vkCmdBindShadersEXT = glad_debug_impl_vkCmdBindShadersEXT;
    glad_debug_vkCmdBindShadingRateImageNV = glad_debug_impl_vkCmdBindShadingRateImageNV;
    glad_debug_vkCmdBindTransformFeedbackBuffersEXT = glad_debug_impl_vkCmdBindTransformFeedbackBuffersEXT;
    glad_debug_vkCmdBindVertexBuffers = glad_debug_impl_vkCmdBindVertexBuffers;
    glad_debug_vkCmdBindVertexBuffers2 = glad_debug_impl_vkCmdBindVertexBuffers2;
    glad_debug_vkCmdBindVertexBuffers2EXT = glad_debug_impl_vkCmdBindVertexBuffers2EXT;
    glad_debug_vkCmdBlitImage = glad_debug_impl_vkCmdBlitImage;
    glad_debug_vkCmdBlitImage2 = glad_debug_impl_vkCmdBlitImage2;
    glad_debug_vkCmdBlitImage2KHR = glad_debug_impl_vkCmdBlitImage2KHR;
    glad_debug_vkCmdBuildAccelerationStructureNV = glad_debug_impl_vkCmdBuildAccelerationStructureNV;
    glad_debug_vkCmdBuildAccelerationStructuresIndirectKHR = glad_debug_impl_vkCmdBuildAccelerationStructuresIndirectKHR;
    glad_debug_vkCmdBuildAccelerationStructuresKHR = glad_debug_impl_vkCmdBuildAccelerationStructuresKHR;
    glad_debug_vkCmdBuildMicromapsEXT = glad_debug_impl_vkCmdBuildMicromapsEXT;
    glad_debug_vkCmdClearAttachments = glad_debug_impl_vkCmdClearAttachments;
    glad_debug_vkCmdClearColorImage = glad_debug_impl_vkCmdClearColorImage;
    glad_debug_vkCmdClearDepthStencilImage = glad_debug_impl_vkCmdClearDepthStencilImage;
    glad_debug_vkCmdControlVideoCodingKHR = glad_debug_impl_vkCmdControlVideoCodingKHR;
    glad_debug_vkCmdCopyAccelerationStructureKHR = glad_debug_impl_vkCmdCopyAccelerationStructureKHR;
    glad_debug_vkCmdCopyAccelerationStructureNV = glad_debug_impl_vkCmdCopyAccelerationStructureNV;
    glad_debug_vkCmdCopyAccelerationStructureToMemoryKHR = glad_debug_impl_vkCmdCopyAccelerationStructureToMemoryKHR;
    glad_debug_vkCmdCopyBuffer = glad_debug_impl_vkCmdCopyBuffer;
    glad_debug_vkCmdCopyBuffer2 = glad_debug_impl_vkCmdCopyBuffer2;
    glad_debug_vkCmdCopyBuffer2KHR = glad_debug_impl_vkCmdCopyBuffer2KHR;
    glad_debug_vkCmdCopyBufferToImage = glad_debug_impl_vkCmdCopyBufferToImage;
    glad_debug_vkCmdCopyBufferToImage2 = glad_debug_impl_vkCmdCopyBufferToImage2;
    glad_debug_vkCmdCopyBufferToImage2KHR = glad_debug_impl_vkCmdCopyBufferToImage2KHR;
    glad_debug_vkCmdCopyImage = glad_debug_impl_vkCmdCopyImage;
    glad_debug_vkCmdCopyImage2 = glad_debug_impl_vkCmdCopyImage2;
    glad_debug_vkCmdCopyImage2KHR = glad_debug_impl_vkCmdCopyImage2KHR;
    glad_debug_vkCmdCopyImageToBuffer = glad_debug_impl_vkCmdCopyImageToBuffer;
    glad_debug_vkCmdCopyImageToBuffer2 = glad_debug_impl_vkCmdCopyImageToBuffer2;
    glad_debug_vkCmdCopyImageToBuffer2KHR = glad_debug_impl_vkCmdCopyImageToBuffer2KHR;
    glad_debug_vkCmdCopyMemoryIndirectNV = glad_debug_impl_vkCmdCopyMemoryIndirectNV;
    glad_debug_vkCmdCopyMemoryToAccelerationStructureKHR = glad_debug_impl_vkCmdCopyMemoryToAccelerationStructureKHR;
    glad_debug_vkCmdCopyMemoryToImageIndirectNV = glad_debug_impl_vkCmdCopyMemoryToImageIndirectNV;
    glad_debug_vkCmdCopyMemoryToMicromapEXT = glad_debug_impl_vkCmdCopyMemoryToMicromapEXT;
    glad_debug_vkCmdCopyMicromapEXT = glad_debug_impl_vkCmdCopyMicromapEXT;
    glad_debug_vkCmdCopyMicromapToMemoryEXT = glad_debug_impl_vkCmdCopyMicromapToMemoryEXT;
    glad_debug_vkCmdCopyQueryPoolResults = glad_debug_impl_vkCmdCopyQueryPoolResults;
    glad_debug_vkCmdCuLaunchKernelNVX = glad_debug_impl_vkCmdCuLaunchKernelNVX;
    glad_debug_vkCmdCudaLaunchKernelNV = glad_debug_impl_vkCmdCudaLaunchKernelNV;
    glad_debug_vkCmdDebugMarkerBeginEXT = glad_debug_impl_vkCmdDebugMarkerBeginEXT;
    glad_debug_vkCmdDebugMarkerEndEXT = glad_debug_impl_vkCmdDebugMarkerEndEXT;
    glad_debug_vkCmdDebugMarkerInsertEXT = glad_debug_impl_vkCmdDebugMarkerInsertEXT;
    glad_debug_vkCmdDecodeVideoKHR = glad_debug_impl_vkCmdDecodeVideoKHR;
    glad_debug_vkCmdDecompressMemoryIndirectCountNV = glad_debug_impl_vkCmdDecompressMemoryIndirectCountNV;
    glad_debug_vkCmdDecompressMemoryNV = glad_debug_impl_vkCmdDecompressMemoryNV;
    glad_debug_vkCmdDispatch = glad_debug_impl_vkCmdDispatch;
    glad_debug_vkCmdDispatchBase = glad_debug_impl_vkCmdDispatchBase;
    glad_debug_vkCmdDispatchBaseKHR = glad_debug_impl_vkCmdDispatchBaseKHR;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphAMDX = glad_debug_impl_vkCmdDispatchGraphAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphIndirectAMDX = glad_debug_impl_vkCmdDispatchGraphIndirectAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphIndirectCountAMDX = glad_debug_impl_vkCmdDispatchGraphIndirectCountAMDX;

#endif
    glad_debug_vkCmdDispatchIndirect = glad_debug_impl_vkCmdDispatchIndirect;
    glad_debug_vkCmdDraw = glad_debug_impl_vkCmdDraw;
    glad_debug_vkCmdDrawClusterHUAWEI = glad_debug_impl_vkCmdDrawClusterHUAWEI;
    glad_debug_vkCmdDrawClusterIndirectHUAWEI = glad_debug_impl_vkCmdDrawClusterIndirectHUAWEI;
    glad_debug_vkCmdDrawIndexed = glad_debug_impl_vkCmdDrawIndexed;
    glad_debug_vkCmdDrawIndexedIndirect = glad_debug_impl_vkCmdDrawIndexedIndirect;
    glad_debug_vkCmdDrawIndexedIndirectCount = glad_debug_impl_vkCmdDrawIndexedIndirectCount;
    glad_debug_vkCmdDrawIndexedIndirectCountAMD = glad_debug_impl_vkCmdDrawIndexedIndirectCountAMD;
    glad_debug_vkCmdDrawIndexedIndirectCountKHR = glad_debug_impl_vkCmdDrawIndexedIndirectCountKHR;
    glad_debug_vkCmdDrawIndirect = glad_debug_impl_vkCmdDrawIndirect;
    glad_debug_vkCmdDrawIndirectByteCountEXT = glad_debug_impl_vkCmdDrawIndirectByteCountEXT;
    glad_debug_vkCmdDrawIndirectCount = glad_debug_impl_vkCmdDrawIndirectCount;
    glad_debug_vkCmdDrawIndirectCountAMD = glad_debug_impl_vkCmdDrawIndirectCountAMD;
    glad_debug_vkCmdDrawIndirectCountKHR = glad_debug_impl_vkCmdDrawIndirectCountKHR;
    glad_debug_vkCmdDrawMeshTasksEXT = glad_debug_impl_vkCmdDrawMeshTasksEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectCountEXT = glad_debug_impl_vkCmdDrawMeshTasksIndirectCountEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectCountNV = glad_debug_impl_vkCmdDrawMeshTasksIndirectCountNV;
    glad_debug_vkCmdDrawMeshTasksIndirectEXT = glad_debug_impl_vkCmdDrawMeshTasksIndirectEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectNV = glad_debug_impl_vkCmdDrawMeshTasksIndirectNV;
    glad_debug_vkCmdDrawMeshTasksNV = glad_debug_impl_vkCmdDrawMeshTasksNV;
    glad_debug_vkCmdDrawMultiEXT = glad_debug_impl_vkCmdDrawMultiEXT;
    glad_debug_vkCmdDrawMultiIndexedEXT = glad_debug_impl_vkCmdDrawMultiIndexedEXT;
    glad_debug_vkCmdEncodeVideoKHR = glad_debug_impl_vkCmdEncodeVideoKHR;
    glad_debug_vkCmdEndConditionalRenderingEXT = glad_debug_impl_vkCmdEndConditionalRenderingEXT;
    glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_debug_impl_vkCmdEndDebugUtilsLabelEXT;
    glad_debug_vkCmdEndQuery = glad_debug_impl_vkCmdEndQuery;
    glad_debug_vkCmdEndQueryIndexedEXT = glad_debug_impl_vkCmdEndQueryIndexedEXT;
    glad_debug_vkCmdEndRenderPass = glad_debug_impl_vkCmdEndRenderPass;
    glad_debug_vkCmdEndRenderPass2 = glad_debug_impl_vkCmdEndRenderPass2;
    glad_debug_vkCmdEndRenderPass2KHR = glad_debug_impl_vkCmdEndRenderPass2KHR;
    glad_debug_vkCmdEndRendering = glad_debug_impl_vkCmdEndRendering;
    glad_debug_vkCmdEndRenderingKHR = glad_debug_impl_vkCmdEndRenderingKHR;
    glad_debug_vkCmdEndTransformFeedbackEXT = glad_debug_impl_vkCmdEndTransformFeedbackEXT;
    glad_debug_vkCmdEndVideoCodingKHR = glad_debug_impl_vkCmdEndVideoCodingKHR;
    glad_debug_vkCmdExecuteCommands = glad_debug_impl_vkCmdExecuteCommands;
    glad_debug_vkCmdExecuteGeneratedCommandsNV = glad_debug_impl_vkCmdExecuteGeneratedCommandsNV;
    glad_debug_vkCmdFillBuffer = glad_debug_impl_vkCmdFillBuffer;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdInitializeGraphScratchMemoryAMDX = glad_debug_impl_vkCmdInitializeGraphScratchMemoryAMDX;

#endif
    glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT;
    glad_debug_vkCmdNextSubpass = glad_debug_impl_vkCmdNextSubpass;
    glad_debug_vkCmdNextSubpass2 = glad_debug_impl_vkCmdNextSubpass2;
    glad_debug_vkCmdNextSubpass2KHR = glad_debug_impl_vkCmdNextSubpass2KHR;
    glad_debug_vkCmdOpticalFlowExecuteNV = glad_debug_impl_vkCmdOpticalFlowExecuteNV;
    glad_debug_vkCmdPipelineBarrier = glad_debug_impl_vkCmdPipelineBarrier;
    glad_debug_vkCmdPipelineBarrier2 = glad_debug_impl_vkCmdPipelineBarrier2;
    glad_debug_vkCmdPipelineBarrier2KHR = glad_debug_impl_vkCmdPipelineBarrier2KHR;
    glad_debug_vkCmdPreprocessGeneratedCommandsNV = glad_debug_impl_vkCmdPreprocessGeneratedCommandsNV;
    glad_debug_vkCmdPushConstants = glad_debug_impl_vkCmdPushConstants;
    glad_debug_vkCmdPushConstants2KHR = glad_debug_impl_vkCmdPushConstants2KHR;
    glad_debug_vkCmdPushDescriptorSet2KHR = glad_debug_impl_vkCmdPushDescriptorSet2KHR;
    glad_debug_vkCmdPushDescriptorSetKHR = glad_debug_impl_vkCmdPushDescriptorSetKHR;
    glad_debug_vkCmdPushDescriptorSetWithTemplate2KHR = glad_debug_impl_vkCmdPushDescriptorSetWithTemplate2KHR;
    glad_debug_vkCmdPushDescriptorSetWithTemplateKHR = glad_debug_impl_vkCmdPushDescriptorSetWithTemplateKHR;
    glad_debug_vkCmdResetEvent = glad_debug_impl_vkCmdResetEvent;
    glad_debug_vkCmdResetEvent2 = glad_debug_impl_vkCmdResetEvent2;
    glad_debug_vkCmdResetEvent2KHR = glad_debug_impl_vkCmdResetEvent2KHR;
    glad_debug_vkCmdResetQueryPool = glad_debug_impl_vkCmdResetQueryPool;
    glad_debug_vkCmdResolveImage = glad_debug_impl_vkCmdResolveImage;
    glad_debug_vkCmdResolveImage2 = glad_debug_impl_vkCmdResolveImage2;
    glad_debug_vkCmdResolveImage2KHR = glad_debug_impl_vkCmdResolveImage2KHR;
    glad_debug_vkCmdSetAlphaToCoverageEnableEXT = glad_debug_impl_vkCmdSetAlphaToCoverageEnableEXT;
    glad_debug_vkCmdSetAlphaToOneEnableEXT = glad_debug_impl_vkCmdSetAlphaToOneEnableEXT;
    glad_debug_vkCmdSetAttachmentFeedbackLoopEnableEXT = glad_debug_impl_vkCmdSetAttachmentFeedbackLoopEnableEXT;
    glad_debug_vkCmdSetBlendConstants = glad_debug_impl_vkCmdSetBlendConstants;
    glad_debug_vkCmdSetCheckpointNV = glad_debug_impl_vkCmdSetCheckpointNV;
    glad_debug_vkCmdSetCoarseSampleOrderNV = glad_debug_impl_vkCmdSetCoarseSampleOrderNV;
    glad_debug_vkCmdSetColorBlendAdvancedEXT = glad_debug_impl_vkCmdSetColorBlendAdvancedEXT;
    glad_debug_vkCmdSetColorBlendEnableEXT = glad_debug_impl_vkCmdSetColorBlendEnableEXT;
    glad_debug_vkCmdSetColorBlendEquationEXT = glad_debug_impl_vkCmdSetColorBlendEquationEXT;
    glad_debug_vkCmdSetColorWriteEnableEXT = glad_debug_impl_vkCmdSetColorWriteEnableEXT;
    glad_debug_vkCmdSetColorWriteMaskEXT = glad_debug_impl_vkCmdSetColorWriteMaskEXT;
    glad_debug_vkCmdSetConservativeRasterizationModeEXT = glad_debug_impl_vkCmdSetConservativeRasterizationModeEXT;
    glad_debug_vkCmdSetCoverageModulationModeNV = glad_debug_impl_vkCmdSetCoverageModulationModeNV;
    glad_debug_vkCmdSetCoverageModulationTableEnableNV = glad_debug_impl_vkCmdSetCoverageModulationTableEnableNV;
    glad_debug_vkCmdSetCoverageModulationTableNV = glad_debug_impl_vkCmdSetCoverageModulationTableNV;
    glad_debug_vkCmdSetCoverageReductionModeNV = glad_debug_impl_vkCmdSetCoverageReductionModeNV;
    glad_debug_vkCmdSetCoverageToColorEnableNV = glad_debug_impl_vkCmdSetCoverageToColorEnableNV;
    glad_debug_vkCmdSetCoverageToColorLocationNV = glad_debug_impl_vkCmdSetCoverageToColorLocationNV;
    glad_debug_vkCmdSetCullMode = glad_debug_impl_vkCmdSetCullMode;
    glad_debug_vkCmdSetCullModeEXT = glad_debug_impl_vkCmdSetCullModeEXT;
    glad_debug_vkCmdSetDepthBias = glad_debug_impl_vkCmdSetDepthBias;
    glad_debug_vkCmdSetDepthBias2EXT = glad_debug_impl_vkCmdSetDepthBias2EXT;
    glad_debug_vkCmdSetDepthBiasEnable = glad_debug_impl_vkCmdSetDepthBiasEnable;
    glad_debug_vkCmdSetDepthBiasEnableEXT = glad_debug_impl_vkCmdSetDepthBiasEnableEXT;
    glad_debug_vkCmdSetDepthBounds = glad_debug_impl_vkCmdSetDepthBounds;
    glad_debug_vkCmdSetDepthBoundsTestEnable = glad_debug_impl_vkCmdSetDepthBoundsTestEnable;
    glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT;
    glad_debug_vkCmdSetDepthClampEnableEXT = glad_debug_impl_vkCmdSetDepthClampEnableEXT;
    glad_debug_vkCmdSetDepthClipEnableEXT = glad_debug_impl_vkCmdSetDepthClipEnableEXT;
    glad_debug_vkCmdSetDepthClipNegativeOneToOneEXT = glad_debug_impl_vkCmdSetDepthClipNegativeOneToOneEXT;
    glad_debug_vkCmdSetDepthCompareOp = glad_debug_impl_vkCmdSetDepthCompareOp;
    glad_debug_vkCmdSetDepthCompareOpEXT = glad_debug_impl_vkCmdSetDepthCompareOpEXT;
    glad_debug_vkCmdSetDepthTestEnable = glad_debug_impl_vkCmdSetDepthTestEnable;
    glad_debug_vkCmdSetDepthTestEnableEXT = glad_debug_impl_vkCmdSetDepthTestEnableEXT;
    glad_debug_vkCmdSetDepthWriteEnable = glad_debug_impl_vkCmdSetDepthWriteEnable;
    glad_debug_vkCmdSetDepthWriteEnableEXT = glad_debug_impl_vkCmdSetDepthWriteEnableEXT;
    glad_debug_vkCmdSetDescriptorBufferOffsets2EXT = glad_debug_impl_vkCmdSetDescriptorBufferOffsets2EXT;
    glad_debug_vkCmdSetDescriptorBufferOffsetsEXT = glad_debug_impl_vkCmdSetDescriptorBufferOffsetsEXT;
    glad_debug_vkCmdSetDeviceMask = glad_debug_impl_vkCmdSetDeviceMask;
    glad_debug_vkCmdSetDeviceMaskKHR = glad_debug_impl_vkCmdSetDeviceMaskKHR;
    glad_debug_vkCmdSetDiscardRectangleEXT = glad_debug_impl_vkCmdSetDiscardRectangleEXT;
    glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT;
    glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_debug_impl_vkCmdSetDiscardRectangleModeEXT;
    glad_debug_vkCmdSetEvent = glad_debug_impl_vkCmdSetEvent;
    glad_debug_vkCmdSetEvent2 = glad_debug_impl_vkCmdSetEvent2;
    glad_debug_vkCmdSetEvent2KHR = glad_debug_impl_vkCmdSetEvent2KHR;
    glad_debug_vkCmdSetExclusiveScissorEnableNV = glad_debug_impl_vkCmdSetExclusiveScissorEnableNV;
    glad_debug_vkCmdSetExclusiveScissorNV = glad_debug_impl_vkCmdSetExclusiveScissorNV;
    glad_debug_vkCmdSetExtraPrimitiveOverestimationSizeEXT = glad_debug_impl_vkCmdSetExtraPrimitiveOverestimationSizeEXT;
    glad_debug_vkCmdSetFragmentShadingRateEnumNV = glad_debug_impl_vkCmdSetFragmentShadingRateEnumNV;
    glad_debug_vkCmdSetFragmentShadingRateKHR = glad_debug_impl_vkCmdSetFragmentShadingRateKHR;
    glad_debug_vkCmdSetFrontFace = glad_debug_impl_vkCmdSetFrontFace;
    glad_debug_vkCmdSetFrontFaceEXT = glad_debug_impl_vkCmdSetFrontFaceEXT;
    glad_debug_vkCmdSetLineRasterizationModeEXT = glad_debug_impl_vkCmdSetLineRasterizationModeEXT;
    glad_debug_vkCmdSetLineStippleEXT = glad_debug_impl_vkCmdSetLineStippleEXT;
    glad_debug_vkCmdSetLineStippleEnableEXT = glad_debug_impl_vkCmdSetLineStippleEnableEXT;
    glad_debug_vkCmdSetLineStippleKHR = glad_debug_impl_vkCmdSetLineStippleKHR;
    glad_debug_vkCmdSetLineWidth = glad_debug_impl_vkCmdSetLineWidth;
    glad_debug_vkCmdSetLogicOpEXT = glad_debug_impl_vkCmdSetLogicOpEXT;
    glad_debug_vkCmdSetLogicOpEnableEXT = glad_debug_impl_vkCmdSetLogicOpEnableEXT;
    glad_debug_vkCmdSetPatchControlPointsEXT = glad_debug_impl_vkCmdSetPatchControlPointsEXT;
    glad_debug_vkCmdSetPerformanceMarkerINTEL = glad_debug_impl_vkCmdSetPerformanceMarkerINTEL;
    glad_debug_vkCmdSetPerformanceOverrideINTEL = glad_debug_impl_vkCmdSetPerformanceOverrideINTEL;
    glad_debug_vkCmdSetPerformanceStreamMarkerINTEL = glad_debug_impl_vkCmdSetPerformanceStreamMarkerINTEL;
    glad_debug_vkCmdSetPolygonModeEXT = glad_debug_impl_vkCmdSetPolygonModeEXT;
    glad_debug_vkCmdSetPrimitiveRestartEnable = glad_debug_impl_vkCmdSetPrimitiveRestartEnable;
    glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT;
    glad_debug_vkCmdSetPrimitiveTopology = glad_debug_impl_vkCmdSetPrimitiveTopology;
    glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_debug_impl_vkCmdSetPrimitiveTopologyEXT;
    glad_debug_vkCmdSetProvokingVertexModeEXT = glad_debug_impl_vkCmdSetProvokingVertexModeEXT;
    glad_debug_vkCmdSetRasterizationSamplesEXT = glad_debug_impl_vkCmdSetRasterizationSamplesEXT;
    glad_debug_vkCmdSetRasterizationStreamEXT = glad_debug_impl_vkCmdSetRasterizationStreamEXT;
    glad_debug_vkCmdSetRasterizerDiscardEnable = glad_debug_impl_vkCmdSetRasterizerDiscardEnable;
    glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT;
    glad_debug_vkCmdSetRayTracingPipelineStackSizeKHR = glad_debug_impl_vkCmdSetRayTracingPipelineStackSizeKHR;
    glad_debug_vkCmdSetRenderingAttachmentLocationsKHR = glad_debug_impl_vkCmdSetRenderingAttachmentLocationsKHR;
    glad_debug_vkCmdSetRenderingInputAttachmentIndicesKHR = glad_debug_impl_vkCmdSetRenderingInputAttachmentIndicesKHR;
    glad_debug_vkCmdSetRepresentativeFragmentTestEnableNV = glad_debug_impl_vkCmdSetRepresentativeFragmentTestEnableNV;
    glad_debug_vkCmdSetSampleLocationsEXT = glad_debug_impl_vkCmdSetSampleLocationsEXT;
    glad_debug_vkCmdSetSampleLocationsEnableEXT = glad_debug_impl_vkCmdSetSampleLocationsEnableEXT;
    glad_debug_vkCmdSetSampleMaskEXT = glad_debug_impl_vkCmdSetSampleMaskEXT;
    glad_debug_vkCmdSetScissor = glad_debug_impl_vkCmdSetScissor;
    glad_debug_vkCmdSetScissorWithCount = glad_debug_impl_vkCmdSetScissorWithCount;
    glad_debug_vkCmdSetScissorWithCountEXT = glad_debug_impl_vkCmdSetScissorWithCountEXT;
    glad_debug_vkCmdSetShadingRateImageEnableNV = glad_debug_impl_vkCmdSetShadingRateImageEnableNV;
    glad_debug_vkCmdSetStencilCompareMask = glad_debug_impl_vkCmdSetStencilCompareMask;
    glad_debug_vkCmdSetStencilOp = glad_debug_impl_vkCmdSetStencilOp;
    glad_debug_vkCmdSetStencilOpEXT = glad_debug_impl_vkCmdSetStencilOpEXT;
    glad_debug_vkCmdSetStencilReference = glad_debug_impl_vkCmdSetStencilReference;
    glad_debug_vkCmdSetStencilTestEnable = glad_debug_impl_vkCmdSetStencilTestEnable;
    glad_debug_vkCmdSetStencilTestEnableEXT = glad_debug_impl_vkCmdSetStencilTestEnableEXT;
    glad_debug_vkCmdSetStencilWriteMask = glad_debug_impl_vkCmdSetStencilWriteMask;
    glad_debug_vkCmdSetTessellationDomainOriginEXT = glad_debug_impl_vkCmdSetTessellationDomainOriginEXT;
    glad_debug_vkCmdSetVertexInputEXT = glad_debug_impl_vkCmdSetVertexInputEXT;
    glad_debug_vkCmdSetViewport = glad_debug_impl_vkCmdSetViewport;
    glad_debug_vkCmdSetViewportShadingRatePaletteNV = glad_debug_impl_vkCmdSetViewportShadingRatePaletteNV;
    glad_debug_vkCmdSetViewportSwizzleNV = glad_debug_impl_vkCmdSetViewportSwizzleNV;
    glad_debug_vkCmdSetViewportWScalingEnableNV = glad_debug_impl_vkCmdSetViewportWScalingEnableNV;
    glad_debug_vkCmdSetViewportWScalingNV = glad_debug_impl_vkCmdSetViewportWScalingNV;
    glad_debug_vkCmdSetViewportWithCount = glad_debug_impl_vkCmdSetViewportWithCount;
    glad_debug_vkCmdSetViewportWithCountEXT = glad_debug_impl_vkCmdSetViewportWithCountEXT;
    glad_debug_vkCmdSubpassShadingHUAWEI = glad_debug_impl_vkCmdSubpassShadingHUAWEI;
    glad_debug_vkCmdTraceRaysIndirect2KHR = glad_debug_impl_vkCmdTraceRaysIndirect2KHR;
    glad_debug_vkCmdTraceRaysIndirectKHR = glad_debug_impl_vkCmdTraceRaysIndirectKHR;
    glad_debug_vkCmdTraceRaysKHR = glad_debug_impl_vkCmdTraceRaysKHR;
    glad_debug_vkCmdTraceRaysNV = glad_debug_impl_vkCmdTraceRaysNV;
    glad_debug_vkCmdUpdateBuffer = glad_debug_impl_vkCmdUpdateBuffer;
    glad_debug_vkCmdUpdatePipelineIndirectBufferNV = glad_debug_impl_vkCmdUpdatePipelineIndirectBufferNV;
    glad_debug_vkCmdWaitEvents = glad_debug_impl_vkCmdWaitEvents;
    glad_debug_vkCmdWaitEvents2 = glad_debug_impl_vkCmdWaitEvents2;
    glad_debug_vkCmdWaitEvents2KHR = glad_debug_impl_vkCmdWaitEvents2KHR;
    glad_debug_vkCmdWriteAccelerationStructuresPropertiesKHR = glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesKHR;
    glad_debug_vkCmdWriteAccelerationStructuresPropertiesNV = glad_debug_impl_vkCmdWriteAccelerationStructuresPropertiesNV;
    glad_debug_vkCmdWriteBufferMarker2AMD = glad_debug_impl_vkCmdWriteBufferMarker2AMD;
    glad_debug_vkCmdWriteBufferMarkerAMD = glad_debug_impl_vkCmdWriteBufferMarkerAMD;
    glad_debug_vkCmdWriteMicromapsPropertiesEXT = glad_debug_impl_vkCmdWriteMicromapsPropertiesEXT;
    glad_debug_vkCmdWriteTimestamp = glad_debug_impl_vkCmdWriteTimestamp;
    glad_debug_vkCmdWriteTimestamp2 = glad_debug_impl_vkCmdWriteTimestamp2;
    glad_debug_vkCmdWriteTimestamp2KHR = glad_debug_impl_vkCmdWriteTimestamp2KHR;
    glad_debug_vkCompileDeferredNV = glad_debug_impl_vkCompileDeferredNV;
    glad_debug_vkCopyAccelerationStructureKHR = glad_debug_impl_vkCopyAccelerationStructureKHR;
    glad_debug_vkCopyAccelerationStructureToMemoryKHR = glad_debug_impl_vkCopyAccelerationStructureToMemoryKHR;
    glad_debug_vkCopyImageToImageEXT = glad_debug_impl_vkCopyImageToImageEXT;
    glad_debug_vkCopyImageToMemoryEXT = glad_debug_impl_vkCopyImageToMemoryEXT;
    glad_debug_vkCopyMemoryToAccelerationStructureKHR = glad_debug_impl_vkCopyMemoryToAccelerationStructureKHR;
    glad_debug_vkCopyMemoryToImageEXT = glad_debug_impl_vkCopyMemoryToImageEXT;
    glad_debug_vkCopyMemoryToMicromapEXT = glad_debug_impl_vkCopyMemoryToMicromapEXT;
    glad_debug_vkCopyMicromapEXT = glad_debug_impl_vkCopyMicromapEXT;
    glad_debug_vkCopyMicromapToMemoryEXT = glad_debug_impl_vkCopyMicromapToMemoryEXT;
    glad_debug_vkCreateAccelerationStructureKHR = glad_debug_impl_vkCreateAccelerationStructureKHR;
    glad_debug_vkCreateAccelerationStructureNV = glad_debug_impl_vkCreateAccelerationStructureNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkCreateAndroidSurfaceKHR = glad_debug_impl_vkCreateAndroidSurfaceKHR;

#endif
    glad_debug_vkCreateBuffer = glad_debug_impl_vkCreateBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkCreateBufferCollectionFUCHSIA = glad_debug_impl_vkCreateBufferCollectionFUCHSIA;

#endif
    glad_debug_vkCreateBufferView = glad_debug_impl_vkCreateBufferView;
    glad_debug_vkCreateCommandPool = glad_debug_impl_vkCreateCommandPool;
    glad_debug_vkCreateComputePipelines = glad_debug_impl_vkCreateComputePipelines;
    glad_debug_vkCreateCuFunctionNVX = glad_debug_impl_vkCreateCuFunctionNVX;
    glad_debug_vkCreateCuModuleNVX = glad_debug_impl_vkCreateCuModuleNVX;
    glad_debug_vkCreateCudaFunctionNV = glad_debug_impl_vkCreateCudaFunctionNV;
    glad_debug_vkCreateCudaModuleNV = glad_debug_impl_vkCreateCudaModuleNV;
    glad_debug_vkCreateDebugReportCallbackEXT = glad_debug_impl_vkCreateDebugReportCallbackEXT;
    glad_debug_vkCreateDebugUtilsMessengerEXT = glad_debug_impl_vkCreateDebugUtilsMessengerEXT;
    glad_debug_vkCreateDeferredOperationKHR = glad_debug_impl_vkCreateDeferredOperationKHR;
    glad_debug_vkCreateDescriptorPool = glad_debug_impl_vkCreateDescriptorPool;
    glad_debug_vkCreateDescriptorSetLayout = glad_debug_impl_vkCreateDescriptorSetLayout;
    glad_debug_vkCreateDescriptorUpdateTemplate = glad_debug_impl_vkCreateDescriptorUpdateTemplate;
    glad_debug_vkCreateDescriptorUpdateTemplateKHR = glad_debug_impl_vkCreateDescriptorUpdateTemplateKHR;
    glad_debug_vkCreateDevice = glad_debug_impl_vkCreateDevice;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    glad_debug_vkCreateDirectFBSurfaceEXT = glad_debug_impl_vkCreateDirectFBSurfaceEXT;

#endif
    glad_debug_vkCreateDisplayModeKHR = glad_debug_impl_vkCreateDisplayModeKHR;
    glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR;
    glad_debug_vkCreateEvent = glad_debug_impl_vkCreateEvent;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCreateExecutionGraphPipelinesAMDX = glad_debug_impl_vkCreateExecutionGraphPipelinesAMDX;

#endif
    glad_debug_vkCreateFence = glad_debug_impl_vkCreateFence;
    glad_debug_vkCreateFramebuffer = glad_debug_impl_vkCreateFramebuffer;
    glad_debug_vkCreateGraphicsPipelines = glad_debug_impl_vkCreateGraphicsPipelines;
    glad_debug_vkCreateHeadlessSurfaceEXT = glad_debug_impl_vkCreateHeadlessSurfaceEXT;
#if defined(VK_USE_PLATFORM_IOS_MVK)
    glad_debug_vkCreateIOSSurfaceMVK = glad_debug_impl_vkCreateIOSSurfaceMVK;

#endif
    glad_debug_vkCreateImage = glad_debug_impl_vkCreateImage;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkCreateImagePipeSurfaceFUCHSIA = glad_debug_impl_vkCreateImagePipeSurfaceFUCHSIA;

#endif
    glad_debug_vkCreateImageView = glad_debug_impl_vkCreateImageView;
    glad_debug_vkCreateIndirectCommandsLayoutNV = glad_debug_impl_vkCreateIndirectCommandsLayoutNV;
    glad_debug_vkCreateInstance = glad_debug_impl_vkCreateInstance;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    glad_debug_vkCreateMacOSSurfaceMVK = glad_debug_impl_vkCreateMacOSSurfaceMVK;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_debug_vkCreateMetalSurfaceEXT = glad_debug_impl_vkCreateMetalSurfaceEXT;

#endif
    glad_debug_vkCreateMicromapEXT = glad_debug_impl_vkCreateMicromapEXT;
    glad_debug_vkCreateOpticalFlowSessionNV = glad_debug_impl_vkCreateOpticalFlowSessionNV;
    glad_debug_vkCreatePipelineCache = glad_debug_impl_vkCreatePipelineCache;
    glad_debug_vkCreatePipelineLayout = glad_debug_impl_vkCreatePipelineLayout;
    glad_debug_vkCreatePrivateDataSlot = glad_debug_impl_vkCreatePrivateDataSlot;
    glad_debug_vkCreatePrivateDataSlotEXT = glad_debug_impl_vkCreatePrivateDataSlotEXT;
    glad_debug_vkCreateQueryPool = glad_debug_impl_vkCreateQueryPool;
    glad_debug_vkCreateRayTracingPipelinesKHR = glad_debug_impl_vkCreateRayTracingPipelinesKHR;
    glad_debug_vkCreateRayTracingPipelinesNV = glad_debug_impl_vkCreateRayTracingPipelinesNV;
    glad_debug_vkCreateRenderPass = glad_debug_impl_vkCreateRenderPass;
    glad_debug_vkCreateRenderPass2 = glad_debug_impl_vkCreateRenderPass2;
    glad_debug_vkCreateRenderPass2KHR = glad_debug_impl_vkCreateRenderPass2KHR;
    glad_debug_vkCreateSampler = glad_debug_impl_vkCreateSampler;
    glad_debug_vkCreateSamplerYcbcrConversion = glad_debug_impl_vkCreateSamplerYcbcrConversion;
    glad_debug_vkCreateSamplerYcbcrConversionKHR = glad_debug_impl_vkCreateSamplerYcbcrConversionKHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkCreateScreenSurfaceQNX = glad_debug_impl_vkCreateScreenSurfaceQNX;

#endif
    glad_debug_vkCreateSemaphore = glad_debug_impl_vkCreateSemaphore;
    glad_debug_vkCreateShaderModule = glad_debug_impl_vkCreateShaderModule;
    glad_debug_vkCreateShadersEXT = glad_debug_impl_vkCreateShadersEXT;
    glad_debug_vkCreateSharedSwapchainsKHR = glad_debug_impl_vkCreateSharedSwapchainsKHR;
#if defined(VK_USE_PLATFORM_GGP)
    glad_debug_vkCreateStreamDescriptorSurfaceGGP = glad_debug_impl_vkCreateStreamDescriptorSurfaceGGP;

#endif
    glad_debug_vkCreateSwapchainKHR = glad_debug_impl_vkCreateSwapchainKHR;
    glad_debug_vkCreateValidationCacheEXT = glad_debug_impl_vkCreateValidationCacheEXT;
#if defined(VK_USE_PLATFORM_VI_NN)
    glad_debug_vkCreateViSurfaceNN = glad_debug_impl_vkCreateViSurfaceNN;

#endif
    glad_debug_vkCreateVideoSessionKHR = glad_debug_impl_vkCreateVideoSessionKHR;
    glad_debug_vkCreateVideoSessionParametersKHR = glad_debug_impl_vkCreateVideoSessionParametersKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_debug_vkCreateWaylandSurfaceKHR = glad_debug_impl_vkCreateWaylandSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkCreateWin32SurfaceKHR = glad_debug_impl_vkCreateWin32SurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_debug_vkCreateXcbSurfaceKHR = glad_debug_impl_vkCreateXcbSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_debug_vkCreateXlibSurfaceKHR = glad_debug_impl_vkCreateXlibSurfaceKHR;

#endif
    glad_debug_vkDebugMarkerSetObjectNameEXT = glad_debug_impl_vkDebugMarkerSetObjectNameEXT;
    glad_debug_vkDebugMarkerSetObjectTagEXT = glad_debug_impl_vkDebugMarkerSetObjectTagEXT;
    glad_debug_vkDebugReportMessageEXT = glad_debug_impl_vkDebugReportMessageEXT;
    glad_debug_vkDeferredOperationJoinKHR = glad_debug_impl_vkDeferredOperationJoinKHR;
    glad_debug_vkDestroyAccelerationStructureKHR = glad_debug_impl_vkDestroyAccelerationStructureKHR;
    glad_debug_vkDestroyAccelerationStructureNV = glad_debug_impl_vkDestroyAccelerationStructureNV;
    glad_debug_vkDestroyBuffer = glad_debug_impl_vkDestroyBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkDestroyBufferCollectionFUCHSIA = glad_debug_impl_vkDestroyBufferCollectionFUCHSIA;

#endif
    glad_debug_vkDestroyBufferView = glad_debug_impl_vkDestroyBufferView;
    glad_debug_vkDestroyCommandPool = glad_debug_impl_vkDestroyCommandPool;
    glad_debug_vkDestroyCuFunctionNVX = glad_debug_impl_vkDestroyCuFunctionNVX;
    glad_debug_vkDestroyCuModuleNVX = glad_debug_impl_vkDestroyCuModuleNVX;
    glad_debug_vkDestroyCudaFunctionNV = glad_debug_impl_vkDestroyCudaFunctionNV;
    glad_debug_vkDestroyCudaModuleNV = glad_debug_impl_vkDestroyCudaModuleNV;
    glad_debug_vkDestroyDebugReportCallbackEXT = glad_debug_impl_vkDestroyDebugReportCallbackEXT;
    glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_debug_impl_vkDestroyDebugUtilsMessengerEXT;
    glad_debug_vkDestroyDeferredOperationKHR = glad_debug_impl_vkDestroyDeferredOperationKHR;
    glad_debug_vkDestroyDescriptorPool = glad_debug_impl_vkDestroyDescriptorPool;
    glad_debug_vkDestroyDescriptorSetLayout = glad_debug_impl_vkDestroyDescriptorSetLayout;
    glad_debug_vkDestroyDescriptorUpdateTemplate = glad_debug_impl_vkDestroyDescriptorUpdateTemplate;
    glad_debug_vkDestroyDescriptorUpdateTemplateKHR = glad_debug_impl_vkDestroyDescriptorUpdateTemplateKHR;
    glad_debug_vkDestroyDevice = glad_debug_impl_vkDestroyDevice;
    glad_debug_vkDestroyEvent = glad_debug_impl_vkDestroyEvent;
    glad_debug_vkDestroyFence = glad_debug_impl_vkDestroyFence;
    glad_debug_vkDestroyFramebuffer = glad_debug_impl_vkDestroyFramebuffer;
    glad_debug_vkDestroyImage = glad_debug_impl_vkDestroyImage;
    glad_debug_vkDestroyImageView = glad_debug_impl_vkDestroyImageView;
    glad_debug_vkDestroyIndirectCommandsLayoutNV = glad_debug_impl_vkDestroyIndirectCommandsLayoutNV;
    glad_debug_vkDestroyInstance = glad_debug_impl_vkDestroyInstance;
    glad_debug_vkDestroyMicromapEXT = glad_debug_impl_vkDestroyMicromapEXT;
    glad_debug_vkDestroyOpticalFlowSessionNV = glad_debug_impl_vkDestroyOpticalFlowSessionNV;
    glad_debug_vkDestroyPipeline = glad_debug_impl_vkDestroyPipeline;
    glad_debug_vkDestroyPipelineCache = glad_debug_impl_vkDestroyPipelineCache;
    glad_debug_vkDestroyPipelineLayout = glad_debug_impl_vkDestroyPipelineLayout;
    glad_debug_vkDestroyPrivateDataSlot = glad_debug_impl_vkDestroyPrivateDataSlot;
    glad_debug_vkDestroyPrivateDataSlotEXT = glad_debug_impl_vkDestroyPrivateDataSlotEXT;
    glad_debug_vkDestroyQueryPool = glad_debug_impl_vkDestroyQueryPool;
    glad_debug_vkDestroyRenderPass = glad_debug_impl_vkDestroyRenderPass;
    glad_debug_vkDestroySampler = glad_debug_impl_vkDestroySampler;
    glad_debug_vkDestroySamplerYcbcrConversion = glad_debug_impl_vkDestroySamplerYcbcrConversion;
    glad_debug_vkDestroySamplerYcbcrConversionKHR = glad_debug_impl_vkDestroySamplerYcbcrConversionKHR;
    glad_debug_vkDestroySemaphore = glad_debug_impl_vkDestroySemaphore;
    glad_debug_vkDestroyShaderEXT = glad_debug_impl_vkDestroyShaderEXT;
    glad_debug_vkDestroyShaderModule = glad_debug_impl_vkDestroyShaderModule;
    glad_debug_vkDestroySurfaceKHR = glad_debug_impl_vkDestroySurfaceKHR;
    glad_debug_vkDestroySwapchainKHR = glad_debug_impl_vkDestroySwapchainKHR;
    glad_debug_vkDestroyValidationCacheEXT = glad_debug_impl_vkDestroyValidationCacheEXT;
    glad_debug_vkDestroyVideoSessionKHR = glad_debug_impl_vkDestroyVideoSessionKHR;
    glad_debug_vkDestroyVideoSessionParametersKHR = glad_debug_impl_vkDestroyVideoSessionParametersKHR;
    glad_debug_vkDeviceWaitIdle = glad_debug_impl_vkDeviceWaitIdle;
    glad_debug_vkDisplayPowerControlEXT = glad_debug_impl_vkDisplayPowerControlEXT;
    glad_debug_vkEndCommandBuffer = glad_debug_impl_vkEndCommandBuffer;
    glad_debug_vkEnumerateDeviceExtensionProperties = glad_debug_impl_vkEnumerateDeviceExtensionProperties;
    glad_debug_vkEnumerateDeviceLayerProperties = glad_debug_impl_vkEnumerateDeviceLayerProperties;
    glad_debug_vkEnumerateInstanceExtensionProperties = glad_debug_impl_vkEnumerateInstanceExtensionProperties;
    glad_debug_vkEnumerateInstanceLayerProperties = glad_debug_impl_vkEnumerateInstanceLayerProperties;
    glad_debug_vkEnumerateInstanceVersion = glad_debug_impl_vkEnumerateInstanceVersion;
    glad_debug_vkEnumeratePhysicalDeviceGroups = glad_debug_impl_vkEnumeratePhysicalDeviceGroups;
    glad_debug_vkEnumeratePhysicalDeviceGroupsKHR = glad_debug_impl_vkEnumeratePhysicalDeviceGroupsKHR;
    glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    glad_debug_vkEnumeratePhysicalDevices = glad_debug_impl_vkEnumeratePhysicalDevices;
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_debug_vkExportMetalObjectsEXT = glad_debug_impl_vkExportMetalObjectsEXT;

#endif
    glad_debug_vkFlushMappedMemoryRanges = glad_debug_impl_vkFlushMappedMemoryRanges;
    glad_debug_vkFreeCommandBuffers = glad_debug_impl_vkFreeCommandBuffers;
    glad_debug_vkFreeDescriptorSets = glad_debug_impl_vkFreeDescriptorSets;
    glad_debug_vkFreeMemory = glad_debug_impl_vkFreeMemory;
    glad_debug_vkGetAccelerationStructureBuildSizesKHR = glad_debug_impl_vkGetAccelerationStructureBuildSizesKHR;
    glad_debug_vkGetAccelerationStructureDeviceAddressKHR = glad_debug_impl_vkGetAccelerationStructureDeviceAddressKHR;
    glad_debug_vkGetAccelerationStructureHandleNV = glad_debug_impl_vkGetAccelerationStructureHandleNV;
    glad_debug_vkGetAccelerationStructureMemoryRequirementsNV = glad_debug_impl_vkGetAccelerationStructureMemoryRequirementsNV;
    glad_debug_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkGetAndroidHardwareBufferPropertiesANDROID = glad_debug_impl_vkGetAndroidHardwareBufferPropertiesANDROID;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetBufferCollectionPropertiesFUCHSIA = glad_debug_impl_vkGetBufferCollectionPropertiesFUCHSIA;

#endif
    glad_debug_vkGetBufferDeviceAddress = glad_debug_impl_vkGetBufferDeviceAddress;
    glad_debug_vkGetBufferDeviceAddressEXT = glad_debug_impl_vkGetBufferDeviceAddressEXT;
    glad_debug_vkGetBufferDeviceAddressKHR = glad_debug_impl_vkGetBufferDeviceAddressKHR;
    glad_debug_vkGetBufferMemoryRequirements = glad_debug_impl_vkGetBufferMemoryRequirements;
    glad_debug_vkGetBufferMemoryRequirements2 = glad_debug_impl_vkGetBufferMemoryRequirements2;
    glad_debug_vkGetBufferMemoryRequirements2KHR = glad_debug_impl_vkGetBufferMemoryRequirements2KHR;
    glad_debug_vkGetBufferOpaqueCaptureAddress = glad_debug_impl_vkGetBufferOpaqueCaptureAddress;
    glad_debug_vkGetBufferOpaqueCaptureAddressKHR = glad_debug_impl_vkGetBufferOpaqueCaptureAddressKHR;
    glad_debug_vkGetBufferOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetBufferOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetCalibratedTimestampsEXT = glad_debug_impl_vkGetCalibratedTimestampsEXT;
    glad_debug_vkGetCalibratedTimestampsKHR = glad_debug_impl_vkGetCalibratedTimestampsKHR;
    glad_debug_vkGetCudaModuleCacheNV = glad_debug_impl_vkGetCudaModuleCacheNV;
    glad_debug_vkGetDeferredOperationMaxConcurrencyKHR = glad_debug_impl_vkGetDeferredOperationMaxConcurrencyKHR;
    glad_debug_vkGetDeferredOperationResultKHR = glad_debug_impl_vkGetDeferredOperationResultKHR;
    glad_debug_vkGetDescriptorEXT = glad_debug_impl_vkGetDescriptorEXT;
    glad_debug_vkGetDescriptorSetHostMappingVALVE = glad_debug_impl_vkGetDescriptorSetHostMappingVALVE;
    glad_debug_vkGetDescriptorSetLayoutBindingOffsetEXT = glad_debug_impl_vkGetDescriptorSetLayoutBindingOffsetEXT;
    glad_debug_vkGetDescriptorSetLayoutHostMappingInfoVALVE = glad_debug_impl_vkGetDescriptorSetLayoutHostMappingInfoVALVE;
    glad_debug_vkGetDescriptorSetLayoutSizeEXT = glad_debug_impl_vkGetDescriptorSetLayoutSizeEXT;
    glad_debug_vkGetDescriptorSetLayoutSupport = glad_debug_impl_vkGetDescriptorSetLayoutSupport;
    glad_debug_vkGetDescriptorSetLayoutSupportKHR = glad_debug_impl_vkGetDescriptorSetLayoutSupportKHR;
    glad_debug_vkGetDeviceAccelerationStructureCompatibilityKHR = glad_debug_impl_vkGetDeviceAccelerationStructureCompatibilityKHR;
    glad_debug_vkGetDeviceBufferMemoryRequirements = glad_debug_impl_vkGetDeviceBufferMemoryRequirements;
    glad_debug_vkGetDeviceBufferMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceBufferMemoryRequirementsKHR;
    glad_debug_vkGetDeviceFaultInfoEXT = glad_debug_impl_vkGetDeviceFaultInfoEXT;
    glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures;
    glad_debug_vkGetDeviceGroupPeerMemoryFeaturesKHR = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeaturesKHR;
    glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetDeviceGroupSurfacePresentModes2EXT = glad_debug_impl_vkGetDeviceGroupSurfacePresentModes2EXT;

#endif
    glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR;
    glad_debug_vkGetDeviceImageMemoryRequirements = glad_debug_impl_vkGetDeviceImageMemoryRequirements;
    glad_debug_vkGetDeviceImageMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceImageMemoryRequirementsKHR;
    glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements;
    glad_debug_vkGetDeviceImageSparseMemoryRequirementsKHR = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirementsKHR;
    glad_debug_vkGetDeviceImageSubresourceLayoutKHR = glad_debug_impl_vkGetDeviceImageSubresourceLayoutKHR;
    glad_debug_vkGetDeviceMemoryCommitment = glad_debug_impl_vkGetDeviceMemoryCommitment;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddressKHR = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
    glad_debug_vkGetDeviceMicromapCompatibilityEXT = glad_debug_impl_vkGetDeviceMicromapCompatibilityEXT;
    glad_debug_vkGetDeviceProcAddr = glad_debug_impl_vkGetDeviceProcAddr;
    glad_debug_vkGetDeviceQueue = glad_debug_impl_vkGetDeviceQueue;
    glad_debug_vkGetDeviceQueue2 = glad_debug_impl_vkGetDeviceQueue2;
    glad_debug_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = glad_debug_impl_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
    glad_debug_vkGetDisplayModeProperties2KHR = glad_debug_impl_vkGetDisplayModeProperties2KHR;
    glad_debug_vkGetDisplayModePropertiesKHR = glad_debug_impl_vkGetDisplayModePropertiesKHR;
    glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR;
    glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR;
    glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR;
    glad_debug_vkGetDrmDisplayEXT = glad_debug_impl_vkGetDrmDisplayEXT;
    glad_debug_vkGetDynamicRenderingTilePropertiesQCOM = glad_debug_impl_vkGetDynamicRenderingTilePropertiesQCOM;
    glad_debug_vkGetEncodedVideoSessionParametersKHR = glad_debug_impl_vkGetEncodedVideoSessionParametersKHR;
    glad_debug_vkGetEventStatus = glad_debug_impl_vkGetEventStatus;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkGetExecutionGraphPipelineNodeIndexAMDX = glad_debug_impl_vkGetExecutionGraphPipelineNodeIndexAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkGetExecutionGraphPipelineScratchSizeAMDX = glad_debug_impl_vkGetExecutionGraphPipelineScratchSizeAMDX;

#endif
    glad_debug_vkGetFenceFdKHR = glad_debug_impl_vkGetFenceFdKHR;
    glad_debug_vkGetFenceStatus = glad_debug_impl_vkGetFenceStatus;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetFenceWin32HandleKHR = glad_debug_impl_vkGetFenceWin32HandleKHR;

#endif
    glad_debug_vkGetFramebufferTilePropertiesQCOM = glad_debug_impl_vkGetFramebufferTilePropertiesQCOM;
    glad_debug_vkGetGeneratedCommandsMemoryRequirementsNV = glad_debug_impl_vkGetGeneratedCommandsMemoryRequirementsNV;
    glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT;
    glad_debug_vkGetImageMemoryRequirements = glad_debug_impl_vkGetImageMemoryRequirements;
    glad_debug_vkGetImageMemoryRequirements2 = glad_debug_impl_vkGetImageMemoryRequirements2;
    glad_debug_vkGetImageMemoryRequirements2KHR = glad_debug_impl_vkGetImageMemoryRequirements2KHR;
    glad_debug_vkGetImageOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetImageOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetImageSparseMemoryRequirements = glad_debug_impl_vkGetImageSparseMemoryRequirements;
    glad_debug_vkGetImageSparseMemoryRequirements2 = glad_debug_impl_vkGetImageSparseMemoryRequirements2;
    glad_debug_vkGetImageSparseMemoryRequirements2KHR = glad_debug_impl_vkGetImageSparseMemoryRequirements2KHR;
    glad_debug_vkGetImageSubresourceLayout = glad_debug_impl_vkGetImageSubresourceLayout;
    glad_debug_vkGetImageSubresourceLayout2EXT = glad_debug_impl_vkGetImageSubresourceLayout2EXT;
    glad_debug_vkGetImageSubresourceLayout2KHR = glad_debug_impl_vkGetImageSubresourceLayout2KHR;
    glad_debug_vkGetImageViewAddressNVX = glad_debug_impl_vkGetImageViewAddressNVX;
    glad_debug_vkGetImageViewHandleNVX = glad_debug_impl_vkGetImageViewHandleNVX;
    glad_debug_vkGetImageViewOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetImageViewOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetInstanceProcAddr = glad_debug_impl_vkGetInstanceProcAddr;
    glad_debug_vkGetLatencyTimingsNV = glad_debug_impl_vkGetLatencyTimingsNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkGetMemoryAndroidHardwareBufferANDROID = glad_debug_impl_vkGetMemoryAndroidHardwareBufferANDROID;

#endif
    glad_debug_vkGetMemoryFdKHR = glad_debug_impl_vkGetMemoryFdKHR;
    glad_debug_vkGetMemoryFdPropertiesKHR = glad_debug_impl_vkGetMemoryFdPropertiesKHR;
    glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT;
    glad_debug_vkGetMemoryRemoteAddressNV = glad_debug_impl_vkGetMemoryRemoteAddressNV;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandleKHR = glad_debug_impl_vkGetMemoryWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandleNV = glad_debug_impl_vkGetMemoryWin32HandleNV;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandlePropertiesKHR = glad_debug_impl_vkGetMemoryWin32HandlePropertiesKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetMemoryZirconHandleFUCHSIA = glad_debug_impl_vkGetMemoryZirconHandleFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetMemoryZirconHandlePropertiesFUCHSIA = glad_debug_impl_vkGetMemoryZirconHandlePropertiesFUCHSIA;

#endif
    glad_debug_vkGetMicromapBuildSizesEXT = glad_debug_impl_vkGetMicromapBuildSizesEXT;
    glad_debug_vkGetPastPresentationTimingGOOGLE = glad_debug_impl_vkGetPastPresentationTimingGOOGLE;
    glad_debug_vkGetPerformanceParameterINTEL = glad_debug_impl_vkGetPerformanceParameterINTEL;
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
    glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    glad_debug_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = glad_debug_impl_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;

#endif
    glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties;
    glad_debug_vkGetPhysicalDeviceExternalBufferPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties;
    glad_debug_vkGetPhysicalDeviceExternalFencePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalFencePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
    glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties;
    glad_debug_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceFeatures = glad_debug_impl_vkGetPhysicalDeviceFeatures;
    glad_debug_vkGetPhysicalDeviceFeatures2 = glad_debug_impl_vkGetPhysicalDeviceFeatures2;
    glad_debug_vkGetPhysicalDeviceFeatures2KHR = glad_debug_impl_vkGetPhysicalDeviceFeatures2KHR;
    glad_debug_vkGetPhysicalDeviceFormatProperties = glad_debug_impl_vkGetPhysicalDeviceFormatProperties;
    glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2;
    glad_debug_vkGetPhysicalDeviceFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceMemoryProperties = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2KHR;
    glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT;
    glad_debug_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = glad_debug_impl_vkGetPhysicalDeviceOpticalFlowImageFormatsNV;
    glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR;
    glad_debug_vkGetPhysicalDeviceProperties = glad_debug_impl_vkGetPhysicalDeviceProperties;
    glad_debug_vkGetPhysicalDeviceProperties2 = glad_debug_impl_vkGetPhysicalDeviceProperties2;
    glad_debug_vkGetPhysicalDeviceProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceProperties2KHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetPhysicalDeviceScreenPresentationSupportQNX = glad_debug_impl_vkGetPhysicalDeviceScreenPresentationSupportQNX;

#endif
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties;
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = glad_debug_impl_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetPhysicalDeviceSurfacePresentModes2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModes2EXT;

#endif
    glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR;
    glad_debug_vkGetPhysicalDeviceToolProperties = glad_debug_impl_vkGetPhysicalDeviceToolProperties;
    glad_debug_vkGetPhysicalDeviceToolPropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceToolPropertiesEXT;
    glad_debug_vkGetPhysicalDeviceVideoCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceVideoFormatPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_debug_vkGetPhysicalDeviceWaylandPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceWaylandPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetPhysicalDeviceWin32PresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceWin32PresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_debug_vkGetPhysicalDeviceXcbPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceXcbPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_debug_vkGetPhysicalDeviceXlibPresentationSupportKHR = glad_debug_impl_vkGetPhysicalDeviceXlibPresentationSupportKHR;

#endif
    glad_debug_vkGetPipelineCacheData = glad_debug_impl_vkGetPipelineCacheData;
    glad_debug_vkGetPipelineExecutableInternalRepresentationsKHR = glad_debug_impl_vkGetPipelineExecutableInternalRepresentationsKHR;
    glad_debug_vkGetPipelineExecutablePropertiesKHR = glad_debug_impl_vkGetPipelineExecutablePropertiesKHR;
    glad_debug_vkGetPipelineExecutableStatisticsKHR = glad_debug_impl_vkGetPipelineExecutableStatisticsKHR;
    glad_debug_vkGetPipelineIndirectDeviceAddressNV = glad_debug_impl_vkGetPipelineIndirectDeviceAddressNV;
    glad_debug_vkGetPipelineIndirectMemoryRequirementsNV = glad_debug_impl_vkGetPipelineIndirectMemoryRequirementsNV;
    glad_debug_vkGetPipelinePropertiesEXT = glad_debug_impl_vkGetPipelinePropertiesEXT;
    glad_debug_vkGetPrivateData = glad_debug_impl_vkGetPrivateData;
    glad_debug_vkGetPrivateDataEXT = glad_debug_impl_vkGetPrivateDataEXT;
    glad_debug_vkGetQueryPoolResults = glad_debug_impl_vkGetQueryPoolResults;
    glad_debug_vkGetQueueCheckpointData2NV = glad_debug_impl_vkGetQueueCheckpointData2NV;
    glad_debug_vkGetQueueCheckpointDataNV = glad_debug_impl_vkGetQueueCheckpointDataNV;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_debug_vkGetRandROutputDisplayEXT = glad_debug_impl_vkGetRandROutputDisplayEXT;

#endif
    glad_debug_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = glad_debug_impl_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
    glad_debug_vkGetRayTracingShaderGroupHandlesKHR = glad_debug_impl_vkGetRayTracingShaderGroupHandlesKHR;
    glad_debug_vkGetRayTracingShaderGroupHandlesNV = glad_debug_impl_vkGetRayTracingShaderGroupHandlesNV;
    glad_debug_vkGetRayTracingShaderGroupStackSizeKHR = glad_debug_impl_vkGetRayTracingShaderGroupStackSizeKHR;
    glad_debug_vkGetRefreshCycleDurationGOOGLE = glad_debug_impl_vkGetRefreshCycleDurationGOOGLE;
    glad_debug_vkGetRenderAreaGranularity = glad_debug_impl_vkGetRenderAreaGranularity;
    glad_debug_vkGetRenderingAreaGranularityKHR = glad_debug_impl_vkGetRenderingAreaGranularityKHR;
    glad_debug_vkGetSamplerOpaqueCaptureDescriptorDataEXT = glad_debug_impl_vkGetSamplerOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetScreenBufferPropertiesQNX = glad_debug_impl_vkGetScreenBufferPropertiesQNX;

#endif
    glad_debug_vkGetSemaphoreCounterValue = glad_debug_impl_vkGetSemaphoreCounterValue;
    glad_debug_vkGetSemaphoreCounterValueKHR = glad_debug_impl_vkGetSemaphoreCounterValueKHR;
    glad_debug_vkGetSemaphoreFdKHR = glad_debug_impl_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetSemaphoreWin32HandleKHR = glad_debug_impl_vkGetSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetSemaphoreZirconHandleFUCHSIA = glad_debug_impl_vkGetSemaphoreZirconHandleFUCHSIA;

#endif
    glad_debug_vkGetShaderBinaryDataEXT = glad_debug_impl_vkGetShaderBinaryDataEXT;
    glad_debug_vkGetShaderInfoAMD = glad_debug_impl_vkGetShaderInfoAMD;
    glad_debug_vkGetShaderModuleCreateInfoIdentifierEXT = glad_debug_impl_vkGetShaderModuleCreateInfoIdentifierEXT;
    glad_debug_vkGetShaderModuleIdentifierEXT = glad_debug_impl_vkGetShaderModuleIdentifierEXT;
    glad_debug_vkGetSwapchainCounterEXT = glad_debug_impl_vkGetSwapchainCounterEXT;
    glad_debug_vkGetSwapchainImagesKHR = glad_debug_impl_vkGetSwapchainImagesKHR;
    glad_debug_vkGetSwapchainStatusKHR = glad_debug_impl_vkGetSwapchainStatusKHR;
    glad_debug_vkGetValidationCacheDataEXT = glad_debug_impl_vkGetValidationCacheDataEXT;
    glad_debug_vkGetVideoSessionMemoryRequirementsKHR = glad_debug_impl_vkGetVideoSessionMemoryRequirementsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetWinrtDisplayNV = glad_debug_impl_vkGetWinrtDisplayNV;

#endif
    glad_debug_vkImportFenceFdKHR = glad_debug_impl_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkImportFenceWin32HandleKHR = glad_debug_impl_vkImportFenceWin32HandleKHR;

#endif
    glad_debug_vkImportSemaphoreFdKHR = glad_debug_impl_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkImportSemaphoreWin32HandleKHR = glad_debug_impl_vkImportSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkImportSemaphoreZirconHandleFUCHSIA = glad_debug_impl_vkImportSemaphoreZirconHandleFUCHSIA;

#endif
    glad_debug_vkInitializePerformanceApiINTEL = glad_debug_impl_vkInitializePerformanceApiINTEL;
    glad_debug_vkInvalidateMappedMemoryRanges = glad_debug_impl_vkInvalidateMappedMemoryRanges;
    glad_debug_vkLatencySleepNV = glad_debug_impl_vkLatencySleepNV;
    glad_debug_vkMapMemory = glad_debug_impl_vkMapMemory;
    glad_debug_vkMapMemory2KHR = glad_debug_impl_vkMapMemory2KHR;
    glad_debug_vkMergePipelineCaches = glad_debug_impl_vkMergePipelineCaches;
    glad_debug_vkMergeValidationCachesEXT = glad_debug_impl_vkMergeValidationCachesEXT;
    glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT;
    glad_debug_vkQueueBindSparse = glad_debug_impl_vkQueueBindSparse;
    glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_debug_impl_vkQueueEndDebugUtilsLabelEXT;
    glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT;
    glad_debug_vkQueueNotifyOutOfBandNV = glad_debug_impl_vkQueueNotifyOutOfBandNV;
    glad_debug_vkQueuePresentKHR = glad_debug_impl_vkQueuePresentKHR;
    glad_debug_vkQueueSetPerformanceConfigurationINTEL = glad_debug_impl_vkQueueSetPerformanceConfigurationINTEL;
    glad_debug_vkQueueSubmit = glad_debug_impl_vkQueueSubmit;
    glad_debug_vkQueueSubmit2 = glad_debug_impl_vkQueueSubmit2;
    glad_debug_vkQueueSubmit2KHR = glad_debug_impl_vkQueueSubmit2KHR;
    glad_debug_vkQueueWaitIdle = glad_debug_impl_vkQueueWaitIdle;
    glad_debug_vkRegisterDeviceEventEXT = glad_debug_impl_vkRegisterDeviceEventEXT;
    glad_debug_vkRegisterDisplayEventEXT = glad_debug_impl_vkRegisterDisplayEventEXT;
    glad_debug_vkReleaseDisplayEXT = glad_debug_impl_vkReleaseDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkReleaseFullScreenExclusiveModeEXT = glad_debug_impl_vkReleaseFullScreenExclusiveModeEXT;

#endif
    glad_debug_vkReleasePerformanceConfigurationINTEL = glad_debug_impl_vkReleasePerformanceConfigurationINTEL;
    glad_debug_vkReleaseProfilingLockKHR = glad_debug_impl_vkReleaseProfilingLockKHR;
    glad_debug_vkReleaseSwapchainImagesEXT = glad_debug_impl_vkReleaseSwapchainImagesEXT;
    glad_debug_vkResetCommandBuffer = glad_debug_impl_vkResetCommandBuffer;
    glad_debug_vkResetCommandPool = glad_debug_impl_vkResetCommandPool;
    glad_debug_vkResetDescriptorPool = glad_debug_impl_vkResetDescriptorPool;
    glad_debug_vkResetEvent = glad_debug_impl_vkResetEvent;
    glad_debug_vkResetFences = glad_debug_impl_vkResetFences;
    glad_debug_vkResetQueryPool = glad_debug_impl_vkResetQueryPool;
    glad_debug_vkResetQueryPoolEXT = glad_debug_impl_vkResetQueryPoolEXT;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkSetBufferCollectionBufferConstraintsFUCHSIA = glad_debug_impl_vkSetBufferCollectionBufferConstraintsFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkSetBufferCollectionImageConstraintsFUCHSIA = glad_debug_impl_vkSetBufferCollectionImageConstraintsFUCHSIA;

#endif
    glad_debug_vkSetDebugUtilsObjectNameEXT = glad_debug_impl_vkSetDebugUtilsObjectNameEXT;
    glad_debug_vkSetDebugUtilsObjectTagEXT = glad_debug_impl_vkSetDebugUtilsObjectTagEXT;
    glad_debug_vkSetDeviceMemoryPriorityEXT = glad_debug_impl_vkSetDeviceMemoryPriorityEXT;
    glad_debug_vkSetEvent = glad_debug_impl_vkSetEvent;
    glad_debug_vkSetHdrMetadataEXT = glad_debug_impl_vkSetHdrMetadataEXT;
    glad_debug_vkSetLatencyMarkerNV = glad_debug_impl_vkSetLatencyMarkerNV;
    glad_debug_vkSetLatencySleepModeNV = glad_debug_impl_vkSetLatencySleepModeNV;
    glad_debug_vkSetLocalDimmingAMD = glad_debug_impl_vkSetLocalDimmingAMD;
    glad_debug_vkSetPrivateData = glad_debug_impl_vkSetPrivateData;
    glad_debug_vkSetPrivateDataEXT = glad_debug_impl_vkSetPrivateDataEXT;
    glad_debug_vkSignalSemaphore = glad_debug_impl_vkSignalSemaphore;
    glad_debug_vkSignalSemaphoreKHR = glad_debug_impl_vkSignalSemaphoreKHR;
    glad_debug_vkSubmitDebugUtilsMessageEXT = glad_debug_impl_vkSubmitDebugUtilsMessageEXT;
    glad_debug_vkTransitionImageLayoutEXT = glad_debug_impl_vkTransitionImageLayoutEXT;
    glad_debug_vkTrimCommandPool = glad_debug_impl_vkTrimCommandPool;
    glad_debug_vkTrimCommandPoolKHR = glad_debug_impl_vkTrimCommandPoolKHR;
    glad_debug_vkUninitializePerformanceApiINTEL = glad_debug_impl_vkUninitializePerformanceApiINTEL;
    glad_debug_vkUnmapMemory = glad_debug_impl_vkUnmapMemory;
    glad_debug_vkUnmapMemory2KHR = glad_debug_impl_vkUnmapMemory2KHR;
    glad_debug_vkUpdateDescriptorSetWithTemplate = glad_debug_impl_vkUpdateDescriptorSetWithTemplate;
    glad_debug_vkUpdateDescriptorSetWithTemplateKHR = glad_debug_impl_vkUpdateDescriptorSetWithTemplateKHR;
    glad_debug_vkUpdateDescriptorSets = glad_debug_impl_vkUpdateDescriptorSets;
    glad_debug_vkUpdateVideoSessionParametersKHR = glad_debug_impl_vkUpdateVideoSessionParametersKHR;
    glad_debug_vkWaitForFences = glad_debug_impl_vkWaitForFences;
    glad_debug_vkWaitForPresentKHR = glad_debug_impl_vkWaitForPresentKHR;
    glad_debug_vkWaitSemaphores = glad_debug_impl_vkWaitSemaphores;
    glad_debug_vkWaitSemaphoresKHR = glad_debug_impl_vkWaitSemaphoresKHR;
    glad_debug_vkWriteAccelerationStructuresPropertiesKHR = glad_debug_impl_vkWriteAccelerationStructuresPropertiesKHR;
    glad_debug_vkWriteMicromapsPropertiesEXT = glad_debug_impl_vkWriteMicromapsPropertiesEXT;
}

void gladUninstallVulkanDebug() {
    glad_debug_vkAcquireDrmDisplayEXT = glad_vkAcquireDrmDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireFullScreenExclusiveModeEXT = glad_vkAcquireFullScreenExclusiveModeEXT;

#endif
    glad_debug_vkAcquireNextImage2KHR = glad_vkAcquireNextImage2KHR;
    glad_debug_vkAcquireNextImageKHR = glad_vkAcquireNextImageKHR;
    glad_debug_vkAcquirePerformanceConfigurationINTEL = glad_vkAcquirePerformanceConfigurationINTEL;
    glad_debug_vkAcquireProfilingLockKHR = glad_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireWinrtDisplayNV = glad_vkAcquireWinrtDisplayNV;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_debug_vkAcquireXlibDisplayEXT = glad_vkAcquireXlibDisplayEXT;

#endif
    glad_debug_vkAllocateCommandBuffers = glad_vkAllocateCommandBuffers;
    glad_debug_vkAllocateDescriptorSets = glad_vkAllocateDescriptorSets;
    glad_debug_vkAllocateMemory = glad_vkAllocateMemory;
    glad_debug_vkAntiLagUpdateAMD = glad_vkAntiLagUpdateAMD;
    glad_debug_vkBeginCommandBuffer = glad_vkBeginCommandBuffer;
    glad_debug_vkBindAccelerationStructureMemoryNV = glad_vkBindAccelerationStructureMemoryNV;
    glad_debug_vkBindBufferMemory = glad_vkBindBufferMemory;
    glad_debug_vkBindBufferMemory2 = glad_vkBindBufferMemory2;
    glad_debug_vkBindBufferMemory2KHR = glad_vkBindBufferMemory2KHR;
    glad_debug_vkBindImageMemory = glad_vkBindImageMemory;
    glad_debug_vkBindImageMemory2 = glad_vkBindImageMemory2;
    glad_debug_vkBindImageMemory2KHR = glad_vkBindImageMemory2KHR;
    glad_debug_vkBindOpticalFlowSessionImageNV = glad_vkBindOpticalFlowSessionImageNV;
    glad_debug_vkBindVideoSessionMemoryKHR = glad_vkBindVideoSessionMemoryKHR;
    glad_debug_vkBuildAccelerationStructuresKHR = glad_vkBuildAccelerationStructuresKHR;
    glad_debug_vkBuildMicromapsEXT = glad_vkBuildMicromapsEXT;
    glad_debug_vkCmdBeginConditionalRenderingEXT = glad_vkCmdBeginConditionalRenderingEXT;
    glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_vkCmdBeginDebugUtilsLabelEXT;
    glad_debug_vkCmdBeginQuery = glad_vkCmdBeginQuery;
    glad_debug_vkCmdBeginQueryIndexedEXT = glad_vkCmdBeginQueryIndexedEXT;
    glad_debug_vkCmdBeginRenderPass = glad_vkCmdBeginRenderPass;
    glad_debug_vkCmdBeginRenderPass2 = glad_vkCmdBeginRenderPass2;
    glad_debug_vkCmdBeginRenderPass2KHR = glad_vkCmdBeginRenderPass2KHR;
    glad_debug_vkCmdBeginRendering = glad_vkCmdBeginRendering;
    glad_debug_vkCmdBeginRenderingKHR = glad_vkCmdBeginRenderingKHR;
    glad_debug_vkCmdBeginTransformFeedbackEXT = glad_vkCmdBeginTransformFeedbackEXT;
    glad_debug_vkCmdBeginVideoCodingKHR = glad_vkCmdBeginVideoCodingKHR;
    glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = glad_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT;
    glad_debug_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = glad_vkCmdBindDescriptorBufferEmbeddedSamplersEXT;
    glad_debug_vkCmdBindDescriptorBuffersEXT = glad_vkCmdBindDescriptorBuffersEXT;
    glad_debug_vkCmdBindDescriptorSets = glad_vkCmdBindDescriptorSets;
    glad_debug_vkCmdBindDescriptorSets2KHR = glad_vkCmdBindDescriptorSets2KHR;
    glad_debug_vkCmdBindIndexBuffer = glad_vkCmdBindIndexBuffer;
    glad_debug_vkCmdBindIndexBuffer2KHR = glad_vkCmdBindIndexBuffer2KHR;
    glad_debug_vkCmdBindInvocationMaskHUAWEI = glad_vkCmdBindInvocationMaskHUAWEI;
    glad_debug_vkCmdBindPipeline = glad_vkCmdBindPipeline;
    glad_debug_vkCmdBindPipelineShaderGroupNV = glad_vkCmdBindPipelineShaderGroupNV;
    glad_debug_vkCmdBindShadersEXT = glad_vkCmdBindShadersEXT;
    glad_debug_vkCmdBindShadingRateImageNV = glad_vkCmdBindShadingRateImageNV;
    glad_debug_vkCmdBindTransformFeedbackBuffersEXT = glad_vkCmdBindTransformFeedbackBuffersEXT;
    glad_debug_vkCmdBindVertexBuffers = glad_vkCmdBindVertexBuffers;
    glad_debug_vkCmdBindVertexBuffers2 = glad_vkCmdBindVertexBuffers2;
    glad_debug_vkCmdBindVertexBuffers2EXT = glad_vkCmdBindVertexBuffers2EXT;
    glad_debug_vkCmdBlitImage = glad_vkCmdBlitImage;
    glad_debug_vkCmdBlitImage2 = glad_vkCmdBlitImage2;
    glad_debug_vkCmdBlitImage2KHR = glad_vkCmdBlitImage2KHR;
    glad_debug_vkCmdBuildAccelerationStructureNV = glad_vkCmdBuildAccelerationStructureNV;
    glad_debug_vkCmdBuildAccelerationStructuresIndirectKHR = glad_vkCmdBuildAccelerationStructuresIndirectKHR;
    glad_debug_vkCmdBuildAccelerationStructuresKHR = glad_vkCmdBuildAccelerationStructuresKHR;
    glad_debug_vkCmdBuildMicromapsEXT = glad_vkCmdBuildMicromapsEXT;
    glad_debug_vkCmdClearAttachments = glad_vkCmdClearAttachments;
    glad_debug_vkCmdClearColorImage = glad_vkCmdClearColorImage;
    glad_debug_vkCmdClearDepthStencilImage = glad_vkCmdClearDepthStencilImage;
    glad_debug_vkCmdControlVideoCodingKHR = glad_vkCmdControlVideoCodingKHR;
    glad_debug_vkCmdCopyAccelerationStructureKHR = glad_vkCmdCopyAccelerationStructureKHR;
    glad_debug_vkCmdCopyAccelerationStructureNV = glad_vkCmdCopyAccelerationStructureNV;
    glad_debug_vkCmdCopyAccelerationStructureToMemoryKHR = glad_vkCmdCopyAccelerationStructureToMemoryKHR;
    glad_debug_vkCmdCopyBuffer = glad_vkCmdCopyBuffer;
    glad_debug_vkCmdCopyBuffer2 = glad_vkCmdCopyBuffer2;
    glad_debug_vkCmdCopyBuffer2KHR = glad_vkCmdCopyBuffer2KHR;
    glad_debug_vkCmdCopyBufferToImage = glad_vkCmdCopyBufferToImage;
    glad_debug_vkCmdCopyBufferToImage2 = glad_vkCmdCopyBufferToImage2;
    glad_debug_vkCmdCopyBufferToImage2KHR = glad_vkCmdCopyBufferToImage2KHR;
    glad_debug_vkCmdCopyImage = glad_vkCmdCopyImage;
    glad_debug_vkCmdCopyImage2 = glad_vkCmdCopyImage2;
    glad_debug_vkCmdCopyImage2KHR = glad_vkCmdCopyImage2KHR;
    glad_debug_vkCmdCopyImageToBuffer = glad_vkCmdCopyImageToBuffer;
    glad_debug_vkCmdCopyImageToBuffer2 = glad_vkCmdCopyImageToBuffer2;
    glad_debug_vkCmdCopyImageToBuffer2KHR = glad_vkCmdCopyImageToBuffer2KHR;
    glad_debug_vkCmdCopyMemoryIndirectNV = glad_vkCmdCopyMemoryIndirectNV;
    glad_debug_vkCmdCopyMemoryToAccelerationStructureKHR = glad_vkCmdCopyMemoryToAccelerationStructureKHR;
    glad_debug_vkCmdCopyMemoryToImageIndirectNV = glad_vkCmdCopyMemoryToImageIndirectNV;
    glad_debug_vkCmdCopyMemoryToMicromapEXT = glad_vkCmdCopyMemoryToMicromapEXT;
    glad_debug_vkCmdCopyMicromapEXT = glad_vkCmdCopyMicromapEXT;
    glad_debug_vkCmdCopyMicromapToMemoryEXT = glad_vkCmdCopyMicromapToMemoryEXT;
    glad_debug_vkCmdCopyQueryPoolResults = glad_vkCmdCopyQueryPoolResults;
    glad_debug_vkCmdCuLaunchKernelNVX = glad_vkCmdCuLaunchKernelNVX;
    glad_debug_vkCmdCudaLaunchKernelNV = glad_vkCmdCudaLaunchKernelNV;
    glad_debug_vkCmdDebugMarkerBeginEXT = glad_vkCmdDebugMarkerBeginEXT;
    glad_debug_vkCmdDebugMarkerEndEXT = glad_vkCmdDebugMarkerEndEXT;
    glad_debug_vkCmdDebugMarkerInsertEXT = glad_vkCmdDebugMarkerInsertEXT;
    glad_debug_vkCmdDecodeVideoKHR = glad_vkCmdDecodeVideoKHR;
    glad_debug_vkCmdDecompressMemoryIndirectCountNV = glad_vkCmdDecompressMemoryIndirectCountNV;
    glad_debug_vkCmdDecompressMemoryNV = glad_vkCmdDecompressMemoryNV;
    glad_debug_vkCmdDispatch = glad_vkCmdDispatch;
    glad_debug_vkCmdDispatchBase = glad_vkCmdDispatchBase;
    glad_debug_vkCmdDispatchBaseKHR = glad_vkCmdDispatchBaseKHR;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphAMDX = glad_vkCmdDispatchGraphAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphIndirectAMDX = glad_vkCmdDispatchGraphIndirectAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdDispatchGraphIndirectCountAMDX = glad_vkCmdDispatchGraphIndirectCountAMDX;

#endif
    glad_debug_vkCmdDispatchIndirect = glad_vkCmdDispatchIndirect;
    glad_debug_vkCmdDraw = glad_vkCmdDraw;
    glad_debug_vkCmdDrawClusterHUAWEI = glad_vkCmdDrawClusterHUAWEI;
    glad_debug_vkCmdDrawClusterIndirectHUAWEI = glad_vkCmdDrawClusterIndirectHUAWEI;
    glad_debug_vkCmdDrawIndexed = glad_vkCmdDrawIndexed;
    glad_debug_vkCmdDrawIndexedIndirect = glad_vkCmdDrawIndexedIndirect;
    glad_debug_vkCmdDrawIndexedIndirectCount = glad_vkCmdDrawIndexedIndirectCount;
    glad_debug_vkCmdDrawIndexedIndirectCountAMD = glad_vkCmdDrawIndexedIndirectCountAMD;
    glad_debug_vkCmdDrawIndexedIndirectCountKHR = glad_vkCmdDrawIndexedIndirectCountKHR;
    glad_debug_vkCmdDrawIndirect = glad_vkCmdDrawIndirect;
    glad_debug_vkCmdDrawIndirectByteCountEXT = glad_vkCmdDrawIndirectByteCountEXT;
    glad_debug_vkCmdDrawIndirectCount = glad_vkCmdDrawIndirectCount;
    glad_debug_vkCmdDrawIndirectCountAMD = glad_vkCmdDrawIndirectCountAMD;
    glad_debug_vkCmdDrawIndirectCountKHR = glad_vkCmdDrawIndirectCountKHR;
    glad_debug_vkCmdDrawMeshTasksEXT = glad_vkCmdDrawMeshTasksEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectCountEXT = glad_vkCmdDrawMeshTasksIndirectCountEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectCountNV = glad_vkCmdDrawMeshTasksIndirectCountNV;
    glad_debug_vkCmdDrawMeshTasksIndirectEXT = glad_vkCmdDrawMeshTasksIndirectEXT;
    glad_debug_vkCmdDrawMeshTasksIndirectNV = glad_vkCmdDrawMeshTasksIndirectNV;
    glad_debug_vkCmdDrawMeshTasksNV = glad_vkCmdDrawMeshTasksNV;
    glad_debug_vkCmdDrawMultiEXT = glad_vkCmdDrawMultiEXT;
    glad_debug_vkCmdDrawMultiIndexedEXT = glad_vkCmdDrawMultiIndexedEXT;
    glad_debug_vkCmdEncodeVideoKHR = glad_vkCmdEncodeVideoKHR;
    glad_debug_vkCmdEndConditionalRenderingEXT = glad_vkCmdEndConditionalRenderingEXT;
    glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_vkCmdEndDebugUtilsLabelEXT;
    glad_debug_vkCmdEndQuery = glad_vkCmdEndQuery;
    glad_debug_vkCmdEndQueryIndexedEXT = glad_vkCmdEndQueryIndexedEXT;
    glad_debug_vkCmdEndRenderPass = glad_vkCmdEndRenderPass;
    glad_debug_vkCmdEndRenderPass2 = glad_vkCmdEndRenderPass2;
    glad_debug_vkCmdEndRenderPass2KHR = glad_vkCmdEndRenderPass2KHR;
    glad_debug_vkCmdEndRendering = glad_vkCmdEndRendering;
    glad_debug_vkCmdEndRenderingKHR = glad_vkCmdEndRenderingKHR;
    glad_debug_vkCmdEndTransformFeedbackEXT = glad_vkCmdEndTransformFeedbackEXT;
    glad_debug_vkCmdEndVideoCodingKHR = glad_vkCmdEndVideoCodingKHR;
    glad_debug_vkCmdExecuteCommands = glad_vkCmdExecuteCommands;
    glad_debug_vkCmdExecuteGeneratedCommandsNV = glad_vkCmdExecuteGeneratedCommandsNV;
    glad_debug_vkCmdFillBuffer = glad_vkCmdFillBuffer;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCmdInitializeGraphScratchMemoryAMDX = glad_vkCmdInitializeGraphScratchMemoryAMDX;

#endif
    glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_vkCmdInsertDebugUtilsLabelEXT;
    glad_debug_vkCmdNextSubpass = glad_vkCmdNextSubpass;
    glad_debug_vkCmdNextSubpass2 = glad_vkCmdNextSubpass2;
    glad_debug_vkCmdNextSubpass2KHR = glad_vkCmdNextSubpass2KHR;
    glad_debug_vkCmdOpticalFlowExecuteNV = glad_vkCmdOpticalFlowExecuteNV;
    glad_debug_vkCmdPipelineBarrier = glad_vkCmdPipelineBarrier;
    glad_debug_vkCmdPipelineBarrier2 = glad_vkCmdPipelineBarrier2;
    glad_debug_vkCmdPipelineBarrier2KHR = glad_vkCmdPipelineBarrier2KHR;
    glad_debug_vkCmdPreprocessGeneratedCommandsNV = glad_vkCmdPreprocessGeneratedCommandsNV;
    glad_debug_vkCmdPushConstants = glad_vkCmdPushConstants;
    glad_debug_vkCmdPushConstants2KHR = glad_vkCmdPushConstants2KHR;
    glad_debug_vkCmdPushDescriptorSet2KHR = glad_vkCmdPushDescriptorSet2KHR;
    glad_debug_vkCmdPushDescriptorSetKHR = glad_vkCmdPushDescriptorSetKHR;
    glad_debug_vkCmdPushDescriptorSetWithTemplate2KHR = glad_vkCmdPushDescriptorSetWithTemplate2KHR;
    glad_debug_vkCmdPushDescriptorSetWithTemplateKHR = glad_vkCmdPushDescriptorSetWithTemplateKHR;
    glad_debug_vkCmdResetEvent = glad_vkCmdResetEvent;
    glad_debug_vkCmdResetEvent2 = glad_vkCmdResetEvent2;
    glad_debug_vkCmdResetEvent2KHR = glad_vkCmdResetEvent2KHR;
    glad_debug_vkCmdResetQueryPool = glad_vkCmdResetQueryPool;
    glad_debug_vkCmdResolveImage = glad_vkCmdResolveImage;
    glad_debug_vkCmdResolveImage2 = glad_vkCmdResolveImage2;
    glad_debug_vkCmdResolveImage2KHR = glad_vkCmdResolveImage2KHR;
    glad_debug_vkCmdSetAlphaToCoverageEnableEXT = glad_vkCmdSetAlphaToCoverageEnableEXT;
    glad_debug_vkCmdSetAlphaToOneEnableEXT = glad_vkCmdSetAlphaToOneEnableEXT;
    glad_debug_vkCmdSetAttachmentFeedbackLoopEnableEXT = glad_vkCmdSetAttachmentFeedbackLoopEnableEXT;
    glad_debug_vkCmdSetBlendConstants = glad_vkCmdSetBlendConstants;
    glad_debug_vkCmdSetCheckpointNV = glad_vkCmdSetCheckpointNV;
    glad_debug_vkCmdSetCoarseSampleOrderNV = glad_vkCmdSetCoarseSampleOrderNV;
    glad_debug_vkCmdSetColorBlendAdvancedEXT = glad_vkCmdSetColorBlendAdvancedEXT;
    glad_debug_vkCmdSetColorBlendEnableEXT = glad_vkCmdSetColorBlendEnableEXT;
    glad_debug_vkCmdSetColorBlendEquationEXT = glad_vkCmdSetColorBlendEquationEXT;
    glad_debug_vkCmdSetColorWriteEnableEXT = glad_vkCmdSetColorWriteEnableEXT;
    glad_debug_vkCmdSetColorWriteMaskEXT = glad_vkCmdSetColorWriteMaskEXT;
    glad_debug_vkCmdSetConservativeRasterizationModeEXT = glad_vkCmdSetConservativeRasterizationModeEXT;
    glad_debug_vkCmdSetCoverageModulationModeNV = glad_vkCmdSetCoverageModulationModeNV;
    glad_debug_vkCmdSetCoverageModulationTableEnableNV = glad_vkCmdSetCoverageModulationTableEnableNV;
    glad_debug_vkCmdSetCoverageModulationTableNV = glad_vkCmdSetCoverageModulationTableNV;
    glad_debug_vkCmdSetCoverageReductionModeNV = glad_vkCmdSetCoverageReductionModeNV;
    glad_debug_vkCmdSetCoverageToColorEnableNV = glad_vkCmdSetCoverageToColorEnableNV;
    glad_debug_vkCmdSetCoverageToColorLocationNV = glad_vkCmdSetCoverageToColorLocationNV;
    glad_debug_vkCmdSetCullMode = glad_vkCmdSetCullMode;
    glad_debug_vkCmdSetCullModeEXT = glad_vkCmdSetCullModeEXT;
    glad_debug_vkCmdSetDepthBias = glad_vkCmdSetDepthBias;
    glad_debug_vkCmdSetDepthBias2EXT = glad_vkCmdSetDepthBias2EXT;
    glad_debug_vkCmdSetDepthBiasEnable = glad_vkCmdSetDepthBiasEnable;
    glad_debug_vkCmdSetDepthBiasEnableEXT = glad_vkCmdSetDepthBiasEnableEXT;
    glad_debug_vkCmdSetDepthBounds = glad_vkCmdSetDepthBounds;
    glad_debug_vkCmdSetDepthBoundsTestEnable = glad_vkCmdSetDepthBoundsTestEnable;
    glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_vkCmdSetDepthBoundsTestEnableEXT;
    glad_debug_vkCmdSetDepthClampEnableEXT = glad_vkCmdSetDepthClampEnableEXT;
    glad_debug_vkCmdSetDepthClipEnableEXT = glad_vkCmdSetDepthClipEnableEXT;
    glad_debug_vkCmdSetDepthClipNegativeOneToOneEXT = glad_vkCmdSetDepthClipNegativeOneToOneEXT;
    glad_debug_vkCmdSetDepthCompareOp = glad_vkCmdSetDepthCompareOp;
    glad_debug_vkCmdSetDepthCompareOpEXT = glad_vkCmdSetDepthCompareOpEXT;
    glad_debug_vkCmdSetDepthTestEnable = glad_vkCmdSetDepthTestEnable;
    glad_debug_vkCmdSetDepthTestEnableEXT = glad_vkCmdSetDepthTestEnableEXT;
    glad_debug_vkCmdSetDepthWriteEnable = glad_vkCmdSetDepthWriteEnable;
    glad_debug_vkCmdSetDepthWriteEnableEXT = glad_vkCmdSetDepthWriteEnableEXT;
    glad_debug_vkCmdSetDescriptorBufferOffsets2EXT = glad_vkCmdSetDescriptorBufferOffsets2EXT;
    glad_debug_vkCmdSetDescriptorBufferOffsetsEXT = glad_vkCmdSetDescriptorBufferOffsetsEXT;
    glad_debug_vkCmdSetDeviceMask = glad_vkCmdSetDeviceMask;
    glad_debug_vkCmdSetDeviceMaskKHR = glad_vkCmdSetDeviceMaskKHR;
    glad_debug_vkCmdSetDiscardRectangleEXT = glad_vkCmdSetDiscardRectangleEXT;
    glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_vkCmdSetDiscardRectangleEnableEXT;
    glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_vkCmdSetDiscardRectangleModeEXT;
    glad_debug_vkCmdSetEvent = glad_vkCmdSetEvent;
    glad_debug_vkCmdSetEvent2 = glad_vkCmdSetEvent2;
    glad_debug_vkCmdSetEvent2KHR = glad_vkCmdSetEvent2KHR;
    glad_debug_vkCmdSetExclusiveScissorEnableNV = glad_vkCmdSetExclusiveScissorEnableNV;
    glad_debug_vkCmdSetExclusiveScissorNV = glad_vkCmdSetExclusiveScissorNV;
    glad_debug_vkCmdSetExtraPrimitiveOverestimationSizeEXT = glad_vkCmdSetExtraPrimitiveOverestimationSizeEXT;
    glad_debug_vkCmdSetFragmentShadingRateEnumNV = glad_vkCmdSetFragmentShadingRateEnumNV;
    glad_debug_vkCmdSetFragmentShadingRateKHR = glad_vkCmdSetFragmentShadingRateKHR;
    glad_debug_vkCmdSetFrontFace = glad_vkCmdSetFrontFace;
    glad_debug_vkCmdSetFrontFaceEXT = glad_vkCmdSetFrontFaceEXT;
    glad_debug_vkCmdSetLineRasterizationModeEXT = glad_vkCmdSetLineRasterizationModeEXT;
    glad_debug_vkCmdSetLineStippleEXT = glad_vkCmdSetLineStippleEXT;
    glad_debug_vkCmdSetLineStippleEnableEXT = glad_vkCmdSetLineStippleEnableEXT;
    glad_debug_vkCmdSetLineStippleKHR = glad_vkCmdSetLineStippleKHR;
    glad_debug_vkCmdSetLineWidth = glad_vkCmdSetLineWidth;
    glad_debug_vkCmdSetLogicOpEXT = glad_vkCmdSetLogicOpEXT;
    glad_debug_vkCmdSetLogicOpEnableEXT = glad_vkCmdSetLogicOpEnableEXT;
    glad_debug_vkCmdSetPatchControlPointsEXT = glad_vkCmdSetPatchControlPointsEXT;
    glad_debug_vkCmdSetPerformanceMarkerINTEL = glad_vkCmdSetPerformanceMarkerINTEL;
    glad_debug_vkCmdSetPerformanceOverrideINTEL = glad_vkCmdSetPerformanceOverrideINTEL;
    glad_debug_vkCmdSetPerformanceStreamMarkerINTEL = glad_vkCmdSetPerformanceStreamMarkerINTEL;
    glad_debug_vkCmdSetPolygonModeEXT = glad_vkCmdSetPolygonModeEXT;
    glad_debug_vkCmdSetPrimitiveRestartEnable = glad_vkCmdSetPrimitiveRestartEnable;
    glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_vkCmdSetPrimitiveRestartEnableEXT;
    glad_debug_vkCmdSetPrimitiveTopology = glad_vkCmdSetPrimitiveTopology;
    glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_vkCmdSetPrimitiveTopologyEXT;
    glad_debug_vkCmdSetProvokingVertexModeEXT = glad_vkCmdSetProvokingVertexModeEXT;
    glad_debug_vkCmdSetRasterizationSamplesEXT = glad_vkCmdSetRasterizationSamplesEXT;
    glad_debug_vkCmdSetRasterizationStreamEXT = glad_vkCmdSetRasterizationStreamEXT;
    glad_debug_vkCmdSetRasterizerDiscardEnable = glad_vkCmdSetRasterizerDiscardEnable;
    glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_vkCmdSetRasterizerDiscardEnableEXT;
    glad_debug_vkCmdSetRayTracingPipelineStackSizeKHR = glad_vkCmdSetRayTracingPipelineStackSizeKHR;
    glad_debug_vkCmdSetRenderingAttachmentLocationsKHR = glad_vkCmdSetRenderingAttachmentLocationsKHR;
    glad_debug_vkCmdSetRenderingInputAttachmentIndicesKHR = glad_vkCmdSetRenderingInputAttachmentIndicesKHR;
    glad_debug_vkCmdSetRepresentativeFragmentTestEnableNV = glad_vkCmdSetRepresentativeFragmentTestEnableNV;
    glad_debug_vkCmdSetSampleLocationsEXT = glad_vkCmdSetSampleLocationsEXT;
    glad_debug_vkCmdSetSampleLocationsEnableEXT = glad_vkCmdSetSampleLocationsEnableEXT;
    glad_debug_vkCmdSetSampleMaskEXT = glad_vkCmdSetSampleMaskEXT;
    glad_debug_vkCmdSetScissor = glad_vkCmdSetScissor;
    glad_debug_vkCmdSetScissorWithCount = glad_vkCmdSetScissorWithCount;
    glad_debug_vkCmdSetScissorWithCountEXT = glad_vkCmdSetScissorWithCountEXT;
    glad_debug_vkCmdSetShadingRateImageEnableNV = glad_vkCmdSetShadingRateImageEnableNV;
    glad_debug_vkCmdSetStencilCompareMask = glad_vkCmdSetStencilCompareMask;
    glad_debug_vkCmdSetStencilOp = glad_vkCmdSetStencilOp;
    glad_debug_vkCmdSetStencilOpEXT = glad_vkCmdSetStencilOpEXT;
    glad_debug_vkCmdSetStencilReference = glad_vkCmdSetStencilReference;
    glad_debug_vkCmdSetStencilTestEnable = glad_vkCmdSetStencilTestEnable;
    glad_debug_vkCmdSetStencilTestEnableEXT = glad_vkCmdSetStencilTestEnableEXT;
    glad_debug_vkCmdSetStencilWriteMask = glad_vkCmdSetStencilWriteMask;
    glad_debug_vkCmdSetTessellationDomainOriginEXT = glad_vkCmdSetTessellationDomainOriginEXT;
    glad_debug_vkCmdSetVertexInputEXT = glad_vkCmdSetVertexInputEXT;
    glad_debug_vkCmdSetViewport = glad_vkCmdSetViewport;
    glad_debug_vkCmdSetViewportShadingRatePaletteNV = glad_vkCmdSetViewportShadingRatePaletteNV;
    glad_debug_vkCmdSetViewportSwizzleNV = glad_vkCmdSetViewportSwizzleNV;
    glad_debug_vkCmdSetViewportWScalingEnableNV = glad_vkCmdSetViewportWScalingEnableNV;
    glad_debug_vkCmdSetViewportWScalingNV = glad_vkCmdSetViewportWScalingNV;
    glad_debug_vkCmdSetViewportWithCount = glad_vkCmdSetViewportWithCount;
    glad_debug_vkCmdSetViewportWithCountEXT = glad_vkCmdSetViewportWithCountEXT;
    glad_debug_vkCmdSubpassShadingHUAWEI = glad_vkCmdSubpassShadingHUAWEI;
    glad_debug_vkCmdTraceRaysIndirect2KHR = glad_vkCmdTraceRaysIndirect2KHR;
    glad_debug_vkCmdTraceRaysIndirectKHR = glad_vkCmdTraceRaysIndirectKHR;
    glad_debug_vkCmdTraceRaysKHR = glad_vkCmdTraceRaysKHR;
    glad_debug_vkCmdTraceRaysNV = glad_vkCmdTraceRaysNV;
    glad_debug_vkCmdUpdateBuffer = glad_vkCmdUpdateBuffer;
    glad_debug_vkCmdUpdatePipelineIndirectBufferNV = glad_vkCmdUpdatePipelineIndirectBufferNV;
    glad_debug_vkCmdWaitEvents = glad_vkCmdWaitEvents;
    glad_debug_vkCmdWaitEvents2 = glad_vkCmdWaitEvents2;
    glad_debug_vkCmdWaitEvents2KHR = glad_vkCmdWaitEvents2KHR;
    glad_debug_vkCmdWriteAccelerationStructuresPropertiesKHR = glad_vkCmdWriteAccelerationStructuresPropertiesKHR;
    glad_debug_vkCmdWriteAccelerationStructuresPropertiesNV = glad_vkCmdWriteAccelerationStructuresPropertiesNV;
    glad_debug_vkCmdWriteBufferMarker2AMD = glad_vkCmdWriteBufferMarker2AMD;
    glad_debug_vkCmdWriteBufferMarkerAMD = glad_vkCmdWriteBufferMarkerAMD;
    glad_debug_vkCmdWriteMicromapsPropertiesEXT = glad_vkCmdWriteMicromapsPropertiesEXT;
    glad_debug_vkCmdWriteTimestamp = glad_vkCmdWriteTimestamp;
    glad_debug_vkCmdWriteTimestamp2 = glad_vkCmdWriteTimestamp2;
    glad_debug_vkCmdWriteTimestamp2KHR = glad_vkCmdWriteTimestamp2KHR;
    glad_debug_vkCompileDeferredNV = glad_vkCompileDeferredNV;
    glad_debug_vkCopyAccelerationStructureKHR = glad_vkCopyAccelerationStructureKHR;
    glad_debug_vkCopyAccelerationStructureToMemoryKHR = glad_vkCopyAccelerationStructureToMemoryKHR;
    glad_debug_vkCopyImageToImageEXT = glad_vkCopyImageToImageEXT;
    glad_debug_vkCopyImageToMemoryEXT = glad_vkCopyImageToMemoryEXT;
    glad_debug_vkCopyMemoryToAccelerationStructureKHR = glad_vkCopyMemoryToAccelerationStructureKHR;
    glad_debug_vkCopyMemoryToImageEXT = glad_vkCopyMemoryToImageEXT;
    glad_debug_vkCopyMemoryToMicromapEXT = glad_vkCopyMemoryToMicromapEXT;
    glad_debug_vkCopyMicromapEXT = glad_vkCopyMicromapEXT;
    glad_debug_vkCopyMicromapToMemoryEXT = glad_vkCopyMicromapToMemoryEXT;
    glad_debug_vkCreateAccelerationStructureKHR = glad_vkCreateAccelerationStructureKHR;
    glad_debug_vkCreateAccelerationStructureNV = glad_vkCreateAccelerationStructureNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkCreateAndroidSurfaceKHR = glad_vkCreateAndroidSurfaceKHR;

#endif
    glad_debug_vkCreateBuffer = glad_vkCreateBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkCreateBufferCollectionFUCHSIA = glad_vkCreateBufferCollectionFUCHSIA;

#endif
    glad_debug_vkCreateBufferView = glad_vkCreateBufferView;
    glad_debug_vkCreateCommandPool = glad_vkCreateCommandPool;
    glad_debug_vkCreateComputePipelines = glad_vkCreateComputePipelines;
    glad_debug_vkCreateCuFunctionNVX = glad_vkCreateCuFunctionNVX;
    glad_debug_vkCreateCuModuleNVX = glad_vkCreateCuModuleNVX;
    glad_debug_vkCreateCudaFunctionNV = glad_vkCreateCudaFunctionNV;
    glad_debug_vkCreateCudaModuleNV = glad_vkCreateCudaModuleNV;
    glad_debug_vkCreateDebugReportCallbackEXT = glad_vkCreateDebugReportCallbackEXT;
    glad_debug_vkCreateDebugUtilsMessengerEXT = glad_vkCreateDebugUtilsMessengerEXT;
    glad_debug_vkCreateDeferredOperationKHR = glad_vkCreateDeferredOperationKHR;
    glad_debug_vkCreateDescriptorPool = glad_vkCreateDescriptorPool;
    glad_debug_vkCreateDescriptorSetLayout = glad_vkCreateDescriptorSetLayout;
    glad_debug_vkCreateDescriptorUpdateTemplate = glad_vkCreateDescriptorUpdateTemplate;
    glad_debug_vkCreateDescriptorUpdateTemplateKHR = glad_vkCreateDescriptorUpdateTemplateKHR;
    glad_debug_vkCreateDevice = glad_vkCreateDevice;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    glad_debug_vkCreateDirectFBSurfaceEXT = glad_vkCreateDirectFBSurfaceEXT;

#endif
    glad_debug_vkCreateDisplayModeKHR = glad_vkCreateDisplayModeKHR;
    glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_vkCreateDisplayPlaneSurfaceKHR;
    glad_debug_vkCreateEvent = glad_vkCreateEvent;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkCreateExecutionGraphPipelinesAMDX = glad_vkCreateExecutionGraphPipelinesAMDX;

#endif
    glad_debug_vkCreateFence = glad_vkCreateFence;
    glad_debug_vkCreateFramebuffer = glad_vkCreateFramebuffer;
    glad_debug_vkCreateGraphicsPipelines = glad_vkCreateGraphicsPipelines;
    glad_debug_vkCreateHeadlessSurfaceEXT = glad_vkCreateHeadlessSurfaceEXT;
#if defined(VK_USE_PLATFORM_IOS_MVK)
    glad_debug_vkCreateIOSSurfaceMVK = glad_vkCreateIOSSurfaceMVK;

#endif
    glad_debug_vkCreateImage = glad_vkCreateImage;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkCreateImagePipeSurfaceFUCHSIA = glad_vkCreateImagePipeSurfaceFUCHSIA;

#endif
    glad_debug_vkCreateImageView = glad_vkCreateImageView;
    glad_debug_vkCreateIndirectCommandsLayoutNV = glad_vkCreateIndirectCommandsLayoutNV;
    glad_debug_vkCreateInstance = glad_vkCreateInstance;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
    glad_debug_vkCreateMacOSSurfaceMVK = glad_vkCreateMacOSSurfaceMVK;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_debug_vkCreateMetalSurfaceEXT = glad_vkCreateMetalSurfaceEXT;

#endif
    glad_debug_vkCreateMicromapEXT = glad_vkCreateMicromapEXT;
    glad_debug_vkCreateOpticalFlowSessionNV = glad_vkCreateOpticalFlowSessionNV;
    glad_debug_vkCreatePipelineCache = glad_vkCreatePipelineCache;
    glad_debug_vkCreatePipelineLayout = glad_vkCreatePipelineLayout;
    glad_debug_vkCreatePrivateDataSlot = glad_vkCreatePrivateDataSlot;
    glad_debug_vkCreatePrivateDataSlotEXT = glad_vkCreatePrivateDataSlotEXT;
    glad_debug_vkCreateQueryPool = glad_vkCreateQueryPool;
    glad_debug_vkCreateRayTracingPipelinesKHR = glad_vkCreateRayTracingPipelinesKHR;
    glad_debug_vkCreateRayTracingPipelinesNV = glad_vkCreateRayTracingPipelinesNV;
    glad_debug_vkCreateRenderPass = glad_vkCreateRenderPass;
    glad_debug_vkCreateRenderPass2 = glad_vkCreateRenderPass2;
    glad_debug_vkCreateRenderPass2KHR = glad_vkCreateRenderPass2KHR;
    glad_debug_vkCreateSampler = glad_vkCreateSampler;
    glad_debug_vkCreateSamplerYcbcrConversion = glad_vkCreateSamplerYcbcrConversion;
    glad_debug_vkCreateSamplerYcbcrConversionKHR = glad_vkCreateSamplerYcbcrConversionKHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkCreateScreenSurfaceQNX = glad_vkCreateScreenSurfaceQNX;

#endif
    glad_debug_vkCreateSemaphore = glad_vkCreateSemaphore;
    glad_debug_vkCreateShaderModule = glad_vkCreateShaderModule;
    glad_debug_vkCreateShadersEXT = glad_vkCreateShadersEXT;
    glad_debug_vkCreateSharedSwapchainsKHR = glad_vkCreateSharedSwapchainsKHR;
#if defined(VK_USE_PLATFORM_GGP)
    glad_debug_vkCreateStreamDescriptorSurfaceGGP = glad_vkCreateStreamDescriptorSurfaceGGP;

#endif
    glad_debug_vkCreateSwapchainKHR = glad_vkCreateSwapchainKHR;
    glad_debug_vkCreateValidationCacheEXT = glad_vkCreateValidationCacheEXT;
#if defined(VK_USE_PLATFORM_VI_NN)
    glad_debug_vkCreateViSurfaceNN = glad_vkCreateViSurfaceNN;

#endif
    glad_debug_vkCreateVideoSessionKHR = glad_vkCreateVideoSessionKHR;
    glad_debug_vkCreateVideoSessionParametersKHR = glad_vkCreateVideoSessionParametersKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_debug_vkCreateWaylandSurfaceKHR = glad_vkCreateWaylandSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkCreateWin32SurfaceKHR = glad_vkCreateWin32SurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_debug_vkCreateXcbSurfaceKHR = glad_vkCreateXcbSurfaceKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_debug_vkCreateXlibSurfaceKHR = glad_vkCreateXlibSurfaceKHR;

#endif
    glad_debug_vkDebugMarkerSetObjectNameEXT = glad_vkDebugMarkerSetObjectNameEXT;
    glad_debug_vkDebugMarkerSetObjectTagEXT = glad_vkDebugMarkerSetObjectTagEXT;
    glad_debug_vkDebugReportMessageEXT = glad_vkDebugReportMessageEXT;
    glad_debug_vkDeferredOperationJoinKHR = glad_vkDeferredOperationJoinKHR;
    glad_debug_vkDestroyAccelerationStructureKHR = glad_vkDestroyAccelerationStructureKHR;
    glad_debug_vkDestroyAccelerationStructureNV = glad_vkDestroyAccelerationStructureNV;
    glad_debug_vkDestroyBuffer = glad_vkDestroyBuffer;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkDestroyBufferCollectionFUCHSIA = glad_vkDestroyBufferCollectionFUCHSIA;

#endif
    glad_debug_vkDestroyBufferView = glad_vkDestroyBufferView;
    glad_debug_vkDestroyCommandPool = glad_vkDestroyCommandPool;
    glad_debug_vkDestroyCuFunctionNVX = glad_vkDestroyCuFunctionNVX;
    glad_debug_vkDestroyCuModuleNVX = glad_vkDestroyCuModuleNVX;
    glad_debug_vkDestroyCudaFunctionNV = glad_vkDestroyCudaFunctionNV;
    glad_debug_vkDestroyCudaModuleNV = glad_vkDestroyCudaModuleNV;
    glad_debug_vkDestroyDebugReportCallbackEXT = glad_vkDestroyDebugReportCallbackEXT;
    glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_vkDestroyDebugUtilsMessengerEXT;
    glad_debug_vkDestroyDeferredOperationKHR = glad_vkDestroyDeferredOperationKHR;
    glad_debug_vkDestroyDescriptorPool = glad_vkDestroyDescriptorPool;
    glad_debug_vkDestroyDescriptorSetLayout = glad_vkDestroyDescriptorSetLayout;
    glad_debug_vkDestroyDescriptorUpdateTemplate = glad_vkDestroyDescriptorUpdateTemplate;
    glad_debug_vkDestroyDescriptorUpdateTemplateKHR = glad_vkDestroyDescriptorUpdateTemplateKHR;
    glad_debug_vkDestroyDevice = glad_vkDestroyDevice;
    glad_debug_vkDestroyEvent = glad_vkDestroyEvent;
    glad_debug_vkDestroyFence = glad_vkDestroyFence;
    glad_debug_vkDestroyFramebuffer = glad_vkDestroyFramebuffer;
    glad_debug_vkDestroyImage = glad_vkDestroyImage;
    glad_debug_vkDestroyImageView = glad_vkDestroyImageView;
    glad_debug_vkDestroyIndirectCommandsLayoutNV = glad_vkDestroyIndirectCommandsLayoutNV;
    glad_debug_vkDestroyInstance = glad_vkDestroyInstance;
    glad_debug_vkDestroyMicromapEXT = glad_vkDestroyMicromapEXT;
    glad_debug_vkDestroyOpticalFlowSessionNV = glad_vkDestroyOpticalFlowSessionNV;
    glad_debug_vkDestroyPipeline = glad_vkDestroyPipeline;
    glad_debug_vkDestroyPipelineCache = glad_vkDestroyPipelineCache;
    glad_debug_vkDestroyPipelineLayout = glad_vkDestroyPipelineLayout;
    glad_debug_vkDestroyPrivateDataSlot = glad_vkDestroyPrivateDataSlot;
    glad_debug_vkDestroyPrivateDataSlotEXT = glad_vkDestroyPrivateDataSlotEXT;
    glad_debug_vkDestroyQueryPool = glad_vkDestroyQueryPool;
    glad_debug_vkDestroyRenderPass = glad_vkDestroyRenderPass;
    glad_debug_vkDestroySampler = glad_vkDestroySampler;
    glad_debug_vkDestroySamplerYcbcrConversion = glad_vkDestroySamplerYcbcrConversion;
    glad_debug_vkDestroySamplerYcbcrConversionKHR = glad_vkDestroySamplerYcbcrConversionKHR;
    glad_debug_vkDestroySemaphore = glad_vkDestroySemaphore;
    glad_debug_vkDestroyShaderEXT = glad_vkDestroyShaderEXT;
    glad_debug_vkDestroyShaderModule = glad_vkDestroyShaderModule;
    glad_debug_vkDestroySurfaceKHR = glad_vkDestroySurfaceKHR;
    glad_debug_vkDestroySwapchainKHR = glad_vkDestroySwapchainKHR;
    glad_debug_vkDestroyValidationCacheEXT = glad_vkDestroyValidationCacheEXT;
    glad_debug_vkDestroyVideoSessionKHR = glad_vkDestroyVideoSessionKHR;
    glad_debug_vkDestroyVideoSessionParametersKHR = glad_vkDestroyVideoSessionParametersKHR;
    glad_debug_vkDeviceWaitIdle = glad_vkDeviceWaitIdle;
    glad_debug_vkDisplayPowerControlEXT = glad_vkDisplayPowerControlEXT;
    glad_debug_vkEndCommandBuffer = glad_vkEndCommandBuffer;
    glad_debug_vkEnumerateDeviceExtensionProperties = glad_vkEnumerateDeviceExtensionProperties;
    glad_debug_vkEnumerateDeviceLayerProperties = glad_vkEnumerateDeviceLayerProperties;
    glad_debug_vkEnumerateInstanceExtensionProperties = glad_vkEnumerateInstanceExtensionProperties;
    glad_debug_vkEnumerateInstanceLayerProperties = glad_vkEnumerateInstanceLayerProperties;
    glad_debug_vkEnumerateInstanceVersion = glad_vkEnumerateInstanceVersion;
    glad_debug_vkEnumeratePhysicalDeviceGroups = glad_vkEnumeratePhysicalDeviceGroups;
    glad_debug_vkEnumeratePhysicalDeviceGroupsKHR = glad_vkEnumeratePhysicalDeviceGroupsKHR;
    glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    glad_debug_vkEnumeratePhysicalDevices = glad_vkEnumeratePhysicalDevices;
#if defined(VK_USE_PLATFORM_METAL_EXT)
    glad_debug_vkExportMetalObjectsEXT = glad_vkExportMetalObjectsEXT;

#endif
    glad_debug_vkFlushMappedMemoryRanges = glad_vkFlushMappedMemoryRanges;
    glad_debug_vkFreeCommandBuffers = glad_vkFreeCommandBuffers;
    glad_debug_vkFreeDescriptorSets = glad_vkFreeDescriptorSets;
    glad_debug_vkFreeMemory = glad_vkFreeMemory;
    glad_debug_vkGetAccelerationStructureBuildSizesKHR = glad_vkGetAccelerationStructureBuildSizesKHR;
    glad_debug_vkGetAccelerationStructureDeviceAddressKHR = glad_vkGetAccelerationStructureDeviceAddressKHR;
    glad_debug_vkGetAccelerationStructureHandleNV = glad_vkGetAccelerationStructureHandleNV;
    glad_debug_vkGetAccelerationStructureMemoryRequirementsNV = glad_vkGetAccelerationStructureMemoryRequirementsNV;
    glad_debug_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = glad_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkGetAndroidHardwareBufferPropertiesANDROID = glad_vkGetAndroidHardwareBufferPropertiesANDROID;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetBufferCollectionPropertiesFUCHSIA = glad_vkGetBufferCollectionPropertiesFUCHSIA;

#endif
    glad_debug_vkGetBufferDeviceAddress = glad_vkGetBufferDeviceAddress;
    glad_debug_vkGetBufferDeviceAddressEXT = glad_vkGetBufferDeviceAddressEXT;
    glad_debug_vkGetBufferDeviceAddressKHR = glad_vkGetBufferDeviceAddressKHR;
    glad_debug_vkGetBufferMemoryRequirements = glad_vkGetBufferMemoryRequirements;
    glad_debug_vkGetBufferMemoryRequirements2 = glad_vkGetBufferMemoryRequirements2;
    glad_debug_vkGetBufferMemoryRequirements2KHR = glad_vkGetBufferMemoryRequirements2KHR;
    glad_debug_vkGetBufferOpaqueCaptureAddress = glad_vkGetBufferOpaqueCaptureAddress;
    glad_debug_vkGetBufferOpaqueCaptureAddressKHR = glad_vkGetBufferOpaqueCaptureAddressKHR;
    glad_debug_vkGetBufferOpaqueCaptureDescriptorDataEXT = glad_vkGetBufferOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetCalibratedTimestampsEXT = glad_vkGetCalibratedTimestampsEXT;
    glad_debug_vkGetCalibratedTimestampsKHR = glad_vkGetCalibratedTimestampsKHR;
    glad_debug_vkGetCudaModuleCacheNV = glad_vkGetCudaModuleCacheNV;
    glad_debug_vkGetDeferredOperationMaxConcurrencyKHR = glad_vkGetDeferredOperationMaxConcurrencyKHR;
    glad_debug_vkGetDeferredOperationResultKHR = glad_vkGetDeferredOperationResultKHR;
    glad_debug_vkGetDescriptorEXT = glad_vkGetDescriptorEXT;
    glad_debug_vkGetDescriptorSetHostMappingVALVE = glad_vkGetDescriptorSetHostMappingVALVE;
    glad_debug_vkGetDescriptorSetLayoutBindingOffsetEXT = glad_vkGetDescriptorSetLayoutBindingOffsetEXT;
    glad_debug_vkGetDescriptorSetLayoutHostMappingInfoVALVE = glad_vkGetDescriptorSetLayoutHostMappingInfoVALVE;
    glad_debug_vkGetDescriptorSetLayoutSizeEXT = glad_vkGetDescriptorSetLayoutSizeEXT;
    glad_debug_vkGetDescriptorSetLayoutSupport = glad_vkGetDescriptorSetLayoutSupport;
    glad_debug_vkGetDescriptorSetLayoutSupportKHR = glad_vkGetDescriptorSetLayoutSupportKHR;
    glad_debug_vkGetDeviceAccelerationStructureCompatibilityKHR = glad_vkGetDeviceAccelerationStructureCompatibilityKHR;
    glad_debug_vkGetDeviceBufferMemoryRequirements = glad_vkGetDeviceBufferMemoryRequirements;
    glad_debug_vkGetDeviceBufferMemoryRequirementsKHR = glad_vkGetDeviceBufferMemoryRequirementsKHR;
    glad_debug_vkGetDeviceFaultInfoEXT = glad_vkGetDeviceFaultInfoEXT;
    glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_vkGetDeviceGroupPeerMemoryFeatures;
    glad_debug_vkGetDeviceGroupPeerMemoryFeaturesKHR = glad_vkGetDeviceGroupPeerMemoryFeaturesKHR;
    glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_vkGetDeviceGroupPresentCapabilitiesKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetDeviceGroupSurfacePresentModes2EXT = glad_vkGetDeviceGroupSurfacePresentModes2EXT;

#endif
    glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_vkGetDeviceGroupSurfacePresentModesKHR;
    glad_debug_vkGetDeviceImageMemoryRequirements = glad_vkGetDeviceImageMemoryRequirements;
    glad_debug_vkGetDeviceImageMemoryRequirementsKHR = glad_vkGetDeviceImageMemoryRequirementsKHR;
    glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_vkGetDeviceImageSparseMemoryRequirements;
    glad_debug_vkGetDeviceImageSparseMemoryRequirementsKHR = glad_vkGetDeviceImageSparseMemoryRequirementsKHR;
    glad_debug_vkGetDeviceImageSubresourceLayoutKHR = glad_vkGetDeviceImageSubresourceLayoutKHR;
    glad_debug_vkGetDeviceMemoryCommitment = glad_vkGetDeviceMemoryCommitment;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_vkGetDeviceMemoryOpaqueCaptureAddress;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddressKHR = glad_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
    glad_debug_vkGetDeviceMicromapCompatibilityEXT = glad_vkGetDeviceMicromapCompatibilityEXT;
    glad_debug_vkGetDeviceProcAddr = glad_vkGetDeviceProcAddr;
    glad_debug_vkGetDeviceQueue = glad_vkGetDeviceQueue;
    glad_debug_vkGetDeviceQueue2 = glad_vkGetDeviceQueue2;
    glad_debug_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = glad_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
    glad_debug_vkGetDisplayModeProperties2KHR = glad_vkGetDisplayModeProperties2KHR;
    glad_debug_vkGetDisplayModePropertiesKHR = glad_vkGetDisplayModePropertiesKHR;
    glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_vkGetDisplayPlaneCapabilities2KHR;
    glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_vkGetDisplayPlaneCapabilitiesKHR;
    glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_vkGetDisplayPlaneSupportedDisplaysKHR;
    glad_debug_vkGetDrmDisplayEXT = glad_vkGetDrmDisplayEXT;
    glad_debug_vkGetDynamicRenderingTilePropertiesQCOM = glad_vkGetDynamicRenderingTilePropertiesQCOM;
    glad_debug_vkGetEncodedVideoSessionParametersKHR = glad_vkGetEncodedVideoSessionParametersKHR;
    glad_debug_vkGetEventStatus = glad_vkGetEventStatus;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkGetExecutionGraphPipelineNodeIndexAMDX = glad_vkGetExecutionGraphPipelineNodeIndexAMDX;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
    glad_debug_vkGetExecutionGraphPipelineScratchSizeAMDX = glad_vkGetExecutionGraphPipelineScratchSizeAMDX;

#endif
    glad_debug_vkGetFenceFdKHR = glad_vkGetFenceFdKHR;
    glad_debug_vkGetFenceStatus = glad_vkGetFenceStatus;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetFenceWin32HandleKHR = glad_vkGetFenceWin32HandleKHR;

#endif
    glad_debug_vkGetFramebufferTilePropertiesQCOM = glad_vkGetFramebufferTilePropertiesQCOM;
    glad_debug_vkGetGeneratedCommandsMemoryRequirementsNV = glad_vkGetGeneratedCommandsMemoryRequirementsNV;
    glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_vkGetImageDrmFormatModifierPropertiesEXT;
    glad_debug_vkGetImageMemoryRequirements = glad_vkGetImageMemoryRequirements;
    glad_debug_vkGetImageMemoryRequirements2 = glad_vkGetImageMemoryRequirements2;
    glad_debug_vkGetImageMemoryRequirements2KHR = glad_vkGetImageMemoryRequirements2KHR;
    glad_debug_vkGetImageOpaqueCaptureDescriptorDataEXT = glad_vkGetImageOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetImageSparseMemoryRequirements = glad_vkGetImageSparseMemoryRequirements;
    glad_debug_vkGetImageSparseMemoryRequirements2 = glad_vkGetImageSparseMemoryRequirements2;
    glad_debug_vkGetImageSparseMemoryRequirements2KHR = glad_vkGetImageSparseMemoryRequirements2KHR;
    glad_debug_vkGetImageSubresourceLayout = glad_vkGetImageSubresourceLayout;
    glad_debug_vkGetImageSubresourceLayout2EXT = glad_vkGetImageSubresourceLayout2EXT;
    glad_debug_vkGetImageSubresourceLayout2KHR = glad_vkGetImageSubresourceLayout2KHR;
    glad_debug_vkGetImageViewAddressNVX = glad_vkGetImageViewAddressNVX;
    glad_debug_vkGetImageViewHandleNVX = glad_vkGetImageViewHandleNVX;
    glad_debug_vkGetImageViewOpaqueCaptureDescriptorDataEXT = glad_vkGetImageViewOpaqueCaptureDescriptorDataEXT;
    glad_debug_vkGetInstanceProcAddr = glad_vkGetInstanceProcAddr;
    glad_debug_vkGetLatencyTimingsNV = glad_vkGetLatencyTimingsNV;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
    glad_debug_vkGetMemoryAndroidHardwareBufferANDROID = glad_vkGetMemoryAndroidHardwareBufferANDROID;

#endif
    glad_debug_vkGetMemoryFdKHR = glad_vkGetMemoryFdKHR;
    glad_debug_vkGetMemoryFdPropertiesKHR = glad_vkGetMemoryFdPropertiesKHR;
    glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_vkGetMemoryHostPointerPropertiesEXT;
    glad_debug_vkGetMemoryRemoteAddressNV = glad_vkGetMemoryRemoteAddressNV;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandleKHR = glad_vkGetMemoryWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandleNV = glad_vkGetMemoryWin32HandleNV;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetMemoryWin32HandlePropertiesKHR = glad_vkGetMemoryWin32HandlePropertiesKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetMemoryZirconHandleFUCHSIA = glad_vkGetMemoryZirconHandleFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetMemoryZirconHandlePropertiesFUCHSIA = glad_vkGetMemoryZirconHandlePropertiesFUCHSIA;

#endif
    glad_debug_vkGetMicromapBuildSizesEXT = glad_vkGetMicromapBuildSizesEXT;
    glad_debug_vkGetPastPresentationTimingGOOGLE = glad_vkGetPastPresentationTimingGOOGLE;
    glad_debug_vkGetPerformanceParameterINTEL = glad_vkGetPerformanceParameterINTEL;
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
    glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = glad_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
    glad_debug_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = glad_vkGetPhysicalDeviceDirectFBPresentationSupportEXT;

#endif
    glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_vkGetPhysicalDeviceDisplayProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_vkGetPhysicalDeviceDisplayPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_vkGetPhysicalDeviceExternalBufferProperties;
    glad_debug_vkGetPhysicalDeviceExternalBufferPropertiesKHR = glad_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_vkGetPhysicalDeviceExternalFenceProperties;
    glad_debug_vkGetPhysicalDeviceExternalFencePropertiesKHR = glad_vkGetPhysicalDeviceExternalFencePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = glad_vkGetPhysicalDeviceExternalImageFormatPropertiesNV;
    glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_vkGetPhysicalDeviceExternalSemaphoreProperties;
    glad_debug_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = glad_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceFeatures = glad_vkGetPhysicalDeviceFeatures;
    glad_debug_vkGetPhysicalDeviceFeatures2 = glad_vkGetPhysicalDeviceFeatures2;
    glad_debug_vkGetPhysicalDeviceFeatures2KHR = glad_vkGetPhysicalDeviceFeatures2KHR;
    glad_debug_vkGetPhysicalDeviceFormatProperties = glad_vkGetPhysicalDeviceFormatProperties;
    glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_vkGetPhysicalDeviceFormatProperties2;
    glad_debug_vkGetPhysicalDeviceFormatProperties2KHR = glad_vkGetPhysicalDeviceFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_vkGetPhysicalDeviceFragmentShadingRatesKHR;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties = glad_vkGetPhysicalDeviceImageFormatProperties;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_vkGetPhysicalDeviceImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2KHR = glad_vkGetPhysicalDeviceImageFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceMemoryProperties = glad_vkGetPhysicalDeviceMemoryProperties;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_vkGetPhysicalDeviceMemoryProperties2;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2KHR = glad_vkGetPhysicalDeviceMemoryProperties2KHR;
    glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_vkGetPhysicalDeviceMultisamplePropertiesEXT;
    glad_debug_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = glad_vkGetPhysicalDeviceOpticalFlowImageFormatsNV;
    glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_vkGetPhysicalDevicePresentRectanglesKHR;
    glad_debug_vkGetPhysicalDeviceProperties = glad_vkGetPhysicalDeviceProperties;
    glad_debug_vkGetPhysicalDeviceProperties2 = glad_vkGetPhysicalDeviceProperties2;
    glad_debug_vkGetPhysicalDeviceProperties2KHR = glad_vkGetPhysicalDeviceProperties2KHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties = glad_vkGetPhysicalDeviceQueueFamilyProperties;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_vkGetPhysicalDeviceQueueFamilyProperties2;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2KHR = glad_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetPhysicalDeviceScreenPresentationSupportQNX = glad_vkGetPhysicalDeviceScreenPresentationSupportQNX;

#endif
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties = glad_vkGetPhysicalDeviceSparseImageFormatProperties;
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_vkGetPhysicalDeviceSparseImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = glad_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
    glad_debug_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = glad_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_vkGetPhysicalDeviceSurfaceFormats2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_vkGetPhysicalDeviceSurfaceFormatsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetPhysicalDeviceSurfacePresentModes2EXT = glad_vkGetPhysicalDeviceSurfacePresentModes2EXT;

#endif
    glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_vkGetPhysicalDeviceSurfacePresentModesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_vkGetPhysicalDeviceSurfaceSupportKHR;
    glad_debug_vkGetPhysicalDeviceToolProperties = glad_vkGetPhysicalDeviceToolProperties;
    glad_debug_vkGetPhysicalDeviceToolPropertiesEXT = glad_vkGetPhysicalDeviceToolPropertiesEXT;
    glad_debug_vkGetPhysicalDeviceVideoCapabilitiesKHR = glad_vkGetPhysicalDeviceVideoCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = glad_vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceVideoFormatPropertiesKHR = glad_vkGetPhysicalDeviceVideoFormatPropertiesKHR;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
    glad_debug_vkGetPhysicalDeviceWaylandPresentationSupportKHR = glad_vkGetPhysicalDeviceWaylandPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetPhysicalDeviceWin32PresentationSupportKHR = glad_vkGetPhysicalDeviceWin32PresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
    glad_debug_vkGetPhysicalDeviceXcbPresentationSupportKHR = glad_vkGetPhysicalDeviceXcbPresentationSupportKHR;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
    glad_debug_vkGetPhysicalDeviceXlibPresentationSupportKHR = glad_vkGetPhysicalDeviceXlibPresentationSupportKHR;

#endif
    glad_debug_vkGetPipelineCacheData = glad_vkGetPipelineCacheData;
    glad_debug_vkGetPipelineExecutableInternalRepresentationsKHR = glad_vkGetPipelineExecutableInternalRepresentationsKHR;
    glad_debug_vkGetPipelineExecutablePropertiesKHR = glad_vkGetPipelineExecutablePropertiesKHR;
    glad_debug_vkGetPipelineExecutableStatisticsKHR = glad_vkGetPipelineExecutableStatisticsKHR;
    glad_debug_vkGetPipelineIndirectDeviceAddressNV = glad_vkGetPipelineIndirectDeviceAddressNV;
    glad_debug_vkGetPipelineIndirectMemoryRequirementsNV = glad_vkGetPipelineIndirectMemoryRequirementsNV;
    glad_debug_vkGetPipelinePropertiesEXT = glad_vkGetPipelinePropertiesEXT;
    glad_debug_vkGetPrivateData = glad_vkGetPrivateData;
    glad_debug_vkGetPrivateDataEXT = glad_vkGetPrivateDataEXT;
    glad_debug_vkGetQueryPoolResults = glad_vkGetQueryPoolResults;
    glad_debug_vkGetQueueCheckpointData2NV = glad_vkGetQueueCheckpointData2NV;
    glad_debug_vkGetQueueCheckpointDataNV = glad_vkGetQueueCheckpointDataNV;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
    glad_debug_vkGetRandROutputDisplayEXT = glad_vkGetRandROutputDisplayEXT;

#endif
    glad_debug_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = glad_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
    glad_debug_vkGetRayTracingShaderGroupHandlesKHR = glad_vkGetRayTracingShaderGroupHandlesKHR;
    glad_debug_vkGetRayTracingShaderGroupHandlesNV = glad_vkGetRayTracingShaderGroupHandlesNV;
    glad_debug_vkGetRayTracingShaderGroupStackSizeKHR = glad_vkGetRayTracingShaderGroupStackSizeKHR;
    glad_debug_vkGetRefreshCycleDurationGOOGLE = glad_vkGetRefreshCycleDurationGOOGLE;
    glad_debug_vkGetRenderAreaGranularity = glad_vkGetRenderAreaGranularity;
    glad_debug_vkGetRenderingAreaGranularityKHR = glad_vkGetRenderingAreaGranularityKHR;
    glad_debug_vkGetSamplerOpaqueCaptureDescriptorDataEXT = glad_vkGetSamplerOpaqueCaptureDescriptorDataEXT;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetScreenBufferPropertiesQNX = glad_vkGetScreenBufferPropertiesQNX;

#endif
    glad_debug_vkGetSemaphoreCounterValue = glad_vkGetSemaphoreCounterValue;
    glad_debug_vkGetSemaphoreCounterValueKHR = glad_vkGetSemaphoreCounterValueKHR;
    glad_debug_vkGetSemaphoreFdKHR = glad_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetSemaphoreWin32HandleKHR = glad_vkGetSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkGetSemaphoreZirconHandleFUCHSIA = glad_vkGetSemaphoreZirconHandleFUCHSIA;

#endif
    glad_debug_vkGetShaderBinaryDataEXT = glad_vkGetShaderBinaryDataEXT;
    glad_debug_vkGetShaderInfoAMD = glad_vkGetShaderInfoAMD;
    glad_debug_vkGetShaderModuleCreateInfoIdentifierEXT = glad_vkGetShaderModuleCreateInfoIdentifierEXT;
    glad_debug_vkGetShaderModuleIdentifierEXT = glad_vkGetShaderModuleIdentifierEXT;
    glad_debug_vkGetSwapchainCounterEXT = glad_vkGetSwapchainCounterEXT;
    glad_debug_vkGetSwapchainImagesKHR = glad_vkGetSwapchainImagesKHR;
    glad_debug_vkGetSwapchainStatusKHR = glad_vkGetSwapchainStatusKHR;
    glad_debug_vkGetValidationCacheDataEXT = glad_vkGetValidationCacheDataEXT;
    glad_debug_vkGetVideoSessionMemoryRequirementsKHR = glad_vkGetVideoSessionMemoryRequirementsKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetWinrtDisplayNV = glad_vkGetWinrtDisplayNV;

#endif
    glad_debug_vkImportFenceFdKHR = glad_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkImportFenceWin32HandleKHR = glad_vkImportFenceWin32HandleKHR;

#endif
    glad_debug_vkImportSemaphoreFdKHR = glad_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkImportSemaphoreWin32HandleKHR = glad_vkImportSemaphoreWin32HandleKHR;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkImportSemaphoreZirconHandleFUCHSIA = glad_vkImportSemaphoreZirconHandleFUCHSIA;

#endif
    glad_debug_vkInitializePerformanceApiINTEL = glad_vkInitializePerformanceApiINTEL;
    glad_debug_vkInvalidateMappedMemoryRanges = glad_vkInvalidateMappedMemoryRanges;
    glad_debug_vkLatencySleepNV = glad_vkLatencySleepNV;
    glad_debug_vkMapMemory = glad_vkMapMemory;
    glad_debug_vkMapMemory2KHR = glad_vkMapMemory2KHR;
    glad_debug_vkMergePipelineCaches = glad_vkMergePipelineCaches;
    glad_debug_vkMergeValidationCachesEXT = glad_vkMergeValidationCachesEXT;
    glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_vkQueueBeginDebugUtilsLabelEXT;
    glad_debug_vkQueueBindSparse = glad_vkQueueBindSparse;
    glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_vkQueueEndDebugUtilsLabelEXT;
    glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_vkQueueInsertDebugUtilsLabelEXT;
    glad_debug_vkQueueNotifyOutOfBandNV = glad_vkQueueNotifyOutOfBandNV;
    glad_debug_vkQueuePresentKHR = glad_vkQueuePresentKHR;
    glad_debug_vkQueueSetPerformanceConfigurationINTEL = glad_vkQueueSetPerformanceConfigurationINTEL;
    glad_debug_vkQueueSubmit = glad_vkQueueSubmit;
    glad_debug_vkQueueSubmit2 = glad_vkQueueSubmit2;
    glad_debug_vkQueueSubmit2KHR = glad_vkQueueSubmit2KHR;
    glad_debug_vkQueueWaitIdle = glad_vkQueueWaitIdle;
    glad_debug_vkRegisterDeviceEventEXT = glad_vkRegisterDeviceEventEXT;
    glad_debug_vkRegisterDisplayEventEXT = glad_vkRegisterDisplayEventEXT;
    glad_debug_vkReleaseDisplayEXT = glad_vkReleaseDisplayEXT;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkReleaseFullScreenExclusiveModeEXT = glad_vkReleaseFullScreenExclusiveModeEXT;

#endif
    glad_debug_vkReleasePerformanceConfigurationINTEL = glad_vkReleasePerformanceConfigurationINTEL;
    glad_debug_vkReleaseProfilingLockKHR = glad_vkReleaseProfilingLockKHR;
    glad_debug_vkReleaseSwapchainImagesEXT = glad_vkReleaseSwapchainImagesEXT;
    glad_debug_vkResetCommandBuffer = glad_vkResetCommandBuffer;
    glad_debug_vkResetCommandPool = glad_vkResetCommandPool;
    glad_debug_vkResetDescriptorPool = glad_vkResetDescriptorPool;
    glad_debug_vkResetEvent = glad_vkResetEvent;
    glad_debug_vkResetFences = glad_vkResetFences;
    glad_debug_vkResetQueryPool = glad_vkResetQueryPool;
    glad_debug_vkResetQueryPoolEXT = glad_vkResetQueryPoolEXT;
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkSetBufferCollectionBufferConstraintsFUCHSIA = glad_vkSetBufferCollectionBufferConstraintsFUCHSIA;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
    glad_debug_vkSetBufferCollectionImageConstraintsFUCHSIA = glad_vkSetBufferCollectionImageConstraintsFUCHSIA;

#endif
    glad_debug_vkSetDebugUtilsObjectNameEXT = glad_vkSetDebugUtilsObjectNameEXT;
    glad_debug_vkSetDebugUtilsObjectTagEXT = glad_vkSetDebugUtilsObjectTagEXT;
    glad_debug_vkSetDeviceMemoryPriorityEXT = glad_vkSetDeviceMemoryPriorityEXT;
    glad_debug_vkSetEvent = glad_vkSetEvent;
    glad_debug_vkSetHdrMetadataEXT = glad_vkSetHdrMetadataEXT;
    glad_debug_vkSetLatencyMarkerNV = glad_vkSetLatencyMarkerNV;
    glad_debug_vkSetLatencySleepModeNV = glad_vkSetLatencySleepModeNV;
    glad_debug_vkSetLocalDimmingAMD = glad_vkSetLocalDimmingAMD;
    glad_debug_vkSetPrivateData = glad_vkSetPrivateData;
    glad_debug_vkSetPrivateDataEXT = glad_vkSetPrivateDataEXT;
    glad_debug_vkSignalSemaphore = glad_vkSignalSemaphore;
    glad_debug_vkSignalSemaphoreKHR = glad_vkSignalSemaphoreKHR;
    glad_debug_vkSubmitDebugUtilsMessageEXT = glad_vkSubmitDebugUtilsMessageEXT;
    glad_debug_vkTransitionImageLayoutEXT = glad_vkTransitionImageLayoutEXT;
    glad_debug_vkTrimCommandPool = glad_vkTrimCommandPool;
    glad_debug_vkTrimCommandPoolKHR = glad_vkTrimCommandPoolKHR;
    glad_debug_vkUninitializePerformanceApiINTEL = glad_vkUninitializePerformanceApiINTEL;
    glad_debug_vkUnmapMemory = glad_vkUnmapMemory;
    glad_debug_vkUnmapMemory2KHR = glad_vkUnmapMemory2KHR;
    glad_debug_vkUpdateDescriptorSetWithTemplate = glad_vkUpdateDescriptorSetWithTemplate;
    glad_debug_vkUpdateDescriptorSetWithTemplateKHR = glad_vkUpdateDescriptorSetWithTemplateKHR;
    glad_debug_vkUpdateDescriptorSets = glad_vkUpdateDescriptorSets;
    glad_debug_vkUpdateVideoSessionParametersKHR = glad_vkUpdateVideoSessionParametersKHR;
    glad_debug_vkWaitForFences = glad_vkWaitForFences;
    glad_debug_vkWaitForPresentKHR = glad_vkWaitForPresentKHR;
    glad_debug_vkWaitSemaphores = glad_vkWaitSemaphores;
    glad_debug_vkWaitSemaphoresKHR = glad_vkWaitSemaphoresKHR;
    glad_debug_vkWriteAccelerationStructuresPropertiesKHR = glad_vkWriteAccelerationStructuresPropertiesKHR;
    glad_debug_vkWriteMicromapsPropertiesEXT = glad_vkWriteMicromapsPropertiesEXT;
}


#ifdef __cplusplus
}
#endif
