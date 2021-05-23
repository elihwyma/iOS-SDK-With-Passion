/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsSamplerState.h>

@class MTLSamplerDescriptor;

@interface MTLTelemetrySamplerState : MTLToolsSamplerState

{
    _Bool isAniso;
    MTLSamplerDescriptor *_descriptor;
}

@property (copy, nonatomic, readonly) MTLSamplerDescriptor *descriptor;

- (void)dealloc;
- (void)setSamplerStatsWithDescriptor:(id)arg1 telemetryStat:(struct MTLTelemetrySamplerStatRec *)arg2;
- (id)initWithBaseSamplerState:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
