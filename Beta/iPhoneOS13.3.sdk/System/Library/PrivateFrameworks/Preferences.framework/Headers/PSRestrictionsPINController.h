/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController

+ (_Bool)settingEnabled;

- (id)init;
- (id)title;
- (struct __CFString *)defaultsID;
- (_Bool)validatePIN:(id)arg1;
- (_Bool)isNumericPIN;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)blockedStateKey;
- (id)stringsBundle;
- (_Bool)simplePIN;
- (int)pinLength;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setPIN:(id)arg1;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;

@end
