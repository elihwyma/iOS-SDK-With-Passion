/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSObject.h>

@interface VCVoiceShortcutBlacklist : NSObject

+ (id)defaults;
+ (void)populateBlacklistStatusOnVoiceShortcuts:(id)arg1;
+ (unsigned long long)blacklistStatusOfVoiceShortcut:(id)arg1;
+ (_Bool)isPhraseBlacklisted:(id)arg1;
+ (_Bool)isAppBlacklisted:(id)arg1;
+ (_Bool)updateBlacklistFromDirectory:(id)arg1;
+ (_Bool)updateBlacklistWithFile:(id)arg1;
+ (void)clearBlacklist;
+ (void)updatePhraseBlacklistFromBlacklist:(id)arg1;
+ (void)updateAppBlacklistFromBlacklist:(id)arg1;

@end
