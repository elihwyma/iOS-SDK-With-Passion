/*
 Image: /System/Library/PrivateFrameworks/Settings/SoundsAndHapticsSettings.framework/SoundsAndHapticsSettings
 */

#import <Foundation/NSObject.h>

@interface SHSAudioPlayback : NSObject

+ (void)stopPlayback;
+ (void)playRingtoneWithIdentifier:(id)arg1 loop:(_Bool)arg2;
+ (_Bool)isPlayingRingtone;
+ (void)stopRingtoneWithFadeOut:(float)arg1;

- (void)dealloc;

@end
