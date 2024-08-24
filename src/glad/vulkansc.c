/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glad/vulkansc.h>

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



int GLAD_VKSC_VERSION_1_0 = 0;
int GLAD_VK_VERSION_1_1 = 0;
int GLAD_VK_VERSION_1_2 = 0;
int GLAD_VK_VERSION_1_3 = 0;
int GLAD_VK_EXT_4444_formats = 0;
int GLAD_VK_EXT_application_parameters = 0;
int GLAD_VK_EXT_astc_decode_mode = 0;
int GLAD_VK_EXT_blend_operation_advanced = 0;
int GLAD_VK_EXT_color_write_enable = 0;
int GLAD_VK_EXT_conservative_rasterization = 0;
int GLAD_VK_EXT_custom_border_color = 0;
int GLAD_VK_EXT_debug_utils = 0;
int GLAD_VK_EXT_depth_clip_enable = 0;
int GLAD_VK_EXT_depth_range_unrestricted = 0;
int GLAD_VK_EXT_direct_mode_display = 0;
int GLAD_VK_EXT_discard_rectangles = 0;
int GLAD_VK_EXT_display_control = 0;
int GLAD_VK_EXT_display_surface_counter = 0;
int GLAD_VK_EXT_extended_dynamic_state = 0;
int GLAD_VK_EXT_extended_dynamic_state2 = 0;
int GLAD_VK_EXT_external_memory_dma_buf = 0;
int GLAD_VK_EXT_external_memory_host = 0;
int GLAD_VK_EXT_filter_cubic = 0;
int GLAD_VK_EXT_fragment_shader_interlock = 0;
int GLAD_VK_EXT_hdr_metadata = 0;
int GLAD_VK_EXT_headless_surface = 0;
int GLAD_VK_EXT_image_drm_format_modifier = 0;
int GLAD_VK_EXT_image_robustness = 0;
int GLAD_VK_EXT_index_type_uint8 = 0;
int GLAD_VK_EXT_line_rasterization = 0;
int GLAD_VK_EXT_memory_budget = 0;
int GLAD_VK_EXT_pci_bus_info = 0;
int GLAD_VK_EXT_post_depth_coverage = 0;
int GLAD_VK_EXT_queue_family_foreign = 0;
int GLAD_VK_EXT_robustness2 = 0;
int GLAD_VK_EXT_sample_locations = 0;
int GLAD_VK_EXT_shader_atomic_float = 0;
int GLAD_VK_EXT_shader_demote_to_helper_invocation = 0;
int GLAD_VK_EXT_shader_image_atomic_int64 = 0;
int GLAD_VK_EXT_shader_stencil_export = 0;
int GLAD_VK_EXT_subgroup_size_control = 0;
int GLAD_VK_EXT_swapchain_colorspace = 0;
int GLAD_VK_EXT_texel_buffer_alignment = 0;
int GLAD_VK_EXT_texture_compression_astc_hdr = 0;
int GLAD_VK_EXT_validation_features = 0;
int GLAD_VK_EXT_vertex_input_dynamic_state = 0;
int GLAD_VK_EXT_ycbcr_2plane_444_formats = 0;
int GLAD_VK_EXT_ycbcr_image_arrays = 0;
int GLAD_VK_KHR_calibrated_timestamps = 0;
int GLAD_VK_KHR_copy_commands2 = 0;
int GLAD_VK_KHR_display = 0;
int GLAD_VK_KHR_display_swapchain = 0;
int GLAD_VK_KHR_external_fence_fd = 0;
int GLAD_VK_KHR_external_memory_fd = 0;
int GLAD_VK_KHR_external_semaphore_fd = 0;
int GLAD_VK_KHR_fragment_shading_rate = 0;
int GLAD_VK_KHR_get_display_properties2 = 0;
int GLAD_VK_KHR_get_surface_capabilities2 = 0;
int GLAD_VK_KHR_global_priority = 0;
int GLAD_VK_KHR_incremental_present = 0;
int GLAD_VK_KHR_index_type_uint8 = 0;
int GLAD_VK_KHR_line_rasterization = 0;
int GLAD_VK_KHR_object_refresh = 0;
int GLAD_VK_KHR_performance_query = 0;
int GLAD_VK_KHR_shader_clock = 0;
int GLAD_VK_KHR_shader_terminate_invocation = 0;
int GLAD_VK_KHR_shared_presentable_image = 0;
int GLAD_VK_KHR_surface = 0;
int GLAD_VK_KHR_swapchain = 0;
int GLAD_VK_KHR_swapchain_mutable_format = 0;
int GLAD_VK_KHR_synchronization2 = 0;
int GLAD_VK_KHR_vertex_attribute_divisor = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLAD_VK_NV_acquire_winrt_display = 0;

#endif
#if defined(VK_USE_PLATFORM_SCI)
int GLAD_VK_NV_external_memory_sci_buf = 0;

#endif
#if defined(VK_USE_PLATFORM_SCI)
int GLAD_VK_NV_external_sci_sync = 0;

#endif
#if defined(VK_USE_PLATFORM_SCI)
int GLAD_VK_NV_external_sci_sync2 = 0;

#endif
int GLAD_VK_NV_private_vendor_info = 0;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
int GLAD_VK_QNX_external_memory_screen_buffer = 0;

#endif


static void _pre_call_vulkansc_callback_default(const char *name, GLADapiproc apiproc, int len_args, ...) {
    GLAD_UNUSED(name);
    GLAD_UNUSED(apiproc);
    GLAD_UNUSED(len_args);
}
static void _post_call_vulkansc_callback_default(void *ret, const char *name, GLADapiproc apiproc, int len_args, ...) {
    GLAD_UNUSED(ret);
    GLAD_UNUSED(name);
    GLAD_UNUSED(apiproc);
    GLAD_UNUSED(len_args);
}

static GLADprecallback _pre_call_vulkansc_callback = _pre_call_vulkansc_callback_default;
void gladSetVulkanscPreCallback(GLADprecallback cb) {
    _pre_call_vulkansc_callback = cb;
}
static GLADpostcallback _post_call_vulkansc_callback = _post_call_vulkansc_callback_default;
void gladSetVulkanscPostCallback(GLADpostcallback cb) {
    _post_call_vulkansc_callback = cb;
}

PFN_vkAcquireNextImage2KHR glad_vkAcquireNextImage2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireNextImage2KHR(VkDevice device, const VkAcquireNextImageInfoKHR * pAcquireInfo, uint32_t * pImageIndex) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkAcquireNextImage2KHR", (GLADapiproc) glad_vkAcquireNextImage2KHR, 3, device, pAcquireInfo, pImageIndex);
    ret = glad_vkAcquireNextImage2KHR(device, pAcquireInfo, pImageIndex);
    _post_call_vulkansc_callback((void*) &ret, "vkAcquireNextImage2KHR", (GLADapiproc) glad_vkAcquireNextImage2KHR, 3, device, pAcquireInfo, pImageIndex);
    return ret;
}
PFN_vkAcquireNextImage2KHR glad_debug_vkAcquireNextImage2KHR = glad_debug_impl_vkAcquireNextImage2KHR;
PFN_vkAcquireNextImageKHR glad_vkAcquireNextImageKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireNextImageKHR(VkDevice device, VkSwapchainKHR swapchain, uint64_t timeout, VkSemaphore semaphore, VkFence fence, uint32_t * pImageIndex) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkAcquireNextImageKHR", (GLADapiproc) glad_vkAcquireNextImageKHR, 6, device, swapchain, timeout, semaphore, fence, pImageIndex);
    ret = glad_vkAcquireNextImageKHR(device, swapchain, timeout, semaphore, fence, pImageIndex);
    _post_call_vulkansc_callback((void*) &ret, "vkAcquireNextImageKHR", (GLADapiproc) glad_vkAcquireNextImageKHR, 6, device, swapchain, timeout, semaphore, fence, pImageIndex);
    return ret;
}
PFN_vkAcquireNextImageKHR glad_debug_vkAcquireNextImageKHR = glad_debug_impl_vkAcquireNextImageKHR;
PFN_vkAcquireProfilingLockKHR glad_vkAcquireProfilingLockKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireProfilingLockKHR(VkDevice device, const VkAcquireProfilingLockInfoKHR * pInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkAcquireProfilingLockKHR", (GLADapiproc) glad_vkAcquireProfilingLockKHR, 2, device, pInfo);
    ret = glad_vkAcquireProfilingLockKHR(device, pInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkAcquireProfilingLockKHR", (GLADapiproc) glad_vkAcquireProfilingLockKHR, 2, device, pInfo);
    return ret;
}
PFN_vkAcquireProfilingLockKHR glad_debug_vkAcquireProfilingLockKHR = glad_debug_impl_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireWinrtDisplayNV glad_vkAcquireWinrtDisplayNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkAcquireWinrtDisplayNV(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkAcquireWinrtDisplayNV", (GLADapiproc) glad_vkAcquireWinrtDisplayNV, 2, physicalDevice, display);
    ret = glad_vkAcquireWinrtDisplayNV(physicalDevice, display);
    _post_call_vulkansc_callback((void*) &ret, "vkAcquireWinrtDisplayNV", (GLADapiproc) glad_vkAcquireWinrtDisplayNV, 2, physicalDevice, display);
    return ret;
}
PFN_vkAcquireWinrtDisplayNV glad_debug_vkAcquireWinrtDisplayNV = glad_debug_impl_vkAcquireWinrtDisplayNV;

#endif
PFN_vkBindBufferMemory2 glad_vkBindBufferMemory2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindBufferMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindBufferMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkBindBufferMemory2", (GLADapiproc) glad_vkBindBufferMemory2, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindBufferMemory2(device, bindInfoCount, pBindInfos);
    _post_call_vulkansc_callback((void*) &ret, "vkBindBufferMemory2", (GLADapiproc) glad_vkBindBufferMemory2, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindBufferMemory2 glad_debug_vkBindBufferMemory2 = glad_debug_impl_vkBindBufferMemory2;
PFN_vkBindImageMemory2 glad_vkBindImageMemory2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkBindImageMemory2(VkDevice device, uint32_t bindInfoCount, const VkBindImageMemoryInfo * pBindInfos) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkBindImageMemory2", (GLADapiproc) glad_vkBindImageMemory2, 3, device, bindInfoCount, pBindInfos);
    ret = glad_vkBindImageMemory2(device, bindInfoCount, pBindInfos);
    _post_call_vulkansc_callback((void*) &ret, "vkBindImageMemory2", (GLADapiproc) glad_vkBindImageMemory2, 3, device, bindInfoCount, pBindInfos);
    return ret;
}
PFN_vkBindImageMemory2 glad_debug_vkBindImageMemory2 = glad_debug_impl_vkBindImageMemory2;
PFN_vkCmdBeginDebugUtilsLabelEXT glad_vkCmdBeginDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkansc_callback("vkCmdBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdBeginDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    glad_vkCmdBeginDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdBeginDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    
}
PFN_vkCmdBeginDebugUtilsLabelEXT glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT;
PFN_vkCmdBeginRenderPass2 glad_vkCmdBeginRenderPass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRenderPass2(VkCommandBuffer commandBuffer, const VkRenderPassBeginInfo * pRenderPassBegin, const VkSubpassBeginInfo * pSubpassBeginInfo) {
    _pre_call_vulkansc_callback("vkCmdBeginRenderPass2", (GLADapiproc) glad_vkCmdBeginRenderPass2, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    glad_vkCmdBeginRenderPass2(commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdBeginRenderPass2", (GLADapiproc) glad_vkCmdBeginRenderPass2, 3, commandBuffer, pRenderPassBegin, pSubpassBeginInfo);
    
}
PFN_vkCmdBeginRenderPass2 glad_debug_vkCmdBeginRenderPass2 = glad_debug_impl_vkCmdBeginRenderPass2;
PFN_vkCmdBeginRendering glad_vkCmdBeginRendering = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBeginRendering(VkCommandBuffer commandBuffer, const VkRenderingInfo * pRenderingInfo) {
    _pre_call_vulkansc_callback("vkCmdBeginRendering", (GLADapiproc) glad_vkCmdBeginRendering, 2, commandBuffer, pRenderingInfo);
    glad_vkCmdBeginRendering(commandBuffer, pRenderingInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdBeginRendering", (GLADapiproc) glad_vkCmdBeginRendering, 2, commandBuffer, pRenderingInfo);
    
}
PFN_vkCmdBeginRendering glad_debug_vkCmdBeginRendering = glad_debug_impl_vkCmdBeginRendering;
PFN_vkCmdBindVertexBuffers2 glad_vkCmdBindVertexBuffers2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindVertexBuffers2(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides) {
    _pre_call_vulkansc_callback("vkCmdBindVertexBuffers2", (GLADapiproc) glad_vkCmdBindVertexBuffers2, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    glad_vkCmdBindVertexBuffers2(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    _post_call_vulkansc_callback(NULL, "vkCmdBindVertexBuffers2", (GLADapiproc) glad_vkCmdBindVertexBuffers2, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    
}
PFN_vkCmdBindVertexBuffers2 glad_debug_vkCmdBindVertexBuffers2 = glad_debug_impl_vkCmdBindVertexBuffers2;
PFN_vkCmdBindVertexBuffers2EXT glad_vkCmdBindVertexBuffers2EXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBindVertexBuffers2EXT(VkCommandBuffer commandBuffer, uint32_t firstBinding, uint32_t bindingCount, const VkBuffer * pBuffers, const VkDeviceSize * pOffsets, const VkDeviceSize * pSizes, const VkDeviceSize * pStrides) {
    _pre_call_vulkansc_callback("vkCmdBindVertexBuffers2EXT", (GLADapiproc) glad_vkCmdBindVertexBuffers2EXT, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    glad_vkCmdBindVertexBuffers2EXT(commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    _post_call_vulkansc_callback(NULL, "vkCmdBindVertexBuffers2EXT", (GLADapiproc) glad_vkCmdBindVertexBuffers2EXT, 7, commandBuffer, firstBinding, bindingCount, pBuffers, pOffsets, pSizes, pStrides);
    
}
PFN_vkCmdBindVertexBuffers2EXT glad_debug_vkCmdBindVertexBuffers2EXT = glad_debug_impl_vkCmdBindVertexBuffers2EXT;
PFN_vkCmdBlitImage2 glad_vkCmdBlitImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBlitImage2(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo) {
    _pre_call_vulkansc_callback("vkCmdBlitImage2", (GLADapiproc) glad_vkCmdBlitImage2, 2, commandBuffer, pBlitImageInfo);
    glad_vkCmdBlitImage2(commandBuffer, pBlitImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdBlitImage2", (GLADapiproc) glad_vkCmdBlitImage2, 2, commandBuffer, pBlitImageInfo);
    
}
PFN_vkCmdBlitImage2 glad_debug_vkCmdBlitImage2 = glad_debug_impl_vkCmdBlitImage2;
PFN_vkCmdBlitImage2KHR glad_vkCmdBlitImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdBlitImage2KHR(VkCommandBuffer commandBuffer, const VkBlitImageInfo2 * pBlitImageInfo) {
    _pre_call_vulkansc_callback("vkCmdBlitImage2KHR", (GLADapiproc) glad_vkCmdBlitImage2KHR, 2, commandBuffer, pBlitImageInfo);
    glad_vkCmdBlitImage2KHR(commandBuffer, pBlitImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdBlitImage2KHR", (GLADapiproc) glad_vkCmdBlitImage2KHR, 2, commandBuffer, pBlitImageInfo);
    
}
PFN_vkCmdBlitImage2KHR glad_debug_vkCmdBlitImage2KHR = glad_debug_impl_vkCmdBlitImage2KHR;
PFN_vkCmdCopyBuffer2 glad_vkCmdCopyBuffer2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBuffer2(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyBuffer2", (GLADapiproc) glad_vkCmdCopyBuffer2, 2, commandBuffer, pCopyBufferInfo);
    glad_vkCmdCopyBuffer2(commandBuffer, pCopyBufferInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyBuffer2", (GLADapiproc) glad_vkCmdCopyBuffer2, 2, commandBuffer, pCopyBufferInfo);
    
}
PFN_vkCmdCopyBuffer2 glad_debug_vkCmdCopyBuffer2 = glad_debug_impl_vkCmdCopyBuffer2;
PFN_vkCmdCopyBuffer2KHR glad_vkCmdCopyBuffer2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferInfo2 * pCopyBufferInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyBuffer2KHR", (GLADapiproc) glad_vkCmdCopyBuffer2KHR, 2, commandBuffer, pCopyBufferInfo);
    glad_vkCmdCopyBuffer2KHR(commandBuffer, pCopyBufferInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyBuffer2KHR", (GLADapiproc) glad_vkCmdCopyBuffer2KHR, 2, commandBuffer, pCopyBufferInfo);
    
}
PFN_vkCmdCopyBuffer2KHR glad_debug_vkCmdCopyBuffer2KHR = glad_debug_impl_vkCmdCopyBuffer2KHR;
PFN_vkCmdCopyBufferToImage2 glad_vkCmdCopyBufferToImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBufferToImage2(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyBufferToImage2", (GLADapiproc) glad_vkCmdCopyBufferToImage2, 2, commandBuffer, pCopyBufferToImageInfo);
    glad_vkCmdCopyBufferToImage2(commandBuffer, pCopyBufferToImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyBufferToImage2", (GLADapiproc) glad_vkCmdCopyBufferToImage2, 2, commandBuffer, pCopyBufferToImageInfo);
    
}
PFN_vkCmdCopyBufferToImage2 glad_debug_vkCmdCopyBufferToImage2 = glad_debug_impl_vkCmdCopyBufferToImage2;
PFN_vkCmdCopyBufferToImage2KHR glad_vkCmdCopyBufferToImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyBufferToImage2KHR(VkCommandBuffer commandBuffer, const VkCopyBufferToImageInfo2 * pCopyBufferToImageInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyBufferToImage2KHR", (GLADapiproc) glad_vkCmdCopyBufferToImage2KHR, 2, commandBuffer, pCopyBufferToImageInfo);
    glad_vkCmdCopyBufferToImage2KHR(commandBuffer, pCopyBufferToImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyBufferToImage2KHR", (GLADapiproc) glad_vkCmdCopyBufferToImage2KHR, 2, commandBuffer, pCopyBufferToImageInfo);
    
}
PFN_vkCmdCopyBufferToImage2KHR glad_debug_vkCmdCopyBufferToImage2KHR = glad_debug_impl_vkCmdCopyBufferToImage2KHR;
PFN_vkCmdCopyImage2 glad_vkCmdCopyImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImage2(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyImage2", (GLADapiproc) glad_vkCmdCopyImage2, 2, commandBuffer, pCopyImageInfo);
    glad_vkCmdCopyImage2(commandBuffer, pCopyImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyImage2", (GLADapiproc) glad_vkCmdCopyImage2, 2, commandBuffer, pCopyImageInfo);
    
}
PFN_vkCmdCopyImage2 glad_debug_vkCmdCopyImage2 = glad_debug_impl_vkCmdCopyImage2;
PFN_vkCmdCopyImage2KHR glad_vkCmdCopyImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImage2KHR(VkCommandBuffer commandBuffer, const VkCopyImageInfo2 * pCopyImageInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyImage2KHR", (GLADapiproc) glad_vkCmdCopyImage2KHR, 2, commandBuffer, pCopyImageInfo);
    glad_vkCmdCopyImage2KHR(commandBuffer, pCopyImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyImage2KHR", (GLADapiproc) glad_vkCmdCopyImage2KHR, 2, commandBuffer, pCopyImageInfo);
    
}
PFN_vkCmdCopyImage2KHR glad_debug_vkCmdCopyImage2KHR = glad_debug_impl_vkCmdCopyImage2KHR;
PFN_vkCmdCopyImageToBuffer2 glad_vkCmdCopyImageToBuffer2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImageToBuffer2(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyImageToBuffer2", (GLADapiproc) glad_vkCmdCopyImageToBuffer2, 2, commandBuffer, pCopyImageToBufferInfo);
    glad_vkCmdCopyImageToBuffer2(commandBuffer, pCopyImageToBufferInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyImageToBuffer2", (GLADapiproc) glad_vkCmdCopyImageToBuffer2, 2, commandBuffer, pCopyImageToBufferInfo);
    
}
PFN_vkCmdCopyImageToBuffer2 glad_debug_vkCmdCopyImageToBuffer2 = glad_debug_impl_vkCmdCopyImageToBuffer2;
PFN_vkCmdCopyImageToBuffer2KHR glad_vkCmdCopyImageToBuffer2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdCopyImageToBuffer2KHR(VkCommandBuffer commandBuffer, const VkCopyImageToBufferInfo2 * pCopyImageToBufferInfo) {
    _pre_call_vulkansc_callback("vkCmdCopyImageToBuffer2KHR", (GLADapiproc) glad_vkCmdCopyImageToBuffer2KHR, 2, commandBuffer, pCopyImageToBufferInfo);
    glad_vkCmdCopyImageToBuffer2KHR(commandBuffer, pCopyImageToBufferInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdCopyImageToBuffer2KHR", (GLADapiproc) glad_vkCmdCopyImageToBuffer2KHR, 2, commandBuffer, pCopyImageToBufferInfo);
    
}
PFN_vkCmdCopyImageToBuffer2KHR glad_debug_vkCmdCopyImageToBuffer2KHR = glad_debug_impl_vkCmdCopyImageToBuffer2KHR;
PFN_vkCmdDispatchBase glad_vkCmdDispatchBase = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDispatchBase(VkCommandBuffer commandBuffer, uint32_t baseGroupX, uint32_t baseGroupY, uint32_t baseGroupZ, uint32_t groupCountX, uint32_t groupCountY, uint32_t groupCountZ) {
    _pre_call_vulkansc_callback("vkCmdDispatchBase", (GLADapiproc) glad_vkCmdDispatchBase, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    glad_vkCmdDispatchBase(commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    _post_call_vulkansc_callback(NULL, "vkCmdDispatchBase", (GLADapiproc) glad_vkCmdDispatchBase, 7, commandBuffer, baseGroupX, baseGroupY, baseGroupZ, groupCountX, groupCountY, groupCountZ);
    
}
PFN_vkCmdDispatchBase glad_debug_vkCmdDispatchBase = glad_debug_impl_vkCmdDispatchBase;
PFN_vkCmdDrawIndexedIndirectCount glad_vkCmdDrawIndexedIndirectCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndexedIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkansc_callback("vkCmdDrawIndexedIndirectCount", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndexedIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkansc_callback(NULL, "vkCmdDrawIndexedIndirectCount", (GLADapiproc) glad_vkCmdDrawIndexedIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndexedIndirectCount glad_debug_vkCmdDrawIndexedIndirectCount = glad_debug_impl_vkCmdDrawIndexedIndirectCount;
PFN_vkCmdDrawIndirectCount glad_vkCmdDrawIndirectCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdDrawIndirectCount(VkCommandBuffer commandBuffer, VkBuffer buffer, VkDeviceSize offset, VkBuffer countBuffer, VkDeviceSize countBufferOffset, uint32_t maxDrawCount, uint32_t stride) {
    _pre_call_vulkansc_callback("vkCmdDrawIndirectCount", (GLADapiproc) glad_vkCmdDrawIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    glad_vkCmdDrawIndirectCount(commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    _post_call_vulkansc_callback(NULL, "vkCmdDrawIndirectCount", (GLADapiproc) glad_vkCmdDrawIndirectCount, 7, commandBuffer, buffer, offset, countBuffer, countBufferOffset, maxDrawCount, stride);
    
}
PFN_vkCmdDrawIndirectCount glad_debug_vkCmdDrawIndirectCount = glad_debug_impl_vkCmdDrawIndirectCount;
PFN_vkCmdEndDebugUtilsLabelEXT glad_vkCmdEndDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndDebugUtilsLabelEXT(VkCommandBuffer commandBuffer) {
    _pre_call_vulkansc_callback("vkCmdEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdEndDebugUtilsLabelEXT, 1, commandBuffer);
    glad_vkCmdEndDebugUtilsLabelEXT(commandBuffer);
    _post_call_vulkansc_callback(NULL, "vkCmdEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdEndDebugUtilsLabelEXT, 1, commandBuffer);
    
}
PFN_vkCmdEndDebugUtilsLabelEXT glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_debug_impl_vkCmdEndDebugUtilsLabelEXT;
PFN_vkCmdEndRenderPass2 glad_vkCmdEndRenderPass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRenderPass2(VkCommandBuffer commandBuffer, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkansc_callback("vkCmdEndRenderPass2", (GLADapiproc) glad_vkCmdEndRenderPass2, 2, commandBuffer, pSubpassEndInfo);
    glad_vkCmdEndRenderPass2(commandBuffer, pSubpassEndInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdEndRenderPass2", (GLADapiproc) glad_vkCmdEndRenderPass2, 2, commandBuffer, pSubpassEndInfo);
    
}
PFN_vkCmdEndRenderPass2 glad_debug_vkCmdEndRenderPass2 = glad_debug_impl_vkCmdEndRenderPass2;
PFN_vkCmdEndRendering glad_vkCmdEndRendering = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdEndRendering(VkCommandBuffer commandBuffer) {
    _pre_call_vulkansc_callback("vkCmdEndRendering", (GLADapiproc) glad_vkCmdEndRendering, 1, commandBuffer);
    glad_vkCmdEndRendering(commandBuffer);
    _post_call_vulkansc_callback(NULL, "vkCmdEndRendering", (GLADapiproc) glad_vkCmdEndRendering, 1, commandBuffer);
    
}
PFN_vkCmdEndRendering glad_debug_vkCmdEndRendering = glad_debug_impl_vkCmdEndRendering;
PFN_vkCmdInsertDebugUtilsLabelEXT glad_vkCmdInsertDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT(VkCommandBuffer commandBuffer, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkansc_callback("vkCmdInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdInsertDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    glad_vkCmdInsertDebugUtilsLabelEXT(commandBuffer, pLabelInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkCmdInsertDebugUtilsLabelEXT, 2, commandBuffer, pLabelInfo);
    
}
PFN_vkCmdInsertDebugUtilsLabelEXT glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT;
PFN_vkCmdNextSubpass2 glad_vkCmdNextSubpass2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdNextSubpass2(VkCommandBuffer commandBuffer, const VkSubpassBeginInfo * pSubpassBeginInfo, const VkSubpassEndInfo * pSubpassEndInfo) {
    _pre_call_vulkansc_callback("vkCmdNextSubpass2", (GLADapiproc) glad_vkCmdNextSubpass2, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    glad_vkCmdNextSubpass2(commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdNextSubpass2", (GLADapiproc) glad_vkCmdNextSubpass2, 3, commandBuffer, pSubpassBeginInfo, pSubpassEndInfo);
    
}
PFN_vkCmdNextSubpass2 glad_debug_vkCmdNextSubpass2 = glad_debug_impl_vkCmdNextSubpass2;
PFN_vkCmdPipelineBarrier2 glad_vkCmdPipelineBarrier2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPipelineBarrier2(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkansc_callback("vkCmdPipelineBarrier2", (GLADapiproc) glad_vkCmdPipelineBarrier2, 2, commandBuffer, pDependencyInfo);
    glad_vkCmdPipelineBarrier2(commandBuffer, pDependencyInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdPipelineBarrier2", (GLADapiproc) glad_vkCmdPipelineBarrier2, 2, commandBuffer, pDependencyInfo);
    
}
PFN_vkCmdPipelineBarrier2 glad_debug_vkCmdPipelineBarrier2 = glad_debug_impl_vkCmdPipelineBarrier2;
PFN_vkCmdPipelineBarrier2KHR glad_vkCmdPipelineBarrier2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdPipelineBarrier2KHR(VkCommandBuffer commandBuffer, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkansc_callback("vkCmdPipelineBarrier2KHR", (GLADapiproc) glad_vkCmdPipelineBarrier2KHR, 2, commandBuffer, pDependencyInfo);
    glad_vkCmdPipelineBarrier2KHR(commandBuffer, pDependencyInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdPipelineBarrier2KHR", (GLADapiproc) glad_vkCmdPipelineBarrier2KHR, 2, commandBuffer, pDependencyInfo);
    
}
PFN_vkCmdPipelineBarrier2KHR glad_debug_vkCmdPipelineBarrier2KHR = glad_debug_impl_vkCmdPipelineBarrier2KHR;
PFN_vkCmdRefreshObjectsKHR glad_vkCmdRefreshObjectsKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdRefreshObjectsKHR(VkCommandBuffer commandBuffer, const VkRefreshObjectListKHR * pRefreshObjects) {
    _pre_call_vulkansc_callback("vkCmdRefreshObjectsKHR", (GLADapiproc) glad_vkCmdRefreshObjectsKHR, 2, commandBuffer, pRefreshObjects);
    glad_vkCmdRefreshObjectsKHR(commandBuffer, pRefreshObjects);
    _post_call_vulkansc_callback(NULL, "vkCmdRefreshObjectsKHR", (GLADapiproc) glad_vkCmdRefreshObjectsKHR, 2, commandBuffer, pRefreshObjects);
    
}
PFN_vkCmdRefreshObjectsKHR glad_debug_vkCmdRefreshObjectsKHR = glad_debug_impl_vkCmdRefreshObjectsKHR;
PFN_vkCmdResetEvent2 glad_vkCmdResetEvent2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetEvent2(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
    _pre_call_vulkansc_callback("vkCmdResetEvent2", (GLADapiproc) glad_vkCmdResetEvent2, 3, commandBuffer, event, stageMask);
    glad_vkCmdResetEvent2(commandBuffer, event, stageMask);
    _post_call_vulkansc_callback(NULL, "vkCmdResetEvent2", (GLADapiproc) glad_vkCmdResetEvent2, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdResetEvent2 glad_debug_vkCmdResetEvent2 = glad_debug_impl_vkCmdResetEvent2;
PFN_vkCmdResetEvent2KHR glad_vkCmdResetEvent2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, VkPipelineStageFlags2 stageMask) {
    _pre_call_vulkansc_callback("vkCmdResetEvent2KHR", (GLADapiproc) glad_vkCmdResetEvent2KHR, 3, commandBuffer, event, stageMask);
    glad_vkCmdResetEvent2KHR(commandBuffer, event, stageMask);
    _post_call_vulkansc_callback(NULL, "vkCmdResetEvent2KHR", (GLADapiproc) glad_vkCmdResetEvent2KHR, 3, commandBuffer, event, stageMask);
    
}
PFN_vkCmdResetEvent2KHR glad_debug_vkCmdResetEvent2KHR = glad_debug_impl_vkCmdResetEvent2KHR;
PFN_vkCmdResolveImage2 glad_vkCmdResolveImage2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResolveImage2(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo) {
    _pre_call_vulkansc_callback("vkCmdResolveImage2", (GLADapiproc) glad_vkCmdResolveImage2, 2, commandBuffer, pResolveImageInfo);
    glad_vkCmdResolveImage2(commandBuffer, pResolveImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdResolveImage2", (GLADapiproc) glad_vkCmdResolveImage2, 2, commandBuffer, pResolveImageInfo);
    
}
PFN_vkCmdResolveImage2 glad_debug_vkCmdResolveImage2 = glad_debug_impl_vkCmdResolveImage2;
PFN_vkCmdResolveImage2KHR glad_vkCmdResolveImage2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdResolveImage2KHR(VkCommandBuffer commandBuffer, const VkResolveImageInfo2 * pResolveImageInfo) {
    _pre_call_vulkansc_callback("vkCmdResolveImage2KHR", (GLADapiproc) glad_vkCmdResolveImage2KHR, 2, commandBuffer, pResolveImageInfo);
    glad_vkCmdResolveImage2KHR(commandBuffer, pResolveImageInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdResolveImage2KHR", (GLADapiproc) glad_vkCmdResolveImage2KHR, 2, commandBuffer, pResolveImageInfo);
    
}
PFN_vkCmdResolveImage2KHR glad_debug_vkCmdResolveImage2KHR = glad_debug_impl_vkCmdResolveImage2KHR;
PFN_vkCmdSetColorWriteEnableEXT glad_vkCmdSetColorWriteEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetColorWriteEnableEXT(VkCommandBuffer commandBuffer, uint32_t attachmentCount, const VkBool32 * pColorWriteEnables) {
    _pre_call_vulkansc_callback("vkCmdSetColorWriteEnableEXT", (GLADapiproc) glad_vkCmdSetColorWriteEnableEXT, 3, commandBuffer, attachmentCount, pColorWriteEnables);
    glad_vkCmdSetColorWriteEnableEXT(commandBuffer, attachmentCount, pColorWriteEnables);
    _post_call_vulkansc_callback(NULL, "vkCmdSetColorWriteEnableEXT", (GLADapiproc) glad_vkCmdSetColorWriteEnableEXT, 3, commandBuffer, attachmentCount, pColorWriteEnables);
    
}
PFN_vkCmdSetColorWriteEnableEXT glad_debug_vkCmdSetColorWriteEnableEXT = glad_debug_impl_vkCmdSetColorWriteEnableEXT;
PFN_vkCmdSetCullMode glad_vkCmdSetCullMode = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCullMode(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    _pre_call_vulkansc_callback("vkCmdSetCullMode", (GLADapiproc) glad_vkCmdSetCullMode, 2, commandBuffer, cullMode);
    glad_vkCmdSetCullMode(commandBuffer, cullMode);
    _post_call_vulkansc_callback(NULL, "vkCmdSetCullMode", (GLADapiproc) glad_vkCmdSetCullMode, 2, commandBuffer, cullMode);
    
}
PFN_vkCmdSetCullMode glad_debug_vkCmdSetCullMode = glad_debug_impl_vkCmdSetCullMode;
PFN_vkCmdSetCullModeEXT glad_vkCmdSetCullModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetCullModeEXT(VkCommandBuffer commandBuffer, VkCullModeFlags cullMode) {
    _pre_call_vulkansc_callback("vkCmdSetCullModeEXT", (GLADapiproc) glad_vkCmdSetCullModeEXT, 2, commandBuffer, cullMode);
    glad_vkCmdSetCullModeEXT(commandBuffer, cullMode);
    _post_call_vulkansc_callback(NULL, "vkCmdSetCullModeEXT", (GLADapiproc) glad_vkCmdSetCullModeEXT, 2, commandBuffer, cullMode);
    
}
PFN_vkCmdSetCullModeEXT glad_debug_vkCmdSetCullModeEXT = glad_debug_impl_vkCmdSetCullModeEXT;
PFN_vkCmdSetDepthBiasEnable glad_vkCmdSetDepthBiasEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBiasEnable(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthBiasEnable", (GLADapiproc) glad_vkCmdSetDepthBiasEnable, 2, commandBuffer, depthBiasEnable);
    glad_vkCmdSetDepthBiasEnable(commandBuffer, depthBiasEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthBiasEnable", (GLADapiproc) glad_vkCmdSetDepthBiasEnable, 2, commandBuffer, depthBiasEnable);
    
}
PFN_vkCmdSetDepthBiasEnable glad_debug_vkCmdSetDepthBiasEnable = glad_debug_impl_vkCmdSetDepthBiasEnable;
PFN_vkCmdSetDepthBiasEnableEXT glad_vkCmdSetDepthBiasEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBiasEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBiasEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthBiasEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBiasEnableEXT, 2, commandBuffer, depthBiasEnable);
    glad_vkCmdSetDepthBiasEnableEXT(commandBuffer, depthBiasEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthBiasEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBiasEnableEXT, 2, commandBuffer, depthBiasEnable);
    
}
PFN_vkCmdSetDepthBiasEnableEXT glad_debug_vkCmdSetDepthBiasEnableEXT = glad_debug_impl_vkCmdSetDepthBiasEnableEXT;
PFN_vkCmdSetDepthBoundsTestEnable glad_vkCmdSetDepthBoundsTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBoundsTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthBoundsTestEnable", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnable, 2, commandBuffer, depthBoundsTestEnable);
    glad_vkCmdSetDepthBoundsTestEnable(commandBuffer, depthBoundsTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthBoundsTestEnable", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnable, 2, commandBuffer, depthBoundsTestEnable);
    
}
PFN_vkCmdSetDepthBoundsTestEnable glad_debug_vkCmdSetDepthBoundsTestEnable = glad_debug_impl_vkCmdSetDepthBoundsTestEnable;
PFN_vkCmdSetDepthBoundsTestEnableEXT glad_vkCmdSetDepthBoundsTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthBoundsTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthBoundsTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnableEXT, 2, commandBuffer, depthBoundsTestEnable);
    glad_vkCmdSetDepthBoundsTestEnableEXT(commandBuffer, depthBoundsTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthBoundsTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthBoundsTestEnableEXT, 2, commandBuffer, depthBoundsTestEnable);
    
}
PFN_vkCmdSetDepthBoundsTestEnableEXT glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT;
PFN_vkCmdSetDepthCompareOp glad_vkCmdSetDepthCompareOp = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthCompareOp(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    _pre_call_vulkansc_callback("vkCmdSetDepthCompareOp", (GLADapiproc) glad_vkCmdSetDepthCompareOp, 2, commandBuffer, depthCompareOp);
    glad_vkCmdSetDepthCompareOp(commandBuffer, depthCompareOp);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthCompareOp", (GLADapiproc) glad_vkCmdSetDepthCompareOp, 2, commandBuffer, depthCompareOp);
    
}
PFN_vkCmdSetDepthCompareOp glad_debug_vkCmdSetDepthCompareOp = glad_debug_impl_vkCmdSetDepthCompareOp;
PFN_vkCmdSetDepthCompareOpEXT glad_vkCmdSetDepthCompareOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthCompareOpEXT(VkCommandBuffer commandBuffer, VkCompareOp depthCompareOp) {
    _pre_call_vulkansc_callback("vkCmdSetDepthCompareOpEXT", (GLADapiproc) glad_vkCmdSetDepthCompareOpEXT, 2, commandBuffer, depthCompareOp);
    glad_vkCmdSetDepthCompareOpEXT(commandBuffer, depthCompareOp);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthCompareOpEXT", (GLADapiproc) glad_vkCmdSetDepthCompareOpEXT, 2, commandBuffer, depthCompareOp);
    
}
PFN_vkCmdSetDepthCompareOpEXT glad_debug_vkCmdSetDepthCompareOpEXT = glad_debug_impl_vkCmdSetDepthCompareOpEXT;
PFN_vkCmdSetDepthTestEnable glad_vkCmdSetDepthTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthTestEnable(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthTestEnable", (GLADapiproc) glad_vkCmdSetDepthTestEnable, 2, commandBuffer, depthTestEnable);
    glad_vkCmdSetDepthTestEnable(commandBuffer, depthTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthTestEnable", (GLADapiproc) glad_vkCmdSetDepthTestEnable, 2, commandBuffer, depthTestEnable);
    
}
PFN_vkCmdSetDepthTestEnable glad_debug_vkCmdSetDepthTestEnable = glad_debug_impl_vkCmdSetDepthTestEnable;
PFN_vkCmdSetDepthTestEnableEXT glad_vkCmdSetDepthTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthTestEnableEXT, 2, commandBuffer, depthTestEnable);
    glad_vkCmdSetDepthTestEnableEXT(commandBuffer, depthTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthTestEnableEXT", (GLADapiproc) glad_vkCmdSetDepthTestEnableEXT, 2, commandBuffer, depthTestEnable);
    
}
PFN_vkCmdSetDepthTestEnableEXT glad_debug_vkCmdSetDepthTestEnableEXT = glad_debug_impl_vkCmdSetDepthTestEnableEXT;
PFN_vkCmdSetDepthWriteEnable glad_vkCmdSetDepthWriteEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthWriteEnable(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthWriteEnable", (GLADapiproc) glad_vkCmdSetDepthWriteEnable, 2, commandBuffer, depthWriteEnable);
    glad_vkCmdSetDepthWriteEnable(commandBuffer, depthWriteEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthWriteEnable", (GLADapiproc) glad_vkCmdSetDepthWriteEnable, 2, commandBuffer, depthWriteEnable);
    
}
PFN_vkCmdSetDepthWriteEnable glad_debug_vkCmdSetDepthWriteEnable = glad_debug_impl_vkCmdSetDepthWriteEnable;
PFN_vkCmdSetDepthWriteEnableEXT glad_vkCmdSetDepthWriteEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDepthWriteEnableEXT(VkCommandBuffer commandBuffer, VkBool32 depthWriteEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDepthWriteEnableEXT", (GLADapiproc) glad_vkCmdSetDepthWriteEnableEXT, 2, commandBuffer, depthWriteEnable);
    glad_vkCmdSetDepthWriteEnableEXT(commandBuffer, depthWriteEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDepthWriteEnableEXT", (GLADapiproc) glad_vkCmdSetDepthWriteEnableEXT, 2, commandBuffer, depthWriteEnable);
    
}
PFN_vkCmdSetDepthWriteEnableEXT glad_debug_vkCmdSetDepthWriteEnableEXT = glad_debug_impl_vkCmdSetDepthWriteEnableEXT;
PFN_vkCmdSetDeviceMask glad_vkCmdSetDeviceMask = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDeviceMask(VkCommandBuffer commandBuffer, uint32_t deviceMask) {
    _pre_call_vulkansc_callback("vkCmdSetDeviceMask", (GLADapiproc) glad_vkCmdSetDeviceMask, 2, commandBuffer, deviceMask);
    glad_vkCmdSetDeviceMask(commandBuffer, deviceMask);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDeviceMask", (GLADapiproc) glad_vkCmdSetDeviceMask, 2, commandBuffer, deviceMask);
    
}
PFN_vkCmdSetDeviceMask glad_debug_vkCmdSetDeviceMask = glad_debug_impl_vkCmdSetDeviceMask;
PFN_vkCmdSetDiscardRectangleEXT glad_vkCmdSetDiscardRectangleEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleEXT(VkCommandBuffer commandBuffer, uint32_t firstDiscardRectangle, uint32_t discardRectangleCount, const VkRect2D * pDiscardRectangles) {
    _pre_call_vulkansc_callback("vkCmdSetDiscardRectangleEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEXT, 4, commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    glad_vkCmdSetDiscardRectangleEXT(commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDiscardRectangleEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEXT, 4, commandBuffer, firstDiscardRectangle, discardRectangleCount, pDiscardRectangles);
    
}
PFN_vkCmdSetDiscardRectangleEXT glad_debug_vkCmdSetDiscardRectangleEXT = glad_debug_impl_vkCmdSetDiscardRectangleEXT;
PFN_vkCmdSetDiscardRectangleEnableEXT glad_vkCmdSetDiscardRectangleEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT(VkCommandBuffer commandBuffer, VkBool32 discardRectangleEnable) {
    _pre_call_vulkansc_callback("vkCmdSetDiscardRectangleEnableEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEnableEXT, 2, commandBuffer, discardRectangleEnable);
    glad_vkCmdSetDiscardRectangleEnableEXT(commandBuffer, discardRectangleEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDiscardRectangleEnableEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleEnableEXT, 2, commandBuffer, discardRectangleEnable);
    
}
PFN_vkCmdSetDiscardRectangleEnableEXT glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT;
PFN_vkCmdSetDiscardRectangleModeEXT glad_vkCmdSetDiscardRectangleModeEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetDiscardRectangleModeEXT(VkCommandBuffer commandBuffer, VkDiscardRectangleModeEXT discardRectangleMode) {
    _pre_call_vulkansc_callback("vkCmdSetDiscardRectangleModeEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleModeEXT, 2, commandBuffer, discardRectangleMode);
    glad_vkCmdSetDiscardRectangleModeEXT(commandBuffer, discardRectangleMode);
    _post_call_vulkansc_callback(NULL, "vkCmdSetDiscardRectangleModeEXT", (GLADapiproc) glad_vkCmdSetDiscardRectangleModeEXT, 2, commandBuffer, discardRectangleMode);
    
}
PFN_vkCmdSetDiscardRectangleModeEXT glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_debug_impl_vkCmdSetDiscardRectangleModeEXT;
PFN_vkCmdSetEvent2 glad_vkCmdSetEvent2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetEvent2(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkansc_callback("vkCmdSetEvent2", (GLADapiproc) glad_vkCmdSetEvent2, 3, commandBuffer, event, pDependencyInfo);
    glad_vkCmdSetEvent2(commandBuffer, event, pDependencyInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdSetEvent2", (GLADapiproc) glad_vkCmdSetEvent2, 3, commandBuffer, event, pDependencyInfo);
    
}
PFN_vkCmdSetEvent2 glad_debug_vkCmdSetEvent2 = glad_debug_impl_vkCmdSetEvent2;
PFN_vkCmdSetEvent2KHR glad_vkCmdSetEvent2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetEvent2KHR(VkCommandBuffer commandBuffer, VkEvent event, const VkDependencyInfo * pDependencyInfo) {
    _pre_call_vulkansc_callback("vkCmdSetEvent2KHR", (GLADapiproc) glad_vkCmdSetEvent2KHR, 3, commandBuffer, event, pDependencyInfo);
    glad_vkCmdSetEvent2KHR(commandBuffer, event, pDependencyInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdSetEvent2KHR", (GLADapiproc) glad_vkCmdSetEvent2KHR, 3, commandBuffer, event, pDependencyInfo);
    
}
PFN_vkCmdSetEvent2KHR glad_debug_vkCmdSetEvent2KHR = glad_debug_impl_vkCmdSetEvent2KHR;
PFN_vkCmdSetFragmentShadingRateKHR glad_vkCmdSetFragmentShadingRateKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFragmentShadingRateKHR(VkCommandBuffer commandBuffer, const VkExtent2D * pFragmentSize, const VkFragmentShadingRateCombinerOpKHR combinerOps [2]) {
    _pre_call_vulkansc_callback("vkCmdSetFragmentShadingRateKHR", (GLADapiproc) glad_vkCmdSetFragmentShadingRateKHR, 3, commandBuffer, pFragmentSize, combinerOps);
    glad_vkCmdSetFragmentShadingRateKHR(commandBuffer, pFragmentSize, combinerOps);
    _post_call_vulkansc_callback(NULL, "vkCmdSetFragmentShadingRateKHR", (GLADapiproc) glad_vkCmdSetFragmentShadingRateKHR, 3, commandBuffer, pFragmentSize, combinerOps);
    
}
PFN_vkCmdSetFragmentShadingRateKHR glad_debug_vkCmdSetFragmentShadingRateKHR = glad_debug_impl_vkCmdSetFragmentShadingRateKHR;
PFN_vkCmdSetFrontFace glad_vkCmdSetFrontFace = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFrontFace(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    _pre_call_vulkansc_callback("vkCmdSetFrontFace", (GLADapiproc) glad_vkCmdSetFrontFace, 2, commandBuffer, frontFace);
    glad_vkCmdSetFrontFace(commandBuffer, frontFace);
    _post_call_vulkansc_callback(NULL, "vkCmdSetFrontFace", (GLADapiproc) glad_vkCmdSetFrontFace, 2, commandBuffer, frontFace);
    
}
PFN_vkCmdSetFrontFace glad_debug_vkCmdSetFrontFace = glad_debug_impl_vkCmdSetFrontFace;
PFN_vkCmdSetFrontFaceEXT glad_vkCmdSetFrontFaceEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetFrontFaceEXT(VkCommandBuffer commandBuffer, VkFrontFace frontFace) {
    _pre_call_vulkansc_callback("vkCmdSetFrontFaceEXT", (GLADapiproc) glad_vkCmdSetFrontFaceEXT, 2, commandBuffer, frontFace);
    glad_vkCmdSetFrontFaceEXT(commandBuffer, frontFace);
    _post_call_vulkansc_callback(NULL, "vkCmdSetFrontFaceEXT", (GLADapiproc) glad_vkCmdSetFrontFaceEXT, 2, commandBuffer, frontFace);
    
}
PFN_vkCmdSetFrontFaceEXT glad_debug_vkCmdSetFrontFaceEXT = glad_debug_impl_vkCmdSetFrontFaceEXT;
PFN_vkCmdSetLineStippleEXT glad_vkCmdSetLineStippleEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineStippleEXT(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    _pre_call_vulkansc_callback("vkCmdSetLineStippleEXT", (GLADapiproc) glad_vkCmdSetLineStippleEXT, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    glad_vkCmdSetLineStippleEXT(commandBuffer, lineStippleFactor, lineStipplePattern);
    _post_call_vulkansc_callback(NULL, "vkCmdSetLineStippleEXT", (GLADapiproc) glad_vkCmdSetLineStippleEXT, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    
}
PFN_vkCmdSetLineStippleEXT glad_debug_vkCmdSetLineStippleEXT = glad_debug_impl_vkCmdSetLineStippleEXT;
PFN_vkCmdSetLineStippleKHR glad_vkCmdSetLineStippleKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLineStippleKHR(VkCommandBuffer commandBuffer, uint32_t lineStippleFactor, uint16_t lineStipplePattern) {
    _pre_call_vulkansc_callback("vkCmdSetLineStippleKHR", (GLADapiproc) glad_vkCmdSetLineStippleKHR, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    glad_vkCmdSetLineStippleKHR(commandBuffer, lineStippleFactor, lineStipplePattern);
    _post_call_vulkansc_callback(NULL, "vkCmdSetLineStippleKHR", (GLADapiproc) glad_vkCmdSetLineStippleKHR, 3, commandBuffer, lineStippleFactor, lineStipplePattern);
    
}
PFN_vkCmdSetLineStippleKHR glad_debug_vkCmdSetLineStippleKHR = glad_debug_impl_vkCmdSetLineStippleKHR;
PFN_vkCmdSetLogicOpEXT glad_vkCmdSetLogicOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetLogicOpEXT(VkCommandBuffer commandBuffer, VkLogicOp logicOp) {
    _pre_call_vulkansc_callback("vkCmdSetLogicOpEXT", (GLADapiproc) glad_vkCmdSetLogicOpEXT, 2, commandBuffer, logicOp);
    glad_vkCmdSetLogicOpEXT(commandBuffer, logicOp);
    _post_call_vulkansc_callback(NULL, "vkCmdSetLogicOpEXT", (GLADapiproc) glad_vkCmdSetLogicOpEXT, 2, commandBuffer, logicOp);
    
}
PFN_vkCmdSetLogicOpEXT glad_debug_vkCmdSetLogicOpEXT = glad_debug_impl_vkCmdSetLogicOpEXT;
PFN_vkCmdSetPatchControlPointsEXT glad_vkCmdSetPatchControlPointsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPatchControlPointsEXT(VkCommandBuffer commandBuffer, uint32_t patchControlPoints) {
    _pre_call_vulkansc_callback("vkCmdSetPatchControlPointsEXT", (GLADapiproc) glad_vkCmdSetPatchControlPointsEXT, 2, commandBuffer, patchControlPoints);
    glad_vkCmdSetPatchControlPointsEXT(commandBuffer, patchControlPoints);
    _post_call_vulkansc_callback(NULL, "vkCmdSetPatchControlPointsEXT", (GLADapiproc) glad_vkCmdSetPatchControlPointsEXT, 2, commandBuffer, patchControlPoints);
    
}
PFN_vkCmdSetPatchControlPointsEXT glad_debug_vkCmdSetPatchControlPointsEXT = glad_debug_impl_vkCmdSetPatchControlPointsEXT;
PFN_vkCmdSetPrimitiveRestartEnable glad_vkCmdSetPrimitiveRestartEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveRestartEnable(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
    _pre_call_vulkansc_callback("vkCmdSetPrimitiveRestartEnable", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnable, 2, commandBuffer, primitiveRestartEnable);
    glad_vkCmdSetPrimitiveRestartEnable(commandBuffer, primitiveRestartEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetPrimitiveRestartEnable", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnable, 2, commandBuffer, primitiveRestartEnable);
    
}
PFN_vkCmdSetPrimitiveRestartEnable glad_debug_vkCmdSetPrimitiveRestartEnable = glad_debug_impl_vkCmdSetPrimitiveRestartEnable;
PFN_vkCmdSetPrimitiveRestartEnableEXT glad_vkCmdSetPrimitiveRestartEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT(VkCommandBuffer commandBuffer, VkBool32 primitiveRestartEnable) {
    _pre_call_vulkansc_callback("vkCmdSetPrimitiveRestartEnableEXT", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnableEXT, 2, commandBuffer, primitiveRestartEnable);
    glad_vkCmdSetPrimitiveRestartEnableEXT(commandBuffer, primitiveRestartEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetPrimitiveRestartEnableEXT", (GLADapiproc) glad_vkCmdSetPrimitiveRestartEnableEXT, 2, commandBuffer, primitiveRestartEnable);
    
}
PFN_vkCmdSetPrimitiveRestartEnableEXT glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT;
PFN_vkCmdSetPrimitiveTopology glad_vkCmdSetPrimitiveTopology = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveTopology(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
    _pre_call_vulkansc_callback("vkCmdSetPrimitiveTopology", (GLADapiproc) glad_vkCmdSetPrimitiveTopology, 2, commandBuffer, primitiveTopology);
    glad_vkCmdSetPrimitiveTopology(commandBuffer, primitiveTopology);
    _post_call_vulkansc_callback(NULL, "vkCmdSetPrimitiveTopology", (GLADapiproc) glad_vkCmdSetPrimitiveTopology, 2, commandBuffer, primitiveTopology);
    
}
PFN_vkCmdSetPrimitiveTopology glad_debug_vkCmdSetPrimitiveTopology = glad_debug_impl_vkCmdSetPrimitiveTopology;
PFN_vkCmdSetPrimitiveTopologyEXT glad_vkCmdSetPrimitiveTopologyEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetPrimitiveTopologyEXT(VkCommandBuffer commandBuffer, VkPrimitiveTopology primitiveTopology) {
    _pre_call_vulkansc_callback("vkCmdSetPrimitiveTopologyEXT", (GLADapiproc) glad_vkCmdSetPrimitiveTopologyEXT, 2, commandBuffer, primitiveTopology);
    glad_vkCmdSetPrimitiveTopologyEXT(commandBuffer, primitiveTopology);
    _post_call_vulkansc_callback(NULL, "vkCmdSetPrimitiveTopologyEXT", (GLADapiproc) glad_vkCmdSetPrimitiveTopologyEXT, 2, commandBuffer, primitiveTopology);
    
}
PFN_vkCmdSetPrimitiveTopologyEXT glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_debug_impl_vkCmdSetPrimitiveTopologyEXT;
PFN_vkCmdSetRasterizerDiscardEnable glad_vkCmdSetRasterizerDiscardEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizerDiscardEnable(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
    _pre_call_vulkansc_callback("vkCmdSetRasterizerDiscardEnable", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnable, 2, commandBuffer, rasterizerDiscardEnable);
    glad_vkCmdSetRasterizerDiscardEnable(commandBuffer, rasterizerDiscardEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetRasterizerDiscardEnable", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnable, 2, commandBuffer, rasterizerDiscardEnable);
    
}
PFN_vkCmdSetRasterizerDiscardEnable glad_debug_vkCmdSetRasterizerDiscardEnable = glad_debug_impl_vkCmdSetRasterizerDiscardEnable;
PFN_vkCmdSetRasterizerDiscardEnableEXT glad_vkCmdSetRasterizerDiscardEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT(VkCommandBuffer commandBuffer, VkBool32 rasterizerDiscardEnable) {
    _pre_call_vulkansc_callback("vkCmdSetRasterizerDiscardEnableEXT", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnableEXT, 2, commandBuffer, rasterizerDiscardEnable);
    glad_vkCmdSetRasterizerDiscardEnableEXT(commandBuffer, rasterizerDiscardEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetRasterizerDiscardEnableEXT", (GLADapiproc) glad_vkCmdSetRasterizerDiscardEnableEXT, 2, commandBuffer, rasterizerDiscardEnable);
    
}
PFN_vkCmdSetRasterizerDiscardEnableEXT glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT;
PFN_vkCmdSetSampleLocationsEXT glad_vkCmdSetSampleLocationsEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetSampleLocationsEXT(VkCommandBuffer commandBuffer, const VkSampleLocationsInfoEXT * pSampleLocationsInfo) {
    _pre_call_vulkansc_callback("vkCmdSetSampleLocationsEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEXT, 2, commandBuffer, pSampleLocationsInfo);
    glad_vkCmdSetSampleLocationsEXT(commandBuffer, pSampleLocationsInfo);
    _post_call_vulkansc_callback(NULL, "vkCmdSetSampleLocationsEXT", (GLADapiproc) glad_vkCmdSetSampleLocationsEXT, 2, commandBuffer, pSampleLocationsInfo);
    
}
PFN_vkCmdSetSampleLocationsEXT glad_debug_vkCmdSetSampleLocationsEXT = glad_debug_impl_vkCmdSetSampleLocationsEXT;
PFN_vkCmdSetScissorWithCount glad_vkCmdSetScissorWithCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetScissorWithCount(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors) {
    _pre_call_vulkansc_callback("vkCmdSetScissorWithCount", (GLADapiproc) glad_vkCmdSetScissorWithCount, 3, commandBuffer, scissorCount, pScissors);
    glad_vkCmdSetScissorWithCount(commandBuffer, scissorCount, pScissors);
    _post_call_vulkansc_callback(NULL, "vkCmdSetScissorWithCount", (GLADapiproc) glad_vkCmdSetScissorWithCount, 3, commandBuffer, scissorCount, pScissors);
    
}
PFN_vkCmdSetScissorWithCount glad_debug_vkCmdSetScissorWithCount = glad_debug_impl_vkCmdSetScissorWithCount;
PFN_vkCmdSetScissorWithCountEXT glad_vkCmdSetScissorWithCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetScissorWithCountEXT(VkCommandBuffer commandBuffer, uint32_t scissorCount, const VkRect2D * pScissors) {
    _pre_call_vulkansc_callback("vkCmdSetScissorWithCountEXT", (GLADapiproc) glad_vkCmdSetScissorWithCountEXT, 3, commandBuffer, scissorCount, pScissors);
    glad_vkCmdSetScissorWithCountEXT(commandBuffer, scissorCount, pScissors);
    _post_call_vulkansc_callback(NULL, "vkCmdSetScissorWithCountEXT", (GLADapiproc) glad_vkCmdSetScissorWithCountEXT, 3, commandBuffer, scissorCount, pScissors);
    
}
PFN_vkCmdSetScissorWithCountEXT glad_debug_vkCmdSetScissorWithCountEXT = glad_debug_impl_vkCmdSetScissorWithCountEXT;
PFN_vkCmdSetStencilOp glad_vkCmdSetStencilOp = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilOp(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
    _pre_call_vulkansc_callback("vkCmdSetStencilOp", (GLADapiproc) glad_vkCmdSetStencilOp, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    glad_vkCmdSetStencilOp(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    _post_call_vulkansc_callback(NULL, "vkCmdSetStencilOp", (GLADapiproc) glad_vkCmdSetStencilOp, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    
}
PFN_vkCmdSetStencilOp glad_debug_vkCmdSetStencilOp = glad_debug_impl_vkCmdSetStencilOp;
PFN_vkCmdSetStencilOpEXT glad_vkCmdSetStencilOpEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilOpEXT(VkCommandBuffer commandBuffer, VkStencilFaceFlags faceMask, VkStencilOp failOp, VkStencilOp passOp, VkStencilOp depthFailOp, VkCompareOp compareOp) {
    _pre_call_vulkansc_callback("vkCmdSetStencilOpEXT", (GLADapiproc) glad_vkCmdSetStencilOpEXT, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    glad_vkCmdSetStencilOpEXT(commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    _post_call_vulkansc_callback(NULL, "vkCmdSetStencilOpEXT", (GLADapiproc) glad_vkCmdSetStencilOpEXT, 6, commandBuffer, faceMask, failOp, passOp, depthFailOp, compareOp);
    
}
PFN_vkCmdSetStencilOpEXT glad_debug_vkCmdSetStencilOpEXT = glad_debug_impl_vkCmdSetStencilOpEXT;
PFN_vkCmdSetStencilTestEnable glad_vkCmdSetStencilTestEnable = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilTestEnable(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetStencilTestEnable", (GLADapiproc) glad_vkCmdSetStencilTestEnable, 2, commandBuffer, stencilTestEnable);
    glad_vkCmdSetStencilTestEnable(commandBuffer, stencilTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetStencilTestEnable", (GLADapiproc) glad_vkCmdSetStencilTestEnable, 2, commandBuffer, stencilTestEnable);
    
}
PFN_vkCmdSetStencilTestEnable glad_debug_vkCmdSetStencilTestEnable = glad_debug_impl_vkCmdSetStencilTestEnable;
PFN_vkCmdSetStencilTestEnableEXT glad_vkCmdSetStencilTestEnableEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetStencilTestEnableEXT(VkCommandBuffer commandBuffer, VkBool32 stencilTestEnable) {
    _pre_call_vulkansc_callback("vkCmdSetStencilTestEnableEXT", (GLADapiproc) glad_vkCmdSetStencilTestEnableEXT, 2, commandBuffer, stencilTestEnable);
    glad_vkCmdSetStencilTestEnableEXT(commandBuffer, stencilTestEnable);
    _post_call_vulkansc_callback(NULL, "vkCmdSetStencilTestEnableEXT", (GLADapiproc) glad_vkCmdSetStencilTestEnableEXT, 2, commandBuffer, stencilTestEnable);
    
}
PFN_vkCmdSetStencilTestEnableEXT glad_debug_vkCmdSetStencilTestEnableEXT = glad_debug_impl_vkCmdSetStencilTestEnableEXT;
PFN_vkCmdSetVertexInputEXT glad_vkCmdSetVertexInputEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetVertexInputEXT(VkCommandBuffer commandBuffer, uint32_t vertexBindingDescriptionCount, const VkVertexInputBindingDescription2EXT * pVertexBindingDescriptions, uint32_t vertexAttributeDescriptionCount, const VkVertexInputAttributeDescription2EXT * pVertexAttributeDescriptions) {
    _pre_call_vulkansc_callback("vkCmdSetVertexInputEXT", (GLADapiproc) glad_vkCmdSetVertexInputEXT, 5, commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    glad_vkCmdSetVertexInputEXT(commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    _post_call_vulkansc_callback(NULL, "vkCmdSetVertexInputEXT", (GLADapiproc) glad_vkCmdSetVertexInputEXT, 5, commandBuffer, vertexBindingDescriptionCount, pVertexBindingDescriptions, vertexAttributeDescriptionCount, pVertexAttributeDescriptions);
    
}
PFN_vkCmdSetVertexInputEXT glad_debug_vkCmdSetVertexInputEXT = glad_debug_impl_vkCmdSetVertexInputEXT;
PFN_vkCmdSetViewportWithCount glad_vkCmdSetViewportWithCount = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWithCount(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports) {
    _pre_call_vulkansc_callback("vkCmdSetViewportWithCount", (GLADapiproc) glad_vkCmdSetViewportWithCount, 3, commandBuffer, viewportCount, pViewports);
    glad_vkCmdSetViewportWithCount(commandBuffer, viewportCount, pViewports);
    _post_call_vulkansc_callback(NULL, "vkCmdSetViewportWithCount", (GLADapiproc) glad_vkCmdSetViewportWithCount, 3, commandBuffer, viewportCount, pViewports);
    
}
PFN_vkCmdSetViewportWithCount glad_debug_vkCmdSetViewportWithCount = glad_debug_impl_vkCmdSetViewportWithCount;
PFN_vkCmdSetViewportWithCountEXT glad_vkCmdSetViewportWithCountEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdSetViewportWithCountEXT(VkCommandBuffer commandBuffer, uint32_t viewportCount, const VkViewport * pViewports) {
    _pre_call_vulkansc_callback("vkCmdSetViewportWithCountEXT", (GLADapiproc) glad_vkCmdSetViewportWithCountEXT, 3, commandBuffer, viewportCount, pViewports);
    glad_vkCmdSetViewportWithCountEXT(commandBuffer, viewportCount, pViewports);
    _post_call_vulkansc_callback(NULL, "vkCmdSetViewportWithCountEXT", (GLADapiproc) glad_vkCmdSetViewportWithCountEXT, 3, commandBuffer, viewportCount, pViewports);
    
}
PFN_vkCmdSetViewportWithCountEXT glad_debug_vkCmdSetViewportWithCountEXT = glad_debug_impl_vkCmdSetViewportWithCountEXT;
PFN_vkCmdWaitEvents2 glad_vkCmdWaitEvents2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWaitEvents2(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos) {
    _pre_call_vulkansc_callback("vkCmdWaitEvents2", (GLADapiproc) glad_vkCmdWaitEvents2, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    glad_vkCmdWaitEvents2(commandBuffer, eventCount, pEvents, pDependencyInfos);
    _post_call_vulkansc_callback(NULL, "vkCmdWaitEvents2", (GLADapiproc) glad_vkCmdWaitEvents2, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    
}
PFN_vkCmdWaitEvents2 glad_debug_vkCmdWaitEvents2 = glad_debug_impl_vkCmdWaitEvents2;
PFN_vkCmdWaitEvents2KHR glad_vkCmdWaitEvents2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWaitEvents2KHR(VkCommandBuffer commandBuffer, uint32_t eventCount, const VkEvent * pEvents, const VkDependencyInfo * pDependencyInfos) {
    _pre_call_vulkansc_callback("vkCmdWaitEvents2KHR", (GLADapiproc) glad_vkCmdWaitEvents2KHR, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    glad_vkCmdWaitEvents2KHR(commandBuffer, eventCount, pEvents, pDependencyInfos);
    _post_call_vulkansc_callback(NULL, "vkCmdWaitEvents2KHR", (GLADapiproc) glad_vkCmdWaitEvents2KHR, 4, commandBuffer, eventCount, pEvents, pDependencyInfos);
    
}
PFN_vkCmdWaitEvents2KHR glad_debug_vkCmdWaitEvents2KHR = glad_debug_impl_vkCmdWaitEvents2KHR;
PFN_vkCmdWriteBufferMarker2AMD glad_vkCmdWriteBufferMarker2AMD = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteBufferMarker2AMD(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkBuffer dstBuffer, VkDeviceSize dstOffset, uint32_t marker) {
    _pre_call_vulkansc_callback("vkCmdWriteBufferMarker2AMD", (GLADapiproc) glad_vkCmdWriteBufferMarker2AMD, 5, commandBuffer, stage, dstBuffer, dstOffset, marker);
    glad_vkCmdWriteBufferMarker2AMD(commandBuffer, stage, dstBuffer, dstOffset, marker);
    _post_call_vulkansc_callback(NULL, "vkCmdWriteBufferMarker2AMD", (GLADapiproc) glad_vkCmdWriteBufferMarker2AMD, 5, commandBuffer, stage, dstBuffer, dstOffset, marker);
    
}
PFN_vkCmdWriteBufferMarker2AMD glad_debug_vkCmdWriteBufferMarker2AMD = glad_debug_impl_vkCmdWriteBufferMarker2AMD;
PFN_vkCmdWriteTimestamp2 glad_vkCmdWriteTimestamp2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteTimestamp2(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkansc_callback("vkCmdWriteTimestamp2", (GLADapiproc) glad_vkCmdWriteTimestamp2, 4, commandBuffer, stage, queryPool, query);
    glad_vkCmdWriteTimestamp2(commandBuffer, stage, queryPool, query);
    _post_call_vulkansc_callback(NULL, "vkCmdWriteTimestamp2", (GLADapiproc) glad_vkCmdWriteTimestamp2, 4, commandBuffer, stage, queryPool, query);
    
}
PFN_vkCmdWriteTimestamp2 glad_debug_vkCmdWriteTimestamp2 = glad_debug_impl_vkCmdWriteTimestamp2;
PFN_vkCmdWriteTimestamp2KHR glad_vkCmdWriteTimestamp2KHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkCmdWriteTimestamp2KHR(VkCommandBuffer commandBuffer, VkPipelineStageFlags2 stage, VkQueryPool queryPool, uint32_t query) {
    _pre_call_vulkansc_callback("vkCmdWriteTimestamp2KHR", (GLADapiproc) glad_vkCmdWriteTimestamp2KHR, 4, commandBuffer, stage, queryPool, query);
    glad_vkCmdWriteTimestamp2KHR(commandBuffer, stage, queryPool, query);
    _post_call_vulkansc_callback(NULL, "vkCmdWriteTimestamp2KHR", (GLADapiproc) glad_vkCmdWriteTimestamp2KHR, 4, commandBuffer, stage, queryPool, query);
    
}
PFN_vkCmdWriteTimestamp2KHR glad_debug_vkCmdWriteTimestamp2KHR = glad_debug_impl_vkCmdWriteTimestamp2KHR;
PFN_vkCreateDebugUtilsMessengerEXT glad_vkCreateDebugUtilsMessengerEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDebugUtilsMessengerEXT(VkInstance instance, const VkDebugUtilsMessengerCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDebugUtilsMessengerEXT * pMessenger) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateDebugUtilsMessengerEXT", (GLADapiproc) glad_vkCreateDebugUtilsMessengerEXT, 4, instance, pCreateInfo, pAllocator, pMessenger);
    ret = glad_vkCreateDebugUtilsMessengerEXT(instance, pCreateInfo, pAllocator, pMessenger);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateDebugUtilsMessengerEXT", (GLADapiproc) glad_vkCreateDebugUtilsMessengerEXT, 4, instance, pCreateInfo, pAllocator, pMessenger);
    return ret;
}
PFN_vkCreateDebugUtilsMessengerEXT glad_debug_vkCreateDebugUtilsMessengerEXT = glad_debug_impl_vkCreateDebugUtilsMessengerEXT;
PFN_vkCreateDescriptorUpdateTemplate glad_vkCreateDescriptorUpdateTemplate = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDescriptorUpdateTemplate(VkDevice device, const VkDescriptorUpdateTemplateCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDescriptorUpdateTemplate * pDescriptorUpdateTemplate) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateDescriptorUpdateTemplate", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplate, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    ret = glad_vkCreateDescriptorUpdateTemplate(device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateDescriptorUpdateTemplate", (GLADapiproc) glad_vkCreateDescriptorUpdateTemplate, 4, device, pCreateInfo, pAllocator, pDescriptorUpdateTemplate);
    return ret;
}
PFN_vkCreateDescriptorUpdateTemplate glad_debug_vkCreateDescriptorUpdateTemplate = glad_debug_impl_vkCreateDescriptorUpdateTemplate;
PFN_vkCreateDisplayModeKHR glad_vkCreateDisplayModeKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDisplayModeKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, const VkDisplayModeCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkDisplayModeKHR * pMode) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateDisplayModeKHR", (GLADapiproc) glad_vkCreateDisplayModeKHR, 5, physicalDevice, display, pCreateInfo, pAllocator, pMode);
    ret = glad_vkCreateDisplayModeKHR(physicalDevice, display, pCreateInfo, pAllocator, pMode);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateDisplayModeKHR", (GLADapiproc) glad_vkCreateDisplayModeKHR, 5, physicalDevice, display, pCreateInfo, pAllocator, pMode);
    return ret;
}
PFN_vkCreateDisplayModeKHR glad_debug_vkCreateDisplayModeKHR = glad_debug_impl_vkCreateDisplayModeKHR;
PFN_vkCreateDisplayPlaneSurfaceKHR glad_vkCreateDisplayPlaneSurfaceKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR(VkInstance instance, const VkDisplaySurfaceCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateDisplayPlaneSurfaceKHR", (GLADapiproc) glad_vkCreateDisplayPlaneSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateDisplayPlaneSurfaceKHR(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateDisplayPlaneSurfaceKHR", (GLADapiproc) glad_vkCreateDisplayPlaneSurfaceKHR, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateDisplayPlaneSurfaceKHR glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR;
PFN_vkCreateHeadlessSurfaceEXT glad_vkCreateHeadlessSurfaceEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateHeadlessSurfaceEXT(VkInstance instance, const VkHeadlessSurfaceCreateInfoEXT * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSurfaceKHR * pSurface) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateHeadlessSurfaceEXT", (GLADapiproc) glad_vkCreateHeadlessSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    ret = glad_vkCreateHeadlessSurfaceEXT(instance, pCreateInfo, pAllocator, pSurface);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateHeadlessSurfaceEXT", (GLADapiproc) glad_vkCreateHeadlessSurfaceEXT, 4, instance, pCreateInfo, pAllocator, pSurface);
    return ret;
}
PFN_vkCreateHeadlessSurfaceEXT glad_debug_vkCreateHeadlessSurfaceEXT = glad_debug_impl_vkCreateHeadlessSurfaceEXT;
PFN_vkCreatePrivateDataSlot glad_vkCreatePrivateDataSlot = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreatePrivateDataSlot(VkDevice device, const VkPrivateDataSlotCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkPrivateDataSlot * pPrivateDataSlot) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreatePrivateDataSlot", (GLADapiproc) glad_vkCreatePrivateDataSlot, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    ret = glad_vkCreatePrivateDataSlot(device, pCreateInfo, pAllocator, pPrivateDataSlot);
    _post_call_vulkansc_callback((void*) &ret, "vkCreatePrivateDataSlot", (GLADapiproc) glad_vkCreatePrivateDataSlot, 4, device, pCreateInfo, pAllocator, pPrivateDataSlot);
    return ret;
}
PFN_vkCreatePrivateDataSlot glad_debug_vkCreatePrivateDataSlot = glad_debug_impl_vkCreatePrivateDataSlot;
PFN_vkCreateRenderPass2 glad_vkCreateRenderPass2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateRenderPass2(VkDevice device, const VkRenderPassCreateInfo2 * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkRenderPass * pRenderPass) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateRenderPass2", (GLADapiproc) glad_vkCreateRenderPass2, 4, device, pCreateInfo, pAllocator, pRenderPass);
    ret = glad_vkCreateRenderPass2(device, pCreateInfo, pAllocator, pRenderPass);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateRenderPass2", (GLADapiproc) glad_vkCreateRenderPass2, 4, device, pCreateInfo, pAllocator, pRenderPass);
    return ret;
}
PFN_vkCreateRenderPass2 glad_debug_vkCreateRenderPass2 = glad_debug_impl_vkCreateRenderPass2;
PFN_vkCreateSamplerYcbcrConversion glad_vkCreateSamplerYcbcrConversion = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSamplerYcbcrConversion(VkDevice device, const VkSamplerYcbcrConversionCreateInfo * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSamplerYcbcrConversion * pYcbcrConversion) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateSamplerYcbcrConversion", (GLADapiproc) glad_vkCreateSamplerYcbcrConversion, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    ret = glad_vkCreateSamplerYcbcrConversion(device, pCreateInfo, pAllocator, pYcbcrConversion);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateSamplerYcbcrConversion", (GLADapiproc) glad_vkCreateSamplerYcbcrConversion, 4, device, pCreateInfo, pAllocator, pYcbcrConversion);
    return ret;
}
PFN_vkCreateSamplerYcbcrConversion glad_debug_vkCreateSamplerYcbcrConversion = glad_debug_impl_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkCreateSemaphoreSciSyncPoolNV glad_vkCreateSemaphoreSciSyncPoolNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSemaphoreSciSyncPoolNV(VkDevice device, const VkSemaphoreSciSyncPoolCreateInfoNV * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSemaphoreSciSyncPoolNV * pSemaphorePool) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateSemaphoreSciSyncPoolNV", (GLADapiproc) glad_vkCreateSemaphoreSciSyncPoolNV, 4, device, pCreateInfo, pAllocator, pSemaphorePool);
    ret = glad_vkCreateSemaphoreSciSyncPoolNV(device, pCreateInfo, pAllocator, pSemaphorePool);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateSemaphoreSciSyncPoolNV", (GLADapiproc) glad_vkCreateSemaphoreSciSyncPoolNV, 4, device, pCreateInfo, pAllocator, pSemaphorePool);
    return ret;
}
PFN_vkCreateSemaphoreSciSyncPoolNV glad_debug_vkCreateSemaphoreSciSyncPoolNV = glad_debug_impl_vkCreateSemaphoreSciSyncPoolNV;

#endif
PFN_vkCreateSharedSwapchainsKHR glad_vkCreateSharedSwapchainsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSharedSwapchainsKHR(VkDevice device, uint32_t swapchainCount, const VkSwapchainCreateInfoKHR * pCreateInfos, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchains) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateSharedSwapchainsKHR", (GLADapiproc) glad_vkCreateSharedSwapchainsKHR, 5, device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    ret = glad_vkCreateSharedSwapchainsKHR(device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateSharedSwapchainsKHR", (GLADapiproc) glad_vkCreateSharedSwapchainsKHR, 5, device, swapchainCount, pCreateInfos, pAllocator, pSwapchains);
    return ret;
}
PFN_vkCreateSharedSwapchainsKHR glad_debug_vkCreateSharedSwapchainsKHR = glad_debug_impl_vkCreateSharedSwapchainsKHR;
PFN_vkCreateSwapchainKHR glad_vkCreateSwapchainKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkCreateSwapchainKHR(VkDevice device, const VkSwapchainCreateInfoKHR * pCreateInfo, const VkAllocationCallbacks * pAllocator, VkSwapchainKHR * pSwapchain) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkCreateSwapchainKHR", (GLADapiproc) glad_vkCreateSwapchainKHR, 4, device, pCreateInfo, pAllocator, pSwapchain);
    ret = glad_vkCreateSwapchainKHR(device, pCreateInfo, pAllocator, pSwapchain);
    _post_call_vulkansc_callback((void*) &ret, "vkCreateSwapchainKHR", (GLADapiproc) glad_vkCreateSwapchainKHR, 4, device, pCreateInfo, pAllocator, pSwapchain);
    return ret;
}
PFN_vkCreateSwapchainKHR glad_debug_vkCreateSwapchainKHR = glad_debug_impl_vkCreateSwapchainKHR;
PFN_vkDestroyDebugUtilsMessengerEXT glad_vkDestroyDebugUtilsMessengerEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDebugUtilsMessengerEXT(VkInstance instance, VkDebugUtilsMessengerEXT messenger, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroyDebugUtilsMessengerEXT", (GLADapiproc) glad_vkDestroyDebugUtilsMessengerEXT, 3, instance, messenger, pAllocator);
    glad_vkDestroyDebugUtilsMessengerEXT(instance, messenger, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroyDebugUtilsMessengerEXT", (GLADapiproc) glad_vkDestroyDebugUtilsMessengerEXT, 3, instance, messenger, pAllocator);
    
}
PFN_vkDestroyDebugUtilsMessengerEXT glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_debug_impl_vkDestroyDebugUtilsMessengerEXT;
PFN_vkDestroyDescriptorUpdateTemplate glad_vkDestroyDescriptorUpdateTemplate = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyDescriptorUpdateTemplate(VkDevice device, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroyDescriptorUpdateTemplate", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplate, 3, device, descriptorUpdateTemplate, pAllocator);
    glad_vkDestroyDescriptorUpdateTemplate(device, descriptorUpdateTemplate, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroyDescriptorUpdateTemplate", (GLADapiproc) glad_vkDestroyDescriptorUpdateTemplate, 3, device, descriptorUpdateTemplate, pAllocator);
    
}
PFN_vkDestroyDescriptorUpdateTemplate glad_debug_vkDestroyDescriptorUpdateTemplate = glad_debug_impl_vkDestroyDescriptorUpdateTemplate;
PFN_vkDestroyPrivateDataSlot glad_vkDestroyPrivateDataSlot = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroyPrivateDataSlot(VkDevice device, VkPrivateDataSlot privateDataSlot, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroyPrivateDataSlot", (GLADapiproc) glad_vkDestroyPrivateDataSlot, 3, device, privateDataSlot, pAllocator);
    glad_vkDestroyPrivateDataSlot(device, privateDataSlot, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroyPrivateDataSlot", (GLADapiproc) glad_vkDestroyPrivateDataSlot, 3, device, privateDataSlot, pAllocator);
    
}
PFN_vkDestroyPrivateDataSlot glad_debug_vkDestroyPrivateDataSlot = glad_debug_impl_vkDestroyPrivateDataSlot;
PFN_vkDestroySamplerYcbcrConversion glad_vkDestroySamplerYcbcrConversion = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySamplerYcbcrConversion(VkDevice device, VkSamplerYcbcrConversion ycbcrConversion, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroySamplerYcbcrConversion", (GLADapiproc) glad_vkDestroySamplerYcbcrConversion, 3, device, ycbcrConversion, pAllocator);
    glad_vkDestroySamplerYcbcrConversion(device, ycbcrConversion, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroySamplerYcbcrConversion", (GLADapiproc) glad_vkDestroySamplerYcbcrConversion, 3, device, ycbcrConversion, pAllocator);
    
}
PFN_vkDestroySamplerYcbcrConversion glad_debug_vkDestroySamplerYcbcrConversion = glad_debug_impl_vkDestroySamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkDestroySemaphoreSciSyncPoolNV glad_vkDestroySemaphoreSciSyncPoolNV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySemaphoreSciSyncPoolNV(VkDevice device, VkSemaphoreSciSyncPoolNV semaphorePool, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroySemaphoreSciSyncPoolNV", (GLADapiproc) glad_vkDestroySemaphoreSciSyncPoolNV, 3, device, semaphorePool, pAllocator);
    glad_vkDestroySemaphoreSciSyncPoolNV(device, semaphorePool, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroySemaphoreSciSyncPoolNV", (GLADapiproc) glad_vkDestroySemaphoreSciSyncPoolNV, 3, device, semaphorePool, pAllocator);
    
}
PFN_vkDestroySemaphoreSciSyncPoolNV glad_debug_vkDestroySemaphoreSciSyncPoolNV = glad_debug_impl_vkDestroySemaphoreSciSyncPoolNV;

#endif
PFN_vkDestroySurfaceKHR glad_vkDestroySurfaceKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySurfaceKHR(VkInstance instance, VkSurfaceKHR surface, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroySurfaceKHR", (GLADapiproc) glad_vkDestroySurfaceKHR, 3, instance, surface, pAllocator);
    glad_vkDestroySurfaceKHR(instance, surface, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroySurfaceKHR", (GLADapiproc) glad_vkDestroySurfaceKHR, 3, instance, surface, pAllocator);
    
}
PFN_vkDestroySurfaceKHR glad_debug_vkDestroySurfaceKHR = glad_debug_impl_vkDestroySurfaceKHR;
PFN_vkDestroySwapchainKHR glad_vkDestroySwapchainKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkDestroySwapchainKHR(VkDevice device, VkSwapchainKHR swapchain, const VkAllocationCallbacks * pAllocator) {
    _pre_call_vulkansc_callback("vkDestroySwapchainKHR", (GLADapiproc) glad_vkDestroySwapchainKHR, 3, device, swapchain, pAllocator);
    glad_vkDestroySwapchainKHR(device, swapchain, pAllocator);
    _post_call_vulkansc_callback(NULL, "vkDestroySwapchainKHR", (GLADapiproc) glad_vkDestroySwapchainKHR, 3, device, swapchain, pAllocator);
    
}
PFN_vkDestroySwapchainKHR glad_debug_vkDestroySwapchainKHR = glad_debug_impl_vkDestroySwapchainKHR;
PFN_vkDisplayPowerControlEXT glad_vkDisplayPowerControlEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkDisplayPowerControlEXT(VkDevice device, VkDisplayKHR display, const VkDisplayPowerInfoEXT * pDisplayPowerInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkDisplayPowerControlEXT", (GLADapiproc) glad_vkDisplayPowerControlEXT, 3, device, display, pDisplayPowerInfo);
    ret = glad_vkDisplayPowerControlEXT(device, display, pDisplayPowerInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkDisplayPowerControlEXT", (GLADapiproc) glad_vkDisplayPowerControlEXT, 3, device, display, pDisplayPowerInfo);
    return ret;
}
PFN_vkDisplayPowerControlEXT glad_debug_vkDisplayPowerControlEXT = glad_debug_impl_vkDisplayPowerControlEXT;
PFN_vkEnumerateInstanceVersion glad_vkEnumerateInstanceVersion = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumerateInstanceVersion(uint32_t * pApiVersion) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkEnumerateInstanceVersion", (GLADapiproc) glad_vkEnumerateInstanceVersion, 1, pApiVersion);
    ret = glad_vkEnumerateInstanceVersion(pApiVersion);
    _post_call_vulkansc_callback((void*) &ret, "vkEnumerateInstanceVersion", (GLADapiproc) glad_vkEnumerateInstanceVersion, 1, pApiVersion);
    return ret;
}
PFN_vkEnumerateInstanceVersion glad_debug_vkEnumerateInstanceVersion = glad_debug_impl_vkEnumerateInstanceVersion;
PFN_vkEnumeratePhysicalDeviceGroups glad_vkEnumeratePhysicalDeviceGroups = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDeviceGroups(VkInstance instance, uint32_t * pPhysicalDeviceGroupCount, VkPhysicalDeviceGroupProperties * pPhysicalDeviceGroupProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkEnumeratePhysicalDeviceGroups", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroups, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    ret = glad_vkEnumeratePhysicalDeviceGroups(instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkEnumeratePhysicalDeviceGroups", (GLADapiproc) glad_vkEnumeratePhysicalDeviceGroups, 3, instance, pPhysicalDeviceGroupCount, pPhysicalDeviceGroupProperties);
    return ret;
}
PFN_vkEnumeratePhysicalDeviceGroups glad_debug_vkEnumeratePhysicalDeviceGroups = glad_debug_impl_vkEnumeratePhysicalDeviceGroups;
PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, uint32_t * pCounterCount, VkPerformanceCounterKHR * pCounters, VkPerformanceCounterDescriptionKHR * pCounterDescriptions) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, 5, physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    ret = glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    _post_call_vulkansc_callback((void*) &ret, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR", (GLADapiproc) glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR, 5, physicalDevice, queueFamilyIndex, pCounterCount, pCounters, pCounterDescriptions);
    return ret;
}
PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
PFN_vkGetBufferDeviceAddress glad_vkGetBufferDeviceAddress = NULL;
static VkDeviceAddress GLAD_API_PTR glad_debug_impl_vkGetBufferDeviceAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    VkDeviceAddress ret;
    _pre_call_vulkansc_callback("vkGetBufferDeviceAddress", (GLADapiproc) glad_vkGetBufferDeviceAddress, 2, device, pInfo);
    ret = glad_vkGetBufferDeviceAddress(device, pInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkGetBufferDeviceAddress", (GLADapiproc) glad_vkGetBufferDeviceAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferDeviceAddress glad_debug_vkGetBufferDeviceAddress = glad_debug_impl_vkGetBufferDeviceAddress;
PFN_vkGetBufferMemoryRequirements2 glad_vkGetBufferMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetBufferMemoryRequirements2(VkDevice device, const VkBufferMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetBufferMemoryRequirements2", (GLADapiproc) glad_vkGetBufferMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetBufferMemoryRequirements2(device, pInfo, pMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetBufferMemoryRequirements2", (GLADapiproc) glad_vkGetBufferMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetBufferMemoryRequirements2 glad_debug_vkGetBufferMemoryRequirements2 = glad_debug_impl_vkGetBufferMemoryRequirements2;
PFN_vkGetBufferOpaqueCaptureAddress glad_vkGetBufferOpaqueCaptureAddress = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetBufferOpaqueCaptureAddress(VkDevice device, const VkBufferDeviceAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkansc_callback("vkGetBufferOpaqueCaptureAddress", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddress, 2, device, pInfo);
    ret = glad_vkGetBufferOpaqueCaptureAddress(device, pInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkGetBufferOpaqueCaptureAddress", (GLADapiproc) glad_vkGetBufferOpaqueCaptureAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetBufferOpaqueCaptureAddress glad_debug_vkGetBufferOpaqueCaptureAddress = glad_debug_impl_vkGetBufferOpaqueCaptureAddress;
PFN_vkGetCalibratedTimestampsKHR glad_vkGetCalibratedTimestampsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetCalibratedTimestampsKHR(VkDevice device, uint32_t timestampCount, const VkCalibratedTimestampInfoKHR * pTimestampInfos, uint64_t * pTimestamps, uint64_t * pMaxDeviation) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetCalibratedTimestampsKHR", (GLADapiproc) glad_vkGetCalibratedTimestampsKHR, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    ret = glad_vkGetCalibratedTimestampsKHR(device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    _post_call_vulkansc_callback((void*) &ret, "vkGetCalibratedTimestampsKHR", (GLADapiproc) glad_vkGetCalibratedTimestampsKHR, 5, device, timestampCount, pTimestampInfos, pTimestamps, pMaxDeviation);
    return ret;
}
PFN_vkGetCalibratedTimestampsKHR glad_debug_vkGetCalibratedTimestampsKHR = glad_debug_impl_vkGetCalibratedTimestampsKHR;
PFN_vkGetCommandPoolMemoryConsumption glad_vkGetCommandPoolMemoryConsumption = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetCommandPoolMemoryConsumption(VkDevice device, VkCommandPool commandPool, VkCommandBuffer commandBuffer, VkCommandPoolMemoryConsumption * pConsumption) {
    _pre_call_vulkansc_callback("vkGetCommandPoolMemoryConsumption", (GLADapiproc) glad_vkGetCommandPoolMemoryConsumption, 4, device, commandPool, commandBuffer, pConsumption);
    glad_vkGetCommandPoolMemoryConsumption(device, commandPool, commandBuffer, pConsumption);
    _post_call_vulkansc_callback(NULL, "vkGetCommandPoolMemoryConsumption", (GLADapiproc) glad_vkGetCommandPoolMemoryConsumption, 4, device, commandPool, commandBuffer, pConsumption);
    
}
PFN_vkGetCommandPoolMemoryConsumption glad_debug_vkGetCommandPoolMemoryConsumption = glad_debug_impl_vkGetCommandPoolMemoryConsumption;
PFN_vkGetDescriptorSetLayoutSupport glad_vkGetDescriptorSetLayoutSupport = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDescriptorSetLayoutSupport(VkDevice device, const VkDescriptorSetLayoutCreateInfo * pCreateInfo, VkDescriptorSetLayoutSupport * pSupport) {
    _pre_call_vulkansc_callback("vkGetDescriptorSetLayoutSupport", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupport, 3, device, pCreateInfo, pSupport);
    glad_vkGetDescriptorSetLayoutSupport(device, pCreateInfo, pSupport);
    _post_call_vulkansc_callback(NULL, "vkGetDescriptorSetLayoutSupport", (GLADapiproc) glad_vkGetDescriptorSetLayoutSupport, 3, device, pCreateInfo, pSupport);
    
}
PFN_vkGetDescriptorSetLayoutSupport glad_debug_vkGetDescriptorSetLayoutSupport = glad_debug_impl_vkGetDescriptorSetLayoutSupport;
PFN_vkGetDeviceBufferMemoryRequirements glad_vkGetDeviceBufferMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceBufferMemoryRequirements(VkDevice device, const VkDeviceBufferMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetDeviceBufferMemoryRequirements", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceBufferMemoryRequirements(device, pInfo, pMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetDeviceBufferMemoryRequirements", (GLADapiproc) glad_vkGetDeviceBufferMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceBufferMemoryRequirements glad_debug_vkGetDeviceBufferMemoryRequirements = glad_debug_impl_vkGetDeviceBufferMemoryRequirements;
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_vkGetDeviceGroupPeerMemoryFeatures = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures(VkDevice device, uint32_t heapIndex, uint32_t localDeviceIndex, uint32_t remoteDeviceIndex, VkPeerMemoryFeatureFlags * pPeerMemoryFeatures) {
    _pre_call_vulkansc_callback("vkGetDeviceGroupPeerMemoryFeatures", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeatures, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    glad_vkGetDeviceGroupPeerMemoryFeatures(device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    _post_call_vulkansc_callback(NULL, "vkGetDeviceGroupPeerMemoryFeatures", (GLADapiproc) glad_vkGetDeviceGroupPeerMemoryFeatures, 5, device, heapIndex, localDeviceIndex, remoteDeviceIndex, pPeerMemoryFeatures);
    
}
PFN_vkGetDeviceGroupPeerMemoryFeatures glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR(VkDevice device, VkDeviceGroupPresentCapabilitiesKHR * pDeviceGroupPresentCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDeviceGroupPresentCapabilitiesKHR", (GLADapiproc) glad_vkGetDeviceGroupPresentCapabilitiesKHR, 2, device, pDeviceGroupPresentCapabilities);
    ret = glad_vkGetDeviceGroupPresentCapabilitiesKHR(device, pDeviceGroupPresentCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDeviceGroupPresentCapabilitiesKHR", (GLADapiproc) glad_vkGetDeviceGroupPresentCapabilitiesKHR, 2, device, pDeviceGroupPresentCapabilities);
    return ret;
}
PFN_vkGetDeviceGroupPresentCapabilitiesKHR glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR;
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR(VkDevice device, VkSurfaceKHR surface, VkDeviceGroupPresentModeFlagsKHR * pModes) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDeviceGroupSurfacePresentModesKHR", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModesKHR, 3, device, surface, pModes);
    ret = glad_vkGetDeviceGroupSurfacePresentModesKHR(device, surface, pModes);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDeviceGroupSurfacePresentModesKHR", (GLADapiproc) glad_vkGetDeviceGroupSurfacePresentModesKHR, 3, device, surface, pModes);
    return ret;
}
PFN_vkGetDeviceGroupSurfacePresentModesKHR glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR;
PFN_vkGetDeviceImageMemoryRequirements glad_vkGetDeviceImageMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetDeviceImageMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetDeviceImageMemoryRequirements(device, pInfo, pMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetDeviceImageMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageMemoryRequirements, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetDeviceImageMemoryRequirements glad_debug_vkGetDeviceImageMemoryRequirements = glad_debug_impl_vkGetDeviceImageMemoryRequirements;
PFN_vkGetDeviceImageSparseMemoryRequirements glad_vkGetDeviceImageSparseMemoryRequirements = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements(VkDevice device, const VkDeviceImageMemoryRequirements * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetDeviceImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirements, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetDeviceImageSparseMemoryRequirements(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetDeviceImageSparseMemoryRequirements", (GLADapiproc) glad_vkGetDeviceImageSparseMemoryRequirements, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetDeviceImageSparseMemoryRequirements glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements;
PFN_vkGetDeviceMemoryOpaqueCaptureAddress glad_vkGetDeviceMemoryOpaqueCaptureAddress = NULL;
static uint64_t GLAD_API_PTR glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress(VkDevice device, const VkDeviceMemoryOpaqueCaptureAddressInfo * pInfo) {
    uint64_t ret;
    _pre_call_vulkansc_callback("vkGetDeviceMemoryOpaqueCaptureAddress", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddress, 2, device, pInfo);
    ret = glad_vkGetDeviceMemoryOpaqueCaptureAddress(device, pInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDeviceMemoryOpaqueCaptureAddress", (GLADapiproc) glad_vkGetDeviceMemoryOpaqueCaptureAddress, 2, device, pInfo);
    return ret;
}
PFN_vkGetDeviceMemoryOpaqueCaptureAddress glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress;
PFN_vkGetDeviceQueue2 glad_vkGetDeviceQueue2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetDeviceQueue2(VkDevice device, const VkDeviceQueueInfo2 * pQueueInfo, VkQueue * pQueue) {
    _pre_call_vulkansc_callback("vkGetDeviceQueue2", (GLADapiproc) glad_vkGetDeviceQueue2, 3, device, pQueueInfo, pQueue);
    glad_vkGetDeviceQueue2(device, pQueueInfo, pQueue);
    _post_call_vulkansc_callback(NULL, "vkGetDeviceQueue2", (GLADapiproc) glad_vkGetDeviceQueue2, 3, device, pQueueInfo, pQueue);
    
}
PFN_vkGetDeviceQueue2 glad_debug_vkGetDeviceQueue2 = glad_debug_impl_vkGetDeviceQueue2;
PFN_vkGetDisplayModeProperties2KHR glad_vkGetDisplayModeProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayModeProperties2KHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModeProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDisplayModeProperties2KHR", (GLADapiproc) glad_vkGetDisplayModeProperties2KHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    ret = glad_vkGetDisplayModeProperties2KHR(physicalDevice, display, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDisplayModeProperties2KHR", (GLADapiproc) glad_vkGetDisplayModeProperties2KHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetDisplayModeProperties2KHR glad_debug_vkGetDisplayModeProperties2KHR = glad_debug_impl_vkGetDisplayModeProperties2KHR;
PFN_vkGetDisplayModePropertiesKHR glad_vkGetDisplayModePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayModePropertiesKHR(VkPhysicalDevice physicalDevice, VkDisplayKHR display, uint32_t * pPropertyCount, VkDisplayModePropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDisplayModePropertiesKHR", (GLADapiproc) glad_vkGetDisplayModePropertiesKHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    ret = glad_vkGetDisplayModePropertiesKHR(physicalDevice, display, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDisplayModePropertiesKHR", (GLADapiproc) glad_vkGetDisplayModePropertiesKHR, 4, physicalDevice, display, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetDisplayModePropertiesKHR glad_debug_vkGetDisplayModePropertiesKHR = glad_debug_impl_vkGetDisplayModePropertiesKHR;
PFN_vkGetDisplayPlaneCapabilities2KHR glad_vkGetDisplayPlaneCapabilities2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkDisplayPlaneInfo2KHR * pDisplayPlaneInfo, VkDisplayPlaneCapabilities2KHR * pCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDisplayPlaneCapabilities2KHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilities2KHR, 3, physicalDevice, pDisplayPlaneInfo, pCapabilities);
    ret = glad_vkGetDisplayPlaneCapabilities2KHR(physicalDevice, pDisplayPlaneInfo, pCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDisplayPlaneCapabilities2KHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilities2KHR, 3, physicalDevice, pDisplayPlaneInfo, pCapabilities);
    return ret;
}
PFN_vkGetDisplayPlaneCapabilities2KHR glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR;
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_vkGetDisplayPlaneCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkDisplayModeKHR mode, uint32_t planeIndex, VkDisplayPlaneCapabilitiesKHR * pCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDisplayPlaneCapabilitiesKHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilitiesKHR, 4, physicalDevice, mode, planeIndex, pCapabilities);
    ret = glad_vkGetDisplayPlaneCapabilitiesKHR(physicalDevice, mode, planeIndex, pCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDisplayPlaneCapabilitiesKHR", (GLADapiproc) glad_vkGetDisplayPlaneCapabilitiesKHR, 4, physicalDevice, mode, planeIndex, pCapabilities);
    return ret;
}
PFN_vkGetDisplayPlaneCapabilitiesKHR glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_vkGetDisplayPlaneSupportedDisplaysKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR(VkPhysicalDevice physicalDevice, uint32_t planeIndex, uint32_t * pDisplayCount, VkDisplayKHR * pDisplays) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetDisplayPlaneSupportedDisplaysKHR", (GLADapiproc) glad_vkGetDisplayPlaneSupportedDisplaysKHR, 4, physicalDevice, planeIndex, pDisplayCount, pDisplays);
    ret = glad_vkGetDisplayPlaneSupportedDisplaysKHR(physicalDevice, planeIndex, pDisplayCount, pDisplays);
    _post_call_vulkansc_callback((void*) &ret, "vkGetDisplayPlaneSupportedDisplaysKHR", (GLADapiproc) glad_vkGetDisplayPlaneSupportedDisplaysKHR, 4, physicalDevice, planeIndex, pDisplayCount, pDisplays);
    return ret;
}
PFN_vkGetDisplayPlaneSupportedDisplaysKHR glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR;
PFN_vkGetFaultData glad_vkGetFaultData = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFaultData(VkDevice device, VkFaultQueryBehavior faultQueryBehavior, VkBool32 * pUnrecordedFaults, uint32_t * pFaultCount, VkFaultData * pFaults) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetFaultData", (GLADapiproc) glad_vkGetFaultData, 5, device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
    ret = glad_vkGetFaultData(device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
    _post_call_vulkansc_callback((void*) &ret, "vkGetFaultData", (GLADapiproc) glad_vkGetFaultData, 5, device, faultQueryBehavior, pUnrecordedFaults, pFaultCount, pFaults);
    return ret;
}
PFN_vkGetFaultData glad_debug_vkGetFaultData = glad_debug_impl_vkGetFaultData;
PFN_vkGetFenceFdKHR glad_vkGetFenceFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceFdKHR(VkDevice device, const VkFenceGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetFenceFdKHR", (GLADapiproc) glad_vkGetFenceFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetFenceFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkansc_callback((void*) &ret, "vkGetFenceFdKHR", (GLADapiproc) glad_vkGetFenceFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetFenceFdKHR glad_debug_vkGetFenceFdKHR = glad_debug_impl_vkGetFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
PFN_vkGetFenceSciSyncFenceNV glad_vkGetFenceSciSyncFenceNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceSciSyncFenceNV(VkDevice device, const VkFenceGetSciSyncInfoNV * pGetSciSyncHandleInfo, void * pHandle) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetFenceSciSyncFenceNV", (GLADapiproc) glad_vkGetFenceSciSyncFenceNV, 3, device, pGetSciSyncHandleInfo, pHandle);
    ret = glad_vkGetFenceSciSyncFenceNV(device, pGetSciSyncHandleInfo, pHandle);
    _post_call_vulkansc_callback((void*) &ret, "vkGetFenceSciSyncFenceNV", (GLADapiproc) glad_vkGetFenceSciSyncFenceNV, 3, device, pGetSciSyncHandleInfo, pHandle);
    return ret;
}
PFN_vkGetFenceSciSyncFenceNV glad_debug_vkGetFenceSciSyncFenceNV = glad_debug_impl_vkGetFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
PFN_vkGetFenceSciSyncObjNV glad_vkGetFenceSciSyncObjNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetFenceSciSyncObjNV(VkDevice device, const VkFenceGetSciSyncInfoNV * pGetSciSyncHandleInfo, void * pHandle) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetFenceSciSyncObjNV", (GLADapiproc) glad_vkGetFenceSciSyncObjNV, 3, device, pGetSciSyncHandleInfo, pHandle);
    ret = glad_vkGetFenceSciSyncObjNV(device, pGetSciSyncHandleInfo, pHandle);
    _post_call_vulkansc_callback((void*) &ret, "vkGetFenceSciSyncObjNV", (GLADapiproc) glad_vkGetFenceSciSyncObjNV, 3, device, pGetSciSyncHandleInfo, pHandle);
    return ret;
}
PFN_vkGetFenceSciSyncObjNV glad_debug_vkGetFenceSciSyncObjNV = glad_debug_impl_vkGetFenceSciSyncObjNV;

#endif
PFN_vkGetImageDrmFormatModifierPropertiesEXT glad_vkGetImageDrmFormatModifierPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT(VkDevice device, VkImage image, VkImageDrmFormatModifierPropertiesEXT * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetImageDrmFormatModifierPropertiesEXT", (GLADapiproc) glad_vkGetImageDrmFormatModifierPropertiesEXT, 3, device, image, pProperties);
    ret = glad_vkGetImageDrmFormatModifierPropertiesEXT(device, image, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetImageDrmFormatModifierPropertiesEXT", (GLADapiproc) glad_vkGetImageDrmFormatModifierPropertiesEXT, 3, device, image, pProperties);
    return ret;
}
PFN_vkGetImageDrmFormatModifierPropertiesEXT glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT;
PFN_vkGetImageMemoryRequirements2 glad_vkGetImageMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageMemoryRequirements2(VkDevice device, const VkImageMemoryRequirementsInfo2 * pInfo, VkMemoryRequirements2 * pMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetImageMemoryRequirements2", (GLADapiproc) glad_vkGetImageMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    glad_vkGetImageMemoryRequirements2(device, pInfo, pMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetImageMemoryRequirements2", (GLADapiproc) glad_vkGetImageMemoryRequirements2, 3, device, pInfo, pMemoryRequirements);
    
}
PFN_vkGetImageMemoryRequirements2 glad_debug_vkGetImageMemoryRequirements2 = glad_debug_impl_vkGetImageMemoryRequirements2;
PFN_vkGetImageSparseMemoryRequirements2 glad_vkGetImageSparseMemoryRequirements2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetImageSparseMemoryRequirements2(VkDevice device, const VkImageSparseMemoryRequirementsInfo2 * pInfo, uint32_t * pSparseMemoryRequirementCount, VkSparseImageMemoryRequirements2 * pSparseMemoryRequirements) {
    _pre_call_vulkansc_callback("vkGetImageSparseMemoryRequirements2", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    glad_vkGetImageSparseMemoryRequirements2(device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    _post_call_vulkansc_callback(NULL, "vkGetImageSparseMemoryRequirements2", (GLADapiproc) glad_vkGetImageSparseMemoryRequirements2, 4, device, pInfo, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
    
}
PFN_vkGetImageSparseMemoryRequirements2 glad_debug_vkGetImageSparseMemoryRequirements2 = glad_debug_impl_vkGetImageSparseMemoryRequirements2;
PFN_vkGetMemoryFdKHR glad_vkGetMemoryFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryFdKHR(VkDevice device, const VkMemoryGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetMemoryFdKHR", (GLADapiproc) glad_vkGetMemoryFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetMemoryFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkansc_callback((void*) &ret, "vkGetMemoryFdKHR", (GLADapiproc) glad_vkGetMemoryFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetMemoryFdKHR glad_debug_vkGetMemoryFdKHR = glad_debug_impl_vkGetMemoryFdKHR;
PFN_vkGetMemoryFdPropertiesKHR glad_vkGetMemoryFdPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryFdPropertiesKHR(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, int fd, VkMemoryFdPropertiesKHR * pMemoryFdProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetMemoryFdPropertiesKHR", (GLADapiproc) glad_vkGetMemoryFdPropertiesKHR, 4, device, handleType, fd, pMemoryFdProperties);
    ret = glad_vkGetMemoryFdPropertiesKHR(device, handleType, fd, pMemoryFdProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetMemoryFdPropertiesKHR", (GLADapiproc) glad_vkGetMemoryFdPropertiesKHR, 4, device, handleType, fd, pMemoryFdProperties);
    return ret;
}
PFN_vkGetMemoryFdPropertiesKHR glad_debug_vkGetMemoryFdPropertiesKHR = glad_debug_impl_vkGetMemoryFdPropertiesKHR;
PFN_vkGetMemoryHostPointerPropertiesEXT glad_vkGetMemoryHostPointerPropertiesEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT(VkDevice device, VkExternalMemoryHandleTypeFlagBits handleType, const void * pHostPointer, VkMemoryHostPointerPropertiesEXT * pMemoryHostPointerProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetMemoryHostPointerPropertiesEXT", (GLADapiproc) glad_vkGetMemoryHostPointerPropertiesEXT, 4, device, handleType, pHostPointer, pMemoryHostPointerProperties);
    ret = glad_vkGetMemoryHostPointerPropertiesEXT(device, handleType, pHostPointer, pMemoryHostPointerProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetMemoryHostPointerPropertiesEXT", (GLADapiproc) glad_vkGetMemoryHostPointerPropertiesEXT, 4, device, handleType, pHostPointer, pMemoryHostPointerProperties);
    return ret;
}
PFN_vkGetMemoryHostPointerPropertiesEXT glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkGetMemorySciBufNV glad_vkGetMemorySciBufNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetMemorySciBufNV(VkDevice device, const VkMemoryGetSciBufInfoNV * pGetSciBufInfo, NvSciBufObj * pHandle) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetMemorySciBufNV", (GLADapiproc) glad_vkGetMemorySciBufNV, 3, device, pGetSciBufInfo, pHandle);
    ret = glad_vkGetMemorySciBufNV(device, pGetSciBufInfo, pHandle);
    _post_call_vulkansc_callback((void*) &ret, "vkGetMemorySciBufNV", (GLADapiproc) glad_vkGetMemorySciBufNV, 3, device, pGetSciBufInfo, pHandle);
    return ret;
}
PFN_vkGetMemorySciBufNV glad_debug_vkGetMemorySciBufNV = glad_debug_impl_vkGetMemorySciBufNV;

#endif
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(VkPhysicalDevice physicalDevice, uint32_t * pTimeDomainCount, VkTimeDomainKHR * pTimeDomains) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceCalibrateableTimeDomainsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    ret = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR(physicalDevice, pTimeDomainCount, pTimeDomains);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR, 3, physicalDevice, pTimeDomainCount, pTimeDomains);
    return ret;
}
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlaneProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceDisplayPlaneProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPlanePropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_vkGetPhysicalDeviceDisplayProperties2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayProperties2KHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceDisplayProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayProperties2KHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceDisplayProperties2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayProperties2KHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayProperties2KHR glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_vkGetPhysicalDeviceDisplayPropertiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR(VkPhysicalDevice physicalDevice, uint32_t * pPropertyCount, VkDisplayPropertiesKHR * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceDisplayPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    ret = glad_vkGetPhysicalDeviceDisplayPropertiesKHR(physicalDevice, pPropertyCount, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceDisplayPropertiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceDisplayPropertiesKHR, 3, physicalDevice, pPropertyCount, pProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR;
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_vkGetPhysicalDeviceExternalBufferProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalBufferInfo * pExternalBufferInfo, VkExternalBufferProperties * pExternalBufferProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceExternalBufferProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferProperties, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    glad_vkGetPhysicalDeviceExternalBufferProperties(physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceExternalBufferProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalBufferProperties, 3, physicalDevice, pExternalBufferInfo, pExternalBufferProperties);
    
}
PFN_vkGetPhysicalDeviceExternalBufferProperties glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties;
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_vkGetPhysicalDeviceExternalFenceProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalFenceInfo * pExternalFenceInfo, VkExternalFenceProperties * pExternalFenceProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceExternalFenceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFenceProperties, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    glad_vkGetPhysicalDeviceExternalFenceProperties(physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceExternalFenceProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalFenceProperties, 3, physicalDevice, pExternalFenceInfo, pExternalFenceProperties);
    
}
PFN_vkGetPhysicalDeviceExternalFenceProperties glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV(VkPhysicalDevice physicalDevice, VkExternalMemoryHandleTypeFlagBits handleType, NvSciBufObj handle, VkMemorySciBufPropertiesNV * pMemorySciBufProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV, 4, physicalDevice, handleType, handle, pMemorySciBufProperties);
    ret = glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV(physicalDevice, handleType, handle, pMemorySciBufProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV", (GLADapiproc) glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV, 4, physicalDevice, handleType, handle, pMemorySciBufProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV glad_debug_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV;

#endif
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceExternalSemaphoreInfo * pExternalSemaphoreInfo, VkExternalSemaphoreProperties * pExternalSemaphoreProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceExternalSemaphoreProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphoreProperties, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    glad_vkGetPhysicalDeviceExternalSemaphoreProperties(physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceExternalSemaphoreProperties", (GLADapiproc) glad_vkGetPhysicalDeviceExternalSemaphoreProperties, 3, physicalDevice, pExternalSemaphoreInfo, pExternalSemaphoreProperties);
    
}
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties;
PFN_vkGetPhysicalDeviceFeatures2 glad_vkGetPhysicalDeviceFeatures2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFeatures2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceFeatures2 * pFeatures) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceFeatures2", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2, 2, physicalDevice, pFeatures);
    glad_vkGetPhysicalDeviceFeatures2(physicalDevice, pFeatures);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceFeatures2", (GLADapiproc) glad_vkGetPhysicalDeviceFeatures2, 2, physicalDevice, pFeatures);
    
}
PFN_vkGetPhysicalDeviceFeatures2 glad_debug_vkGetPhysicalDeviceFeatures2 = glad_debug_impl_vkGetPhysicalDeviceFeatures2;
PFN_vkGetPhysicalDeviceFormatProperties2 glad_vkGetPhysicalDeviceFormatProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFormatProperties2(VkPhysicalDevice physicalDevice, VkFormat format, VkFormatProperties2 * pFormatProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2, 3, physicalDevice, format, pFormatProperties);
    glad_vkGetPhysicalDeviceFormatProperties2(physicalDevice, format, pFormatProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceFormatProperties2, 3, physicalDevice, format, pFormatProperties);
    
}
PFN_vkGetPhysicalDeviceFormatProperties2 glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2;
PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR glad_vkGetPhysicalDeviceFragmentShadingRatesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR(VkPhysicalDevice physicalDevice, uint32_t * pFragmentShadingRateCount, VkPhysicalDeviceFragmentShadingRateKHR * pFragmentShadingRates) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceFragmentShadingRatesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceFragmentShadingRatesKHR, 3, physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    ret = glad_vkGetPhysicalDeviceFragmentShadingRatesKHR(physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceFragmentShadingRatesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceFragmentShadingRatesKHR, 3, physicalDevice, pFragmentShadingRateCount, pFragmentShadingRates);
    return ret;
}
PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR;
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceImageFormatInfo2 * pImageFormatInfo, VkImageFormatProperties2 * pImageFormatProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    ret = glad_vkGetPhysicalDeviceImageFormatProperties2(physicalDevice, pImageFormatInfo, pImageFormatProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceImageFormatProperties2, 3, physicalDevice, pImageFormatInfo, pImageFormatProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceImageFormatProperties2 glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2;
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_vkGetPhysicalDeviceMemoryProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceMemoryProperties2 * pMemoryProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceMemoryProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2, 2, physicalDevice, pMemoryProperties);
    glad_vkGetPhysicalDeviceMemoryProperties2(physicalDevice, pMemoryProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceMemoryProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceMemoryProperties2, 2, physicalDevice, pMemoryProperties);
    
}
PFN_vkGetPhysicalDeviceMemoryProperties2 glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2;
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT(VkPhysicalDevice physicalDevice, VkSampleCountFlagBits samples, VkMultisamplePropertiesEXT * pMultisampleProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceMultisamplePropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceMultisamplePropertiesEXT, 3, physicalDevice, samples, pMultisampleProperties);
    glad_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice, samples, pMultisampleProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceMultisamplePropertiesEXT", (GLADapiproc) glad_vkGetPhysicalDeviceMultisamplePropertiesEXT, 3, physicalDevice, samples, pMultisampleProperties);
    
}
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT;
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pRectCount, VkRect2D * pRects) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDevicePresentRectanglesKHR", (GLADapiproc) glad_vkGetPhysicalDevicePresentRectanglesKHR, 4, physicalDevice, surface, pRectCount, pRects);
    ret = glad_vkGetPhysicalDevicePresentRectanglesKHR(physicalDevice, surface, pRectCount, pRects);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDevicePresentRectanglesKHR", (GLADapiproc) glad_vkGetPhysicalDevicePresentRectanglesKHR, 4, physicalDevice, surface, pRectCount, pRects);
    return ret;
}
PFN_vkGetPhysicalDevicePresentRectanglesKHR glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR;
PFN_vkGetPhysicalDeviceProperties2 glad_vkGetPhysicalDeviceProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceProperties2(VkPhysicalDevice physicalDevice, VkPhysicalDeviceProperties2 * pProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2, 2, physicalDevice, pProperties);
    glad_vkGetPhysicalDeviceProperties2(physicalDevice, pProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceProperties2, 2, physicalDevice, pProperties);
    
}
PFN_vkGetPhysicalDeviceProperties2 glad_debug_vkGetPhysicalDeviceProperties2 = glad_debug_impl_vkGetPhysicalDeviceProperties2;
PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(VkPhysicalDevice physicalDevice, const VkQueryPoolPerformanceCreateInfoKHR * pPerformanceQueryCreateInfo, uint32_t * pNumPasses) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR, 3, physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR, 3, physicalDevice, pPerformanceQueryCreateInfo, pNumPasses);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2(VkPhysicalDevice physicalDevice, uint32_t * pQueueFamilyPropertyCount, VkQueueFamilyProperties2 * pQueueFamilyProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceQueueFamilyProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    glad_vkGetPhysicalDeviceQueueFamilyProperties2(physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceQueueFamilyProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceQueueFamilyProperties2, 3, physicalDevice, pQueueFamilyPropertyCount, pQueueFamilyProperties);
    
}
PFN_vkGetPhysicalDeviceQueueFamilyProperties2 glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2;
PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceRefreshableObjectTypesKHR(VkPhysicalDevice physicalDevice, uint32_t * pRefreshableObjectTypeCount, VkObjectType * pRefreshableObjectTypes) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceRefreshableObjectTypesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR, 3, physicalDevice, pRefreshableObjectTypeCount, pRefreshableObjectTypes);
    ret = glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR(physicalDevice, pRefreshableObjectTypeCount, pRefreshableObjectTypes);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceRefreshableObjectTypesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR, 3, physicalDevice, pRefreshableObjectTypeCount, pRefreshableObjectTypes);
    return ret;
}
PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR glad_debug_vkGetPhysicalDeviceRefreshableObjectTypesKHR = glad_debug_impl_vkGetPhysicalDeviceRefreshableObjectTypesKHR;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkGetPhysicalDeviceSciBufAttributesNV glad_vkGetPhysicalDeviceSciBufAttributesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSciBufAttributesNV(VkPhysicalDevice physicalDevice, NvSciBufAttrList pAttributes) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSciBufAttributesNV", (GLADapiproc) glad_vkGetPhysicalDeviceSciBufAttributesNV, 2, physicalDevice, pAttributes);
    ret = glad_vkGetPhysicalDeviceSciBufAttributesNV(physicalDevice, pAttributes);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSciBufAttributesNV", (GLADapiproc) glad_vkGetPhysicalDeviceSciBufAttributesNV, 2, physicalDevice, pAttributes);
    return ret;
}
PFN_vkGetPhysicalDeviceSciBufAttributesNV glad_debug_vkGetPhysicalDeviceSciBufAttributesNV = glad_debug_impl_vkGetPhysicalDeviceSciBufAttributesNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
PFN_vkGetPhysicalDeviceSciSyncAttributesNV glad_vkGetPhysicalDeviceSciSyncAttributesNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSciSyncAttributesNV(VkPhysicalDevice physicalDevice, const VkSciSyncAttributesInfoNV * pSciSyncAttributesInfo, NvSciSyncAttrList pAttributes) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSciSyncAttributesNV", (GLADapiproc) glad_vkGetPhysicalDeviceSciSyncAttributesNV, 3, physicalDevice, pSciSyncAttributesInfo, pAttributes);
    ret = glad_vkGetPhysicalDeviceSciSyncAttributesNV(physicalDevice, pSciSyncAttributesInfo, pAttributes);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSciSyncAttributesNV", (GLADapiproc) glad_vkGetPhysicalDeviceSciSyncAttributesNV, 3, physicalDevice, pSciSyncAttributesInfo, pAttributes);
    return ret;
}
PFN_vkGetPhysicalDeviceSciSyncAttributesNV glad_debug_vkGetPhysicalDeviceSciSyncAttributesNV = glad_debug_impl_vkGetPhysicalDeviceSciSyncAttributesNV;

#endif
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSparseImageFormatInfo2 * pFormatInfo, uint32_t * pPropertyCount, VkSparseImageFormatProperties2 * pProperties) {
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSparseImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    glad_vkGetPhysicalDeviceSparseImageFormatProperties2(physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    _post_call_vulkansc_callback(NULL, "vkGetPhysicalDeviceSparseImageFormatProperties2", (GLADapiproc) glad_vkGetPhysicalDeviceSparseImageFormatProperties2, 4, physicalDevice, pFormatInfo, pPropertyCount, pProperties);
    
}
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2 glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilities2EXT * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceCapabilities2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT, 3, physicalDevice, surface, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT(physicalDevice, surface, pSurfaceCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilities2EXT", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT, 3, physicalDevice, surface, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, VkSurfaceCapabilities2KHR * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceCapabilities2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR, 3, physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR(physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilities2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR, 3, physicalDevice, pSurfaceInfo, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkSurfaceCapabilitiesKHR * pSurfaceCapabilities) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR, 3, physicalDevice, surface, pSurfaceCapabilities);
    ret = glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, pSurfaceCapabilities);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR, 3, physicalDevice, surface, pSurfaceCapabilities);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_vkGetPhysicalDeviceSurfaceFormats2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR(VkPhysicalDevice physicalDevice, const VkPhysicalDeviceSurfaceInfo2KHR * pSurfaceInfo, uint32_t * pSurfaceFormatCount, VkSurfaceFormat2KHR * pSurfaceFormats) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceFormats2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormats2KHR, 4, physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    ret = glad_vkGetPhysicalDeviceSurfaceFormats2KHR(physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceFormats2KHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormats2KHR, 4, physicalDevice, pSurfaceInfo, pSurfaceFormatCount, pSurfaceFormats);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pSurfaceFormatCount, VkSurfaceFormatKHR * pSurfaceFormats) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceFormatsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormatsKHR, 4, physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    ret = glad_vkGetPhysicalDeviceSurfaceFormatsKHR(physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceFormatsKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceFormatsKHR, 4, physicalDevice, surface, pSurfaceFormatCount, pSurfaceFormats);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR;
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t * pPresentModeCount, VkPresentModeKHR * pPresentModes) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfacePresentModesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModesKHR, 4, physicalDevice, surface, pPresentModeCount, pPresentModes);
    ret = glad_vkGetPhysicalDeviceSurfacePresentModesKHR(physicalDevice, surface, pPresentModeCount, pPresentModes);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfacePresentModesKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfacePresentModesKHR, 4, physicalDevice, surface, pPresentModeCount, pPresentModes);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR(VkPhysicalDevice physicalDevice, uint32_t queueFamilyIndex, VkSurfaceKHR surface, VkBool32 * pSupported) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceSurfaceSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceSupportKHR, 4, physicalDevice, queueFamilyIndex, surface, pSupported);
    ret = glad_vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, queueFamilyIndex, surface, pSupported);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceSurfaceSupportKHR", (GLADapiproc) glad_vkGetPhysicalDeviceSurfaceSupportKHR, 4, physicalDevice, queueFamilyIndex, surface, pSupported);
    return ret;
}
PFN_vkGetPhysicalDeviceSurfaceSupportKHR glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR;
PFN_vkGetPhysicalDeviceToolProperties glad_vkGetPhysicalDeviceToolProperties = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetPhysicalDeviceToolProperties(VkPhysicalDevice physicalDevice, uint32_t * pToolCount, VkPhysicalDeviceToolProperties * pToolProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetPhysicalDeviceToolProperties", (GLADapiproc) glad_vkGetPhysicalDeviceToolProperties, 3, physicalDevice, pToolCount, pToolProperties);
    ret = glad_vkGetPhysicalDeviceToolProperties(physicalDevice, pToolCount, pToolProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetPhysicalDeviceToolProperties", (GLADapiproc) glad_vkGetPhysicalDeviceToolProperties, 3, physicalDevice, pToolCount, pToolProperties);
    return ret;
}
PFN_vkGetPhysicalDeviceToolProperties glad_debug_vkGetPhysicalDeviceToolProperties = glad_debug_impl_vkGetPhysicalDeviceToolProperties;
PFN_vkGetPrivateData glad_vkGetPrivateData = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t * pData) {
    _pre_call_vulkansc_callback("vkGetPrivateData", (GLADapiproc) glad_vkGetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, pData);
    glad_vkGetPrivateData(device, objectType, objectHandle, privateDataSlot, pData);
    _post_call_vulkansc_callback(NULL, "vkGetPrivateData", (GLADapiproc) glad_vkGetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, pData);
    
}
PFN_vkGetPrivateData glad_debug_vkGetPrivateData = glad_debug_impl_vkGetPrivateData;
PFN_vkGetQueueCheckpointData2NV glad_vkGetQueueCheckpointData2NV = NULL;
static void GLAD_API_PTR glad_debug_impl_vkGetQueueCheckpointData2NV(VkQueue queue, uint32_t * pCheckpointDataCount, VkCheckpointData2NV * pCheckpointData) {
    _pre_call_vulkansc_callback("vkGetQueueCheckpointData2NV", (GLADapiproc) glad_vkGetQueueCheckpointData2NV, 3, queue, pCheckpointDataCount, pCheckpointData);
    glad_vkGetQueueCheckpointData2NV(queue, pCheckpointDataCount, pCheckpointData);
    _post_call_vulkansc_callback(NULL, "vkGetQueueCheckpointData2NV", (GLADapiproc) glad_vkGetQueueCheckpointData2NV, 3, queue, pCheckpointDataCount, pCheckpointData);
    
}
PFN_vkGetQueueCheckpointData2NV glad_debug_vkGetQueueCheckpointData2NV = glad_debug_impl_vkGetQueueCheckpointData2NV;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkGetScreenBufferPropertiesQNX glad_vkGetScreenBufferPropertiesQNX = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetScreenBufferPropertiesQNX(VkDevice device, const struct _screen_buffer * buffer, VkScreenBufferPropertiesQNX * pProperties) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetScreenBufferPropertiesQNX", (GLADapiproc) glad_vkGetScreenBufferPropertiesQNX, 3, device, buffer, pProperties);
    ret = glad_vkGetScreenBufferPropertiesQNX(device, buffer, pProperties);
    _post_call_vulkansc_callback((void*) &ret, "vkGetScreenBufferPropertiesQNX", (GLADapiproc) glad_vkGetScreenBufferPropertiesQNX, 3, device, buffer, pProperties);
    return ret;
}
PFN_vkGetScreenBufferPropertiesQNX glad_debug_vkGetScreenBufferPropertiesQNX = glad_debug_impl_vkGetScreenBufferPropertiesQNX;

#endif
PFN_vkGetSemaphoreCounterValue glad_vkGetSemaphoreCounterValue = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreCounterValue(VkDevice device, VkSemaphore semaphore, uint64_t * pValue) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSemaphoreCounterValue", (GLADapiproc) glad_vkGetSemaphoreCounterValue, 3, device, semaphore, pValue);
    ret = glad_vkGetSemaphoreCounterValue(device, semaphore, pValue);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSemaphoreCounterValue", (GLADapiproc) glad_vkGetSemaphoreCounterValue, 3, device, semaphore, pValue);
    return ret;
}
PFN_vkGetSemaphoreCounterValue glad_debug_vkGetSemaphoreCounterValue = glad_debug_impl_vkGetSemaphoreCounterValue;
PFN_vkGetSemaphoreFdKHR glad_vkGetSemaphoreFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreFdKHR(VkDevice device, const VkSemaphoreGetFdInfoKHR * pGetFdInfo, int * pFd) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSemaphoreFdKHR", (GLADapiproc) glad_vkGetSemaphoreFdKHR, 3, device, pGetFdInfo, pFd);
    ret = glad_vkGetSemaphoreFdKHR(device, pGetFdInfo, pFd);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSemaphoreFdKHR", (GLADapiproc) glad_vkGetSemaphoreFdKHR, 3, device, pGetFdInfo, pFd);
    return ret;
}
PFN_vkGetSemaphoreFdKHR glad_debug_vkGetSemaphoreFdKHR = glad_debug_impl_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkGetSemaphoreSciSyncObjNV glad_vkGetSemaphoreSciSyncObjNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSemaphoreSciSyncObjNV(VkDevice device, const VkSemaphoreGetSciSyncInfoNV * pGetSciSyncInfo, void * pHandle) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSemaphoreSciSyncObjNV", (GLADapiproc) glad_vkGetSemaphoreSciSyncObjNV, 3, device, pGetSciSyncInfo, pHandle);
    ret = glad_vkGetSemaphoreSciSyncObjNV(device, pGetSciSyncInfo, pHandle);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSemaphoreSciSyncObjNV", (GLADapiproc) glad_vkGetSemaphoreSciSyncObjNV, 3, device, pGetSciSyncInfo, pHandle);
    return ret;
}
PFN_vkGetSemaphoreSciSyncObjNV glad_debug_vkGetSemaphoreSciSyncObjNV = glad_debug_impl_vkGetSemaphoreSciSyncObjNV;

#endif
PFN_vkGetSwapchainCounterEXT glad_vkGetSwapchainCounterEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainCounterEXT(VkDevice device, VkSwapchainKHR swapchain, VkSurfaceCounterFlagBitsEXT counter, uint64_t * pCounterValue) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSwapchainCounterEXT", (GLADapiproc) glad_vkGetSwapchainCounterEXT, 4, device, swapchain, counter, pCounterValue);
    ret = glad_vkGetSwapchainCounterEXT(device, swapchain, counter, pCounterValue);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSwapchainCounterEXT", (GLADapiproc) glad_vkGetSwapchainCounterEXT, 4, device, swapchain, counter, pCounterValue);
    return ret;
}
PFN_vkGetSwapchainCounterEXT glad_debug_vkGetSwapchainCounterEXT = glad_debug_impl_vkGetSwapchainCounterEXT;
PFN_vkGetSwapchainImagesKHR glad_vkGetSwapchainImagesKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainImagesKHR(VkDevice device, VkSwapchainKHR swapchain, uint32_t * pSwapchainImageCount, VkImage * pSwapchainImages) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSwapchainImagesKHR", (GLADapiproc) glad_vkGetSwapchainImagesKHR, 4, device, swapchain, pSwapchainImageCount, pSwapchainImages);
    ret = glad_vkGetSwapchainImagesKHR(device, swapchain, pSwapchainImageCount, pSwapchainImages);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSwapchainImagesKHR", (GLADapiproc) glad_vkGetSwapchainImagesKHR, 4, device, swapchain, pSwapchainImageCount, pSwapchainImages);
    return ret;
}
PFN_vkGetSwapchainImagesKHR glad_debug_vkGetSwapchainImagesKHR = glad_debug_impl_vkGetSwapchainImagesKHR;
PFN_vkGetSwapchainStatusKHR glad_vkGetSwapchainStatusKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetSwapchainStatusKHR(VkDevice device, VkSwapchainKHR swapchain) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetSwapchainStatusKHR", (GLADapiproc) glad_vkGetSwapchainStatusKHR, 2, device, swapchain);
    ret = glad_vkGetSwapchainStatusKHR(device, swapchain);
    _post_call_vulkansc_callback((void*) &ret, "vkGetSwapchainStatusKHR", (GLADapiproc) glad_vkGetSwapchainStatusKHR, 2, device, swapchain);
    return ret;
}
PFN_vkGetSwapchainStatusKHR glad_debug_vkGetSwapchainStatusKHR = glad_debug_impl_vkGetSwapchainStatusKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetWinrtDisplayNV glad_vkGetWinrtDisplayNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkGetWinrtDisplayNV(VkPhysicalDevice physicalDevice, uint32_t deviceRelativeId, VkDisplayKHR * pDisplay) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkGetWinrtDisplayNV", (GLADapiproc) glad_vkGetWinrtDisplayNV, 3, physicalDevice, deviceRelativeId, pDisplay);
    ret = glad_vkGetWinrtDisplayNV(physicalDevice, deviceRelativeId, pDisplay);
    _post_call_vulkansc_callback((void*) &ret, "vkGetWinrtDisplayNV", (GLADapiproc) glad_vkGetWinrtDisplayNV, 3, physicalDevice, deviceRelativeId, pDisplay);
    return ret;
}
PFN_vkGetWinrtDisplayNV glad_debug_vkGetWinrtDisplayNV = glad_debug_impl_vkGetWinrtDisplayNV;

#endif
PFN_vkImportFenceFdKHR glad_vkImportFenceFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportFenceFdKHR(VkDevice device, const VkImportFenceFdInfoKHR * pImportFenceFdInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkImportFenceFdKHR", (GLADapiproc) glad_vkImportFenceFdKHR, 2, device, pImportFenceFdInfo);
    ret = glad_vkImportFenceFdKHR(device, pImportFenceFdInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkImportFenceFdKHR", (GLADapiproc) glad_vkImportFenceFdKHR, 2, device, pImportFenceFdInfo);
    return ret;
}
PFN_vkImportFenceFdKHR glad_debug_vkImportFenceFdKHR = glad_debug_impl_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
PFN_vkImportFenceSciSyncFenceNV glad_vkImportFenceSciSyncFenceNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportFenceSciSyncFenceNV(VkDevice device, const VkImportFenceSciSyncInfoNV * pImportFenceSciSyncInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkImportFenceSciSyncFenceNV", (GLADapiproc) glad_vkImportFenceSciSyncFenceNV, 2, device, pImportFenceSciSyncInfo);
    ret = glad_vkImportFenceSciSyncFenceNV(device, pImportFenceSciSyncInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkImportFenceSciSyncFenceNV", (GLADapiproc) glad_vkImportFenceSciSyncFenceNV, 2, device, pImportFenceSciSyncInfo);
    return ret;
}
PFN_vkImportFenceSciSyncFenceNV glad_debug_vkImportFenceSciSyncFenceNV = glad_debug_impl_vkImportFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
PFN_vkImportFenceSciSyncObjNV glad_vkImportFenceSciSyncObjNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportFenceSciSyncObjNV(VkDevice device, const VkImportFenceSciSyncInfoNV * pImportFenceSciSyncInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkImportFenceSciSyncObjNV", (GLADapiproc) glad_vkImportFenceSciSyncObjNV, 2, device, pImportFenceSciSyncInfo);
    ret = glad_vkImportFenceSciSyncObjNV(device, pImportFenceSciSyncInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkImportFenceSciSyncObjNV", (GLADapiproc) glad_vkImportFenceSciSyncObjNV, 2, device, pImportFenceSciSyncInfo);
    return ret;
}
PFN_vkImportFenceSciSyncObjNV glad_debug_vkImportFenceSciSyncObjNV = glad_debug_impl_vkImportFenceSciSyncObjNV;

#endif
PFN_vkImportSemaphoreFdKHR glad_vkImportSemaphoreFdKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportSemaphoreFdKHR(VkDevice device, const VkImportSemaphoreFdInfoKHR * pImportSemaphoreFdInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkImportSemaphoreFdKHR", (GLADapiproc) glad_vkImportSemaphoreFdKHR, 2, device, pImportSemaphoreFdInfo);
    ret = glad_vkImportSemaphoreFdKHR(device, pImportSemaphoreFdInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkImportSemaphoreFdKHR", (GLADapiproc) glad_vkImportSemaphoreFdKHR, 2, device, pImportSemaphoreFdInfo);
    return ret;
}
PFN_vkImportSemaphoreFdKHR glad_debug_vkImportSemaphoreFdKHR = glad_debug_impl_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
PFN_vkImportSemaphoreSciSyncObjNV glad_vkImportSemaphoreSciSyncObjNV = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkImportSemaphoreSciSyncObjNV(VkDevice device, const VkImportSemaphoreSciSyncInfoNV * pImportSemaphoreSciSyncInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkImportSemaphoreSciSyncObjNV", (GLADapiproc) glad_vkImportSemaphoreSciSyncObjNV, 2, device, pImportSemaphoreSciSyncInfo);
    ret = glad_vkImportSemaphoreSciSyncObjNV(device, pImportSemaphoreSciSyncInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkImportSemaphoreSciSyncObjNV", (GLADapiproc) glad_vkImportSemaphoreSciSyncObjNV, 2, device, pImportSemaphoreSciSyncInfo);
    return ret;
}
PFN_vkImportSemaphoreSciSyncObjNV glad_debug_vkImportSemaphoreSciSyncObjNV = glad_debug_impl_vkImportSemaphoreSciSyncObjNV;

#endif
PFN_vkQueueBeginDebugUtilsLabelEXT glad_vkQueueBeginDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkansc_callback("vkQueueBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueBeginDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    glad_vkQueueBeginDebugUtilsLabelEXT(queue, pLabelInfo);
    _post_call_vulkansc_callback(NULL, "vkQueueBeginDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueBeginDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    
}
PFN_vkQueueBeginDebugUtilsLabelEXT glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT;
PFN_vkQueueEndDebugUtilsLabelEXT glad_vkQueueEndDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueEndDebugUtilsLabelEXT(VkQueue queue) {
    _pre_call_vulkansc_callback("vkQueueEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueEndDebugUtilsLabelEXT, 1, queue);
    glad_vkQueueEndDebugUtilsLabelEXT(queue);
    _post_call_vulkansc_callback(NULL, "vkQueueEndDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueEndDebugUtilsLabelEXT, 1, queue);
    
}
PFN_vkQueueEndDebugUtilsLabelEXT glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_debug_impl_vkQueueEndDebugUtilsLabelEXT;
PFN_vkQueueInsertDebugUtilsLabelEXT glad_vkQueueInsertDebugUtilsLabelEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT(VkQueue queue, const VkDebugUtilsLabelEXT * pLabelInfo) {
    _pre_call_vulkansc_callback("vkQueueInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueInsertDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    glad_vkQueueInsertDebugUtilsLabelEXT(queue, pLabelInfo);
    _post_call_vulkansc_callback(NULL, "vkQueueInsertDebugUtilsLabelEXT", (GLADapiproc) glad_vkQueueInsertDebugUtilsLabelEXT, 2, queue, pLabelInfo);
    
}
PFN_vkQueueInsertDebugUtilsLabelEXT glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT;
PFN_vkQueuePresentKHR glad_vkQueuePresentKHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR * pPresentInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkQueuePresentKHR", (GLADapiproc) glad_vkQueuePresentKHR, 2, queue, pPresentInfo);
    ret = glad_vkQueuePresentKHR(queue, pPresentInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkQueuePresentKHR", (GLADapiproc) glad_vkQueuePresentKHR, 2, queue, pPresentInfo);
    return ret;
}
PFN_vkQueuePresentKHR glad_debug_vkQueuePresentKHR = glad_debug_impl_vkQueuePresentKHR;
PFN_vkQueueSubmit2 glad_vkQueueSubmit2 = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSubmit2(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkQueueSubmit2", (GLADapiproc) glad_vkQueueSubmit2, 4, queue, submitCount, pSubmits, fence);
    ret = glad_vkQueueSubmit2(queue, submitCount, pSubmits, fence);
    _post_call_vulkansc_callback((void*) &ret, "vkQueueSubmit2", (GLADapiproc) glad_vkQueueSubmit2, 4, queue, submitCount, pSubmits, fence);
    return ret;
}
PFN_vkQueueSubmit2 glad_debug_vkQueueSubmit2 = glad_debug_impl_vkQueueSubmit2;
PFN_vkQueueSubmit2KHR glad_vkQueueSubmit2KHR = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkQueueSubmit2KHR(VkQueue queue, uint32_t submitCount, const VkSubmitInfo2 * pSubmits, VkFence fence) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkQueueSubmit2KHR", (GLADapiproc) glad_vkQueueSubmit2KHR, 4, queue, submitCount, pSubmits, fence);
    ret = glad_vkQueueSubmit2KHR(queue, submitCount, pSubmits, fence);
    _post_call_vulkansc_callback((void*) &ret, "vkQueueSubmit2KHR", (GLADapiproc) glad_vkQueueSubmit2KHR, 4, queue, submitCount, pSubmits, fence);
    return ret;
}
PFN_vkQueueSubmit2KHR glad_debug_vkQueueSubmit2KHR = glad_debug_impl_vkQueueSubmit2KHR;
PFN_vkRegisterDeviceEventEXT glad_vkRegisterDeviceEventEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkRegisterDeviceEventEXT(VkDevice device, const VkDeviceEventInfoEXT * pDeviceEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkRegisterDeviceEventEXT", (GLADapiproc) glad_vkRegisterDeviceEventEXT, 4, device, pDeviceEventInfo, pAllocator, pFence);
    ret = glad_vkRegisterDeviceEventEXT(device, pDeviceEventInfo, pAllocator, pFence);
    _post_call_vulkansc_callback((void*) &ret, "vkRegisterDeviceEventEXT", (GLADapiproc) glad_vkRegisterDeviceEventEXT, 4, device, pDeviceEventInfo, pAllocator, pFence);
    return ret;
}
PFN_vkRegisterDeviceEventEXT glad_debug_vkRegisterDeviceEventEXT = glad_debug_impl_vkRegisterDeviceEventEXT;
PFN_vkRegisterDisplayEventEXT glad_vkRegisterDisplayEventEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkRegisterDisplayEventEXT(VkDevice device, VkDisplayKHR display, const VkDisplayEventInfoEXT * pDisplayEventInfo, const VkAllocationCallbacks * pAllocator, VkFence * pFence) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkRegisterDisplayEventEXT", (GLADapiproc) glad_vkRegisterDisplayEventEXT, 5, device, display, pDisplayEventInfo, pAllocator, pFence);
    ret = glad_vkRegisterDisplayEventEXT(device, display, pDisplayEventInfo, pAllocator, pFence);
    _post_call_vulkansc_callback((void*) &ret, "vkRegisterDisplayEventEXT", (GLADapiproc) glad_vkRegisterDisplayEventEXT, 5, device, display, pDisplayEventInfo, pAllocator, pFence);
    return ret;
}
PFN_vkRegisterDisplayEventEXT glad_debug_vkRegisterDisplayEventEXT = glad_debug_impl_vkRegisterDisplayEventEXT;
PFN_vkReleaseDisplayEXT glad_vkReleaseDisplayEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkReleaseDisplayEXT(VkPhysicalDevice physicalDevice, VkDisplayKHR display) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkReleaseDisplayEXT", (GLADapiproc) glad_vkReleaseDisplayEXT, 2, physicalDevice, display);
    ret = glad_vkReleaseDisplayEXT(physicalDevice, display);
    _post_call_vulkansc_callback((void*) &ret, "vkReleaseDisplayEXT", (GLADapiproc) glad_vkReleaseDisplayEXT, 2, physicalDevice, display);
    return ret;
}
PFN_vkReleaseDisplayEXT glad_debug_vkReleaseDisplayEXT = glad_debug_impl_vkReleaseDisplayEXT;
PFN_vkReleaseProfilingLockKHR glad_vkReleaseProfilingLockKHR = NULL;
static void GLAD_API_PTR glad_debug_impl_vkReleaseProfilingLockKHR(VkDevice device) {
    _pre_call_vulkansc_callback("vkReleaseProfilingLockKHR", (GLADapiproc) glad_vkReleaseProfilingLockKHR, 1, device);
    glad_vkReleaseProfilingLockKHR(device);
    _post_call_vulkansc_callback(NULL, "vkReleaseProfilingLockKHR", (GLADapiproc) glad_vkReleaseProfilingLockKHR, 1, device);
    
}
PFN_vkReleaseProfilingLockKHR glad_debug_vkReleaseProfilingLockKHR = glad_debug_impl_vkReleaseProfilingLockKHR;
PFN_vkResetQueryPool glad_vkResetQueryPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkResetQueryPool(VkDevice device, VkQueryPool queryPool, uint32_t firstQuery, uint32_t queryCount) {
    _pre_call_vulkansc_callback("vkResetQueryPool", (GLADapiproc) glad_vkResetQueryPool, 4, device, queryPool, firstQuery, queryCount);
    glad_vkResetQueryPool(device, queryPool, firstQuery, queryCount);
    _post_call_vulkansc_callback(NULL, "vkResetQueryPool", (GLADapiproc) glad_vkResetQueryPool, 4, device, queryPool, firstQuery, queryCount);
    
}
PFN_vkResetQueryPool glad_debug_vkResetQueryPool = glad_debug_impl_vkResetQueryPool;
PFN_vkSetDebugUtilsObjectNameEXT glad_vkSetDebugUtilsObjectNameEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetDebugUtilsObjectNameEXT(VkDevice device, const VkDebugUtilsObjectNameInfoEXT * pNameInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkSetDebugUtilsObjectNameEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectNameEXT, 2, device, pNameInfo);
    ret = glad_vkSetDebugUtilsObjectNameEXT(device, pNameInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkSetDebugUtilsObjectNameEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectNameEXT, 2, device, pNameInfo);
    return ret;
}
PFN_vkSetDebugUtilsObjectNameEXT glad_debug_vkSetDebugUtilsObjectNameEXT = glad_debug_impl_vkSetDebugUtilsObjectNameEXT;
PFN_vkSetDebugUtilsObjectTagEXT glad_vkSetDebugUtilsObjectTagEXT = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetDebugUtilsObjectTagEXT(VkDevice device, const VkDebugUtilsObjectTagInfoEXT * pTagInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkSetDebugUtilsObjectTagEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectTagEXT, 2, device, pTagInfo);
    ret = glad_vkSetDebugUtilsObjectTagEXT(device, pTagInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkSetDebugUtilsObjectTagEXT", (GLADapiproc) glad_vkSetDebugUtilsObjectTagEXT, 2, device, pTagInfo);
    return ret;
}
PFN_vkSetDebugUtilsObjectTagEXT glad_debug_vkSetDebugUtilsObjectTagEXT = glad_debug_impl_vkSetDebugUtilsObjectTagEXT;
PFN_vkSetHdrMetadataEXT glad_vkSetHdrMetadataEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSetHdrMetadataEXT(VkDevice device, uint32_t swapchainCount, const VkSwapchainKHR * pSwapchains, const VkHdrMetadataEXT * pMetadata) {
    _pre_call_vulkansc_callback("vkSetHdrMetadataEXT", (GLADapiproc) glad_vkSetHdrMetadataEXT, 4, device, swapchainCount, pSwapchains, pMetadata);
    glad_vkSetHdrMetadataEXT(device, swapchainCount, pSwapchains, pMetadata);
    _post_call_vulkansc_callback(NULL, "vkSetHdrMetadataEXT", (GLADapiproc) glad_vkSetHdrMetadataEXT, 4, device, swapchainCount, pSwapchains, pMetadata);
    
}
PFN_vkSetHdrMetadataEXT glad_debug_vkSetHdrMetadataEXT = glad_debug_impl_vkSetHdrMetadataEXT;
PFN_vkSetPrivateData glad_vkSetPrivateData = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSetPrivateData(VkDevice device, VkObjectType objectType, uint64_t objectHandle, VkPrivateDataSlot privateDataSlot, uint64_t data) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkSetPrivateData", (GLADapiproc) glad_vkSetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, data);
    ret = glad_vkSetPrivateData(device, objectType, objectHandle, privateDataSlot, data);
    _post_call_vulkansc_callback((void*) &ret, "vkSetPrivateData", (GLADapiproc) glad_vkSetPrivateData, 5, device, objectType, objectHandle, privateDataSlot, data);
    return ret;
}
PFN_vkSetPrivateData glad_debug_vkSetPrivateData = glad_debug_impl_vkSetPrivateData;
PFN_vkSignalSemaphore glad_vkSignalSemaphore = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkSignalSemaphore(VkDevice device, const VkSemaphoreSignalInfo * pSignalInfo) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkSignalSemaphore", (GLADapiproc) glad_vkSignalSemaphore, 2, device, pSignalInfo);
    ret = glad_vkSignalSemaphore(device, pSignalInfo);
    _post_call_vulkansc_callback((void*) &ret, "vkSignalSemaphore", (GLADapiproc) glad_vkSignalSemaphore, 2, device, pSignalInfo);
    return ret;
}
PFN_vkSignalSemaphore glad_debug_vkSignalSemaphore = glad_debug_impl_vkSignalSemaphore;
PFN_vkSubmitDebugUtilsMessageEXT glad_vkSubmitDebugUtilsMessageEXT = NULL;
static void GLAD_API_PTR glad_debug_impl_vkSubmitDebugUtilsMessageEXT(VkInstance instance, VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity, VkDebugUtilsMessageTypeFlagsEXT messageTypes, const VkDebugUtilsMessengerCallbackDataEXT * pCallbackData) {
    _pre_call_vulkansc_callback("vkSubmitDebugUtilsMessageEXT", (GLADapiproc) glad_vkSubmitDebugUtilsMessageEXT, 4, instance, messageSeverity, messageTypes, pCallbackData);
    glad_vkSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, pCallbackData);
    _post_call_vulkansc_callback(NULL, "vkSubmitDebugUtilsMessageEXT", (GLADapiproc) glad_vkSubmitDebugUtilsMessageEXT, 4, instance, messageSeverity, messageTypes, pCallbackData);
    
}
PFN_vkSubmitDebugUtilsMessageEXT glad_debug_vkSubmitDebugUtilsMessageEXT = glad_debug_impl_vkSubmitDebugUtilsMessageEXT;
PFN_vkTrimCommandPool glad_vkTrimCommandPool = NULL;
static void GLAD_API_PTR glad_debug_impl_vkTrimCommandPool(VkDevice device, VkCommandPool commandPool, VkCommandPoolTrimFlags flags) {
    _pre_call_vulkansc_callback("vkTrimCommandPool", (GLADapiproc) glad_vkTrimCommandPool, 3, device, commandPool, flags);
    glad_vkTrimCommandPool(device, commandPool, flags);
    _post_call_vulkansc_callback(NULL, "vkTrimCommandPool", (GLADapiproc) glad_vkTrimCommandPool, 3, device, commandPool, flags);
    
}
PFN_vkTrimCommandPool glad_debug_vkTrimCommandPool = glad_debug_impl_vkTrimCommandPool;
PFN_vkUpdateDescriptorSetWithTemplate glad_vkUpdateDescriptorSetWithTemplate = NULL;
static void GLAD_API_PTR glad_debug_impl_vkUpdateDescriptorSetWithTemplate(VkDevice device, VkDescriptorSet descriptorSet, VkDescriptorUpdateTemplate descriptorUpdateTemplate, const void * pData) {
    _pre_call_vulkansc_callback("vkUpdateDescriptorSetWithTemplate", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplate, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    glad_vkUpdateDescriptorSetWithTemplate(device, descriptorSet, descriptorUpdateTemplate, pData);
    _post_call_vulkansc_callback(NULL, "vkUpdateDescriptorSetWithTemplate", (GLADapiproc) glad_vkUpdateDescriptorSetWithTemplate, 4, device, descriptorSet, descriptorUpdateTemplate, pData);
    
}
PFN_vkUpdateDescriptorSetWithTemplate glad_debug_vkUpdateDescriptorSetWithTemplate = glad_debug_impl_vkUpdateDescriptorSetWithTemplate;
PFN_vkWaitSemaphores glad_vkWaitSemaphores = NULL;
static VkResult GLAD_API_PTR glad_debug_impl_vkWaitSemaphores(VkDevice device, const VkSemaphoreWaitInfo * pWaitInfo, uint64_t timeout) {
    VkResult ret;
    _pre_call_vulkansc_callback("vkWaitSemaphores", (GLADapiproc) glad_vkWaitSemaphores, 3, device, pWaitInfo, timeout);
    ret = glad_vkWaitSemaphores(device, pWaitInfo, timeout);
    _post_call_vulkansc_callback((void*) &ret, "vkWaitSemaphores", (GLADapiproc) glad_vkWaitSemaphores, 3, device, pWaitInfo, timeout);
    return ret;
}
PFN_vkWaitSemaphores glad_debug_vkWaitSemaphores = glad_debug_impl_vkWaitSemaphores;


static void glad_vk_load_VKSC_VERSION_1_0( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VKSC_VERSION_1_0) return;
    glad_vkGetCommandPoolMemoryConsumption = (PFN_vkGetCommandPoolMemoryConsumption) load(userptr, "vkGetCommandPoolMemoryConsumption");
    glad_vkGetFaultData = (PFN_vkGetFaultData) load(userptr, "vkGetFaultData");
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
static void glad_vk_load_VK_EXT_color_write_enable( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_color_write_enable) return;
    glad_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT) load(userptr, "vkCmdSetColorWriteEnableEXT");
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
static void glad_vk_load_VK_EXT_direct_mode_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_direct_mode_display) return;
    glad_vkReleaseDisplayEXT = (PFN_vkReleaseDisplayEXT) load(userptr, "vkReleaseDisplayEXT");
}
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
static void glad_vk_load_VK_EXT_external_memory_host( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_external_memory_host) return;
    glad_vkGetMemoryHostPointerPropertiesEXT = (PFN_vkGetMemoryHostPointerPropertiesEXT) load(userptr, "vkGetMemoryHostPointerPropertiesEXT");
}
static void glad_vk_load_VK_EXT_hdr_metadata( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_hdr_metadata) return;
    glad_vkSetHdrMetadataEXT = (PFN_vkSetHdrMetadataEXT) load(userptr, "vkSetHdrMetadataEXT");
}
static void glad_vk_load_VK_EXT_headless_surface( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_headless_surface) return;
    glad_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT) load(userptr, "vkCreateHeadlessSurfaceEXT");
}
static void glad_vk_load_VK_EXT_image_drm_format_modifier( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_image_drm_format_modifier) return;
    glad_vkGetImageDrmFormatModifierPropertiesEXT = (PFN_vkGetImageDrmFormatModifierPropertiesEXT) load(userptr, "vkGetImageDrmFormatModifierPropertiesEXT");
}
static void glad_vk_load_VK_EXT_line_rasterization( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_line_rasterization) return;
    glad_vkCmdSetLineStippleEXT = (PFN_vkCmdSetLineStippleEXT) load(userptr, "vkCmdSetLineStippleEXT");
}
static void glad_vk_load_VK_EXT_sample_locations( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_sample_locations) return;
    glad_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT) load(userptr, "vkCmdSetSampleLocationsEXT");
    glad_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT) load(userptr, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}
static void glad_vk_load_VK_EXT_vertex_input_dynamic_state( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_EXT_vertex_input_dynamic_state) return;
    glad_vkCmdSetVertexInputEXT = (PFN_vkCmdSetVertexInputEXT) load(userptr, "vkCmdSetVertexInputEXT");
}
static void glad_vk_load_VK_KHR_calibrated_timestamps( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_calibrated_timestamps) return;
    glad_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR) load(userptr, "vkGetCalibratedTimestampsKHR");
    glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR) load(userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
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
static void glad_vk_load_VK_KHR_external_fence_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_fence_fd) return;
    glad_vkGetFenceFdKHR = (PFN_vkGetFenceFdKHR) load(userptr, "vkGetFenceFdKHR");
    glad_vkImportFenceFdKHR = (PFN_vkImportFenceFdKHR) load(userptr, "vkImportFenceFdKHR");
}
static void glad_vk_load_VK_KHR_external_memory_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_memory_fd) return;
    glad_vkGetMemoryFdKHR = (PFN_vkGetMemoryFdKHR) load(userptr, "vkGetMemoryFdKHR");
    glad_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR) load(userptr, "vkGetMemoryFdPropertiesKHR");
}
static void glad_vk_load_VK_KHR_external_semaphore_fd( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_external_semaphore_fd) return;
    glad_vkGetSemaphoreFdKHR = (PFN_vkGetSemaphoreFdKHR) load(userptr, "vkGetSemaphoreFdKHR");
    glad_vkImportSemaphoreFdKHR = (PFN_vkImportSemaphoreFdKHR) load(userptr, "vkImportSemaphoreFdKHR");
}
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
static void glad_vk_load_VK_KHR_get_surface_capabilities2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_get_surface_capabilities2) return;
    glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
    glad_vkGetPhysicalDeviceSurfaceFormats2KHR = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR) load(userptr, "vkGetPhysicalDeviceSurfaceFormats2KHR");
}
static void glad_vk_load_VK_KHR_line_rasterization( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_line_rasterization) return;
    glad_vkCmdSetLineStippleKHR = (PFN_vkCmdSetLineStippleKHR) load(userptr, "vkCmdSetLineStippleKHR");
}
static void glad_vk_load_VK_KHR_object_refresh( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_object_refresh) return;
    glad_vkCmdRefreshObjectsKHR = (PFN_vkCmdRefreshObjectsKHR) load(userptr, "vkCmdRefreshObjectsKHR");
    glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR = (PFN_vkGetPhysicalDeviceRefreshableObjectTypesKHR) load(userptr, "vkGetPhysicalDeviceRefreshableObjectTypesKHR");
}
static void glad_vk_load_VK_KHR_performance_query( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_KHR_performance_query) return;
    glad_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR) load(userptr, "vkAcquireProfilingLockKHR");
    glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR) load(userptr, "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
    glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR) load(userptr, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
    glad_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR) load(userptr, "vkReleaseProfilingLockKHR");
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
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void glad_vk_load_VK_NV_acquire_winrt_display( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_acquire_winrt_display) return;
    glad_vkAcquireWinrtDisplayNV = (PFN_vkAcquireWinrtDisplayNV) load(userptr, "vkAcquireWinrtDisplayNV");
    glad_vkGetWinrtDisplayNV = (PFN_vkGetWinrtDisplayNV) load(userptr, "vkGetWinrtDisplayNV");
}

#endif
#if defined(VK_USE_PLATFORM_SCI)
static void glad_vk_load_VK_NV_external_memory_sci_buf( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_memory_sci_buf) return;
    glad_vkGetMemorySciBufNV = (PFN_vkGetMemorySciBufNV) load(userptr, "vkGetMemorySciBufNV");
    glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = (PFN_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV) load(userptr, "vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV");
    glad_vkGetPhysicalDeviceSciBufAttributesNV = (PFN_vkGetPhysicalDeviceSciBufAttributesNV) load(userptr, "vkGetPhysicalDeviceSciBufAttributesNV");
}

#endif
#if defined(VK_USE_PLATFORM_SCI)
static void glad_vk_load_VK_NV_external_sci_sync( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_sci_sync) return;
    glad_vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV) load(userptr, "vkGetFenceSciSyncFenceNV");
    glad_vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV) load(userptr, "vkGetFenceSciSyncObjNV");
    glad_vkGetPhysicalDeviceSciSyncAttributesNV = (PFN_vkGetPhysicalDeviceSciSyncAttributesNV) load(userptr, "vkGetPhysicalDeviceSciSyncAttributesNV");
    glad_vkGetSemaphoreSciSyncObjNV = (PFN_vkGetSemaphoreSciSyncObjNV) load(userptr, "vkGetSemaphoreSciSyncObjNV");
    glad_vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV) load(userptr, "vkImportFenceSciSyncFenceNV");
    glad_vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV) load(userptr, "vkImportFenceSciSyncObjNV");
    glad_vkImportSemaphoreSciSyncObjNV = (PFN_vkImportSemaphoreSciSyncObjNV) load(userptr, "vkImportSemaphoreSciSyncObjNV");
}

#endif
#if defined(VK_USE_PLATFORM_SCI)
static void glad_vk_load_VK_NV_external_sci_sync2( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_NV_external_sci_sync2) return;
    glad_vkCreateSemaphoreSciSyncPoolNV = (PFN_vkCreateSemaphoreSciSyncPoolNV) load(userptr, "vkCreateSemaphoreSciSyncPoolNV");
    glad_vkDestroySemaphoreSciSyncPoolNV = (PFN_vkDestroySemaphoreSciSyncPoolNV) load(userptr, "vkDestroySemaphoreSciSyncPoolNV");
    glad_vkGetFenceSciSyncFenceNV = (PFN_vkGetFenceSciSyncFenceNV) load(userptr, "vkGetFenceSciSyncFenceNV");
    glad_vkGetFenceSciSyncObjNV = (PFN_vkGetFenceSciSyncObjNV) load(userptr, "vkGetFenceSciSyncObjNV");
    glad_vkGetPhysicalDeviceSciSyncAttributesNV = (PFN_vkGetPhysicalDeviceSciSyncAttributesNV) load(userptr, "vkGetPhysicalDeviceSciSyncAttributesNV");
    glad_vkImportFenceSciSyncFenceNV = (PFN_vkImportFenceSciSyncFenceNV) load(userptr, "vkImportFenceSciSyncFenceNV");
    glad_vkImportFenceSciSyncObjNV = (PFN_vkImportFenceSciSyncObjNV) load(userptr, "vkImportFenceSciSyncObjNV");
}

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
static void glad_vk_load_VK_QNX_external_memory_screen_buffer( GLADuserptrloadfunc load, void* userptr) {
    if(!GLAD_VK_QNX_external_memory_screen_buffer) return;
    glad_vkGetScreenBufferPropertiesQNX = (PFN_vkGetScreenBufferPropertiesQNX) load(userptr, "vkGetScreenBufferPropertiesQNX");
}

#endif


static void glad_vk_resolve_aliases(void) {
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
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
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)

#endif
#if defined(VK_USE_PLATFORM_SCI)

#endif
    if (glad_vkQueueSubmit2 == NULL && glad_vkQueueSubmit2KHR != NULL) glad_vkQueueSubmit2 = (PFN_vkQueueSubmit2)glad_vkQueueSubmit2KHR;
    if (glad_vkQueueSubmit2KHR == NULL && glad_vkQueueSubmit2 != NULL) glad_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)glad_vkQueueSubmit2;
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

static int glad_vk_find_extensions_vulkansc( VkPhysicalDevice physical_device) {
    uint32_t extension_count = 0;
    char **extensions = NULL;
    if (!glad_vk_get_extensions(physical_device, &extension_count, &extensions)) return 0;

    GLAD_VK_EXT_4444_formats = glad_vk_has_extension("VK_EXT_4444_formats", extension_count, extensions);
    GLAD_VK_EXT_application_parameters = glad_vk_has_extension("VK_EXT_application_parameters", extension_count, extensions);
    GLAD_VK_EXT_astc_decode_mode = glad_vk_has_extension("VK_EXT_astc_decode_mode", extension_count, extensions);
    GLAD_VK_EXT_blend_operation_advanced = glad_vk_has_extension("VK_EXT_blend_operation_advanced", extension_count, extensions);
    GLAD_VK_EXT_color_write_enable = glad_vk_has_extension("VK_EXT_color_write_enable", extension_count, extensions);
    GLAD_VK_EXT_conservative_rasterization = glad_vk_has_extension("VK_EXT_conservative_rasterization", extension_count, extensions);
    GLAD_VK_EXT_custom_border_color = glad_vk_has_extension("VK_EXT_custom_border_color", extension_count, extensions);
    GLAD_VK_EXT_debug_utils = glad_vk_has_extension("VK_EXT_debug_utils", extension_count, extensions);
    GLAD_VK_EXT_depth_clip_enable = glad_vk_has_extension("VK_EXT_depth_clip_enable", extension_count, extensions);
    GLAD_VK_EXT_depth_range_unrestricted = glad_vk_has_extension("VK_EXT_depth_range_unrestricted", extension_count, extensions);
    GLAD_VK_EXT_direct_mode_display = glad_vk_has_extension("VK_EXT_direct_mode_display", extension_count, extensions);
    GLAD_VK_EXT_discard_rectangles = glad_vk_has_extension("VK_EXT_discard_rectangles", extension_count, extensions);
    GLAD_VK_EXT_display_control = glad_vk_has_extension("VK_EXT_display_control", extension_count, extensions);
    GLAD_VK_EXT_display_surface_counter = glad_vk_has_extension("VK_EXT_display_surface_counter", extension_count, extensions);
    GLAD_VK_EXT_extended_dynamic_state = glad_vk_has_extension("VK_EXT_extended_dynamic_state", extension_count, extensions);
    GLAD_VK_EXT_extended_dynamic_state2 = glad_vk_has_extension("VK_EXT_extended_dynamic_state2", extension_count, extensions);
    GLAD_VK_EXT_external_memory_dma_buf = glad_vk_has_extension("VK_EXT_external_memory_dma_buf", extension_count, extensions);
    GLAD_VK_EXT_external_memory_host = glad_vk_has_extension("VK_EXT_external_memory_host", extension_count, extensions);
    GLAD_VK_EXT_filter_cubic = glad_vk_has_extension("VK_EXT_filter_cubic", extension_count, extensions);
    GLAD_VK_EXT_fragment_shader_interlock = glad_vk_has_extension("VK_EXT_fragment_shader_interlock", extension_count, extensions);
    GLAD_VK_EXT_hdr_metadata = glad_vk_has_extension("VK_EXT_hdr_metadata", extension_count, extensions);
    GLAD_VK_EXT_headless_surface = glad_vk_has_extension("VK_EXT_headless_surface", extension_count, extensions);
    GLAD_VK_EXT_image_drm_format_modifier = glad_vk_has_extension("VK_EXT_image_drm_format_modifier", extension_count, extensions);
    GLAD_VK_EXT_image_robustness = glad_vk_has_extension("VK_EXT_image_robustness", extension_count, extensions);
    GLAD_VK_EXT_index_type_uint8 = glad_vk_has_extension("VK_EXT_index_type_uint8", extension_count, extensions);
    GLAD_VK_EXT_line_rasterization = glad_vk_has_extension("VK_EXT_line_rasterization", extension_count, extensions);
    GLAD_VK_EXT_memory_budget = glad_vk_has_extension("VK_EXT_memory_budget", extension_count, extensions);
    GLAD_VK_EXT_pci_bus_info = glad_vk_has_extension("VK_EXT_pci_bus_info", extension_count, extensions);
    GLAD_VK_EXT_post_depth_coverage = glad_vk_has_extension("VK_EXT_post_depth_coverage", extension_count, extensions);
    GLAD_VK_EXT_queue_family_foreign = glad_vk_has_extension("VK_EXT_queue_family_foreign", extension_count, extensions);
    GLAD_VK_EXT_robustness2 = glad_vk_has_extension("VK_EXT_robustness2", extension_count, extensions);
    GLAD_VK_EXT_sample_locations = glad_vk_has_extension("VK_EXT_sample_locations", extension_count, extensions);
    GLAD_VK_EXT_shader_atomic_float = glad_vk_has_extension("VK_EXT_shader_atomic_float", extension_count, extensions);
    GLAD_VK_EXT_shader_demote_to_helper_invocation = glad_vk_has_extension("VK_EXT_shader_demote_to_helper_invocation", extension_count, extensions);
    GLAD_VK_EXT_shader_image_atomic_int64 = glad_vk_has_extension("VK_EXT_shader_image_atomic_int64", extension_count, extensions);
    GLAD_VK_EXT_shader_stencil_export = glad_vk_has_extension("VK_EXT_shader_stencil_export", extension_count, extensions);
    GLAD_VK_EXT_subgroup_size_control = glad_vk_has_extension("VK_EXT_subgroup_size_control", extension_count, extensions);
    GLAD_VK_EXT_swapchain_colorspace = glad_vk_has_extension("VK_EXT_swapchain_colorspace", extension_count, extensions);
    GLAD_VK_EXT_texel_buffer_alignment = glad_vk_has_extension("VK_EXT_texel_buffer_alignment", extension_count, extensions);
    GLAD_VK_EXT_texture_compression_astc_hdr = glad_vk_has_extension("VK_EXT_texture_compression_astc_hdr", extension_count, extensions);
    GLAD_VK_EXT_validation_features = glad_vk_has_extension("VK_EXT_validation_features", extension_count, extensions);
    GLAD_VK_EXT_vertex_input_dynamic_state = glad_vk_has_extension("VK_EXT_vertex_input_dynamic_state", extension_count, extensions);
    GLAD_VK_EXT_ycbcr_2plane_444_formats = glad_vk_has_extension("VK_EXT_ycbcr_2plane_444_formats", extension_count, extensions);
    GLAD_VK_EXT_ycbcr_image_arrays = glad_vk_has_extension("VK_EXT_ycbcr_image_arrays", extension_count, extensions);
    GLAD_VK_KHR_calibrated_timestamps = glad_vk_has_extension("VK_KHR_calibrated_timestamps", extension_count, extensions);
    GLAD_VK_KHR_copy_commands2 = glad_vk_has_extension("VK_KHR_copy_commands2", extension_count, extensions);
    GLAD_VK_KHR_display = glad_vk_has_extension("VK_KHR_display", extension_count, extensions);
    GLAD_VK_KHR_display_swapchain = glad_vk_has_extension("VK_KHR_display_swapchain", extension_count, extensions);
    GLAD_VK_KHR_external_fence_fd = glad_vk_has_extension("VK_KHR_external_fence_fd", extension_count, extensions);
    GLAD_VK_KHR_external_memory_fd = glad_vk_has_extension("VK_KHR_external_memory_fd", extension_count, extensions);
    GLAD_VK_KHR_external_semaphore_fd = glad_vk_has_extension("VK_KHR_external_semaphore_fd", extension_count, extensions);
    GLAD_VK_KHR_fragment_shading_rate = glad_vk_has_extension("VK_KHR_fragment_shading_rate", extension_count, extensions);
    GLAD_VK_KHR_get_display_properties2 = glad_vk_has_extension("VK_KHR_get_display_properties2", extension_count, extensions);
    GLAD_VK_KHR_get_surface_capabilities2 = glad_vk_has_extension("VK_KHR_get_surface_capabilities2", extension_count, extensions);
    GLAD_VK_KHR_global_priority = glad_vk_has_extension("VK_KHR_global_priority", extension_count, extensions);
    GLAD_VK_KHR_incremental_present = glad_vk_has_extension("VK_KHR_incremental_present", extension_count, extensions);
    GLAD_VK_KHR_index_type_uint8 = glad_vk_has_extension("VK_KHR_index_type_uint8", extension_count, extensions);
    GLAD_VK_KHR_line_rasterization = glad_vk_has_extension("VK_KHR_line_rasterization", extension_count, extensions);
    GLAD_VK_KHR_object_refresh = glad_vk_has_extension("VK_KHR_object_refresh", extension_count, extensions);
    GLAD_VK_KHR_performance_query = glad_vk_has_extension("VK_KHR_performance_query", extension_count, extensions);
    GLAD_VK_KHR_shader_clock = glad_vk_has_extension("VK_KHR_shader_clock", extension_count, extensions);
    GLAD_VK_KHR_shader_terminate_invocation = glad_vk_has_extension("VK_KHR_shader_terminate_invocation", extension_count, extensions);
    GLAD_VK_KHR_shared_presentable_image = glad_vk_has_extension("VK_KHR_shared_presentable_image", extension_count, extensions);
    GLAD_VK_KHR_surface = glad_vk_has_extension("VK_KHR_surface", extension_count, extensions);
    GLAD_VK_KHR_swapchain = glad_vk_has_extension("VK_KHR_swapchain", extension_count, extensions);
    GLAD_VK_KHR_swapchain_mutable_format = glad_vk_has_extension("VK_KHR_swapchain_mutable_format", extension_count, extensions);
    GLAD_VK_KHR_synchronization2 = glad_vk_has_extension("VK_KHR_synchronization2", extension_count, extensions);
    GLAD_VK_KHR_vertex_attribute_divisor = glad_vk_has_extension("VK_KHR_vertex_attribute_divisor", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    GLAD_VK_NV_acquire_winrt_display = glad_vk_has_extension("VK_NV_acquire_winrt_display", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    GLAD_VK_NV_external_memory_sci_buf = glad_vk_has_extension("VK_NV_external_memory_sci_buf", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    GLAD_VK_NV_external_sci_sync = glad_vk_has_extension("VK_NV_external_sci_sync", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    GLAD_VK_NV_external_sci_sync2 = glad_vk_has_extension("VK_NV_external_sci_sync2", extension_count, extensions);

#endif
    GLAD_VK_NV_private_vendor_info = glad_vk_has_extension("VK_NV_private_vendor_info", extension_count, extensions);
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    GLAD_VK_QNX_external_memory_screen_buffer = glad_vk_has_extension("VK_QNX_external_memory_screen_buffer", extension_count, extensions);

#endif

    GLAD_UNUSED(glad_vk_has_extension);

    glad_vk_free_extensions(extension_count, extensions);

    return 1;
}

static int glad_vk_find_core_vulkansc( VkPhysicalDevice physical_device) {
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

    GLAD_VKSC_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLAD_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLAD_VK_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLAD_VK_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;

    return GLAD_MAKE_VERSION(major, minor);
}

int gladLoadVulkanscUserPtr( VkPhysicalDevice physical_device, GLADuserptrloadfunc load, void *userptr) {
    int version;

#ifdef VK_VERSION_1_1
    glad_vkEnumerateInstanceVersion  = (PFN_vkEnumerateInstanceVersion) load(userptr, "vkEnumerateInstanceVersion");
#endif
    version = glad_vk_find_core_vulkansc( physical_device);
    if (!version) {
        return 0;
    }

    glad_vk_load_VKSC_VERSION_1_0(load, userptr);
    glad_vk_load_VK_VERSION_1_1(load, userptr);
    glad_vk_load_VK_VERSION_1_2(load, userptr);
    glad_vk_load_VK_VERSION_1_3(load, userptr);

    if (!glad_vk_find_extensions_vulkansc( physical_device)) return 0;
    glad_vk_load_VK_EXT_color_write_enable(load, userptr);
    glad_vk_load_VK_EXT_debug_utils(load, userptr);
    glad_vk_load_VK_EXT_direct_mode_display(load, userptr);
    glad_vk_load_VK_EXT_discard_rectangles(load, userptr);
    glad_vk_load_VK_EXT_display_control(load, userptr);
    glad_vk_load_VK_EXT_display_surface_counter(load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state(load, userptr);
    glad_vk_load_VK_EXT_extended_dynamic_state2(load, userptr);
    glad_vk_load_VK_EXT_external_memory_host(load, userptr);
    glad_vk_load_VK_EXT_hdr_metadata(load, userptr);
    glad_vk_load_VK_EXT_headless_surface(load, userptr);
    glad_vk_load_VK_EXT_image_drm_format_modifier(load, userptr);
    glad_vk_load_VK_EXT_line_rasterization(load, userptr);
    glad_vk_load_VK_EXT_sample_locations(load, userptr);
    glad_vk_load_VK_EXT_vertex_input_dynamic_state(load, userptr);
    glad_vk_load_VK_KHR_calibrated_timestamps(load, userptr);
    glad_vk_load_VK_KHR_copy_commands2(load, userptr);
    glad_vk_load_VK_KHR_display(load, userptr);
    glad_vk_load_VK_KHR_display_swapchain(load, userptr);
    glad_vk_load_VK_KHR_external_fence_fd(load, userptr);
    glad_vk_load_VK_KHR_external_memory_fd(load, userptr);
    glad_vk_load_VK_KHR_external_semaphore_fd(load, userptr);
    glad_vk_load_VK_KHR_fragment_shading_rate(load, userptr);
    glad_vk_load_VK_KHR_get_display_properties2(load, userptr);
    glad_vk_load_VK_KHR_get_surface_capabilities2(load, userptr);
    glad_vk_load_VK_KHR_line_rasterization(load, userptr);
    glad_vk_load_VK_KHR_object_refresh(load, userptr);
    glad_vk_load_VK_KHR_performance_query(load, userptr);
    glad_vk_load_VK_KHR_shared_presentable_image(load, userptr);
    glad_vk_load_VK_KHR_surface(load, userptr);
    glad_vk_load_VK_KHR_swapchain(load, userptr);
    glad_vk_load_VK_KHR_synchronization2(load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_vk_load_VK_NV_acquire_winrt_display(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    glad_vk_load_VK_NV_external_memory_sci_buf(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    glad_vk_load_VK_NV_external_sci_sync(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCI)
    glad_vk_load_VK_NV_external_sci_sync2(load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_vk_load_VK_QNX_external_memory_screen_buffer(load, userptr);

#endif

    glad_vk_resolve_aliases();

    return version;
}


int gladLoadVulkansc( VkPhysicalDevice physical_device, GLADloadfunc load) {
    return gladLoadVulkanscUserPtr( physical_device, glad_vk_get_proc_from_userptr, GLAD_GNUC_EXTENSION (void*) load);
}



 
void gladInstallVulkanscDebug() {
    glad_debug_vkAcquireNextImage2KHR = glad_debug_impl_vkAcquireNextImage2KHR;
    glad_debug_vkAcquireNextImageKHR = glad_debug_impl_vkAcquireNextImageKHR;
    glad_debug_vkAcquireProfilingLockKHR = glad_debug_impl_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireWinrtDisplayNV = glad_debug_impl_vkAcquireWinrtDisplayNV;

#endif
    glad_debug_vkBindBufferMemory2 = glad_debug_impl_vkBindBufferMemory2;
    glad_debug_vkBindImageMemory2 = glad_debug_impl_vkBindImageMemory2;
    glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_debug_impl_vkCmdBeginDebugUtilsLabelEXT;
    glad_debug_vkCmdBeginRenderPass2 = glad_debug_impl_vkCmdBeginRenderPass2;
    glad_debug_vkCmdBeginRendering = glad_debug_impl_vkCmdBeginRendering;
    glad_debug_vkCmdBindVertexBuffers2 = glad_debug_impl_vkCmdBindVertexBuffers2;
    glad_debug_vkCmdBindVertexBuffers2EXT = glad_debug_impl_vkCmdBindVertexBuffers2EXT;
    glad_debug_vkCmdBlitImage2 = glad_debug_impl_vkCmdBlitImage2;
    glad_debug_vkCmdBlitImage2KHR = glad_debug_impl_vkCmdBlitImage2KHR;
    glad_debug_vkCmdCopyBuffer2 = glad_debug_impl_vkCmdCopyBuffer2;
    glad_debug_vkCmdCopyBuffer2KHR = glad_debug_impl_vkCmdCopyBuffer2KHR;
    glad_debug_vkCmdCopyBufferToImage2 = glad_debug_impl_vkCmdCopyBufferToImage2;
    glad_debug_vkCmdCopyBufferToImage2KHR = glad_debug_impl_vkCmdCopyBufferToImage2KHR;
    glad_debug_vkCmdCopyImage2 = glad_debug_impl_vkCmdCopyImage2;
    glad_debug_vkCmdCopyImage2KHR = glad_debug_impl_vkCmdCopyImage2KHR;
    glad_debug_vkCmdCopyImageToBuffer2 = glad_debug_impl_vkCmdCopyImageToBuffer2;
    glad_debug_vkCmdCopyImageToBuffer2KHR = glad_debug_impl_vkCmdCopyImageToBuffer2KHR;
    glad_debug_vkCmdDispatchBase = glad_debug_impl_vkCmdDispatchBase;
    glad_debug_vkCmdDrawIndexedIndirectCount = glad_debug_impl_vkCmdDrawIndexedIndirectCount;
    glad_debug_vkCmdDrawIndirectCount = glad_debug_impl_vkCmdDrawIndirectCount;
    glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_debug_impl_vkCmdEndDebugUtilsLabelEXT;
    glad_debug_vkCmdEndRenderPass2 = glad_debug_impl_vkCmdEndRenderPass2;
    glad_debug_vkCmdEndRendering = glad_debug_impl_vkCmdEndRendering;
    glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_debug_impl_vkCmdInsertDebugUtilsLabelEXT;
    glad_debug_vkCmdNextSubpass2 = glad_debug_impl_vkCmdNextSubpass2;
    glad_debug_vkCmdPipelineBarrier2 = glad_debug_impl_vkCmdPipelineBarrier2;
    glad_debug_vkCmdPipelineBarrier2KHR = glad_debug_impl_vkCmdPipelineBarrier2KHR;
    glad_debug_vkCmdRefreshObjectsKHR = glad_debug_impl_vkCmdRefreshObjectsKHR;
    glad_debug_vkCmdResetEvent2 = glad_debug_impl_vkCmdResetEvent2;
    glad_debug_vkCmdResetEvent2KHR = glad_debug_impl_vkCmdResetEvent2KHR;
    glad_debug_vkCmdResolveImage2 = glad_debug_impl_vkCmdResolveImage2;
    glad_debug_vkCmdResolveImage2KHR = glad_debug_impl_vkCmdResolveImage2KHR;
    glad_debug_vkCmdSetColorWriteEnableEXT = glad_debug_impl_vkCmdSetColorWriteEnableEXT;
    glad_debug_vkCmdSetCullMode = glad_debug_impl_vkCmdSetCullMode;
    glad_debug_vkCmdSetCullModeEXT = glad_debug_impl_vkCmdSetCullModeEXT;
    glad_debug_vkCmdSetDepthBiasEnable = glad_debug_impl_vkCmdSetDepthBiasEnable;
    glad_debug_vkCmdSetDepthBiasEnableEXT = glad_debug_impl_vkCmdSetDepthBiasEnableEXT;
    glad_debug_vkCmdSetDepthBoundsTestEnable = glad_debug_impl_vkCmdSetDepthBoundsTestEnable;
    glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_debug_impl_vkCmdSetDepthBoundsTestEnableEXT;
    glad_debug_vkCmdSetDepthCompareOp = glad_debug_impl_vkCmdSetDepthCompareOp;
    glad_debug_vkCmdSetDepthCompareOpEXT = glad_debug_impl_vkCmdSetDepthCompareOpEXT;
    glad_debug_vkCmdSetDepthTestEnable = glad_debug_impl_vkCmdSetDepthTestEnable;
    glad_debug_vkCmdSetDepthTestEnableEXT = glad_debug_impl_vkCmdSetDepthTestEnableEXT;
    glad_debug_vkCmdSetDepthWriteEnable = glad_debug_impl_vkCmdSetDepthWriteEnable;
    glad_debug_vkCmdSetDepthWriteEnableEXT = glad_debug_impl_vkCmdSetDepthWriteEnableEXT;
    glad_debug_vkCmdSetDeviceMask = glad_debug_impl_vkCmdSetDeviceMask;
    glad_debug_vkCmdSetDiscardRectangleEXT = glad_debug_impl_vkCmdSetDiscardRectangleEXT;
    glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_debug_impl_vkCmdSetDiscardRectangleEnableEXT;
    glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_debug_impl_vkCmdSetDiscardRectangleModeEXT;
    glad_debug_vkCmdSetEvent2 = glad_debug_impl_vkCmdSetEvent2;
    glad_debug_vkCmdSetEvent2KHR = glad_debug_impl_vkCmdSetEvent2KHR;
    glad_debug_vkCmdSetFragmentShadingRateKHR = glad_debug_impl_vkCmdSetFragmentShadingRateKHR;
    glad_debug_vkCmdSetFrontFace = glad_debug_impl_vkCmdSetFrontFace;
    glad_debug_vkCmdSetFrontFaceEXT = glad_debug_impl_vkCmdSetFrontFaceEXT;
    glad_debug_vkCmdSetLineStippleEXT = glad_debug_impl_vkCmdSetLineStippleEXT;
    glad_debug_vkCmdSetLineStippleKHR = glad_debug_impl_vkCmdSetLineStippleKHR;
    glad_debug_vkCmdSetLogicOpEXT = glad_debug_impl_vkCmdSetLogicOpEXT;
    glad_debug_vkCmdSetPatchControlPointsEXT = glad_debug_impl_vkCmdSetPatchControlPointsEXT;
    glad_debug_vkCmdSetPrimitiveRestartEnable = glad_debug_impl_vkCmdSetPrimitiveRestartEnable;
    glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_debug_impl_vkCmdSetPrimitiveRestartEnableEXT;
    glad_debug_vkCmdSetPrimitiveTopology = glad_debug_impl_vkCmdSetPrimitiveTopology;
    glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_debug_impl_vkCmdSetPrimitiveTopologyEXT;
    glad_debug_vkCmdSetRasterizerDiscardEnable = glad_debug_impl_vkCmdSetRasterizerDiscardEnable;
    glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_debug_impl_vkCmdSetRasterizerDiscardEnableEXT;
    glad_debug_vkCmdSetSampleLocationsEXT = glad_debug_impl_vkCmdSetSampleLocationsEXT;
    glad_debug_vkCmdSetScissorWithCount = glad_debug_impl_vkCmdSetScissorWithCount;
    glad_debug_vkCmdSetScissorWithCountEXT = glad_debug_impl_vkCmdSetScissorWithCountEXT;
    glad_debug_vkCmdSetStencilOp = glad_debug_impl_vkCmdSetStencilOp;
    glad_debug_vkCmdSetStencilOpEXT = glad_debug_impl_vkCmdSetStencilOpEXT;
    glad_debug_vkCmdSetStencilTestEnable = glad_debug_impl_vkCmdSetStencilTestEnable;
    glad_debug_vkCmdSetStencilTestEnableEXT = glad_debug_impl_vkCmdSetStencilTestEnableEXT;
    glad_debug_vkCmdSetVertexInputEXT = glad_debug_impl_vkCmdSetVertexInputEXT;
    glad_debug_vkCmdSetViewportWithCount = glad_debug_impl_vkCmdSetViewportWithCount;
    glad_debug_vkCmdSetViewportWithCountEXT = glad_debug_impl_vkCmdSetViewportWithCountEXT;
    glad_debug_vkCmdWaitEvents2 = glad_debug_impl_vkCmdWaitEvents2;
    glad_debug_vkCmdWaitEvents2KHR = glad_debug_impl_vkCmdWaitEvents2KHR;
    glad_debug_vkCmdWriteBufferMarker2AMD = glad_debug_impl_vkCmdWriteBufferMarker2AMD;
    glad_debug_vkCmdWriteTimestamp2 = glad_debug_impl_vkCmdWriteTimestamp2;
    glad_debug_vkCmdWriteTimestamp2KHR = glad_debug_impl_vkCmdWriteTimestamp2KHR;
    glad_debug_vkCreateDebugUtilsMessengerEXT = glad_debug_impl_vkCreateDebugUtilsMessengerEXT;
    glad_debug_vkCreateDescriptorUpdateTemplate = glad_debug_impl_vkCreateDescriptorUpdateTemplate;
    glad_debug_vkCreateDisplayModeKHR = glad_debug_impl_vkCreateDisplayModeKHR;
    glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_debug_impl_vkCreateDisplayPlaneSurfaceKHR;
    glad_debug_vkCreateHeadlessSurfaceEXT = glad_debug_impl_vkCreateHeadlessSurfaceEXT;
    glad_debug_vkCreatePrivateDataSlot = glad_debug_impl_vkCreatePrivateDataSlot;
    glad_debug_vkCreateRenderPass2 = glad_debug_impl_vkCreateRenderPass2;
    glad_debug_vkCreateSamplerYcbcrConversion = glad_debug_impl_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkCreateSemaphoreSciSyncPoolNV = glad_debug_impl_vkCreateSemaphoreSciSyncPoolNV;

#endif
    glad_debug_vkCreateSharedSwapchainsKHR = glad_debug_impl_vkCreateSharedSwapchainsKHR;
    glad_debug_vkCreateSwapchainKHR = glad_debug_impl_vkCreateSwapchainKHR;
    glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_debug_impl_vkDestroyDebugUtilsMessengerEXT;
    glad_debug_vkDestroyDescriptorUpdateTemplate = glad_debug_impl_vkDestroyDescriptorUpdateTemplate;
    glad_debug_vkDestroyPrivateDataSlot = glad_debug_impl_vkDestroyPrivateDataSlot;
    glad_debug_vkDestroySamplerYcbcrConversion = glad_debug_impl_vkDestroySamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkDestroySemaphoreSciSyncPoolNV = glad_debug_impl_vkDestroySemaphoreSciSyncPoolNV;

#endif
    glad_debug_vkDestroySurfaceKHR = glad_debug_impl_vkDestroySurfaceKHR;
    glad_debug_vkDestroySwapchainKHR = glad_debug_impl_vkDestroySwapchainKHR;
    glad_debug_vkDisplayPowerControlEXT = glad_debug_impl_vkDisplayPowerControlEXT;
    glad_debug_vkEnumerateInstanceVersion = glad_debug_impl_vkEnumerateInstanceVersion;
    glad_debug_vkEnumeratePhysicalDeviceGroups = glad_debug_impl_vkEnumeratePhysicalDeviceGroups;
    glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_debug_impl_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    glad_debug_vkGetBufferDeviceAddress = glad_debug_impl_vkGetBufferDeviceAddress;
    glad_debug_vkGetBufferMemoryRequirements2 = glad_debug_impl_vkGetBufferMemoryRequirements2;
    glad_debug_vkGetBufferOpaqueCaptureAddress = glad_debug_impl_vkGetBufferOpaqueCaptureAddress;
    glad_debug_vkGetCalibratedTimestampsKHR = glad_debug_impl_vkGetCalibratedTimestampsKHR;
    glad_debug_vkGetCommandPoolMemoryConsumption = glad_debug_impl_vkGetCommandPoolMemoryConsumption;
    glad_debug_vkGetDescriptorSetLayoutSupport = glad_debug_impl_vkGetDescriptorSetLayoutSupport;
    glad_debug_vkGetDeviceBufferMemoryRequirements = glad_debug_impl_vkGetDeviceBufferMemoryRequirements;
    glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_debug_impl_vkGetDeviceGroupPeerMemoryFeatures;
    glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_debug_impl_vkGetDeviceGroupPresentCapabilitiesKHR;
    glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_debug_impl_vkGetDeviceGroupSurfacePresentModesKHR;
    glad_debug_vkGetDeviceImageMemoryRequirements = glad_debug_impl_vkGetDeviceImageMemoryRequirements;
    glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_debug_impl_vkGetDeviceImageSparseMemoryRequirements;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_debug_impl_vkGetDeviceMemoryOpaqueCaptureAddress;
    glad_debug_vkGetDeviceQueue2 = glad_debug_impl_vkGetDeviceQueue2;
    glad_debug_vkGetDisplayModeProperties2KHR = glad_debug_impl_vkGetDisplayModeProperties2KHR;
    glad_debug_vkGetDisplayModePropertiesKHR = glad_debug_impl_vkGetDisplayModePropertiesKHR;
    glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_debug_impl_vkGetDisplayPlaneCapabilities2KHR;
    glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_debug_impl_vkGetDisplayPlaneCapabilitiesKHR;
    glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_debug_impl_vkGetDisplayPlaneSupportedDisplaysKHR;
    glad_debug_vkGetFaultData = glad_debug_impl_vkGetFaultData;
    glad_debug_vkGetFenceFdKHR = glad_debug_impl_vkGetFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetFenceSciSyncFenceNV = glad_debug_impl_vkGetFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetFenceSciSyncObjNV = glad_debug_impl_vkGetFenceSciSyncObjNV;

#endif
    glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_debug_impl_vkGetImageDrmFormatModifierPropertiesEXT;
    glad_debug_vkGetImageMemoryRequirements2 = glad_debug_impl_vkGetImageMemoryRequirements2;
    glad_debug_vkGetImageSparseMemoryRequirements2 = glad_debug_impl_vkGetImageSparseMemoryRequirements2;
    glad_debug_vkGetMemoryFdKHR = glad_debug_impl_vkGetMemoryFdKHR;
    glad_debug_vkGetMemoryFdPropertiesKHR = glad_debug_impl_vkGetMemoryFdPropertiesKHR;
    glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_debug_impl_vkGetMemoryHostPointerPropertiesEXT;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetMemorySciBufNV = glad_debug_impl_vkGetMemorySciBufNV;

#endif
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_debug_impl_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_debug_impl_vkGetPhysicalDeviceDisplayProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_debug_impl_vkGetPhysicalDeviceDisplayPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_debug_impl_vkGetPhysicalDeviceExternalBufferProperties;
    glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_debug_impl_vkGetPhysicalDeviceExternalFenceProperties;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = glad_debug_impl_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV;

#endif
    glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_debug_impl_vkGetPhysicalDeviceExternalSemaphoreProperties;
    glad_debug_vkGetPhysicalDeviceFeatures2 = glad_debug_impl_vkGetPhysicalDeviceFeatures2;
    glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceFormatProperties2;
    glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_debug_impl_vkGetPhysicalDeviceFragmentShadingRatesKHR;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_debug_impl_vkGetPhysicalDeviceMemoryProperties2;
    glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_debug_impl_vkGetPhysicalDeviceMultisamplePropertiesEXT;
    glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_debug_impl_vkGetPhysicalDevicePresentRectanglesKHR;
    glad_debug_vkGetPhysicalDeviceProperties2 = glad_debug_impl_vkGetPhysicalDeviceProperties2;
    glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_debug_impl_vkGetPhysicalDeviceQueueFamilyProperties2;
    glad_debug_vkGetPhysicalDeviceRefreshableObjectTypesKHR = glad_debug_impl_vkGetPhysicalDeviceRefreshableObjectTypesKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceSciBufAttributesNV = glad_debug_impl_vkGetPhysicalDeviceSciBufAttributesNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceSciSyncAttributesNV = glad_debug_impl_vkGetPhysicalDeviceSciSyncAttributesNV;

#endif
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_debug_impl_vkGetPhysicalDeviceSparseImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormats2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceFormatsKHR;
    glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_debug_impl_vkGetPhysicalDeviceSurfacePresentModesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_debug_impl_vkGetPhysicalDeviceSurfaceSupportKHR;
    glad_debug_vkGetPhysicalDeviceToolProperties = glad_debug_impl_vkGetPhysicalDeviceToolProperties;
    glad_debug_vkGetPrivateData = glad_debug_impl_vkGetPrivateData;
    glad_debug_vkGetQueueCheckpointData2NV = glad_debug_impl_vkGetQueueCheckpointData2NV;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetScreenBufferPropertiesQNX = glad_debug_impl_vkGetScreenBufferPropertiesQNX;

#endif
    glad_debug_vkGetSemaphoreCounterValue = glad_debug_impl_vkGetSemaphoreCounterValue;
    glad_debug_vkGetSemaphoreFdKHR = glad_debug_impl_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetSemaphoreSciSyncObjNV = glad_debug_impl_vkGetSemaphoreSciSyncObjNV;

#endif
    glad_debug_vkGetSwapchainCounterEXT = glad_debug_impl_vkGetSwapchainCounterEXT;
    glad_debug_vkGetSwapchainImagesKHR = glad_debug_impl_vkGetSwapchainImagesKHR;
    glad_debug_vkGetSwapchainStatusKHR = glad_debug_impl_vkGetSwapchainStatusKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetWinrtDisplayNV = glad_debug_impl_vkGetWinrtDisplayNV;

#endif
    glad_debug_vkImportFenceFdKHR = glad_debug_impl_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportFenceSciSyncFenceNV = glad_debug_impl_vkImportFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportFenceSciSyncObjNV = glad_debug_impl_vkImportFenceSciSyncObjNV;

#endif
    glad_debug_vkImportSemaphoreFdKHR = glad_debug_impl_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportSemaphoreSciSyncObjNV = glad_debug_impl_vkImportSemaphoreSciSyncObjNV;

#endif
    glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_debug_impl_vkQueueBeginDebugUtilsLabelEXT;
    glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_debug_impl_vkQueueEndDebugUtilsLabelEXT;
    glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_debug_impl_vkQueueInsertDebugUtilsLabelEXT;
    glad_debug_vkQueuePresentKHR = glad_debug_impl_vkQueuePresentKHR;
    glad_debug_vkQueueSubmit2 = glad_debug_impl_vkQueueSubmit2;
    glad_debug_vkQueueSubmit2KHR = glad_debug_impl_vkQueueSubmit2KHR;
    glad_debug_vkRegisterDeviceEventEXT = glad_debug_impl_vkRegisterDeviceEventEXT;
    glad_debug_vkRegisterDisplayEventEXT = glad_debug_impl_vkRegisterDisplayEventEXT;
    glad_debug_vkReleaseDisplayEXT = glad_debug_impl_vkReleaseDisplayEXT;
    glad_debug_vkReleaseProfilingLockKHR = glad_debug_impl_vkReleaseProfilingLockKHR;
    glad_debug_vkResetQueryPool = glad_debug_impl_vkResetQueryPool;
    glad_debug_vkSetDebugUtilsObjectNameEXT = glad_debug_impl_vkSetDebugUtilsObjectNameEXT;
    glad_debug_vkSetDebugUtilsObjectTagEXT = glad_debug_impl_vkSetDebugUtilsObjectTagEXT;
    glad_debug_vkSetHdrMetadataEXT = glad_debug_impl_vkSetHdrMetadataEXT;
    glad_debug_vkSetPrivateData = glad_debug_impl_vkSetPrivateData;
    glad_debug_vkSignalSemaphore = glad_debug_impl_vkSignalSemaphore;
    glad_debug_vkSubmitDebugUtilsMessageEXT = glad_debug_impl_vkSubmitDebugUtilsMessageEXT;
    glad_debug_vkTrimCommandPool = glad_debug_impl_vkTrimCommandPool;
    glad_debug_vkUpdateDescriptorSetWithTemplate = glad_debug_impl_vkUpdateDescriptorSetWithTemplate;
    glad_debug_vkWaitSemaphores = glad_debug_impl_vkWaitSemaphores;
}

void gladUninstallVulkanscDebug() {
    glad_debug_vkAcquireNextImage2KHR = glad_vkAcquireNextImage2KHR;
    glad_debug_vkAcquireNextImageKHR = glad_vkAcquireNextImageKHR;
    glad_debug_vkAcquireProfilingLockKHR = glad_vkAcquireProfilingLockKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkAcquireWinrtDisplayNV = glad_vkAcquireWinrtDisplayNV;

#endif
    glad_debug_vkBindBufferMemory2 = glad_vkBindBufferMemory2;
    glad_debug_vkBindImageMemory2 = glad_vkBindImageMemory2;
    glad_debug_vkCmdBeginDebugUtilsLabelEXT = glad_vkCmdBeginDebugUtilsLabelEXT;
    glad_debug_vkCmdBeginRenderPass2 = glad_vkCmdBeginRenderPass2;
    glad_debug_vkCmdBeginRendering = glad_vkCmdBeginRendering;
    glad_debug_vkCmdBindVertexBuffers2 = glad_vkCmdBindVertexBuffers2;
    glad_debug_vkCmdBindVertexBuffers2EXT = glad_vkCmdBindVertexBuffers2EXT;
    glad_debug_vkCmdBlitImage2 = glad_vkCmdBlitImage2;
    glad_debug_vkCmdBlitImage2KHR = glad_vkCmdBlitImage2KHR;
    glad_debug_vkCmdCopyBuffer2 = glad_vkCmdCopyBuffer2;
    glad_debug_vkCmdCopyBuffer2KHR = glad_vkCmdCopyBuffer2KHR;
    glad_debug_vkCmdCopyBufferToImage2 = glad_vkCmdCopyBufferToImage2;
    glad_debug_vkCmdCopyBufferToImage2KHR = glad_vkCmdCopyBufferToImage2KHR;
    glad_debug_vkCmdCopyImage2 = glad_vkCmdCopyImage2;
    glad_debug_vkCmdCopyImage2KHR = glad_vkCmdCopyImage2KHR;
    glad_debug_vkCmdCopyImageToBuffer2 = glad_vkCmdCopyImageToBuffer2;
    glad_debug_vkCmdCopyImageToBuffer2KHR = glad_vkCmdCopyImageToBuffer2KHR;
    glad_debug_vkCmdDispatchBase = glad_vkCmdDispatchBase;
    glad_debug_vkCmdDrawIndexedIndirectCount = glad_vkCmdDrawIndexedIndirectCount;
    glad_debug_vkCmdDrawIndirectCount = glad_vkCmdDrawIndirectCount;
    glad_debug_vkCmdEndDebugUtilsLabelEXT = glad_vkCmdEndDebugUtilsLabelEXT;
    glad_debug_vkCmdEndRenderPass2 = glad_vkCmdEndRenderPass2;
    glad_debug_vkCmdEndRendering = glad_vkCmdEndRendering;
    glad_debug_vkCmdInsertDebugUtilsLabelEXT = glad_vkCmdInsertDebugUtilsLabelEXT;
    glad_debug_vkCmdNextSubpass2 = glad_vkCmdNextSubpass2;
    glad_debug_vkCmdPipelineBarrier2 = glad_vkCmdPipelineBarrier2;
    glad_debug_vkCmdPipelineBarrier2KHR = glad_vkCmdPipelineBarrier2KHR;
    glad_debug_vkCmdRefreshObjectsKHR = glad_vkCmdRefreshObjectsKHR;
    glad_debug_vkCmdResetEvent2 = glad_vkCmdResetEvent2;
    glad_debug_vkCmdResetEvent2KHR = glad_vkCmdResetEvent2KHR;
    glad_debug_vkCmdResolveImage2 = glad_vkCmdResolveImage2;
    glad_debug_vkCmdResolveImage2KHR = glad_vkCmdResolveImage2KHR;
    glad_debug_vkCmdSetColorWriteEnableEXT = glad_vkCmdSetColorWriteEnableEXT;
    glad_debug_vkCmdSetCullMode = glad_vkCmdSetCullMode;
    glad_debug_vkCmdSetCullModeEXT = glad_vkCmdSetCullModeEXT;
    glad_debug_vkCmdSetDepthBiasEnable = glad_vkCmdSetDepthBiasEnable;
    glad_debug_vkCmdSetDepthBiasEnableEXT = glad_vkCmdSetDepthBiasEnableEXT;
    glad_debug_vkCmdSetDepthBoundsTestEnable = glad_vkCmdSetDepthBoundsTestEnable;
    glad_debug_vkCmdSetDepthBoundsTestEnableEXT = glad_vkCmdSetDepthBoundsTestEnableEXT;
    glad_debug_vkCmdSetDepthCompareOp = glad_vkCmdSetDepthCompareOp;
    glad_debug_vkCmdSetDepthCompareOpEXT = glad_vkCmdSetDepthCompareOpEXT;
    glad_debug_vkCmdSetDepthTestEnable = glad_vkCmdSetDepthTestEnable;
    glad_debug_vkCmdSetDepthTestEnableEXT = glad_vkCmdSetDepthTestEnableEXT;
    glad_debug_vkCmdSetDepthWriteEnable = glad_vkCmdSetDepthWriteEnable;
    glad_debug_vkCmdSetDepthWriteEnableEXT = glad_vkCmdSetDepthWriteEnableEXT;
    glad_debug_vkCmdSetDeviceMask = glad_vkCmdSetDeviceMask;
    glad_debug_vkCmdSetDiscardRectangleEXT = glad_vkCmdSetDiscardRectangleEXT;
    glad_debug_vkCmdSetDiscardRectangleEnableEXT = glad_vkCmdSetDiscardRectangleEnableEXT;
    glad_debug_vkCmdSetDiscardRectangleModeEXT = glad_vkCmdSetDiscardRectangleModeEXT;
    glad_debug_vkCmdSetEvent2 = glad_vkCmdSetEvent2;
    glad_debug_vkCmdSetEvent2KHR = glad_vkCmdSetEvent2KHR;
    glad_debug_vkCmdSetFragmentShadingRateKHR = glad_vkCmdSetFragmentShadingRateKHR;
    glad_debug_vkCmdSetFrontFace = glad_vkCmdSetFrontFace;
    glad_debug_vkCmdSetFrontFaceEXT = glad_vkCmdSetFrontFaceEXT;
    glad_debug_vkCmdSetLineStippleEXT = glad_vkCmdSetLineStippleEXT;
    glad_debug_vkCmdSetLineStippleKHR = glad_vkCmdSetLineStippleKHR;
    glad_debug_vkCmdSetLogicOpEXT = glad_vkCmdSetLogicOpEXT;
    glad_debug_vkCmdSetPatchControlPointsEXT = glad_vkCmdSetPatchControlPointsEXT;
    glad_debug_vkCmdSetPrimitiveRestartEnable = glad_vkCmdSetPrimitiveRestartEnable;
    glad_debug_vkCmdSetPrimitiveRestartEnableEXT = glad_vkCmdSetPrimitiveRestartEnableEXT;
    glad_debug_vkCmdSetPrimitiveTopology = glad_vkCmdSetPrimitiveTopology;
    glad_debug_vkCmdSetPrimitiveTopologyEXT = glad_vkCmdSetPrimitiveTopologyEXT;
    glad_debug_vkCmdSetRasterizerDiscardEnable = glad_vkCmdSetRasterizerDiscardEnable;
    glad_debug_vkCmdSetRasterizerDiscardEnableEXT = glad_vkCmdSetRasterizerDiscardEnableEXT;
    glad_debug_vkCmdSetSampleLocationsEXT = glad_vkCmdSetSampleLocationsEXT;
    glad_debug_vkCmdSetScissorWithCount = glad_vkCmdSetScissorWithCount;
    glad_debug_vkCmdSetScissorWithCountEXT = glad_vkCmdSetScissorWithCountEXT;
    glad_debug_vkCmdSetStencilOp = glad_vkCmdSetStencilOp;
    glad_debug_vkCmdSetStencilOpEXT = glad_vkCmdSetStencilOpEXT;
    glad_debug_vkCmdSetStencilTestEnable = glad_vkCmdSetStencilTestEnable;
    glad_debug_vkCmdSetStencilTestEnableEXT = glad_vkCmdSetStencilTestEnableEXT;
    glad_debug_vkCmdSetVertexInputEXT = glad_vkCmdSetVertexInputEXT;
    glad_debug_vkCmdSetViewportWithCount = glad_vkCmdSetViewportWithCount;
    glad_debug_vkCmdSetViewportWithCountEXT = glad_vkCmdSetViewportWithCountEXT;
    glad_debug_vkCmdWaitEvents2 = glad_vkCmdWaitEvents2;
    glad_debug_vkCmdWaitEvents2KHR = glad_vkCmdWaitEvents2KHR;
    glad_debug_vkCmdWriteBufferMarker2AMD = glad_vkCmdWriteBufferMarker2AMD;
    glad_debug_vkCmdWriteTimestamp2 = glad_vkCmdWriteTimestamp2;
    glad_debug_vkCmdWriteTimestamp2KHR = glad_vkCmdWriteTimestamp2KHR;
    glad_debug_vkCreateDebugUtilsMessengerEXT = glad_vkCreateDebugUtilsMessengerEXT;
    glad_debug_vkCreateDescriptorUpdateTemplate = glad_vkCreateDescriptorUpdateTemplate;
    glad_debug_vkCreateDisplayModeKHR = glad_vkCreateDisplayModeKHR;
    glad_debug_vkCreateDisplayPlaneSurfaceKHR = glad_vkCreateDisplayPlaneSurfaceKHR;
    glad_debug_vkCreateHeadlessSurfaceEXT = glad_vkCreateHeadlessSurfaceEXT;
    glad_debug_vkCreatePrivateDataSlot = glad_vkCreatePrivateDataSlot;
    glad_debug_vkCreateRenderPass2 = glad_vkCreateRenderPass2;
    glad_debug_vkCreateSamplerYcbcrConversion = glad_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkCreateSemaphoreSciSyncPoolNV = glad_vkCreateSemaphoreSciSyncPoolNV;

#endif
    glad_debug_vkCreateSharedSwapchainsKHR = glad_vkCreateSharedSwapchainsKHR;
    glad_debug_vkCreateSwapchainKHR = glad_vkCreateSwapchainKHR;
    glad_debug_vkDestroyDebugUtilsMessengerEXT = glad_vkDestroyDebugUtilsMessengerEXT;
    glad_debug_vkDestroyDescriptorUpdateTemplate = glad_vkDestroyDescriptorUpdateTemplate;
    glad_debug_vkDestroyPrivateDataSlot = glad_vkDestroyPrivateDataSlot;
    glad_debug_vkDestroySamplerYcbcrConversion = glad_vkDestroySamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkDestroySemaphoreSciSyncPoolNV = glad_vkDestroySemaphoreSciSyncPoolNV;

#endif
    glad_debug_vkDestroySurfaceKHR = glad_vkDestroySurfaceKHR;
    glad_debug_vkDestroySwapchainKHR = glad_vkDestroySwapchainKHR;
    glad_debug_vkDisplayPowerControlEXT = glad_vkDisplayPowerControlEXT;
    glad_debug_vkEnumerateInstanceVersion = glad_vkEnumerateInstanceVersion;
    glad_debug_vkEnumeratePhysicalDeviceGroups = glad_vkEnumeratePhysicalDeviceGroups;
    glad_debug_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = glad_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
    glad_debug_vkGetBufferDeviceAddress = glad_vkGetBufferDeviceAddress;
    glad_debug_vkGetBufferMemoryRequirements2 = glad_vkGetBufferMemoryRequirements2;
    glad_debug_vkGetBufferOpaqueCaptureAddress = glad_vkGetBufferOpaqueCaptureAddress;
    glad_debug_vkGetCalibratedTimestampsKHR = glad_vkGetCalibratedTimestampsKHR;
    glad_debug_vkGetCommandPoolMemoryConsumption = glad_vkGetCommandPoolMemoryConsumption;
    glad_debug_vkGetDescriptorSetLayoutSupport = glad_vkGetDescriptorSetLayoutSupport;
    glad_debug_vkGetDeviceBufferMemoryRequirements = glad_vkGetDeviceBufferMemoryRequirements;
    glad_debug_vkGetDeviceGroupPeerMemoryFeatures = glad_vkGetDeviceGroupPeerMemoryFeatures;
    glad_debug_vkGetDeviceGroupPresentCapabilitiesKHR = glad_vkGetDeviceGroupPresentCapabilitiesKHR;
    glad_debug_vkGetDeviceGroupSurfacePresentModesKHR = glad_vkGetDeviceGroupSurfacePresentModesKHR;
    glad_debug_vkGetDeviceImageMemoryRequirements = glad_vkGetDeviceImageMemoryRequirements;
    glad_debug_vkGetDeviceImageSparseMemoryRequirements = glad_vkGetDeviceImageSparseMemoryRequirements;
    glad_debug_vkGetDeviceMemoryOpaqueCaptureAddress = glad_vkGetDeviceMemoryOpaqueCaptureAddress;
    glad_debug_vkGetDeviceQueue2 = glad_vkGetDeviceQueue2;
    glad_debug_vkGetDisplayModeProperties2KHR = glad_vkGetDisplayModeProperties2KHR;
    glad_debug_vkGetDisplayModePropertiesKHR = glad_vkGetDisplayModePropertiesKHR;
    glad_debug_vkGetDisplayPlaneCapabilities2KHR = glad_vkGetDisplayPlaneCapabilities2KHR;
    glad_debug_vkGetDisplayPlaneCapabilitiesKHR = glad_vkGetDisplayPlaneCapabilitiesKHR;
    glad_debug_vkGetDisplayPlaneSupportedDisplaysKHR = glad_vkGetDisplayPlaneSupportedDisplaysKHR;
    glad_debug_vkGetFaultData = glad_vkGetFaultData;
    glad_debug_vkGetFenceFdKHR = glad_vkGetFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetFenceSciSyncFenceNV = glad_vkGetFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetFenceSciSyncObjNV = glad_vkGetFenceSciSyncObjNV;

#endif
    glad_debug_vkGetImageDrmFormatModifierPropertiesEXT = glad_vkGetImageDrmFormatModifierPropertiesEXT;
    glad_debug_vkGetImageMemoryRequirements2 = glad_vkGetImageMemoryRequirements2;
    glad_debug_vkGetImageSparseMemoryRequirements2 = glad_vkGetImageSparseMemoryRequirements2;
    glad_debug_vkGetMemoryFdKHR = glad_vkGetMemoryFdKHR;
    glad_debug_vkGetMemoryFdPropertiesKHR = glad_vkGetMemoryFdPropertiesKHR;
    glad_debug_vkGetMemoryHostPointerPropertiesEXT = glad_vkGetMemoryHostPointerPropertiesEXT;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetMemorySciBufNV = glad_vkGetMemorySciBufNV;

#endif
    glad_debug_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = glad_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = glad_vkGetPhysicalDeviceDisplayPlaneProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = glad_vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
    glad_debug_vkGetPhysicalDeviceDisplayProperties2KHR = glad_vkGetPhysicalDeviceDisplayProperties2KHR;
    glad_debug_vkGetPhysicalDeviceDisplayPropertiesKHR = glad_vkGetPhysicalDeviceDisplayPropertiesKHR;
    glad_debug_vkGetPhysicalDeviceExternalBufferProperties = glad_vkGetPhysicalDeviceExternalBufferProperties;
    glad_debug_vkGetPhysicalDeviceExternalFenceProperties = glad_vkGetPhysicalDeviceExternalFenceProperties;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV = glad_vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV;

#endif
    glad_debug_vkGetPhysicalDeviceExternalSemaphoreProperties = glad_vkGetPhysicalDeviceExternalSemaphoreProperties;
    glad_debug_vkGetPhysicalDeviceFeatures2 = glad_vkGetPhysicalDeviceFeatures2;
    glad_debug_vkGetPhysicalDeviceFormatProperties2 = glad_vkGetPhysicalDeviceFormatProperties2;
    glad_debug_vkGetPhysicalDeviceFragmentShadingRatesKHR = glad_vkGetPhysicalDeviceFragmentShadingRatesKHR;
    glad_debug_vkGetPhysicalDeviceImageFormatProperties2 = glad_vkGetPhysicalDeviceImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceMemoryProperties2 = glad_vkGetPhysicalDeviceMemoryProperties2;
    glad_debug_vkGetPhysicalDeviceMultisamplePropertiesEXT = glad_vkGetPhysicalDeviceMultisamplePropertiesEXT;
    glad_debug_vkGetPhysicalDevicePresentRectanglesKHR = glad_vkGetPhysicalDevicePresentRectanglesKHR;
    glad_debug_vkGetPhysicalDeviceProperties2 = glad_vkGetPhysicalDeviceProperties2;
    glad_debug_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = glad_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
    glad_debug_vkGetPhysicalDeviceQueueFamilyProperties2 = glad_vkGetPhysicalDeviceQueueFamilyProperties2;
    glad_debug_vkGetPhysicalDeviceRefreshableObjectTypesKHR = glad_vkGetPhysicalDeviceRefreshableObjectTypesKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceSciBufAttributesNV = glad_vkGetPhysicalDeviceSciBufAttributesNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetPhysicalDeviceSciSyncAttributesNV = glad_vkGetPhysicalDeviceSciSyncAttributesNV;

#endif
    glad_debug_vkGetPhysicalDeviceSparseImageFormatProperties2 = glad_vkGetPhysicalDeviceSparseImageFormatProperties2;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2EXT = glad_vkGetPhysicalDeviceSurfaceCapabilities2EXT;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilities2KHR = glad_vkGetPhysicalDeviceSurfaceCapabilities2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = glad_vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormats2KHR = glad_vkGetPhysicalDeviceSurfaceFormats2KHR;
    glad_debug_vkGetPhysicalDeviceSurfaceFormatsKHR = glad_vkGetPhysicalDeviceSurfaceFormatsKHR;
    glad_debug_vkGetPhysicalDeviceSurfacePresentModesKHR = glad_vkGetPhysicalDeviceSurfacePresentModesKHR;
    glad_debug_vkGetPhysicalDeviceSurfaceSupportKHR = glad_vkGetPhysicalDeviceSurfaceSupportKHR;
    glad_debug_vkGetPhysicalDeviceToolProperties = glad_vkGetPhysicalDeviceToolProperties;
    glad_debug_vkGetPrivateData = glad_vkGetPrivateData;
    glad_debug_vkGetQueueCheckpointData2NV = glad_vkGetQueueCheckpointData2NV;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
    glad_debug_vkGetScreenBufferPropertiesQNX = glad_vkGetScreenBufferPropertiesQNX;

#endif
    glad_debug_vkGetSemaphoreCounterValue = glad_vkGetSemaphoreCounterValue;
    glad_debug_vkGetSemaphoreFdKHR = glad_vkGetSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkGetSemaphoreSciSyncObjNV = glad_vkGetSemaphoreSciSyncObjNV;

#endif
    glad_debug_vkGetSwapchainCounterEXT = glad_vkGetSwapchainCounterEXT;
    glad_debug_vkGetSwapchainImagesKHR = glad_vkGetSwapchainImagesKHR;
    glad_debug_vkGetSwapchainStatusKHR = glad_vkGetSwapchainStatusKHR;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
    glad_debug_vkGetWinrtDisplayNV = glad_vkGetWinrtDisplayNV;

#endif
    glad_debug_vkImportFenceFdKHR = glad_vkImportFenceFdKHR;
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportFenceSciSyncFenceNV = glad_vkImportFenceSciSyncFenceNV;

#endif
#if defined(VK_USE_PLATFORM_SCI) || defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportFenceSciSyncObjNV = glad_vkImportFenceSciSyncObjNV;

#endif
    glad_debug_vkImportSemaphoreFdKHR = glad_vkImportSemaphoreFdKHR;
#if defined(VK_USE_PLATFORM_SCI)
    glad_debug_vkImportSemaphoreSciSyncObjNV = glad_vkImportSemaphoreSciSyncObjNV;

#endif
    glad_debug_vkQueueBeginDebugUtilsLabelEXT = glad_vkQueueBeginDebugUtilsLabelEXT;
    glad_debug_vkQueueEndDebugUtilsLabelEXT = glad_vkQueueEndDebugUtilsLabelEXT;
    glad_debug_vkQueueInsertDebugUtilsLabelEXT = glad_vkQueueInsertDebugUtilsLabelEXT;
    glad_debug_vkQueuePresentKHR = glad_vkQueuePresentKHR;
    glad_debug_vkQueueSubmit2 = glad_vkQueueSubmit2;
    glad_debug_vkQueueSubmit2KHR = glad_vkQueueSubmit2KHR;
    glad_debug_vkRegisterDeviceEventEXT = glad_vkRegisterDeviceEventEXT;
    glad_debug_vkRegisterDisplayEventEXT = glad_vkRegisterDisplayEventEXT;
    glad_debug_vkReleaseDisplayEXT = glad_vkReleaseDisplayEXT;
    glad_debug_vkReleaseProfilingLockKHR = glad_vkReleaseProfilingLockKHR;
    glad_debug_vkResetQueryPool = glad_vkResetQueryPool;
    glad_debug_vkSetDebugUtilsObjectNameEXT = glad_vkSetDebugUtilsObjectNameEXT;
    glad_debug_vkSetDebugUtilsObjectTagEXT = glad_vkSetDebugUtilsObjectTagEXT;
    glad_debug_vkSetHdrMetadataEXT = glad_vkSetHdrMetadataEXT;
    glad_debug_vkSetPrivateData = glad_vkSetPrivateData;
    glad_debug_vkSignalSemaphore = glad_vkSignalSemaphore;
    glad_debug_vkSubmitDebugUtilsMessageEXT = glad_vkSubmitDebugUtilsMessageEXT;
    glad_debug_vkTrimCommandPool = glad_vkTrimCommandPool;
    glad_debug_vkUpdateDescriptorSetWithTemplate = glad_vkUpdateDescriptorSetWithTemplate;
    glad_debug_vkWaitSemaphores = glad_vkWaitSemaphores;
}


#ifdef __cplusplus
}
#endif
