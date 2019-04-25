/* auto generated by extensions_vk.lua */
/* Copyright (c) 2018, NVIDIA CORPORATION. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *  * Neither the name of NVIDIA CORPORATION nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifdef WIN32
  #define VK_USE_PLATFORM_WIN32_KHR
#endif

#include <assert.h>
#include "extensions_vk.hpp"

/* loaders */
/* /////////////////////////////////// */
#if VK_KHR_push_descriptor
static PFN_vkCmdPushDescriptorSetKHR pfn_vkCmdPushDescriptorSetKHR = 0;
static PFN_vkCmdPushDescriptorSetWithTemplateKHR pfn_vkCmdPushDescriptorSetWithTemplateKHR = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetKHR(
    VkCommandBuffer                             commandBuffer,
    VkPipelineBindPoint                         pipelineBindPoint,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    uint32_t                                    descriptorWriteCount,
    const VkWriteDescriptorSet* pDescriptorWrites)
{
  assert(pfn_vkCmdPushDescriptorSetKHR);
  pfn_vkCmdPushDescriptorSetKHR(commandBuffer,pipelineBindPoint,layout,set,descriptorWriteCount,pDescriptorWrites);
}
VKAPI_ATTR void VKAPI_CALL vkCmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer                             commandBuffer,
    VkDescriptorUpdateTemplate                  descriptorUpdateTemplate,
    VkPipelineLayout                            layout,
    uint32_t                                    set,
    const void* pData)
{
  assert(pfn_vkCmdPushDescriptorSetWithTemplateKHR);
  pfn_vkCmdPushDescriptorSetWithTemplateKHR(commandBuffer,descriptorUpdateTemplate,layout,set,pData);
}

int load_VK_KHR_push_descriptor(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)getDeviceProcAddr(device, "vkCmdPushDescriptorSetKHR");
  pfn_vkCmdPushDescriptorSetWithTemplateKHR = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)getDeviceProcAddr(device, "vkCmdPushDescriptorSetWithTemplateKHR");
  int success = 1;
  success = success && (pfn_vkCmdPushDescriptorSetKHR != 0);
  success = success && (pfn_vkCmdPushDescriptorSetWithTemplateKHR != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_KHR_create_renderpass2
static PFN_vkCreateRenderPass2KHR pfn_vkCreateRenderPass2KHR = 0;
static PFN_vkCmdBeginRenderPass2KHR pfn_vkCmdBeginRenderPass2KHR = 0;
static PFN_vkCmdNextSubpass2KHR pfn_vkCmdNextSubpass2KHR = 0;
static PFN_vkCmdEndRenderPass2KHR pfn_vkCmdEndRenderPass2KHR = 0;

VKAPI_ATTR VkResult VKAPI_CALL vkCreateRenderPass2KHR(
    VkDevice                                    device,
    const VkRenderPassCreateInfo2KHR* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkRenderPass* pRenderPass)
{
  assert(pfn_vkCreateRenderPass2KHR);
  return pfn_vkCreateRenderPass2KHR(device,pCreateInfo,pAllocator,pRenderPass);
}
VKAPI_ATTR void VKAPI_CALL vkCmdBeginRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkRenderPassBeginInfo* pRenderPassBegin,
    const VkSubpassBeginInfoKHR* pSubpassBeginInfo)
{
  assert(pfn_vkCmdBeginRenderPass2KHR);
  pfn_vkCmdBeginRenderPass2KHR(commandBuffer,pRenderPassBegin,pSubpassBeginInfo);
}
VKAPI_ATTR void VKAPI_CALL vkCmdNextSubpass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassBeginInfoKHR* pSubpassBeginInfo,
    const VkSubpassEndInfoKHR* pSubpassEndInfo)
{
  assert(pfn_vkCmdNextSubpass2KHR);
  pfn_vkCmdNextSubpass2KHR(commandBuffer,pSubpassBeginInfo,pSubpassEndInfo);
}
VKAPI_ATTR void VKAPI_CALL vkCmdEndRenderPass2KHR(
    VkCommandBuffer                             commandBuffer,
    const VkSubpassEndInfoKHR* pSubpassEndInfo)
{
  assert(pfn_vkCmdEndRenderPass2KHR);
  pfn_vkCmdEndRenderPass2KHR(commandBuffer,pSubpassEndInfo);
}

int load_VK_KHR_create_renderpass2(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCreateRenderPass2KHR = (PFN_vkCreateRenderPass2KHR)getDeviceProcAddr(device, "vkCreateRenderPass2KHR");
  pfn_vkCmdBeginRenderPass2KHR = (PFN_vkCmdBeginRenderPass2KHR)getDeviceProcAddr(device, "vkCmdBeginRenderPass2KHR");
  pfn_vkCmdNextSubpass2KHR = (PFN_vkCmdNextSubpass2KHR)getDeviceProcAddr(device, "vkCmdNextSubpass2KHR");
  pfn_vkCmdEndRenderPass2KHR = (PFN_vkCmdEndRenderPass2KHR)getDeviceProcAddr(device, "vkCmdEndRenderPass2KHR");
  int success = 1;
  success = success && (pfn_vkCreateRenderPass2KHR != 0);
  success = success && (pfn_vkCmdBeginRenderPass2KHR != 0);
  success = success && (pfn_vkCmdNextSubpass2KHR != 0);
  success = success && (pfn_vkCmdEndRenderPass2KHR != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_KHR_draw_indirect_count
static PFN_vkCmdDrawIndirectCountKHR pfn_vkCmdDrawIndirectCountKHR = 0;
static PFN_vkCmdDrawIndexedIndirectCountKHR pfn_vkCmdDrawIndexedIndirectCountKHR = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
  assert(pfn_vkCmdDrawIndirectCountKHR);
  pfn_vkCmdDrawIndirectCountKHR(commandBuffer,buffer,offset,countBuffer,countBufferOffset,maxDrawCount,stride);
}
VKAPI_ATTR void VKAPI_CALL vkCmdDrawIndexedIndirectCountKHR(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
  assert(pfn_vkCmdDrawIndexedIndirectCountKHR);
  pfn_vkCmdDrawIndexedIndirectCountKHR(commandBuffer,buffer,offset,countBuffer,countBufferOffset,maxDrawCount,stride);
}

int load_VK_KHR_draw_indirect_count(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)getDeviceProcAddr(device, "vkCmdDrawIndirectCountKHR");
  pfn_vkCmdDrawIndexedIndirectCountKHR = (PFN_vkCmdDrawIndexedIndirectCountKHR)getDeviceProcAddr(device, "vkCmdDrawIndexedIndirectCountKHR");
  int success = 1;
  success = success && (pfn_vkCmdDrawIndirectCountKHR != 0);
  success = success && (pfn_vkCmdDrawIndexedIndirectCountKHR != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_KHR_8bit_storage


int load_VK_KHR_8bit_storage(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_KHR_driver_properties


int load_VK_KHR_driver_properties(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_KHR_depth_stencil_resolve


int load_VK_KHR_depth_stencil_resolve(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_corner_sampled_image


int load_VK_NV_corner_sampled_image(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NVX_device_generated_commands
static PFN_vkCmdProcessCommandsNVX pfn_vkCmdProcessCommandsNVX = 0;
static PFN_vkCmdReserveSpaceForCommandsNVX pfn_vkCmdReserveSpaceForCommandsNVX = 0;
static PFN_vkCreateIndirectCommandsLayoutNVX pfn_vkCreateIndirectCommandsLayoutNVX = 0;
static PFN_vkDestroyIndirectCommandsLayoutNVX pfn_vkDestroyIndirectCommandsLayoutNVX = 0;
static PFN_vkCreateObjectTableNVX pfn_vkCreateObjectTableNVX = 0;
static PFN_vkDestroyObjectTableNVX pfn_vkDestroyObjectTableNVX = 0;
static PFN_vkRegisterObjectsNVX pfn_vkRegisterObjectsNVX = 0;
static PFN_vkUnregisterObjectsNVX pfn_vkUnregisterObjectsNVX = 0;
static PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdProcessCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdProcessCommandsInfoNVX* pProcessCommandsInfo)
{
  assert(pfn_vkCmdProcessCommandsNVX);
  pfn_vkCmdProcessCommandsNVX(commandBuffer,pProcessCommandsInfo);
}
VKAPI_ATTR void VKAPI_CALL vkCmdReserveSpaceForCommandsNVX(
    VkCommandBuffer                             commandBuffer,
    const VkCmdReserveSpaceForCommandsInfoNVX* pReserveSpaceInfo)
{
  assert(pfn_vkCmdReserveSpaceForCommandsNVX);
  pfn_vkCmdReserveSpaceForCommandsNVX(commandBuffer,pReserveSpaceInfo);
}
VKAPI_ATTR VkResult VKAPI_CALL vkCreateIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    const VkIndirectCommandsLayoutCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkIndirectCommandsLayoutNVX* pIndirectCommandsLayout)
{
  assert(pfn_vkCreateIndirectCommandsLayoutNVX);
  return pfn_vkCreateIndirectCommandsLayoutNVX(device,pCreateInfo,pAllocator,pIndirectCommandsLayout);
}
VKAPI_ATTR void VKAPI_CALL vkDestroyIndirectCommandsLayoutNVX(
    VkDevice                                    device,
    VkIndirectCommandsLayoutNVX                 indirectCommandsLayout,
    const VkAllocationCallbacks* pAllocator)
{
  assert(pfn_vkDestroyIndirectCommandsLayoutNVX);
  pfn_vkDestroyIndirectCommandsLayoutNVX(device,indirectCommandsLayout,pAllocator);
}
VKAPI_ATTR VkResult VKAPI_CALL vkCreateObjectTableNVX(
    VkDevice                                    device,
    const VkObjectTableCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkObjectTableNVX* pObjectTable)
{
  assert(pfn_vkCreateObjectTableNVX);
  return pfn_vkCreateObjectTableNVX(device,pCreateInfo,pAllocator,pObjectTable);
}
VKAPI_ATTR void VKAPI_CALL vkDestroyObjectTableNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    const VkAllocationCallbacks* pAllocator)
{
  assert(pfn_vkDestroyObjectTableNVX);
  pfn_vkDestroyObjectTableNVX(device,objectTable,pAllocator);
}
VKAPI_ATTR VkResult VKAPI_CALL vkRegisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectTableEntryNVX* const* ppObjectTableEntries,
    const uint32_t* pObjectIndices)
{
  assert(pfn_vkRegisterObjectsNVX);
  return pfn_vkRegisterObjectsNVX(device,objectTable,objectCount,ppObjectTableEntries,pObjectIndices);
}
VKAPI_ATTR VkResult VKAPI_CALL vkUnregisterObjectsNVX(
    VkDevice                                    device,
    VkObjectTableNVX                            objectTable,
    uint32_t                                    objectCount,
    const VkObjectEntryTypeNVX* pObjectEntryTypes,
    const uint32_t* pObjectIndices)
{
  assert(pfn_vkUnregisterObjectsNVX);
  return pfn_vkUnregisterObjectsNVX(device,objectTable,objectCount,pObjectEntryTypes,pObjectIndices);
}
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(
    VkPhysicalDevice                            physicalDevice,
    VkDeviceGeneratedCommandsFeaturesNVX* pFeatures,
    VkDeviceGeneratedCommandsLimitsNVX* pLimits)
{
  assert(pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX);
  pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX(physicalDevice,pFeatures,pLimits);
}

int load_VK_NVX_device_generated_commands(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdProcessCommandsNVX = (PFN_vkCmdProcessCommandsNVX)getDeviceProcAddr(device, "vkCmdProcessCommandsNVX");
  pfn_vkCmdReserveSpaceForCommandsNVX = (PFN_vkCmdReserveSpaceForCommandsNVX)getDeviceProcAddr(device, "vkCmdReserveSpaceForCommandsNVX");
  pfn_vkCreateIndirectCommandsLayoutNVX = (PFN_vkCreateIndirectCommandsLayoutNVX)getDeviceProcAddr(device, "vkCreateIndirectCommandsLayoutNVX");
  pfn_vkDestroyIndirectCommandsLayoutNVX = (PFN_vkDestroyIndirectCommandsLayoutNVX)getDeviceProcAddr(device, "vkDestroyIndirectCommandsLayoutNVX");
  pfn_vkCreateObjectTableNVX = (PFN_vkCreateObjectTableNVX)getDeviceProcAddr(device, "vkCreateObjectTableNVX");
  pfn_vkDestroyObjectTableNVX = (PFN_vkDestroyObjectTableNVX)getDeviceProcAddr(device, "vkDestroyObjectTableNVX");
  pfn_vkRegisterObjectsNVX = (PFN_vkRegisterObjectsNVX)getDeviceProcAddr(device, "vkRegisterObjectsNVX");
  pfn_vkUnregisterObjectsNVX = (PFN_vkUnregisterObjectsNVX)getDeviceProcAddr(device, "vkUnregisterObjectsNVX");
  pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX = (PFN_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX)getDeviceProcAddr(device, "vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX");
  int success = 1;
  success = success && (pfn_vkCmdProcessCommandsNVX != 0);
  success = success && (pfn_vkCmdReserveSpaceForCommandsNVX != 0);
  success = success && (pfn_vkCreateIndirectCommandsLayoutNVX != 0);
  success = success && (pfn_vkDestroyIndirectCommandsLayoutNVX != 0);
  success = success && (pfn_vkCreateObjectTableNVX != 0);
  success = success && (pfn_vkDestroyObjectTableNVX != 0);
  success = success && (pfn_vkRegisterObjectsNVX != 0);
  success = success && (pfn_vkUnregisterObjectsNVX != 0);
  success = success && (pfn_vkGetPhysicalDeviceGeneratedCommandsPropertiesNVX != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_viewport_array2


int load_VK_NV_viewport_array2(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_viewport_swizzle


int load_VK_NV_viewport_swizzle(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_conservative_rasterization


int load_VK_EXT_conservative_rasterization(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_depth_clip_enable


int load_VK_EXT_depth_clip_enable(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_sampler_filter_minmax


int load_VK_EXT_sampler_filter_minmax(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_sample_locations
static PFN_vkCmdSetSampleLocationsEXT pfn_vkCmdSetSampleLocationsEXT = 0;
static PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdSetSampleLocationsEXT(
    VkCommandBuffer                             commandBuffer,
    const VkSampleLocationsInfoEXT* pSampleLocationsInfo)
{
  assert(pfn_vkCmdSetSampleLocationsEXT);
  pfn_vkCmdSetSampleLocationsEXT(commandBuffer,pSampleLocationsInfo);
}
VKAPI_ATTR void VKAPI_CALL vkGetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice                            physicalDevice,
    VkSampleCountFlagBits                       samples,
    VkMultisamplePropertiesEXT* pMultisampleProperties)
{
  assert(pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT);
  pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT(physicalDevice,samples,pMultisampleProperties);
}

int load_VK_EXT_sample_locations(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)getDeviceProcAddr(device, "vkCmdSetSampleLocationsEXT");
  pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)getDeviceProcAddr(device, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
  int success = 1;
  success = success && (pfn_vkCmdSetSampleLocationsEXT != 0);
  success = success && (pfn_vkGetPhysicalDeviceMultisamplePropertiesEXT != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_descriptor_indexing


int load_VK_EXT_descriptor_indexing(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_shading_rate_image
static PFN_vkCmdBindShadingRateImageNV pfn_vkCmdBindShadingRateImageNV = 0;
static PFN_vkCmdSetViewportShadingRatePaletteNV pfn_vkCmdSetViewportShadingRatePaletteNV = 0;
static PFN_vkCmdSetCoarseSampleOrderNV pfn_vkCmdSetCoarseSampleOrderNV = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdBindShadingRateImageNV(
    VkCommandBuffer                             commandBuffer,
    VkImageView                                 imageView,
    VkImageLayout                               imageLayout)
{
  assert(pfn_vkCmdBindShadingRateImageNV);
  pfn_vkCmdBindShadingRateImageNV(commandBuffer,imageView,imageLayout);
}
VKAPI_ATTR void VKAPI_CALL vkCmdSetViewportShadingRatePaletteNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    firstViewport,
    uint32_t                                    viewportCount,
    const VkShadingRatePaletteNV* pShadingRatePalettes)
{
  assert(pfn_vkCmdSetViewportShadingRatePaletteNV);
  pfn_vkCmdSetViewportShadingRatePaletteNV(commandBuffer,firstViewport,viewportCount,pShadingRatePalettes);
}
VKAPI_ATTR void VKAPI_CALL vkCmdSetCoarseSampleOrderNV(
    VkCommandBuffer                             commandBuffer,
    VkCoarseSampleOrderTypeNV                   sampleOrderType,
    uint32_t                                    customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV* pCustomSampleOrders)
{
  assert(pfn_vkCmdSetCoarseSampleOrderNV);
  pfn_vkCmdSetCoarseSampleOrderNV(commandBuffer,sampleOrderType,customSampleOrderCount,pCustomSampleOrders);
}

int load_VK_NV_shading_rate_image(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)getDeviceProcAddr(device, "vkCmdBindShadingRateImageNV");
  pfn_vkCmdSetViewportShadingRatePaletteNV = (PFN_vkCmdSetViewportShadingRatePaletteNV)getDeviceProcAddr(device, "vkCmdSetViewportShadingRatePaletteNV");
  pfn_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)getDeviceProcAddr(device, "vkCmdSetCoarseSampleOrderNV");
  int success = 1;
  success = success && (pfn_vkCmdBindShadingRateImageNV != 0);
  success = success && (pfn_vkCmdSetViewportShadingRatePaletteNV != 0);
  success = success && (pfn_vkCmdSetCoarseSampleOrderNV != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_ray_tracing
static PFN_vkCreateAccelerationStructureNV pfn_vkCreateAccelerationStructureNV = 0;
static PFN_vkDestroyAccelerationStructureNV pfn_vkDestroyAccelerationStructureNV = 0;
static PFN_vkGetAccelerationStructureMemoryRequirementsNV pfn_vkGetAccelerationStructureMemoryRequirementsNV = 0;
static PFN_vkBindAccelerationStructureMemoryNV pfn_vkBindAccelerationStructureMemoryNV = 0;
static PFN_vkCmdBuildAccelerationStructureNV pfn_vkCmdBuildAccelerationStructureNV = 0;
static PFN_vkCmdCopyAccelerationStructureNV pfn_vkCmdCopyAccelerationStructureNV = 0;
static PFN_vkCmdTraceRaysNV pfn_vkCmdTraceRaysNV = 0;
static PFN_vkCreateRayTracingPipelinesNV pfn_vkCreateRayTracingPipelinesNV = 0;
static PFN_vkGetRayTracingShaderGroupHandlesNV pfn_vkGetRayTracingShaderGroupHandlesNV = 0;
static PFN_vkGetAccelerationStructureHandleNV pfn_vkGetAccelerationStructureHandleNV = 0;
static PFN_vkCmdWriteAccelerationStructuresPropertiesNV pfn_vkCmdWriteAccelerationStructuresPropertiesNV = 0;
static PFN_vkCompileDeferredNV pfn_vkCompileDeferredNV = 0;

VKAPI_ATTR VkResult VKAPI_CALL vkCreateAccelerationStructureNV(
    VkDevice                                    device,
    const VkAccelerationStructureCreateInfoNV* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkAccelerationStructureNV* pAccelerationStructure)
{
  assert(pfn_vkCreateAccelerationStructureNV);
  return pfn_vkCreateAccelerationStructureNV(device,pCreateInfo,pAllocator,pAccelerationStructure);
}
VKAPI_ATTR void VKAPI_CALL vkDestroyAccelerationStructureNV(
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    const VkAllocationCallbacks* pAllocator)
{
  assert(pfn_vkDestroyAccelerationStructureNV);
  pfn_vkDestroyAccelerationStructureNV(device,accelerationStructure,pAllocator);
}
VKAPI_ATTR void VKAPI_CALL vkGetAccelerationStructureMemoryRequirementsNV(
    VkDevice                                    device,
    const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2KHR* pMemoryRequirements)
{
  assert(pfn_vkGetAccelerationStructureMemoryRequirementsNV);
  pfn_vkGetAccelerationStructureMemoryRequirementsNV(device,pInfo,pMemoryRequirements);
}
VKAPI_ATTR VkResult VKAPI_CALL vkBindAccelerationStructureMemoryNV(
    VkDevice                                    device,
    uint32_t                                    bindInfoCount,
    const VkBindAccelerationStructureMemoryInfoNV* pBindInfos)
{
  assert(pfn_vkBindAccelerationStructureMemoryNV);
  return pfn_vkBindAccelerationStructureMemoryNV(device,bindInfoCount,pBindInfos);
}
VKAPI_ATTR void VKAPI_CALL vkCmdBuildAccelerationStructureNV(
    VkCommandBuffer                             commandBuffer,
    const VkAccelerationStructureInfoNV* pInfo,
    VkBuffer                                    instanceData,
    VkDeviceSize                                instanceOffset,
    VkBool32                                    update,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkBuffer                                    scratch,
    VkDeviceSize                                scratchOffset)
{
  assert(pfn_vkCmdBuildAccelerationStructureNV);
  pfn_vkCmdBuildAccelerationStructureNV(commandBuffer,pInfo,instanceData,instanceOffset,update,dst,src,scratch,scratchOffset);
}
VKAPI_ATTR void VKAPI_CALL vkCmdCopyAccelerationStructureNV(
    VkCommandBuffer                             commandBuffer,
    VkAccelerationStructureNV                   dst,
    VkAccelerationStructureNV                   src,
    VkCopyAccelerationStructureModeNV           mode)
{
  assert(pfn_vkCmdCopyAccelerationStructureNV);
  pfn_vkCmdCopyAccelerationStructureNV(commandBuffer,dst,src,mode);
}
VKAPI_ATTR void VKAPI_CALL vkCmdTraceRaysNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    raygenShaderBindingTableBuffer,
    VkDeviceSize                                raygenShaderBindingOffset,
    VkBuffer                                    missShaderBindingTableBuffer,
    VkDeviceSize                                missShaderBindingOffset,
    VkDeviceSize                                missShaderBindingStride,
    VkBuffer                                    hitShaderBindingTableBuffer,
    VkDeviceSize                                hitShaderBindingOffset,
    VkDeviceSize                                hitShaderBindingStride,
    VkBuffer                                    callableShaderBindingTableBuffer,
    VkDeviceSize                                callableShaderBindingOffset,
    VkDeviceSize                                callableShaderBindingStride,
    uint32_t                                    width,
    uint32_t                                    height,
    uint32_t                                    depth)
{
  assert(pfn_vkCmdTraceRaysNV);
  pfn_vkCmdTraceRaysNV(commandBuffer,raygenShaderBindingTableBuffer,raygenShaderBindingOffset,missShaderBindingTableBuffer,missShaderBindingOffset,missShaderBindingStride,hitShaderBindingTableBuffer,hitShaderBindingOffset,hitShaderBindingStride,callableShaderBindingTableBuffer,callableShaderBindingOffset,callableShaderBindingStride,width,height,depth);
}
VKAPI_ATTR VkResult VKAPI_CALL vkCreateRayTracingPipelinesNV(
    VkDevice                                    device,
    VkPipelineCache                             pipelineCache,
    uint32_t                                    createInfoCount,
    const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkPipeline* pPipelines)
{
  assert(pfn_vkCreateRayTracingPipelinesNV);
  return pfn_vkCreateRayTracingPipelinesNV(device,pipelineCache,createInfoCount,pCreateInfos,pAllocator,pPipelines);
}
VKAPI_ATTR VkResult VKAPI_CALL vkGetRayTracingShaderGroupHandlesNV(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    firstGroup,
    uint32_t                                    groupCount,
    size_t                                      dataSize,
    void* pData)
{
  assert(pfn_vkGetRayTracingShaderGroupHandlesNV);
  return pfn_vkGetRayTracingShaderGroupHandlesNV(device,pipeline,firstGroup,groupCount,dataSize,pData);
}
VKAPI_ATTR VkResult VKAPI_CALL vkGetAccelerationStructureHandleNV(
    VkDevice                                    device,
    VkAccelerationStructureNV                   accelerationStructure,
    size_t                                      dataSize,
    void* pData)
{
  assert(pfn_vkGetAccelerationStructureHandleNV);
  return pfn_vkGetAccelerationStructureHandleNV(device,accelerationStructure,dataSize,pData);
}
VKAPI_ATTR void VKAPI_CALL vkCmdWriteAccelerationStructuresPropertiesNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    accelerationStructureCount,
    const VkAccelerationStructureNV* pAccelerationStructures,
    VkQueryType                                 queryType,
    VkQueryPool                                 queryPool,
    uint32_t                                    firstQuery)
{
  assert(pfn_vkCmdWriteAccelerationStructuresPropertiesNV);
  pfn_vkCmdWriteAccelerationStructuresPropertiesNV(commandBuffer,accelerationStructureCount,pAccelerationStructures,queryType,queryPool,firstQuery);
}
VKAPI_ATTR VkResult VKAPI_CALL vkCompileDeferredNV(
    VkDevice                                    device,
    VkPipeline                                  pipeline,
    uint32_t                                    shader)
{
  assert(pfn_vkCompileDeferredNV);
  return pfn_vkCompileDeferredNV(device,pipeline,shader);
}

int load_VK_NV_ray_tracing(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCreateAccelerationStructureNV = (PFN_vkCreateAccelerationStructureNV)getDeviceProcAddr(device, "vkCreateAccelerationStructureNV");
  pfn_vkDestroyAccelerationStructureNV = (PFN_vkDestroyAccelerationStructureNV)getDeviceProcAddr(device, "vkDestroyAccelerationStructureNV");
  pfn_vkGetAccelerationStructureMemoryRequirementsNV = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)getDeviceProcAddr(device, "vkGetAccelerationStructureMemoryRequirementsNV");
  pfn_vkBindAccelerationStructureMemoryNV = (PFN_vkBindAccelerationStructureMemoryNV)getDeviceProcAddr(device, "vkBindAccelerationStructureMemoryNV");
  pfn_vkCmdBuildAccelerationStructureNV = (PFN_vkCmdBuildAccelerationStructureNV)getDeviceProcAddr(device, "vkCmdBuildAccelerationStructureNV");
  pfn_vkCmdCopyAccelerationStructureNV = (PFN_vkCmdCopyAccelerationStructureNV)getDeviceProcAddr(device, "vkCmdCopyAccelerationStructureNV");
  pfn_vkCmdTraceRaysNV = (PFN_vkCmdTraceRaysNV)getDeviceProcAddr(device, "vkCmdTraceRaysNV");
  pfn_vkCreateRayTracingPipelinesNV = (PFN_vkCreateRayTracingPipelinesNV)getDeviceProcAddr(device, "vkCreateRayTracingPipelinesNV");
  pfn_vkGetRayTracingShaderGroupHandlesNV = (PFN_vkGetRayTracingShaderGroupHandlesNV)getDeviceProcAddr(device, "vkGetRayTracingShaderGroupHandlesNV");
  pfn_vkGetAccelerationStructureHandleNV = (PFN_vkGetAccelerationStructureHandleNV)getDeviceProcAddr(device, "vkGetAccelerationStructureHandleNV");
  pfn_vkCmdWriteAccelerationStructuresPropertiesNV = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)getDeviceProcAddr(device, "vkCmdWriteAccelerationStructuresPropertiesNV");
  pfn_vkCompileDeferredNV = (PFN_vkCompileDeferredNV)getDeviceProcAddr(device, "vkCompileDeferredNV");
  int success = 1;
  success = success && (pfn_vkCreateAccelerationStructureNV != 0);
  success = success && (pfn_vkDestroyAccelerationStructureNV != 0);
  success = success && (pfn_vkGetAccelerationStructureMemoryRequirementsNV != 0);
  success = success && (pfn_vkBindAccelerationStructureMemoryNV != 0);
  success = success && (pfn_vkCmdBuildAccelerationStructureNV != 0);
  success = success && (pfn_vkCmdCopyAccelerationStructureNV != 0);
  success = success && (pfn_vkCmdTraceRaysNV != 0);
  success = success && (pfn_vkCreateRayTracingPipelinesNV != 0);
  success = success && (pfn_vkGetRayTracingShaderGroupHandlesNV != 0);
  success = success && (pfn_vkGetAccelerationStructureHandleNV != 0);
  success = success && (pfn_vkCmdWriteAccelerationStructuresPropertiesNV != 0);
  success = success && (pfn_vkCompileDeferredNV != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_representative_fragment_test


int load_VK_NV_representative_fragment_test(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_compute_shader_derivatives


int load_VK_NV_compute_shader_derivatives(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_mesh_shader
static PFN_vkCmdDrawMeshTasksNV pfn_vkCmdDrawMeshTasksNV = 0;
static PFN_vkCmdDrawMeshTasksIndirectNV pfn_vkCmdDrawMeshTasksIndirectNV = 0;
static PFN_vkCmdDrawMeshTasksIndirectCountNV pfn_vkCmdDrawMeshTasksIndirectCountNV = 0;

VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksNV(
    VkCommandBuffer                             commandBuffer,
    uint32_t                                    taskCount,
    uint32_t                                    firstTask)
{
  assert(pfn_vkCmdDrawMeshTasksNV);
  pfn_vkCmdDrawMeshTasksNV(commandBuffer,taskCount,firstTask);
}
VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    uint32_t                                    drawCount,
    uint32_t                                    stride)
{
  assert(pfn_vkCmdDrawMeshTasksIndirectNV);
  pfn_vkCmdDrawMeshTasksIndirectNV(commandBuffer,buffer,offset,drawCount,stride);
}
VKAPI_ATTR void VKAPI_CALL vkCmdDrawMeshTasksIndirectCountNV(
    VkCommandBuffer                             commandBuffer,
    VkBuffer                                    buffer,
    VkDeviceSize                                offset,
    VkBuffer                                    countBuffer,
    VkDeviceSize                                countBufferOffset,
    uint32_t                                    maxDrawCount,
    uint32_t                                    stride)
{
  assert(pfn_vkCmdDrawMeshTasksIndirectCountNV);
  pfn_vkCmdDrawMeshTasksIndirectCountNV(commandBuffer,buffer,offset,countBuffer,countBufferOffset,maxDrawCount,stride);
}

int load_VK_NV_mesh_shader(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkCmdDrawMeshTasksNV = (PFN_vkCmdDrawMeshTasksNV)getDeviceProcAddr(device, "vkCmdDrawMeshTasksNV");
  pfn_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)getDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectNV");
  pfn_vkCmdDrawMeshTasksIndirectCountNV = (PFN_vkCmdDrawMeshTasksIndirectCountNV)getDeviceProcAddr(device, "vkCmdDrawMeshTasksIndirectCountNV");
  int success = 1;
  success = success && (pfn_vkCmdDrawMeshTasksNV != 0);
  success = success && (pfn_vkCmdDrawMeshTasksIndirectNV != 0);
  success = success && (pfn_vkCmdDrawMeshTasksIndirectCountNV != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_pci_bus_info


int load_VK_EXT_pci_bus_info(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_memory_budget


int load_VK_EXT_memory_budget(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_memory_priority


int load_VK_EXT_memory_priority(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_dedicated_allocation_image_aliasing


int load_VK_NV_dedicated_allocation_image_aliasing(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  int success = 1;
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_EXT_buffer_device_address
static PFN_vkGetBufferDeviceAddressEXT pfn_vkGetBufferDeviceAddressEXT = 0;

VKAPI_ATTR VkDeviceAddress VKAPI_CALL vkGetBufferDeviceAddressEXT(
    VkDevice                                    device,
    const VkBufferDeviceAddressInfoEXT* pInfo)
{
  assert(pfn_vkGetBufferDeviceAddressEXT);
  return pfn_vkGetBufferDeviceAddressEXT(device,pInfo);
}

int load_VK_EXT_buffer_device_address(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)getDeviceProcAddr(device, "vkGetBufferDeviceAddressEXT");
  int success = 1;
  success = success && (pfn_vkGetBufferDeviceAddressEXT != 0);
  return success;
}
#endif

/* /////////////////////////////////// */
#if VK_NV_cooperative_matrix
static PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = 0;

VKAPI_ATTR VkResult VKAPI_CALL vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkPhysicalDevice                            physicalDevice,
    uint32_t* pPropertyCount,
    VkCooperativeMatrixPropertiesNV* pProperties)
{
  assert(pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV);
  return pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV(physicalDevice,pPropertyCount,pProperties);
}

int load_VK_NV_cooperative_matrix(VkDevice device, PFN_vkGetDeviceProcAddr getDeviceProcAddr)
{
  pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)getDeviceProcAddr(device, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
  int success = 1;
  success = success && (pfn_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV != 0);
  return success;
}
#endif

