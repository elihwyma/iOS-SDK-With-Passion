/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAudioMixEffectParameters, AVMutableScheduledAudioParameters, NSString;

__attribute__((visibility("hidden")))
@interface AVAudioMixInputParametersInternal : NSObject

{
    int trackID;
    AVMutableScheduledAudioParameters *scheduledAudioParameters;
    NSString *audioTimePitchAlgorithm;
    struct opaqueMTAudioProcessingTap *tap;
    AVAudioMixEffectParameters *effectParameters;
}

@end
