/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAudioMixEffectParameters.h>

@class AVAudioMixSweepFilterEffectParametersInternal;

@interface AVAudioMixSweepFilterEffectParameters : AVAudioMixEffectParameters

{
    AVAudioMixSweepFilterEffectParametersInternal *_sweepFilterAudioEffect;
}

@property (nonatomic, readonly) int minimumCutOffFrequency;
@property (nonatomic, readonly) int maximumCutOffFrequency;
@property (nonatomic, readonly) float bypassThreshold;
@property (nonatomic, readonly) float sweepValue;

+ (id)sweepFilterEffectParametersWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithMinimumCutOffFrequency:(unsigned int)arg1 maximumCutOffFrequency:(unsigned int)arg2 bypassThreshold:(float)arg3 sweepValue:(float)arg4;
- (id)sweepFilterEffectWithSweepValue:(float)arg1;

@end
