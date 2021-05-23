/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOutputSettings.h>

@class NSDictionary;

@interface AVAudioOutputSettings : AVOutputSettings

@property (nonatomic, readonly) NSDictionary *audioSettingsDictionary;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 mediaType:(id)arg2 exceptionReason:(id *)arg3;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;
+ (id)registeredOutputSettingsClasses;
+ (id)defaultAudioOutputSettings;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:(id)arg1;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:(id)arg1;
+ (id)audioConverterPropertiesForAudioSettingsDictionary:(id)arg1;

- (id)compatibleMediaTypes;
- (_Bool)validateUsingOutputSettingsValidator:(id)arg1 reason:(id *)arg2;
- (id)initWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;

@end
