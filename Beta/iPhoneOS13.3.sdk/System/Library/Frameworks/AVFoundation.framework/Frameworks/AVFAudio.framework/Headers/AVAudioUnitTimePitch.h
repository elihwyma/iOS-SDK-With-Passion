/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnitTimeEffect.h>

@interface AVAudioUnitTimePitch : AVAudioUnitTimeEffect

@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float overlap;

- (id)init;

@end
