/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVScheduledAudioParametersInternal, NSArray;

@interface AVScheduledAudioParameters : NSObject

{
    AVScheduledAudioParametersInternal *_scheduledParametersInternal;
}

@property (copy, nonatomic, getter=_ramps, setter=_setRamps:) NSArray *ramps;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)_audioVolumeCurve;
- (id)_volumeCurveAsString;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (_Bool)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4 rampMode:(long long *)arg5;
- (_Bool)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;

@end
