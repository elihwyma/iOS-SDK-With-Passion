/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsDevice.h>

@class NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface MTLTelemetryDevice : MTLToolsDevice

{
    struct MTLTelemetryCommandBufferCounttRec *commandBufferDistribution;
    struct MTLTelemetryEncoderDistributionRec *encoderDistribution;
    struct MTLTelemetryStatisticUIRec *parallellRenderEncoderDistribution;
    struct MTLTelemetryStatisticUIRec *attachmentCount;
    struct MTLTelemetryStatisticUIRec *textureBindCount;
    struct MTLTelemetryStatisticUIRec *renderTargetArrayLengthDistribution;
    struct MTLTelemetryViewportDistributionRec *viewportDistribution;
    struct MTLTelemetryScissorRectDistributionRec *scissorRectDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> renderTargetMap;
    struct MTLTelemetryBufferDistributionRec *bufferDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryTextureDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryTextureDistribution>>> textureMap;
    struct MTLTelemetrySamplerDistributionRec *samplerDistribution;
    struct unordered_map<unsigned int, MTLTelemetryRenderPipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderPipelineUsageRec>>> renderPipeUsageMap;
    struct unordered_map<unsigned int, MTLTelemetryRenderFuncUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryRenderFuncUsageRec>>> renderFuncUsageMap;
    struct MTLTelemetryRenderPipelineDistributionRec *renderPipelineDistribution;
    struct unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>>> vtxStatDistributionMap;
    struct unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>>> fragStatDistributionMap;
    struct MTLTelemetryDepthStateDistributionRec *depthStateDistribution;
    struct MTLTelemetryStencilStateDistributionRec *frontFaceStencilStateDistribution;
    struct MTLTelemetryStencilStateDistributionRec *backFaceStencilStateDistribution;
    struct MTLTelemetryStatisticUIRec *depthClipModeClampDistribution;
    struct unordered_map<unsigned int, MTLTelemetryComputePipelineUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryComputePipelineUsageRec>>> computePipeUsageMap;
    struct unordered_map<unsigned int, MTLTelemetryKernelUsageRec, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MTLTelemetryKernelUsageRec>>> kernelUsageMap;
    struct MTLTelemetryComputePipelineDistributionRec *computePipelineDistribution;
    struct unordered_map<std::__1::basic_string<char>, MTLTelemetryStatisticUIRec, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, MTLTelemetryStatisticUIRec>>> computeStatDistributionMap;
    struct MTLTelemetryStatisticUIRec *commandBufferDispatchDistribution;
    struct MTLTelemetryStatisticUIRec *computeEncoderDispatchDistribution;
    struct MTLTelemetryStatisticUIRec *commandBufferDrawCallDistribution;
    struct MTLTelemetryStatisticUIRec *renderEncoderDrawCallDistribution;
    struct MTLTelemetryDrawDistributionRec *drawDistribution;
    struct MTLTelemetryDispatchDistributionRec *dispatchDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> blitMap;
    struct MTLTelemetryStatisticUIRec *commandBufferBlitDistribution;
    struct MTLTelemetryStatisticUIRec *blitEncoderBlitDistribution;
    struct MTLTelemetryStatisticUIRec *commandBufferMemoryBarrierDistribution;
    struct MTLTelemetryKernelDistributionRec *kernelDistribution;
    struct MTLTelemetryAnisoClippedCountsRec *anisoClippedCounts;
    NSObject<OS_dispatch_queue> *queue;
    struct mach_timebase_info timebase;
    double _timerScale;
    NSObject<OS_dispatch_source> *_timer;
    _Bool _isGLMTL;
    struct MTLTelemetrySupportQueryStatRec supportQuery;
    NSObject<OS_os_log> *_telemetryLog;
    unsigned long long _startTime;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *telemetryLog;
@property (nonatomic) unsigned long long startTime;

- (void)dealloc;
- (id).cxx_construct;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (id)newCommandQueue;
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;
- (id)newSamplerStateWithDescriptor:(id)arg1;
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newDepthStencilStateWithDescriptor:(id)arg1;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (CDStruct_4bcfbbae)heapTextureSizeAndAlignWithDescriptor:(id)arg1;
- (CDStruct_4bcfbbae)heapBufferSizeAndAlignWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newHeapWithDescriptor:(id)arg1;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (_Bool)enableTelemetry;
- (void)initDistributions;
- (void)setTimerInterval:(double)arg1;
- (void)emitTelemetry;
- (void)emitFeatureQueryUsage;
- (id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setGLMode:(_Bool)arg1;
- (void)startTimerWithInterval:(double)arg1;

@end
