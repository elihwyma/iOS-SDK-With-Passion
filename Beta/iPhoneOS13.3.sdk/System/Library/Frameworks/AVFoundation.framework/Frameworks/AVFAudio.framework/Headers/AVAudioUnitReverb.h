/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitReverb : AVAudioUnitEffect

@property (nonatomic) float wetDryMix;

- (id)init;
- (void)loadFactoryPreset:(long long)arg1;

@end
