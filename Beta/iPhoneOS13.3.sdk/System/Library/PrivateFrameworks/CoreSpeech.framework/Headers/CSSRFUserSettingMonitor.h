/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSRFUserSettingMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (_Bool)isSiriRestrictedOnLockScreen;

@end
