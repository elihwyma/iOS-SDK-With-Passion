/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <AVFAudio/AVAudioUnitEffect.h>

@interface AVAudioUnitDistortion : AVAudioUnitEffect

@property (nonatomic) float preGain;
@property (nonatomic) float wetDryMix;

- (id)init;
- (void)loadFactoryPreset:(long long)arg1;
- (struct AUPreset)FillOutAUPreset:(long long)arg1;

@end
