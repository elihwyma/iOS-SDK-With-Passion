/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVScheduledAudioParameters.h>

@class AVMutableScheduledAudioParametersInternal;

@interface AVMutableScheduledAudioParameters : AVScheduledAudioParameters

{
    AVMutableScheduledAudioParametersInternal *_mutableScheduledParametersInternal;
}

+ (id)scheduledAudioParameters;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end
