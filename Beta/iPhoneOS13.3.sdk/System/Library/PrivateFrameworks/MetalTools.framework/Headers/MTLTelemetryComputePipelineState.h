/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLTelemetryDevice;

@interface MTLTelemetryComputePipelineState : MTLToolsComputePipelineState

{
    unsigned int uniqueID;
    MTLTelemetryDevice *device;
}

+ (unsigned int)generateUniqueID;

- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;
- (void)accumulateUsage;

@end
