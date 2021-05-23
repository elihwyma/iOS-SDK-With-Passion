/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAudioOutputSettings.h>

__attribute__((visibility("hidden")))
@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings

+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (_Bool)willYieldCompressedSamples;
- (void)getAudioStreamBasicDescription:(struct AudioStreamBasicDescription *)arg1 forAudioFileTypeID:(unsigned int)arg2 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg3;
- (struct AudioChannelLayout *)copyAudioChannelLayoutForSourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 audioChannelLayoutSize:(unsigned long long *)arg2;
- (id)audioOptions;
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;
- (id)initWithTrustedAVAudioSettingsDictionary:(id)arg1;
- (id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
