/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryCommandBuffer : MTLToolsCommandBuffer

{
    struct MTLTelemetryEncoderCountRec *encoderCount;
    struct MTLTelemetryStatisticUIRec *attachmentCount;
    struct MTLTelemetryStatisticUIRec *textureBindCount;
    struct MTLTelemetryStatisticUIRec *parallellRenderEncoderDistribution;
    struct MTLTelemetryStatisticUIRec *renderTargetArrayLengthDistribution;
    struct MTLTelemetryViewportDistributionRec *viewportDistribution;
    struct MTLTelemetryScissorRectDistributionRec *scissorRectDistribution;
    struct MTLTelemetryDrawDistributionRec *drawDistribution;
    struct MTLTelemetryDispatchDistributionRec *dispatchDistribution;
    unsigned int cbDraws;
    unsigned int cbDispatches;
    unsigned int cbBlits;
    unsigned int cbMemoryBarriers;
    struct MTLTelemetryStatisticUIRec *renderEncoderDrawCallDistribution;
    struct MTLTelemetryStatisticUIRec *computeEncoderDispatchDistribution;
    struct MTLTelemetryStatisticUIRec *blitEncoderBlitDistribution;
    struct unordered_map<MTLPixelFormat, MTLTelemetryRenderTargetDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryRenderTargetDistribution>>> renderTargetMap;
    struct unordered_map<MTLPixelFormat, MTLTelemetryBlitDistribution, std::__1::hash<unsigned long long>, std::__1::equal_to<MTLPixelFormat>, std::__1::allocator<std::__1::pair<const MTLPixelFormat, MTLTelemetryBlitDistribution>>> blitMap;
    struct MTLTelemetryAnisoClippedCountsRec *anisoClippedCounts;
    unsigned int depthClipModeClampCount;
    MTLTelemetryDevice *_telemetryDevice;
    struct MTLTelemetryKernelStateRec _initKernelState;
}

- (void)dealloc;
- (id).cxx_construct;
- (id)computeCommandEncoder;
- (void)commit;
- (id)blitCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;
- (void)initDistributions;
- (void)mergeDistributions;

@end
