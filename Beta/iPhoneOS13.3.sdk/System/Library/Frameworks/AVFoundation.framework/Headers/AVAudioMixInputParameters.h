/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioMixInputParametersInternal, NSString;

@interface AVAudioMixInputParameters : NSObject

{
    AVAudioMixInputParametersInternal *_inputParameters;
}

@property (nonatomic, readonly) int trackID;
@property (copy, nonatomic, readonly) NSString *audioTimePitchAlgorithm;
@property (retain, nonatomic, readonly) const struct opaqueMTAudioProcessingTap *audioTapProcessor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1;
- (void)setTrackID:(int)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)_audioVolumeCurve;
- (id)effectParameters;
- (id)_volumeCurveAsString;
- (void)_setScheduledAudioParameters:(id)arg1;
- (void)setEffectParameters:(id)arg1;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)_setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (void)_setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4 rampMode:(long long *)arg5;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)getVolumeRampForTime:(CDStruct_1b6d18a9)arg1 startVolume:(float *)arg2 endVolume:(float *)arg3 timeRange:(CDStruct_e83c9415 *)arg4;

@end
