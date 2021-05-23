/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLTelemetryDevice, NSSet;

@interface MTLTelemetryRenderPipelineState : MTLToolsRenderPipelineState

{
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
    _Bool hasAnisoConstantSampler;
    NSSet *activeFragmentSamplers;
    NSSet *activeFragmentTextures;
}

+ (unsigned int)generateUniqueID;

- (void)dealloc;
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (void)accumulateUsage;

@end
