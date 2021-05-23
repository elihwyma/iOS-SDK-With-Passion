/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLDebugSamplerState : MTLToolsSamplerState

{
    MTLSamplerDescriptor *_descriptor;
}

@property (copy, nonatomic, readonly) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
