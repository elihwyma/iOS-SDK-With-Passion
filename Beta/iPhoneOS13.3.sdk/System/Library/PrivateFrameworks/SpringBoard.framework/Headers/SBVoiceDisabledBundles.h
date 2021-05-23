/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBVoiceDisabledBundles : NSObject

+ (void)setAppDisabledVoiceControl:(_Bool)arg1 bundleIdentifier:(id)arg2;
+ (_Bool)voiceControlDisabledByCurrentlyRunningApp;

@end
