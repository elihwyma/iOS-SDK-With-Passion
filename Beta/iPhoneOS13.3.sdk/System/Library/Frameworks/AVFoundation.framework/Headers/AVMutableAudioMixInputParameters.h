/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAudioMixInputParameters.h>

@class AVMutableAudioMixInputParametersInternal, NSString;

@interface AVMutableAudioMixInputParameters : AVAudioMixInputParameters

{
    AVMutableAudioMixInputParametersInternal *_mutableInputParameters;
}

@property (nonatomic) int trackID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (retain, nonatomic) const struct opaqueMTAudioProcessingTap *audioTapProcessor;

+ (id)audioMixInputParameters;
+ (id)audioMixInputParametersWithTrack:(id)arg1;
+ (id)audioMixInputParametersWithAssetTrack:(id)arg1 introFadeDuration:(CDStruct_1b6d18a9)arg2 fadeOutStart:(CDStruct_1b6d18a9)arg3 fadeOutDuration:(CDStruct_1b6d18a9)arg4;

- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;
- (void)setVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)setVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;

@end
